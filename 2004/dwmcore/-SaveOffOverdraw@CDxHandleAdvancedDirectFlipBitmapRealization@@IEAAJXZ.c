/*
 * XREFs of ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262144
 * Callers:
 *     ?GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV?$shared_ptr@VCRegion@@@std@@PEAPEAVIDeviceTarget@@@Z @ 0x180261EE0 (-GetDeviceTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEBV-$shared_ptr@VCRegion@@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180044678 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180045534 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800C0130 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?CopyBitmapRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID2D1Bitmap1@@@Z @ 0x1800EC690 (-CopyBitmapRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017EE9C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180264A8C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOffOverdraw(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 v1; // rax
  char *v3; // rcx
  char *v4; // rcx
  __int64 v5; // rax
  CDecodeBitmap *v6; // rdi
  char *v7; // rcx
  const struct PixelFormatInfo *v8; // rbx
  char *v9; // rcx
  const struct D2D_SIZE_U *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  int Bitmap; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  LONG **v19; // rcx
  int **v20; // r9
  int RectangleCount; // eax
  struct ID2D1Bitmap1 *v23; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v25[4]; // [rsp+50h] [rbp-30h] BYREF
  int v26; // [rsp+54h] [rbp-2Ch]
  int v27; // [rsp+58h] [rbp-28h]
  char v28; // [rsp+5Ch] [rbp-24h]
  _BYTE v29[8]; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 2);
  v23 = 0LL;
  v3 = (char *)this + *(int *)(v1 + 20) + 16;
  (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v3 + 32LL))(v3, v24);
  v4 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
  (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v4 + 16LL))(v4, v25);
  v5 = *((_QWORD *)this + 2);
  v26 = 0;
  v6 = (CDecodeBitmap *)*((_QWORD *)this + 32);
  v27 = 0;
  v28 = 0;
  v7 = (char *)this + *(int *)(v5 + 12) + 16;
  v8 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(char *, struct tagRECT *))v7)(v7, &v30);
  v9 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
  v10 = (const struct D2D_SIZE_U *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v9)(v9, v29);
  v11 = CDecodeBitmap::EnsureTargetBitmap(v6, v10, v8, (const struct RenderTargetInfo *)v24);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x114u, 0LL);
  }
  else
  {
    v14 = *((_QWORD *)this + 43);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v23);
    Bitmap = CD2DBitmap::GetBitmap((CD2DBitmap *)(v14 + 80), &v23, 0);
    v13 = Bitmap;
    if ( Bitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Bitmap, 0x116u, 0LL);
    }
    else
    {
      v17 = CDecodeBitmap::CopyBitmapRegion(
              *((CDecodeBitmap **)this + 32),
              *((FastRegion::Internal::CRgnData ***)this + 49),
              v23);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x11Au, 0LL);
      }
      else
      {
        *((_BYTE *)this + 408) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v19 = (LONG **)*((_QWORD *)this + 49);
          v30 = 0LL;
          FastRegion::CRegion::GetBoundingRect(v19, &v30);
          RectangleCount = FastRegion::CRegion::GetRectangleCount(v20);
          McTemplateU0xddddd_EventWriteTransfer(
            (unsigned int)v30.top,
            &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
            *((unsigned int *)this + 21) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 84)) << 32),
            RectangleCount,
            v30.left,
            v30.top,
            v30.right,
            v30.bottom);
        }
      }
    }
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v23);
  return v13;
}
