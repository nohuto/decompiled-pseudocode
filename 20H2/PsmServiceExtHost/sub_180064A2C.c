/*
 * XREFs of sub_180064A2C @ 0x180064A2C
 * Callers:
 *     sub_180038550 @ 0x180038550 (sub_180038550.c)
 *     sub_180039A90 @ 0x180039A90 (sub_180039A90.c)
 * Callees:
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_180039F88 @ 0x180039F88 (sub_180039F88.c)
 *     sub_180065814 @ 0x180065814 (sub_180065814.c)
 */

char __fastcall sub_180064A2C(__int64 a1)
{
  char result; // al

  result = sub_180039EA4();
  if ( !result )
  {
    result = sub_180039F88((RTL_SRWLOCK *)a1);
    if ( result )
      return sub_180065814((LPCRITICAL_SECTION)(*(_QWORD *)(a1 + 24) + 200LL), *(PSRWLOCK *)(a1 + 24));
  }
  return result;
}
