/*
 * XREFs of sub_1801333EC @ 0x1801333EC
 * Callers:
 *     sub_180133498 @ 0x180133498 (sub_180133498.c)
 * Callees:
 *     sub_18010BCE0 @ 0x18010BCE0 (sub_18010BCE0.c)
 *     sub_18013350C @ 0x18013350C (sub_18013350C.c)
 */

int __fastcall sub_1801333EC(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = sub_18013350C(a1, sub_1801333A0);
  v4 = *(_DWORD **)(v2 + 8);
  if ( v4 )
  {
    if ( *v4 )
    {
      sub_18013350C(v3, sub_1801333A0);
      v2 = sub_18013350C(v5, sub_1801333A0);
      v8 = *(_DWORD **)(v2 + 8);
      if ( *v8 > 2u )
      {
        v10 = a1;
        LODWORD(v2) = sub_18010BCE0((__int64)v8, byte_18016C487, v6, v7, (const CHAR **)&v10);
      }
    }
  }
  return v2;
}
