/*
 * XREFs of sub_18002AA58 @ 0x18002AA58
 * Callers:
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_180080E10 @ 0x180080E10 (sub_180080E10.c)
 * Callees:
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 */

__int64 __fastcall sub_18002AA58(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebx

  v1 = *(_QWORD *)(a1 + 688);
  if ( v1 )
  {
    sub_18000E1BC(*(_QWORD *)(a1 + 688));
    v3 = sub_180008F9C(v1, 0LL);
    sub_18000E244(v1);
    return -(__int64)(v3 != 0) & v1;
  }
  return v1;
}
