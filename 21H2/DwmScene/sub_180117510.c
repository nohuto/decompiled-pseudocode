/*
 * XREFs of sub_180117510 @ 0x180117510
 * Callers:
 *     sub_1801187E4 @ 0x1801187E4 (sub_1801187E4.c)
 *     sub_180119E18 @ 0x180119E18 (sub_180119E18.c)
 *     sub_180119FF0 @ 0x180119FF0 (sub_180119FF0.c)
 * Callees:
 *     sub_180117388 @ 0x180117388 (sub_180117388.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

char __fastcall sub_180117510(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 23LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1900000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_180117388((unsigned __int8 *)&v5, 0x10uLL, a1);
  *(_WORD *)(a1 + 22) = 46;
  return result;
}
