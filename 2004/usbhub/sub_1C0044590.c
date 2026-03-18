/*
 * XREFs of sub_1C0044590 @ 0x1C0044590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C0038858 @ 0x1C0038858 (sub_1C0038858.c)
 *     sub_1C0041F88 @ 0x1C0041F88 (sub_1C0041F88.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0043DE0 @ 0x1C0043DE0 (sub_1C0043DE0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 */

__int64 __fastcall sub_1C0044590(_QWORD *Tag, int a2)
{
  unsigned int v4; // esi
  int v5; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx

  sub_1C000FD80(Tag[1], 2, 2001945410, (__int64)Tag, a2);
  if ( a2 == 2 )
  {
    sub_1C004204C((__int64)Tag, 2);
    sub_1C00438A0(0LL, v8, (struct _LIST_ENTRY *)Tag[1], 6, 0LL, (__int64)Tag);
    return sub_1C00446D4(Tag, 2LL);
  }
  else
  {
    switch ( a2 )
    {
      case 3:
        sub_1C004204C((__int64)Tag, 3);
        sub_1C00438A0(0LL, v7, (struct _LIST_ENTRY *)Tag[1], 6, 0LL, (__int64)Tag);
        v5 = 4;
        break;
      case 5:
        sub_1C004204C((__int64)Tag, 5);
        v5 = 7;
        break;
      case 8:
        v4 = sub_1C0041F88(Tag);
        v5 = 5;
        if ( (v4 & 0xC0000000) == 0xC0000000 )
        {
          sub_1C0043DE0(Tag[1], 5, 8);
          sub_1C00317D8(Tag[1], (__int64)Tag);
          sub_1C0038858(Tag[1]);
          return v4;
        }
        break;
      default:
        sub_1C002DC78(Tag[1], (ULONG_PTR)Tag);
    }
    sub_1C0043DE0(Tag[1], v5, a2);
    sub_1C00317D8(Tag[1], (__int64)Tag);
    return 0LL;
  }
}
