/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x180060B4C
 * Callers:
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005DD10 (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800602F4 (-ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x1800D4490 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x1801FEA74 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 *     ?SetForVisualBitmap@CCachedVisualImage@@IEAAX_N@Z @ 0x1801FEB6C (-SetForVisualBitmap@CCachedVisualImage@@IEAAX_N@Z.c)
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801FF898 (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180060C2C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  enum DXGI_FORMAT v2; // ecx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v4; // rcx
  int v5; // edx
  BOOL v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  char v12[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 39);
  if ( v2 == DXGI_FORMAT_UNKNOWN )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2)
                                                                                                  + 216LL));
    if ( PrimaryMonitorTarget )
    {
      v4 = (struct IMonitorTarget *)((char *)PrimaryMonitorTarget
                                   + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 8LL)
                                   + 8);
      v2 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct IMonitorTarget *, char *))v4)(v4, v12);
    }
    else
    {
      v2 = DXGI_FORMAT_B8G8R8A8_UNORM;
    }
    *((_DWORD *)this + 39) = v2;
  }
  v6 = (unsigned int)HasAlphaChannel(v2) && !*((_BYTE *)this + 1779);
  *((_DWORD *)this + 40) = v6;
  if ( !*((_DWORD *)this + 41) )
  {
    if ( v5 <= 61 )
    {
      if ( v5 == 61 )
        goto LABEL_13;
      v7 = v5 - 2;
      if ( !v7 || (v8 = v7 - 8) == 0 )
      {
        *((_DWORD *)this + 41) = 2;
        return;
      }
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_13;
      v10 = v9 - 13;
      if ( !v10 )
        goto LABEL_13;
      v11 = v10 - 4;
      if ( !v11 || v11 == 21 )
        goto LABEL_13;
    }
    else if ( v5 == 65 || v5 > 86 && (v5 <= 88 || v5 == 91 || v5 > 102 && (v5 <= 104 || (unsigned int)(v5 - 106) <= 1)) )
    {
LABEL_13:
      *((_DWORD *)this + 41) = 1;
    }
  }
}
