/*
 * XREFs of ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ @ 0x1800DFBA0
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800EEF30 (-CheckOcclusionState@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800DFC00 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::CheckOcclusionState(CRemoteRenderTarget *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = CRemoteRenderTarget::EnsureSwapChain((CRemoteRenderTarget *)((char *)this - 360));
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802D8408, 3u, v2, 0x6Cu, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 25) + 88LL))(*((_QWORD *)this - 25));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802D8408, 3u, v5, 0x6Eu, 0LL);
    else
      *((_BYTE *)this - 51) = v5 == 142213121;
  }
  return v4;
}
