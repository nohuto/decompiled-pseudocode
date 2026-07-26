/*
 * XREFs of ndisIfInitializePhase2 @ 0x1C0108770
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003414C (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C00342DC (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C003478C (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1C00B53B8 (-ndisStopNsiProvider@@YAXXZ.c)
 *     netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf___ @ 0x1C01087D0 (netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf___.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x1C0108BC4 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x1C0108E5C (-ndisStartNsiProvider@@YAJXZ.c)
 */

__int64 __fastcall ndisIfInitializePhase2(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (int)ndisStartNsiProvider() < 0 )
    return 0LL;
  if ( (int)ndisIfNsiClientSubsystemInitialize() < 0 )
  {
    ndisStopNsiProvider();
    return 0LL;
  }
  ndisIfCompartmentSubsystemInitializePhase2();
  ndisIfNetworkSubsystemInitializePhase2();
  ndisIfCompartmentSubsystemInitializePhase3();
  if ( (int)netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf_(v3, 0LL, 0LL) >= 0 )
  {
    if ( *((_BYTE *)qword_1C00E4498 + 96) )
      netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf_(v4, 1LL, 1LL);
  }
  return 1LL;
}
