/*
 * XREFs of sub_18000D298 @ 0x18000D298
 * Callers:
 *     sub_18000C288 @ 0x18000C288 (sub_18000C288.c)
 *     sub_18002DD08 @ 0x18002DD08 (sub_18002DD08.c)
 * Callees:
 *     sub_18000EC6C @ 0x18000EC6C (sub_18000EC6C.c)
 *     sub_18000EF90 @ 0x18000EF90 (sub_18000EF90.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000D298(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  signed __int32 v13; // eax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v6 = sub_180039DDC(72LL, &unk_18004FFC8);
  v7 = v6;
  if ( v6 )
  {
    v9 = qword_18004FE28;
    *(_QWORD *)v6 = &off_18003ED50;
    *(_DWORD *)(v6 + 36) = 1;
    *(_DWORD *)(v6 + 52) = 1;
    *(_QWORD *)v6 = off_18003ECC0;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *(_QWORD *)v7 = off_18003ECE0;
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 64) = 0LL;
    v10 = *a3;
    *a3 = 0LL;
    v15[0] = v10;
    v11 = a3[1];
    a3[1] = 0LL;
    v12 = *a2;
    v15[1] = v11;
    v8 = sub_18000EC6C(v7, v12, v15);
    if ( v8 >= 0 )
    {
      do
        v13 = *(_DWORD *)(v7 + 52);
      while ( v13 != 0x7FFFFFFF
           && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 52), v13 + 1, v13) );
      *a1 = v7;
      v8 = 0;
    }
    sub_18000EF90(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
