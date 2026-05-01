/*
 * XREFs of sub_1800393C8 @ 0x1800393C8
 * Callers:
 *     sub_1800386B0 @ 0x1800386B0 (sub_1800386B0.c)
 *     sub_1800388A0 @ 0x1800388A0 (sub_1800388A0.c)
 *     sub_180065BA8 @ 0x180065BA8 (sub_180065BA8.c)
 * Callees:
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_1800388D8 @ 0x1800388D8 (sub_1800388D8.c)
 *     sub_18003960C @ 0x18003960C (sub_18003960C.c)
 *     sub_18003A154 @ 0x18003A154 (sub_18003A154.c)
 */

char __fastcall sub_1800393C8(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // rdi
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]

  if ( (unsigned __int8)sub_18003960C(a1, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 58) )
      sub_18003A154(a1 + 24, v11);
  }
  else
  {
    v14 = 0LL;
    v15 = 0LL;
    if ( (unsigned __int8)sub_18003A154(&v14, v11 + 10) )
    {
      sub_1800388D8(a1, v14, 0LL, v15 - v14);
      v12 = *(void **)(a1 + 48);
      v13 = 0LL;
      *(_QWORD *)(a1 + 48) = *((_QWORD *)&v15 + 1);
      if ( v12 )
        sub_18003850C(v12);
      *(_BYTE *)(a1 + 58) = 1;
    }
    else
    {
      v13 = (void *)*((_QWORD *)&v15 + 1);
    }
    if ( v13 )
      sub_18003850C(v13);
  }
  return sub_18003960C(a1, a2, a3, a4, a5, a6);
}
