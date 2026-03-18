/*
 * XREFs of ?GetPresentStatistics@CRemoteAppRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1801C2700
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::GetPresentStatistics(
        CRemoteAppRenderTarget *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  unsigned int v2; // ebx

  if ( *(_DWORD *)(*((_QWORD *)this - 17) + 1104LL) == 6
    && (this = (CRemoteAppRenderTarget *)*((_QWORD *)this + 2)) != 0LL )
  {
    return (*(unsigned int (__fastcall **)(CRemoteAppRenderTarget *, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)this + 32LL))(
             this,
             a2);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147467259, 0x134u);
  }
  return v2;
}
