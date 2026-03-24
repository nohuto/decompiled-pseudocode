/*
 * XREFs of Buffer @ 0x1C000B340
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     PrintBuffData @ 0x1C0066874 (PrintBuffData.c)
 */

__int64 __fastcall Buffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rax

  v2 = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120);
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v5 )
  {
    if ( (gDebugger & 0xD0) != 0 )
      PrintBuffData(*(_QWORD *)(a1 + 120), v2);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 < v2 )
    {
      v5 = -1073741789;
      LogError(3221225507LL);
      AcpiDiagTraceAmlError(a1, 3221225507LL);
      PrintDebugMessage(19, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), v2, 0, 0LL);
    }
    else
    {
      if ( *(_QWORD *)(v6 + 16) )
      {
        v8 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v7);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v8;
        if ( !v8 )
        {
          v5 = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(17, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, 0, 0LL);
          return v5;
        }
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
        memset(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), 0, *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
        memmove(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), *(const void **)(a1 + 120), v2);
      }
      else
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = 0LL;
      }
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    }
  }
  return v5;
}
