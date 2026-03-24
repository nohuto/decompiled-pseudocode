/*
 * XREFs of Package @ 0x1C0021320
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall Package(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax

  result = ValidateArgTypes((__int64)a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    if ( v5 > 0xFF )
    {
      LogError(3222536196LL);
      AcpiDiagTraceAmlError(a1, 3222536196LL);
      PrintDebugMessage(118, *(_QWORD *)(a2[10] + 16LL), 0, 0, 0LL);
      return 3222536196LL;
    }
    else
    {
      *(_DWORD *)(a2[11] + 24LL) = 40 * v5 + 8;
      v6 = (_DWORD *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1196118088, *(_DWORD *)(a2[11] + 24LL));
      v7 = v6;
      if ( v6 )
      {
        *(_WORD *)(a2[11] + 2LL) = 4;
        memset(v6, 0, *(unsigned int *)(a2[11] + 24LL));
        *(_QWORD *)(a2[11] + 32LL) = v7;
        *v7 = *(unsigned __int8 *)(a2[10] + 16LL);
        v8 = HeapAlloc(a1 + 30, 1297237576, 0x38u);
        if ( v8 )
        {
          *(_QWORD *)(v8 + 8) = a1[26].Next;
          a1[26].Next = (_SLIST_ENTRY *)v8;
          *(_QWORD *)(v8 + 24) = ParsePackage;
          *(_DWORD *)v8 = 1179077456;
          *(_QWORD *)(v8 + 32) = v7;
          *(_QWORD *)(v8 + 48) = a2[5];
          return 0LL;
        }
        else
        {
          LogError(3222536194LL);
          AcpiDiagTraceAmlError(a1, 3222536194LL);
          PrintDebugMessage(153, 0, 0, 0, 0LL);
          return 3222536194LL;
        }
      }
      else
      {
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(117, *(_DWORD *)(a2[11] + 24LL), 0, 0, 0LL);
        return 3221225626LL;
      }
    }
  }
  return result;
}
