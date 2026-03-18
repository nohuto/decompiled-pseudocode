/*
 * XREFs of MiDoesControlAreaHaveUserWritableReferences @ 0x140330084
 * Callers:
 *     MiComputeFlushRange @ 0x1402C2758 (MiComputeFlushRange.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14032FF70 (MmDoesFileHaveUserWritableReferences.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDoesControlAreaHaveUserWritableReferences(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // r8

  result = *(unsigned int *)(a1 + 92);
  if ( !(_DWORD)result )
  {
    v2 = *(_QWORD *)(a1 + 112);
    if ( v2 > 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)) + 1688LL) == a1 )
        --v2;
      if ( v2 > 1 )
        return 1LL;
    }
  }
  return result;
}
