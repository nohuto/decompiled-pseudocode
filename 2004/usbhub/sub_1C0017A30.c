/*
 * XREFs of sub_1C0017A30 @ 0x1C0017A30
 * Callers:
 *     sub_1C0019404 @ 0x1C0019404 (sub_1C0019404.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0013CDC @ 0x1C0013CDC (sub_1C0013CDC.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C0017C80 @ 0x1C0017C80 (sub_1C0017C80.c)
 */

__int64 __fastcall sub_1C0017A30(__int64 a1, int a2, __int64 a3, IRP *a4)
{
  __int64 v5; // rbp
  __int64 v9; // r9
  _DWORD *v10; // rax

  v5 = 0LL;
  sub_1C000FD80(a1, 16, 1935962161, (__int64)a4, a3);
  if ( !v9 )
    return sub_1C0017B0C(a1, 0, a2, a3, 0, 1769428816, v5);
  v10 = sub_1C000F050(a1);
  v5 = sub_1C0017C80(a1, a2, a3, 0, 1769428816, *((_BYTE *)v10 + 5268));
  if ( v5 )
  {
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    sub_1C0013CDC(a1, *(_QWORD *)(a3 + 48), a4, 1810);
    return sub_1C0017B0C(a1, 0, a2, a3, 0, 1769428816, v5);
  }
  return 3221225626LL;
}
