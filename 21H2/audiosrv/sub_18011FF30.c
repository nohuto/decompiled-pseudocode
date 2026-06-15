/*
 * XREFs of sub_18011FF30 @ 0x18011FF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F7C0 @ 0x18001F7C0 (sub_18001F7C0.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004BA74 @ 0x18004BA74 (sub_18004BA74.c)
 */

bool __fastcall sub_18011FF30(__int64 a1, __int16 **a2)
{
  __int16 *v2; // rbx
  __int64 v5; // rcx
  __int128 v6; // [rsp+50h] [rbp-18h] BYREF

  v2 = *a2;
  if ( sub_18001F7C0(*a2) && sub_18004BA74(*(_QWORD *)(a1 + 8), (_QWORD *)v2 + 3) )
    return 1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_OWORD *)(a1 + 16);
  return (int)sub_18004AE9C(v5, 0, (__int64)v2, &v6, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
