/*
 * XREFs of sub_18001E990 @ 0x18001E990
 * Callers:
 *     sub_18001BFA0 @ 0x18001BFA0 (sub_18001BFA0.c)
 *     sub_18001D3AC @ 0x18001D3AC (sub_18001D3AC.c)
 * Callees:
 *     sub_18000F0BC @ 0x18000F0BC (sub_18000F0BC.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_1800273AC @ 0x1800273AC (sub_1800273AC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001E990(volatile signed __int64 **a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  void *v8; // rax
  int v9; // edi
  volatile signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt

  *a1 = 0LL;
  v8 = operator new(0x138uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v8 )
  {
    v10 = (volatile signed __int64 *)sub_18000F0BC((__int64)v8);
    v9 = sub_1800273AC(v10, *a2, *a3, (*a4 + 8LL) & -(__int64)(*a4 != 0LL), 0LL);
    if ( v9 >= 0 )
    {
      if ( v10 )
      {
        v11 = *((_QWORD *)v10 + 17);
        while ( v11 >= 0 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v10 + 17, v11 + 1, v11);
          if ( v12 == v11 )
            goto LABEL_9;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
      }
LABEL_9:
      *a1 = v10;
      v9 = 0;
    }
    if ( v10 )
      sub_1800120A0(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
