/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004A500
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18002E694 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004763C (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004768C (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180048BFC (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180048D4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180048D88 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  CBitmapLock *v4; // rbx
  _DWORD *v7; // rdx
  unsigned int v8; // ecx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v10; // rdx
  unsigned int v11; // ebp
  CBitmapLock *v12; // rax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 24, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x84u, 0LL);
    v18 = 0LL;
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 124));
    v11 = *(_DWORD *)(a1 + 120) * v10[1] + *v10 * (PixelFormatSize >> 3);
    v12 = (CBitmapLock *)operator new(0xA8uLL);
    if ( v12 )
      v12 = CBitmapLock::CBitmapLock(v12, 1);
    wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)&v19, (__int64)v12);
    v4 = v19;
    if ( !v19 )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x8Du, 0LL);
      return v16;
    }
    v14 = CBitmapLock::HrInit(
            v19,
            (struct IBitmapUnlock *)((a1 - 16 + 32) & -(__int64)(a1 != 16)),
            a2[2] - *a2,
            a2[3] - a2[1],
            (const struct PixelFormatInfo *)(a1 + 124),
            *(_DWORD *)(a1 + 120),
            *(_DWORD *)(a1 + 144) - v11,
            (void *)(v11 + *(_QWORD *)(a1 + 136)),
            WICBitmapLockRead,
            0,
            0LL);
    v16 = v14;
    if ( v14 >= 0 )
    {
      *a3 = ((unsigned __int64)v4 + 16) & -(__int64)(v4 != 0LL);
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x98u, 0LL);
    v18 = v4;
  }
  if ( v18 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v4 + 16LL))(v4);
  return v16;
}
