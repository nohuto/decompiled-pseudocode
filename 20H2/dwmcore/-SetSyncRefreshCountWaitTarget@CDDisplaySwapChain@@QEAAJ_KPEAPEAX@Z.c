/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDDisplaySwapChain@@QEAAJ_KPEAPEAX@Z @ 0x1802380E8
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX_N@Z @ 0x18018CB30 (-SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801A6008 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::SetSyncRefreshCountWaitTarget(CDDisplaySwapChain *this, void *a2, void **a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  v4 = (__int64)a2;
  if ( *((_QWORD *)this + 23) )
  {
    if ( !a2 )
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 64LL))(*((_QWORD *)this + 17)) + 1;
    wil::details::ResetEvent(*((wil::details **)this + 49), a2);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 17) + 72LL))(
           *((_QWORD *)this + 17),
           v4,
           *((_QWORD *)this + 49));
    v8 = v6;
    if ( v6 >= 0 )
      *a3 = (void *)*((_QWORD *)this + 49);
    else
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x34Du, 0LL);
  }
  else
  {
    v8 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304442, 0x352u, 0LL);
  }
  return v8;
}
