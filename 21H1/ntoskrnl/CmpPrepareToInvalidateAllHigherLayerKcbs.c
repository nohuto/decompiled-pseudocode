/*
 * XREFs of CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140871D70
 * Callers:
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14071F908 (CmpEnumerateAllHigherLayerKcbs.c)
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
