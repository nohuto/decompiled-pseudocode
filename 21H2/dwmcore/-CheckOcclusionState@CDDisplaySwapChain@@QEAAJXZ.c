/*
 * XREFs of ?CheckOcclusionState@CDDisplaySwapChain@@QEAAJXZ @ 0x18027A3C4
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C85C0 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::CheckOcclusionState(CDDisplaySwapChain *this)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 30) + 48LL))(*((_QWORD *)this + 30), &v5);
  v3 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0LL, v1, 0x229u);
  }
  else if ( v5 )
  {
    return 142213121;
  }
  return v3;
}
