/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180091830
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18000B334 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180092664 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800927F0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092DEC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180092E3C (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  CBitmapLock *v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v10; // rdx
  unsigned int v11; // ebp
  CBitmapLock *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 24)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x84u, 0LL);
    v18 = 0LL;
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 124));
    v11 = *(_DWORD *)(a1 + 120) * v10[1] + *v10 * (PixelFormatSize >> 3);
    v12 = (CBitmapLock *)operator new(0xA8uLL);
    if ( v12 )
      v12 = CBitmapLock::CBitmapLock(v12);
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
