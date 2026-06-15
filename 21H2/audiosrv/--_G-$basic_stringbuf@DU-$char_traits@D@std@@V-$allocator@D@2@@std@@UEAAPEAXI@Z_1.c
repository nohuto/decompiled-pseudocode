/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_1 @ 0x1800D53F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800064D0 @ 0x1800064D0 (sub_1800064D0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall std::stringbuf::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  sub_1800064D0(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
