/*
 * XREFs of sub_180081D54 @ 0x180081D54
 * Callers:
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 * Callees:
 *     sub_180007FF8 @ 0x180007FF8 (sub_180007FF8.c)
 *     sub_180008894 @ 0x180008894 (sub_180008894.c)
 *     sub_180025704 @ 0x180025704 (sub_180025704.c)
 *     sub_180025EC8 @ 0x180025EC8 (sub_180025EC8.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_180027C9C @ 0x180027C9C (sub_180027C9C.c)
 *     sub_1800347D0 @ 0x1800347D0 (sub_1800347D0.c)
 *     sub_180034804 @ 0x180034804 (sub_180034804.c)
 */

char __fastcall sub_180081D54(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 i; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx

  sub_180034804(a1);
  *(_BYTE *)(a1 + 104) |= 1u;
  sub_1800347D0(a1, v2);
  for ( i = sub_180025704(a1 + 32); ; i = sub_180027434((_QWORD *)v6) )
  {
    v6 = i;
    if ( !i )
      break;
    sub_180007FF8(i, v4);
    *(_BYTE *)(v6 + 185) |= 0x20u;
    sub_180025EC8(v6);
    sub_180027C9C(v6, v5);
    TpWaitForWork(*(_QWORD *)(v6 + 96), 0LL);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    LOBYTE(i) = sub_180008894(v7);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return i;
}
