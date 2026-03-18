/*
 * XREFs of ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800FDE40
 * Callers:
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1800FDC94 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18005FD84 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::EnsureBitmapDest(CLegacyRemotingSwapChain *this)
{
  void **v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD, unsigned int *); // rcx
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // rcx
  int *v7; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdi
  NTSTATUS v12; // ebx
  HANDLE CurrentProcess; // rax
  unsigned __int8 *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, _BYTE *); // rcx
  const struct PixelFormatInfo *v16; // rax
  int v17; // eax
  char *v18; // rcx
  int v20; // r9d
  unsigned int SectionPageProtection; // [rsp+28h] [rbp-39h]
  struct IBitmapSource *v22; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v24; // [rsp+64h] [rbp+3h]
  union _LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp+7h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+Fh] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (void **)((char *)this + 200);
  v3 = 0;
  if ( ((*((_QWORD *)this + 25) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v4 = *((_QWORD *)this + 10);
    v22 = 0LL;
    v5 = (void (__fastcall ***)(_QWORD, unsigned int *))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 16LL));
    (**v5)(v5, &v23);
    v6 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 10)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL) + 12LL));
    v7 = (int *)(**v6)(v6, v28);
    PixelFormatSize = GetPixelFormatSize(*v7);
    v9 = 0xFFFFFFFFLL;
    v10 = v23 * ((unsigned __int64)PixelFormatSize >> 3);
    if ( v10 > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      v3 = -2147024362;
      SectionPageProtection = 366;
      goto LABEL_18;
    }
    v11 = (unsigned int)v10 * (unsigned __int64)v24;
    if ( v11 > 0xFFFFFFFF )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x171u);
      goto LABEL_8;
    }
    MaximumSize.QuadPart = (unsigned int)v11;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      0LL);
    v12 = NtCreateSection(v1, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v12 < 0 )
    {
      SectionPageProtection = 380;
    }
    else
    {
      ViewSize = 0LL;
      SectionOffset.QuadPart = 0LL;
      CurrentProcess = GetCurrentProcess();
      v12 = NtMapViewOfSection(
              *v1,
              CurrentProcess,
              (PVOID *)this + 26,
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
      if ( v12 >= 0 )
      {
        v14 = (unsigned __int8 *)*((_QWORD *)this + 26);
        v15 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 10)
                                                        + 8LL
                                                        + *(int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL) + 12LL));
        v16 = (const struct PixelFormatInfo *)(**v15)(v15, v28);
        v17 = HrCreateBitmapFromMemoryEx(v23, v24, v16, v10, v11, v14, 0LL, &v22);
        v3 = v17;
        if ( v17 < 0 )
        {
          SectionPageProtection = 402;
        }
        else
        {
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 11);
          v18 = (char *)v22 + *(int *)(*((_QWORD *)v22 + 1) + 4LL) + 8;
          v17 = (**(__int64 (__fastcall ***)(char *, GUID *, char *))v18)(
                  v18,
                  &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                  (char *)this + 88);
          v3 = v17;
          if ( v17 >= 0 )
          {
LABEL_8:
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
            return v3;
          }
          SectionPageProtection = 404;
        }
        v20 = v17;
LABEL_18:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v20, SectionPageProtection);
        goto LABEL_8;
      }
      SectionPageProtection = 394;
    }
    v3 = v12 | 0x10000000;
    v20 = v3;
    goto LABEL_18;
  }
  return v3;
}
