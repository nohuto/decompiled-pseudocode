/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18003C490
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x180261BF0 (-EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180263010 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18003DED0 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x18003E9A0 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003F0EC (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  unsigned int v1; // edi
  unsigned __int64 *v2; // r14
  CDeviceManager *v5; // rcx
  int Device; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  int D2DBitmap; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  CD3DDevice *v14; // rcx
  CD3DDevice *v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (unsigned __int64 *)((char *)this + 344);
  if ( *((_QWORD *)this + 43) )
    return v1;
  v15 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v15);
  Device = CDeviceManager::GetDevice(v5, *(struct _LUID *)((char *)this + 232), &v15);
  v1 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Device, 0x15Fu, 0LL);
    v14 = v15;
    if ( !v15 )
      return v1;
    goto LABEL_12;
  }
  v9 = *v2;
  *v2 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = 3LL;
  if ( *((_DWORD *)this + 24) )
    v10 = *((unsigned int *)this + 24);
  LOBYTE(v8) = *((_BYTE *)this + 364);
  D2DBitmap = CD3DDevice::CreateD2DBitmap(
                v15,
                *((_QWORD *)this + 28),
                v8,
                v10,
                *((_DWORD *)this + 35),
                *((_DWORD *)this + 62),
                LODWORD(FLOAT_96_0),
                LODWORD(FLOAT_96_0),
                v2);
  v1 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, D2DBitmap, 0x168u, 0LL);
  }
  else
  {
    v13 = *v2 + 16 + *(int *)(*(_QWORD *)(*v2 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 40LL))(
      v13,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    CD2DBitmapCache::InitializeCache(
      this,
      (struct ID2DBitmapCacheSource *)((*v2 + 96) & ((unsigned __int128)-(__int128)*v2 >> 64)));
  }
  if ( v15 )
  {
    v14 = v15;
LABEL_12:
    CD3DDevice::Release(v14);
  }
  return v1;
}
