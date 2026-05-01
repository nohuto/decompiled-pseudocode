/*
 * XREFs of sub_18001EA64 @ 0x18001EA64
 * Callers:
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_18000F0BC @ 0x18000F0BC (sub_18000F0BC.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001EA64(volatile signed __int64 **a1, __int128 *a2, int a3, int a4, __int64 *a5)
{
  volatile signed __int64 *v9; // rcx
  void *v10; // rax
  int v11; // esi
  volatile signed __int64 *v12; // rdi
  __int64 v13; // r8
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF

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
    v12 = (volatile signed __int64 *)sub_18000F0BC((__int64)v10);
    v13 = *a5;
    v17 = *a2;
    v11 = sub_180027610((_DWORD)v12, (unsigned int)&v17, a3, a4, (v13 + 8) & -(__int64)(v13 != 0));
    if ( v11 >= 0 )
    {
      if ( v12 )
      {
        v14 = *((_QWORD *)v12 + 17);
        while ( v14 >= 0 )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64(v12 + 17, v14 + 1, v14);
          if ( v15 == v14 )
            goto LABEL_14;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v14 + 16));
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
