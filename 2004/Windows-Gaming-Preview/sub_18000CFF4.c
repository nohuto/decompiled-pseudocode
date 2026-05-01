/*
 * XREFs of sub_18000CFF4 @ 0x18000CFF4
 * Callers:
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 * Callees:
 *     sub_18000F0BC @ 0x18000F0BC (sub_18000F0BC.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000CFF4(__int64 *a1, __int128 *a2, int a3, int a4, __int64 *a5)
{
  __int64 v9; // rcx
  void *v10; // rax
  int v11; // esi
  __int64 v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  v9 = *a1;
  if ( v9 )
  {
    *a1 = 0LL;
    sub_1800120A0(v9);
  }
  *a1 = 0LL;
  v10 = operator new(0x138uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v10 )
  {
    v12 = sub_18000F0BC(v10);
    v16 = *a2;
    v11 = sub_180027610(v12, (unsigned int)&v16, a3, a4, *a5);
    if ( v11 >= 0 )
    {
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 136);
        while ( v13 >= 0 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 136), v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_14;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
      }
LABEL_14:
      *a1 = v12;
      if ( v12 )
        sub_1800120A0(v12);
      return 0;
    }
    else if ( v12 )
    {
      sub_1800120A0(v12);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
