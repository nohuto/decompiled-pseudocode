/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18008DB84
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x18008D780 (-Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18008FE84 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C14BC (-reset@-$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802631D4 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(CGdiSpriteBitmap *this, void *a2, UINT32 a3, UINT32 a4)
{
  struct IGDIBitmapRealization *v4; // rbx
  signed int v9; // edi
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  HANDLE CurrentProcess; // rdi
  HANDLE v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed int LastError; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct IBitmapRealization *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, char *); // rcx
  int v25; // eax
  __int64 v26; // rcx
  char *v27; // rcx
  struct IGDIBitmapRealization *v28[2]; // [rsp+40h] [rbp-10h] BYREF
  struct D2D_SIZE_U v29; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0LL;
  v28[0] = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  if ( !a3 || !a4 )
  {
    *((_QWORD *)this + 49) = a2;
    goto LABEL_9;
  }
  v10 = 4LL * a3;
  if ( v10 <= 0xFFFFFFFF )
  {
    SetLastError(0);
    CurrentProcess = GetCurrentProcess();
    v13 = GetCurrentProcess();
    if ( !DuplicateHandle(v13, a2, CurrentProcess, (LPHANDLE)this + 49, 0, 0, 2u) )
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      if ( v9 >= 0 )
        v9 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v9, 0x19Au, 0LL);
      goto LABEL_10;
    }
    v29.width = a3;
    v29.height = a4;
    wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset(v28);
    v14 = CGDISectionBitmapRealization::Create(
            a2,
            &v29,
            v10,
            (enum DXGI_FORMAT)*((_DWORD *)this + 24),
            (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 25),
            (unsigned __int8 **)this + 50,
            v28);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1A8u, 0LL);
      v4 = v28[0];
      goto LABEL_12;
    }
    if ( !*((_BYTE *)this + 132) )
    {
      v16 = *((_QWORD *)this + 60);
      *((struct IGDIBitmapRealization **)this + 60) = v28[0];
      if ( v16 )
      {
        v20 = v16 + 8 + *(int *)(*(_QWORD *)(v16 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_9;
    }
    v29 = 0LL;
    v4 = v28[0];
    if ( v28[0] )
      v21 = (struct IGDIBitmapRealization *)((char *)v28[0] + *(int *)(*((_QWORD *)v28[0] + 1) + 12LL) + 8);
    else
      v21 = 0LL;
    v22 = CColorKeyBitmapRealization::Create(
            v21,
            (CGdiSpriteBitmap *)((char *)this + 408),
            (struct IBitmapRealization **)&v29);
    v9 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1B4u, 0LL);
    }
    else
    {
      wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset((char *)this + 480);
      v24 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))(*(int *)(*(_QWORD *)(*(_QWORD *)&v29 + 8LL) + 4LL)
                                                             + *(_QWORD *)&v29
                                                             + 8LL);
      v25 = (**v24)(v24, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, (char *)this + 480);
      v9 = v25;
      if ( v25 >= 0 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
LABEL_9:
        *((_DWORD *)this + 116) = a3;
        a2 = 0LL;
        *((_DWORD *)this + 117) = a4;
        *((_DWORD *)this + 118) = v10;
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x1B6u, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
    goto LABEL_12;
  }
  v9 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x190u, 0LL);
LABEL_10:
  if ( a2 )
    CloseHandle(a2);
LABEL_12:
  if ( v4 )
  {
    v27 = (char *)v4 + *(int *)(*((_QWORD *)v4 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v9;
}
