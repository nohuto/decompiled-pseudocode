/*
 * XREFs of sub_180075DD0 @ 0x180075DD0
 * Callers:
 *     sub_180071BE8 @ 0x180071BE8 (sub_180071BE8.c)
 *     sub_1800BA2BC @ 0x1800BA2BC (sub_1800BA2BC.c)
 * Callees:
 *     sub_18007636C @ 0x18007636C (sub_18007636C.c)
 *     sub_1800817EC @ 0x1800817EC (sub_1800817EC.c)
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_180075DD0(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  char v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  sub_1800817EC(a1, &v10);
  v6 = v10;
  if ( v10 == *a1 || (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(v10 + 32) + 8LL) < 0 )
  {
    v11 = a3;
    v7 = (_QWORD *)sub_18007636C((_DWORD)a1, (unsigned int)&v9, v6, (unsigned int)&unk_1801CB718, (__int64)&v11);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v7;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
