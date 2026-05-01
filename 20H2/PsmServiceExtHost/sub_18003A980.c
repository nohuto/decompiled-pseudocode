/*
 * XREFs of sub_18003A980 @ 0x18003A980
 * Callers:
 *     sub_180038A00 @ 0x180038A00 (sub_180038A00.c)
 * Callees:
 *     sub_18003A904 @ 0x18003A904 (sub_18003A904.c)
 *     sub_18003A9F8 @ 0x18003A9F8 (sub_18003A9F8.c)
 */

char __fastcall sub_18003A980(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  char v4; // bl
  int v6; // eax

  v3 = (_QWORD *)(a1 + 88);
  v4 = 0;
  if ( *(_QWORD *)(a1 + 88) )
  {
    v6 = 0;
  }
  else
  {
    *v3 = 0LL;
    v6 = sub_18003A904((__int64)sub_180063DA0, a1, a3, (__int64)v3);
  }
  if ( !v6
    && !(unsigned int)sub_18003A9F8(a1 + 72, 0x418A073AA3BC7C75LL, a1)
    && !(unsigned int)sub_18003A9F8(a1 + 80, 0x418A073AA3BC88F5LL, a1) )
  {
    return 1;
  }
  return v4;
}
