/*
 * XREFs of ?ImmersiveLauncherWNFCallback@CImmersiveApplicationTransitionHelper@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180088FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::ImmersiveLauncherWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        volatile __int32 *a4,
        __int32 *a5,
        unsigned int a6)
{
  if ( a5 && a6 == 4 )
    _InterlockedExchange(a4 + 24, *a5);
  return 0LL;
}
