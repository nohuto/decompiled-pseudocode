/*
 * XREFs of PushAccFieldObj @ 0x1C00249B0
 * Callers:
 *     ReadFieldObj @ 0x1C0001400 (ReadFieldObj.c)
 *     AccFieldUnit @ 0x1C0009CF0 (AccFieldUnit.c)
 *     PreserveWriteObj @ 0x1C0024110 (PreserveWriteObj.c)
 *     ReadField @ 0x1C00241C0 (ReadField.c)
 *     WriteFieldObj @ 0x1C0024320 (WriteFieldObj.c)
 *     AccessFieldData @ 0x1C0031B7C (AccessFieldData.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall PushAccFieldObj(
        struct _SLIST_ENTRY *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // r8d

  v6 = 0;
  v11 = 128;
  if ( *(_DWORD *)(a4 + 20) )
    v11 = *(_DWORD *)(a4 + 28) + 128;
  v12 = HeapAlloc(a1 + 30, 1297237576, v11);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v12;
    *(_DWORD *)v12 = 1330004801;
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = a3;
    *(_QWORD *)(v12 + 40) = a5;
    *(_QWORD *)(v12 + 48) = a5 + a6;
    v13 = 1 << ((*(_BYTE *)(a4 + 12) & 0xF) - 1);
    if ( (*(_DWORD *)(a4 + 12) & 0xFu) - 1 > 3 )
      v13 = 1;
    *(_DWORD *)(v12 + 56) = v13;
    *(_DWORD *)(v12 + 60) = (8 * v13 + *(_DWORD *)(a4 + 8) + *(_DWORD *)(a4 + 4) - 1) / (unsigned int)(8 * v13);
    *(_QWORD *)(v12 + 64) = ((1LL << (8 * *(_BYTE *)(v12 + 56))) & -(__int64)((unsigned int)(8 * *(_DWORD *)(v12 + 56)) < 0x40))
                          - 1;
    *(_DWORD *)(v12 + 72) = 8 * *(_DWORD *)(v12 + 56) - *(_DWORD *)(a4 + 4);
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a4 + 4);
    memmove((void *)(v12 + 96), (const void *)a4, (unsigned int)(*(_DWORD *)(a4 + 28) + 32));
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v6;
}
