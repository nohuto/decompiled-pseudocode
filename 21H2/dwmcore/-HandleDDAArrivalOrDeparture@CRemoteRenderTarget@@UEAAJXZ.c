/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801C9C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x18001C8D4 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E0D4 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801E0F4C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 */

__int64 __fastcall CRemoteRenderTarget::HandleDDAArrivalOrDeparture(CRemoteRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  CResource *v5; // rdx
  CResource **v6; // rsi
  CResource *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11[4]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v12[256]; // [rsp+40h] [rbp-118h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = (CResource *)*((_QWORD *)this + 4);
    if ( (v4 != 0) != (v5 != 0LL) )
    {
      v6 = (CResource **)((char *)this + 32);
      if ( v5 )
      {
        *v6 = 0LL;
        CResource::InternalRelease(v5);
      }
      else
      {
        CMonitorTransform::CMonitorTransform((CMonitorTransform *)v12);
        v11[0] = 0;
        v11[1] = 0;
        CMonitorTransform::Initialize((__int64)v12, v11, (__int64)this + 56, 1.0, 1, 0LL);
        v7 = *v6;
        *v6 = 0LL;
        if ( v7 )
          CResource::InternalRelease(v7);
        v8 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 2),
               *((struct CDesktopTree **)this + 5),
               (CRemoteRenderTarget *)((char *)this + 140),
               (const struct CMonitorTransform *)v12,
               (struct CDDARenderTarget **)this + 4);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x12Cu);
      }
    }
  }
  return v2;
}
