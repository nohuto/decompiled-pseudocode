/*
 * XREFs of ?HasPendingPromotion@PointerPromotion@@YGHPAUtagTHREADINFO@@@Z @ 0x17D0A0
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall PointerPromotion::HasPendingPromotion(void *ecx0)
{
  return (_WORD)dword_2752E0 && (void *)dword_2752E8 == ecx0;
}
