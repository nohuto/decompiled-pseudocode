/*
 * XREFs of sub_18012DC50 @ 0x18012DC50
 * Callers:
 *     sub_180004350 @ 0x180004350 (sub_180004350.c)
 *     sub_180045060 @ 0x180045060 (sub_180045060.c)
 *     sub_18012D7F4 @ 0x18012D7F4 (sub_18012D7F4.c)
 *     sub_18012D9B4 @ 0x18012D9B4 (sub_18012D9B4.c)
 * Callees:
 *     sub_1800040C4 @ 0x1800040C4 (sub_1800040C4.c)
 */

void __fastcall sub_18012DC50(void **a1, void *a2)
{
  char *v4; // rcx

  v4 = (char *)*a1;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_1800040C4(v4);
  *a1 = a2;
}
