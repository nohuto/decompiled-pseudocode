/*
 * XREFs of sub_180004214 @ 0x180004214
 * Callers:
 *     sub_18000407C @ 0x18000407C (sub_18000407C.c)
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 * Callees:
 *     sub_18000366C @ 0x18000366C (sub_18000366C.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 */

__int64 __fastcall sub_180004214(__int64 a1, int a2, int a3, _QWORD *a4, int a5)
{
  __int64 v5; // rdi
  int v10; // ebp
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v14; // rax
  bool v15; // zf

  v5 = *(_QWORD *)(a1 + 80);
  v10 = 0;
  sub_1800093A0(v5, 0LL);
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v12 = -1073741275;
  }
  else if ( *(_QWORD *)(a1 + 512) )
  {
    if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
    {
      v12 = -1058275327;
    }
    else if ( !a4 || (v14 = sub_18000366C(v5, v11), v15 = (v14 & *a4) == 0, *a4 &= v14, v15) )
    {
      v10 = sub_18000506C(v5, a2, a3, *(_QWORD *)(a1 + 64), 1, a5);
      v12 = 0;
    }
    else
    {
      v12 = -1058275328;
    }
  }
  else
  {
    v12 = -1073741436;
  }
  sub_18000A110(v5);
  if ( v10 )
    sub_180017F60(*(PVOID *)(v5 + 688));
  return v12;
}
