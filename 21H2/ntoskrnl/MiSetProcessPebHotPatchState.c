/*
 * XREFs of MiSetProcessPebHotPatchState @ 0x1408CE7C4
 * Callers:
 *     MmNewProcessInitialized @ 0x1406B0910 (MmNewProcessInitialized.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetProcessPebHotPatchState(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 *v4; // r9

  v1 = *(_QWORD *)(a1 + 1360);
  result = 0LL;
  if ( v1 )
  {
    v3 = 0LL;
    v4 = *(__int64 **)(a1 + 1408);
    if ( v4 )
      v3 = *v4;
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 80), 7u);
    if ( v3 )
      _interlockedbittestandset((volatile signed __int32 *)(v3 + 40), 7u);
  }
  return result;
}
