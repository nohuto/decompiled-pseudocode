/*
 * XREFs of ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x180249F6C
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180028B10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180269250 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800272BC (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x18021935C (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall HrCreateDestBitmap(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct IBitmapDest **a4)
{
  CSystemMemoryBitmap *v8; // rax
  __int64 v9; // rcx
  void **v10; // rdi
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  *a4 = 0LL;
  v8 = (CSystemMemoryBitmap *)operator new(0x138uLL);
  if ( v8 )
    v10 = (void **)CSystemMemoryBitmap::CSystemMemoryBitmap(v8, 1);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*((void (__fastcall **)(void **))*v10 + 1))(v10);
    v12 = CSystemMemoryBitmap::HrInit(v10, a1, a2, a3);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x89u, 0LL);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(void **, GUID *, struct IBitmapDest **))*v10)(
              v10,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              a4);
      v11 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x8Cu, 0LL);
    }
    (*((void (__fastcall **)(void **))*v10 + 2))(v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x83u, 0LL);
  }
  return v11;
}
