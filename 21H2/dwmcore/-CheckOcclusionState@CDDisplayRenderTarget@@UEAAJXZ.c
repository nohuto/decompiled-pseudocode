/*
 * XREFs of ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C85C0
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x180105A10 (-CheckOcclusionState@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z @ 0x1801C8584 (-CheckForOcclusionChange@CDDisplayRenderTarget@@IEAAJJ@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801C9814 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CDDisplaySwapChain@@QEAAJXZ @ 0x18027A3C4 (-CheckOcclusionState@CDDisplaySwapChain@@QEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::CheckOcclusionState(CDDisplaySwapChain **this)
{
  unsigned int v2; // ebx
  void **v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 142213121;
  if ( *((_DWORD *)this - 4632) )
  {
    if ( *((_DWORD *)this - 4631) )
    {
      v3 = (void **)(this - 2309);
      if ( (unsigned __int64)*(this - 2309) - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v4 = CDDisplayRenderTarget::TryEnsureSwapChain((CDDisplayRenderTarget *)(this - 2329));
        if ( v4 == -2147023728 )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            v3,
            0LL);
        }
        else if ( v4 != -2003304309 && v4 != 142213121 )
        {
          if ( v4 < 0 )
          {
            v2 = v4;
            MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x119u);
          }
          else
          {
            v6 = CDDisplaySwapChain::CheckOcclusionState(*(this - 2307));
            v2 = v6;
            if ( v6 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x114u);
          }
        }
      }
    }
  }
  CDDisplayRenderTarget::CheckForOcclusionChange((CDDisplayRenderTarget *)(this - 2329), v2);
  return v2;
}
