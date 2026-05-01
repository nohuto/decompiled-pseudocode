/*
 * XREFs of sub_18000CE50 @ 0x18000CE50
 * Callers:
 *     sub_18000A924 @ 0x18000A924 (sub_18000A924.c)
 * Callees:
 *     sub_18000F0BC @ 0x18000F0BC (sub_18000F0BC.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_1800273AC @ 0x1800273AC (sub_1800273AC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000CE50(__int64 *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  void *v9; // rax
  int v10; // esi
  __int64 v11; // rdi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  v8 = *a1;
  if ( v8 )
  {
    *a1 = 0LL;
    sub_1800120A0(v8);
  }
  *a1 = 0LL;
  v9 = operator new(0x138uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v9 )
  {
    v11 = sub_18000F0BC(v9);
    v10 = sub_1800273AC(v11, *a2, *a3, *a4, 0LL);
    if ( v10 >= 0 )
    {
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 136);
        while ( v12 >= 0 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 136), v12 + 1, v12);
          if ( v13 == v12 )
            goto LABEL_14;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
      }
LABEL_14:
      *a1 = v11;
      if ( v11 )
        sub_1800120A0(v11);
      return 0;
    }
    else if ( v11 )
    {
      sub_1800120A0(v11);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
