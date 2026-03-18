/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180031370
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x180264660 (-EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180265A80 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x180030A38 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180032A3C (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180033098 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  unsigned int v1; // edi
  unsigned __int64 *v2; // r14
  CDeviceManager *v5; // rcx
  int Device; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r9d
  int D2DBitmap; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  CD3DDevice *v13; // rcx
  CD3DDevice *v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (unsigned __int64 *)((char *)this + 344);
  if ( *((_QWORD *)this + 43) )
    return v1;
  v14 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v14);
  Device = CDeviceManager::GetDevice(v5, *(struct _LUID *)((char *)this + 232), &v14);
  v1 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Device, 0x15Fu, 0LL);
    v13 = v14;
    if ( !v14 )
      return v1;
    goto LABEL_12;
  }
  v8 = *v2;
  *v2 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = 3;
  if ( *((_DWORD *)this + 24) )
    v9 = *((_DWORD *)this + 24);
  D2DBitmap = CD3DDevice::CreateD2DBitmap(
                (__int64)v14,
                *((void **)this + 28),
                *((_BYTE *)this + 364),
                v9,
                *((_DWORD *)this + 35),
                *((_DWORD *)this + 62),
                SLODWORD(FLOAT_96_0),
                SLODWORD(FLOAT_96_0),
                v2);
  v1 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, D2DBitmap, 0x168u, 0LL);
  }
  else
  {
    v12 = *v2 + 16 + *(int *)(*(_QWORD *)(*v2 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 40LL))(
      v12,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    CD2DBitmapCache::InitializeCache(
      this,
      (struct ID2DBitmapCacheSource *)((*v2 + 96) & ((unsigned __int128)-(__int128)*v2 >> 64)));
  }
  if ( v14 )
  {
    v13 = v14;
LABEL_12:
    CD3DDevice::Release(v13);
  }
  return v1;
}
