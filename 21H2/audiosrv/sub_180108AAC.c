/*
 * XREFs of sub_180108AAC @ 0x180108AAC
 * Callers:
 *     sub_180105F64 @ 0x180105F64 (sub_180105F64.c)
 * Callees:
 *     sub_180105BA8 @ 0x180105BA8 (sub_180105BA8.c)
 *     sub_18010630C @ 0x18010630C (sub_18010630C.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 */

__int64 __fastcall sub_180108AAC(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = sub_180106B9C(a1, a2, (int *)&v9, (unsigned int *)&v11, v10);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = *(_QWORD *)a3;
    *(_BYTE *)(v6 + 16) = *(_BYTE *)(a3 + 8);
  }
  else
  {
    v7 = sub_18010630C(a1, (__int64)a2, v9, v11);
    v11 = v7;
    *(_QWORD *)(v7 + 8) = *(_QWORD *)a3;
    *(_BYTE *)(v7 + 16) = *(_BYTE *)(a3 + 8);
  }
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(a3 + 12);
  sub_180105BA8((_QWORD *)(v7 + 24), (_QWORD *)(a3 + 16));
  return v7;
}
