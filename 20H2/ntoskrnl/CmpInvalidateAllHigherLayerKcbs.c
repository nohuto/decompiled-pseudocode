/*
 * XREFs of CmpInvalidateAllHigherLayerKcbs @ 0x1408788E8
 * Callers:
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14072F7B8 (CmpEnumerateAllHigherLayerKcbs.c)
 */

_UNKNOWN **__fastcall CmpInvalidateAllHigherLayerKcbs(__int64 a1, unsigned __int8 a2, int a3, __int64 a4)
{
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
           a4,
           (__int64)v5,
           1,
           1);
}
