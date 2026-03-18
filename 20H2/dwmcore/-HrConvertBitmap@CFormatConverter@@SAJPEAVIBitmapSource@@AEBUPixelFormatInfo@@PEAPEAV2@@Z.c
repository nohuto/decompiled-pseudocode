/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180216B48
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180051700 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18019B570 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x180216118 (--0CFormatConverter@@QEAA@XZ.c)
 *     ??2CFormatConverter@@SAPEAX_K@Z @ 0x18021635C (--2CFormatConverter@@SAPEAX_K@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x180216CD8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
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
