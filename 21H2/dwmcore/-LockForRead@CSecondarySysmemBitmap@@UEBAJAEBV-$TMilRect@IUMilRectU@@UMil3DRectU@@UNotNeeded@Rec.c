/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18006D370
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006A370 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006A3C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z @ 0x18006D308 (--4-$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18006EA24 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18006F31C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, _DWORD *a2, CBitmapLock **a3)
{
  _DWORD *v6; // rdx
  unsigned int v7; // ecx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v9; // rdx
  unsigned int v10; // ebp
  CBitmapLock *v11; // rax
  unsigned int v12; // ecx
  CBitmapLock *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  char *v18; // rcx
  CBitmapLock *v19; // [rsp+90h] [rbp+8h] BYREF

  v19 = 0LL;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
          a1 + 32,
          (__int64)a2,
          (__int64)a3)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v6) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x84u, 0LL);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 132));
    v10 = *(_DWORD *)(a1 + 128) * v9[1] + *v9 * (PixelFormatSize >> 3);
    v11 = (CBitmapLock *)operator new(0xA0uLL);
    if ( v11 )
      v11 = CBitmapLock::CBitmapLock(v11);
    wil::com_ptr_t<CBitmapLock,wil::err_returncode_policy>::operator=((__int64 *)&v19, (__int64)v11);
    v13 = v19;
    if ( v19 )
    {
      v14 = CBitmapLock::HrInit(
              v19,
              (struct IBitmapUnlock *)(a1 + 24),
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)(a1 + 132),
              *(_DWORD *)(a1 + 128),
              *(_DWORD *)(a1 + 152) - v10,
              (void *)(v10 + *(_QWORD *)(a1 + 144)),
              WICBitmapLockRead,
              0,
              0LL);
      v16 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x98u, 0LL);
        if ( v13 )
        {
          v18 = (char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 4LL) + 8;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
      else
      {
        *a3 = v13;
      }
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x8Du, 0LL);
    }
  }
  return v16;
}
