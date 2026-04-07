/*
 * XREFs of ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x180050770
 * Callers:
 *     ??_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z @ 0x1800562B0 (--_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1800507B8 (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CCompressedSourceBitmap *__fastcall CCompressedSourceBitmap::`vector deleting destructor'(
        CCompressedSourceBitmap *this,
        char a2)
{
  CCompressedSourceBitmap::~CCompressedSourceBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CCompressedSourceBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
