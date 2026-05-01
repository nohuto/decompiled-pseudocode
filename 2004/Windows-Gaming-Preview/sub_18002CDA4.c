/*
 * XREFs of sub_18002CDA4 @ 0x18002CDA4
 * Callers:
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 * Callees:
 *     sub_180011B00 @ 0x180011B00 (sub_180011B00.c)
 *     sub_18002E6C8 @ 0x18002E6C8 (sub_18002E6C8.c)
 *     sub_1800388C4 @ 0x1800388C4 (sub_1800388C4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002CDA4(volatile signed __int64 **a1, __int128 *a2, __int64 a3, __int64 a4)
{
  void *v8; // rax
  int v9; // edi
  volatile signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int64 *v15; // [rsp+30h] [rbp-28h]

  *a1 = 0LL;
  v8 = operator new(0xD0uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  *(_QWORD *)&v14 = v8;
  if ( v8 )
  {
    v10 = (volatile signed __int64 *)sub_18002E6C8(v8);
    v15 = v10;
    v14 = *a2;
    v9 = ((__int64 (__fastcall *)(volatile signed __int64 *, __int128 *, __int64, __int64))sub_1800388C4)(
           v10,
           &v14,
           a3,
           a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
      {
        v11 = *((_QWORD *)v10 + 7);
        while ( v11 >= 0 )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v10 + 7, v11 + 1, v11);
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
      sub_180011B00(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
