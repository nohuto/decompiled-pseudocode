/*
 * XREFs of InitMutex @ 0x1C002AFB0
 * Callers:
 *     Mutex @ 0x1C002AE10 (Mutex.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall InitMutex(__int64 a1, struct _SLIST_ENTRY *a2, __int64 a3, int a4, char a5)
{
  unsigned int v7; // edi
  _SLIST_ENTRY *v9; // rax
  _SLIST_ENTRY *v10; // rbx

  v7 = 0;
  *(_WORD *)(a3 + 66) = 9;
  *(_DWORD *)(a3 + 88) = 192;
  v9 = HeapAlloc(a2, 1414876488, 0xC0u);
  *(_QWORD *)(a3 + 96) = v9;
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, *(unsigned int *)(a3 + 88));
    LODWORD(v10->Next) = a4;
    if ( a5 )
      LODWORD(v10[2].Next) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)&v10[11].Next + 1);
    *((_QWORD *)&v10[1].Next + 1) = v10 + 1;
    v10[1].Next = v10 + 1;
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    PrintDebugMessage(76, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v7;
}
