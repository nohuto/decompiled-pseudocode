/*
 * XREFs of RtlpEnsureBufferSize @ 0x18006DD00
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x18006DBF0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CC500 (RtlNtPathNameToDosPathName.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF7DC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF9A0 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall RtlpEnsureBufferSize(int a1, __int64 a2, SIZE_T a3)
{
  char v5; // bp
  PVOID StringRoutine; // rax
  PVOID v7; // rsi

  v5 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    return 3221225485LL;
  if ( a3 <= *(_QWORD *)(a2 + 16) )
    return 0LL;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) && a3 <= *(_QWORD *)(a2 + 24) )
  {
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  StringRoutine = NtdllpAllocateStringRoutine(a3);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( (v5 & 1) == 0 )
      memmove(StringRoutine, *(const void **)a2, *(_QWORD *)(a2 + 16));
    if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
      NtdllpFreeStringRoutine(*(void **)a2);
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  return 3221225495LL;
}
