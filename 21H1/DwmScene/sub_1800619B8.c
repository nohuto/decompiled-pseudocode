/*
 * XREFs of sub_1800619B8 @ 0x1800619B8
 * Callers:
 *     sub_180060FF4 @ 0x180060FF4 (sub_180060FF4.c)
 *     sub_1800610BC @ 0x1800610BC (sub_1800610BC.c)
 *     sub_180061184 @ 0x180061184 (sub_180061184.c)
 *     sub_18006125C @ 0x18006125C (sub_18006125C.c)
 * Callees:
 *     sub_1800619F0 @ 0x1800619F0 (sub_1800619F0.c)
 */

char __fastcall sub_1800619B8(__int64 a1, __int64 a2)
{
  char v3; // bl

  LOBYTE(a2) = 1;
  v3 = 0;
  if ( (unsigned __int8)sub_1800619F0(a1, a2) || (unsigned __int8)sub_1800619F0(a1, 0LL) )
    return 1;
  return v3;
}
