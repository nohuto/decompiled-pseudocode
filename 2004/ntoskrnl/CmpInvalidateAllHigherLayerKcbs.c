/*
 * XREFs of CmpInvalidateAllHigherLayerKcbs @ 0x140872D98
 * Callers:
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087C6F4 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407217C8 (CmpEnumerateAllHigherLayerKcbs.c)
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
