/*
 * XREFs of ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18024AC60
 * Callers:
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x180209B90 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x18024A974 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1800CF248 (-UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801558AC (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?GetDeviceTexture@CAtlasTexture@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x180249C64 (-GetDeviceTexture@CAtlasTexture@@QEBAXPEAPEAVIDeviceTexture@@@Z.c)
 */

__int64 __fastcall CAtlasTexture::UpdateGradientStrip(CAtlasTexture *a1, __int64 a2, __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, GUID *, struct ID3D11Resource **); // rdi
  char *v6; // rcx
  int *v7; // rax
  unsigned int v8; // edi
  char *v9; // rcx
  unsigned int v10; // esi
  LONG v11; // eax
  char *v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  char *v15; // rcx
  CD3DDevice *v16; // rax
  struct IDeviceTexture *v18; // [rsp+30h] [rbp-40h] BYREF
  struct ID3D11Resource *v19; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v22[16]; // [rsp+58h] [rbp-18h] BYREF

  v18 = 0LL;
  CAtlasTexture::GetDeviceTexture(a1, &v18);
  v19 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD, GUID *, struct ID3D11Resource **))(**(__int64 (__fastcall ***)(struct IDeviceTexture *))v18)(v18);
  if ( v19 )
    ((void (__fastcall *)(struct ID3D11Resource *))v19->lpVtbl->Release)(v19);
  (**v5)(v5, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v19);
  v6 = (char *)v18 + *(int *)(*((_QWORD *)v18 + 1) + 12LL) + 8;
  v7 = (int *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v6)(v6, v22);
  v8 = GetPixelFormatSize(*v7) >> 3;
  v9 = (char *)v18 + *(int *)(*((_QWORD *)v18 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, int *))v9)(v9, &v21);
  v10 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 >= v8 * v21 )
    v10 = v8 * v21;
  v11 = *(_DWORD *)(a2 + 16);
  v20.left = 0;
  v20.top = v11;
  v20.bottom = v11 + 1;
  v20.right = v10 / v8;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v12 = (char *)v18 + *(int *)(*((_QWORD *)v18 + 1) + 12LL) + 8;
    v13 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v12)(v12, v22);
    McTemplateU0qqqq_EventWriteTransfer(v14, &EVTDESC_ETWGUID_BITMAPCOPYEVENT, v10 / v8, 1, *v13, v8);
  }
  v15 = (char *)v18 + *(int *)(*((_QWORD *)v18 + 1) + 8LL) + 8;
  v16 = (CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 8LL))(v15);
  CD3DDevice::UpdateSubresource(v16, v19, &v20, *(const void **)(a3 + 8), v10, 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
}
