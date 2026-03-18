/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX_N@Z @ 0x1801913E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CDDisplaySwapChain@@QEAAJ_KPEAPEAX@Z @ 0x18023BAA8 (-SetSyncRefreshCountWaitTarget@CDDisplaySwapChain@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CDDisplayRenderTarget *this,
        unsigned int a2,
        void **a3,
        char a4)
{
  CDDisplaySwapChain *v5; // rcx
  int refreshed; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  *((_BYTE *)this + 18487) = 0;
  v5 = (CDDisplaySwapChain *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    refreshed = CDDisplaySwapChain::SetSyncRefreshCountWaitTarget(v5, a2, a3);
    v9 = refreshed;
    if ( refreshed >= 0 )
      *((_BYTE *)this + 18487) = a4;
    else
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, refreshed, 0x11Bu, 0LL);
  }
  else
  {
    v9 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x11Fu, 0LL);
  }
  return v9;
}
