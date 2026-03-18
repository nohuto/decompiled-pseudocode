/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x1801C07D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801E0F4C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 */

__int64 __fastcall CLegacyRenderTarget::HandleDDAArrivalOrDeparture(CLegacyRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  CResource *v5; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3 && *((_BYTE *)this + 18465) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = (CResource *)*((_QWORD *)this + 5);
    if ( (v4 != 0) == (v5 != 0LL) )
    {
      if ( v5 )
        *((_BYTE *)v5 + 141) = 1;
    }
    else
    {
      *((_QWORD *)this + 5) = 0LL;
      if ( v5 )
      {
        CResource::InternalRelease(v5);
      }
      else
      {
        v6 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 3),
               *((struct CDesktopTree **)this + 2),
               (CLegacyRenderTarget *)((char *)this + 18280),
               (CLegacyRenderTarget *)((char *)this + 18016),
               (struct CDDARenderTarget **)this + 5);
        v2 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x35Cu);
      }
    }
  }
  return v2;
}
