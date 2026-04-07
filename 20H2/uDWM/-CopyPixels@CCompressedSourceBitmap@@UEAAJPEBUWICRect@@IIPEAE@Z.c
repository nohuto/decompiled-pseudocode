/*
 * XREFs of ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800BFB50
 * Callers:
 *     ?CopyPixels@CCompressedSourceBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180056630 (-CopyPixels@CCompressedSourceBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004E978 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::CopyPixels(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax

  v9 = CCompressedSourceBitmap::EnsureUncompressedBitmap((CCompressedSourceBitmap *)((char *)this - 16));
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct WICRect *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 31) + 48LL))(
            *((_QWORD *)this + 31),
            a2,
            a3,
            a4,
            a5);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xA8u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xA3u);
  }
  return v10;
}
