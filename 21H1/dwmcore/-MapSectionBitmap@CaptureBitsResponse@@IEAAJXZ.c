/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800265B8
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18008B700 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180197810 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180027CA8 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  void *v2; // rax
  int v3; // eax
  unsigned int v4; // ecx
  signed int v5; // ebx
  char *v6; // rcx
  int v8; // r9d
  signed int LastError; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-28h]
  struct IBitmapSource *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  SetLastError(0);
  v2 = MapViewOfFile(*((HANDLE *)this + 211), 2u, 0, 0, *((unsigned int *)this + 426));
  *((_QWORD *)this + 212) = v2;
  if ( !v2 )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    dwNumberOfBytesToMap = 250;
    v8 = v5;
    goto LABEL_13;
  }
  memset_0(v2, 0, *((unsigned int *)this + 426));
  v3 = HrCreateBitmapFromMemoryEx(
         *((_DWORD *)this + 417),
         *((_DWORD *)this + 418),
         (CaptureBitsResponse *)((char *)this + 1676),
         *((_DWORD *)this + 427),
         *((_DWORD *)this + 426),
         *((unsigned __int8 **)this + 212),
         0LL,
         &v11);
  v5 = v3;
  if ( v3 < 0 )
  {
    dwNumberOfBytesToMap = 263;
    goto LABEL_7;
  }
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 1712);
  v6 = (char *)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
  v3 = (**(__int64 (__fastcall ***)(char *, GUID *, char *))v6)(
         v6,
         &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
         (char *)this + 1712);
  v5 = v3;
  if ( v3 < 0 )
  {
    dwNumberOfBytesToMap = 266;
LABEL_7:
    v8 = v3;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v8, dwNumberOfBytesToMap, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
  return (unsigned int)v5;
}
