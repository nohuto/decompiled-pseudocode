/*
 * XREFs of sub_180032D68 @ 0x180032D68
 * Callers:
 *     sub_180031860 @ 0x180031860 (sub_180031860.c)
 * Callees:
 *     sub_18000D6B0 @ 0x18000D6B0 (sub_18000D6B0.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int64 **__fastcall sub_180032D68(volatile signed __int64 **a1, signed __int64 **a2)
{
  RTL_SRWLOCK *v4; // rbx
  signed __int64 *v5; // rsi
  __int64 v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x60uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v4 )
  {
    v5 = *a2;
    v4->Ptr = &off_18004C4D0;
    sub_180011A50(&v4[2].Ptr);
    v6 = qword_18005ADB0;
    v4->Ptr = off_18004C710;
    v4[1].Ptr = off_18004C6F0;
    v4[2].Ptr = off_18004C6A8;
    v4[7].Ptr = (PVOID)1;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v4->Ptr = &off_18004BFF8;
    v4[1].Ptr = off_18004BEF0;
    v4[2].Ptr = off_18004BEA8;
    LODWORD(v4[8].Ptr) = 0;
    InitializeSRWLock(v4 + 9);
    v4[10].Ptr = v5;
    if ( v5 )
    {
      v7 = v5[8];
      while ( v7 >= 0 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v5 + 8, v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
    }
LABEL_9:
    v4[11].Ptr = 0LL;
    if ( *a1 )
      sub_18000D6B0(*a1);
    *a1 = (volatile signed __int64 *)v4;
  }
  return a1;
}
