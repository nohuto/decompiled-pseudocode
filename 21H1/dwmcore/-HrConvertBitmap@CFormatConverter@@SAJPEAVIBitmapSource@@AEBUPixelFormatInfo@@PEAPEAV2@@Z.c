/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x18021B378
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800269E8 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18019FDA0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x18021A948 (--0CFormatConverter@@QEAA@XZ.c)
 *     ??2CFormatConverter@@SAPEAX_K@Z @ 0x18021AB8C (--2CFormatConverter@@SAPEAX_K@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x18021B508 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 */

__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v6; // edi
  char *v7; // rcx
  CFormatConverter *v8; // rax
  __int64 v9; // rcx
  CFormatConverter *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  (**(void (__fastcall ***)(struct IBitmapSource *, __int64 *))a1)(a1, &v14);
  if ( v14 == *(_QWORD *)a2 )
  {
    v7 = (char *)a1 + *(int *)(*((_QWORD *)a1 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    *a3 = a1;
  }
  else
  {
    v8 = (CFormatConverter *)CFormatConverter::operator new();
    if ( v8 )
      v10 = CFormatConverter::CFormatConverter(v8);
    else
      v10 = 0LL;
    if ( v10 )
    {
      CMILCOMBase::InternalAddRef(v10);
      v11 = CFormatConverter::Initialize(v10, a1, a2, 0.0);
      v6 = v11;
      if ( v11 >= 0 )
      {
        *a3 = (CFormatConverter *)((char *)v10 + 16);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x232u, 0LL);
        CRenderTargetBitmap::Release(v10);
      }
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x23Fu, 0LL);
    }
  }
  return v6;
}
