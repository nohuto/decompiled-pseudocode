/*
 * XREFs of sub_180046098 @ 0x180046098
 * Callers:
 *     sub_180002080 @ 0x180002080 (sub_180002080.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180013860 @ 0x180013860 (sub_180013860.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_180031588 @ 0x180031588 (sub_180031588.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 *     sub_18003F934 @ 0x18003F934 (sub_18003F934.c)
 *     sub_180041A40 @ 0x180041A40 (sub_180041A40.c)
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 *     sub_1800422A4 @ 0x1800422A4 (sub_1800422A4.c)
 *     sub_1800460E4 @ 0x1800460E4 (sub_1800460E4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_180062F10 @ 0x180062F10 (sub_180062F10.c)
 * Callees:
 *     malloc @ 0x180045013 (malloc.c)
 *     _callnewh @ 0x18004612C (_callnewh.c)
 */

void *__fastcall sub_180046098(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = malloc(Size);
    if ( v2 || !callnewh(i) )
      break;
  }
  return v2;
}
