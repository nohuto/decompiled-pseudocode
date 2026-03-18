/*
 * XREFs of CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140873060
 * Callers:
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087C6F4 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407217C8 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpPrepareToInvalidateAllHigherLayerKcbs(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v6; // [rsp+50h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v6 = 0LL;
  CmpInitializeDelayDerefContext(&v6);
  CmpEnumerateAllHigherLayerKcbs(
    v3,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
    (__int64)&v6,
    (__int64)v5,
    1,
    1);
  CmpDrainDelayDerefContext((_QWORD **)&v6);
  return HIDWORD(v5[0]);
}
