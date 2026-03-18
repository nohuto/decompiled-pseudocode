/*
 * XREFs of ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18003F7A8
 * Callers:
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18003F748 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1800F91D8 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18003FAC4 (-GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x18006A2C8 (-UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8 (McTemplateU0qqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CAtlasTexture::UpdateGradientStrip(CAtlasTexture *a1, __int64 a2, __int64 a3)
{
  void (__fastcall ***v6)(_QWORD, GUID *, struct ID3D11Resource **); // rsi
  char *v7; // rcx
  enum DXGI_FORMAT *v8; // rax
  unsigned int v9; // esi
  char *v10; // rcx
  unsigned int v11; // r15d
  LONG v12; // eax
  char *v13; // rcx
  CD3DDevice *v14; // rax
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, _BYTE *); // rbx
  char *v18; // rcx
  _DWORD *v19; // rax
  int v20; // ecx
  struct IDeviceTexture *v21; // [rsp+30h] [rbp-69h] BYREF
  struct ID3D11Resource *v22; // [rsp+38h] [rbp-61h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-59h] BYREF
  int v24; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v26[80]; // [rsp+70h] [rbp-29h] BYREF

  v21 = 0LL;
  CAtlasTexture::GetDeviceTexture(a1, &v21);
  v22 = 0LL;
  v6 = (void (__fastcall ***)(_QWORD, GUID *, struct ID3D11Resource **))(**(__int64 (__fastcall ***)(struct IDeviceTexture *))v21)(v21);
  if ( v22 )
    ((void (__fastcall *)(struct ID3D11Resource *))v22->lpVtbl->Release)(v22);
  (**v6)(v6, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v22);
  v7 = (char *)v21 + *(int *)(*((_QWORD *)v21 + 1) + 12LL) + 8;
  v8 = (enum DXGI_FORMAT *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v7)(v7, v25);
  v9 = GetPixelFormatSize(*v8) >> 3;
  v10 = (char *)v21 + *(int *)(*((_QWORD *)v21 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, int *))v10)(v10, &v24);
  v11 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 >= v9 * v24 )
    v11 = v9 * v24;
  v12 = *(_DWORD *)(a2 + 16);
  v23.left = 0;
  v23.top = v12;
  v23.bottom = v12 + 1;
  v23.right = v11 / v9;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v18 = (char *)v21 + *(int *)(*((_QWORD *)v21 + 1) + 12LL) + 8;
    v19 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v18)(v18, v25);
    McTemplateU0qqqq_EventWriteTransfer(v20, (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT, v11 / v9, 1, *v19, v9);
  }
  v13 = (char *)v21 + *(int *)(*((_QWORD *)v21 + 1) + 8LL) + 8;
  v14 = (CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13);
  CD3DDevice::UpdateSubresource(v14, v22, &v23, *(const void **)(a3 + 8), v11, 1);
  v15 = *((_QWORD *)a1 + 1) + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) + 16LL);
  v16 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v15 + 8) + 32LL);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v26, &v23);
  v16(v15 + 8, v26);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  return wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
}
