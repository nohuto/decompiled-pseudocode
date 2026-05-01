/*
 * XREFs of sub_180032108 @ 0x180032108
 * Callers:
 *     sub_180031560 @ 0x180031560 (sub_180031560.c)
 *     sub_180031660 @ 0x180031660 (sub_180031660.c)
 *     sub_180031760 @ 0x180031760 (sub_180031760.c)
 *     sub_180032430 @ 0x180032430 (sub_180032430.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_180032388 @ 0x180032388 (sub_180032388.c)
 *     sub_18003256C @ 0x18003256C (sub_18003256C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180032108(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  volatile signed __int64 *v3; // rbx
  volatile signed __int64 *v4; // rax
  int v5; // esi
  volatile signed __int64 *v6; // rbx
  RTL_SRWLOCK *v7; // rax
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rax
  int v10; // r12d
  void *v11; // r15
  PVOID Ptr; // rcx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  volatile signed __int64 *v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rcx
  volatile signed __int64 *v21; // [rsp+60h] [rbp+40h]
  volatile signed __int64 *v22; // [rsp+68h] [rbp+48h]
  RTL_SRWLOCK *SRWLock; // [rsp+70h] [rbp+50h]

  SRWLock = (RTL_SRWLOCK *)(a1 + 72);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  if ( *(_QWORD *)(a1 + 96) )
  {
    v2 = 0LL;
    v22 = 0LL;
    v3 = (volatile signed __int64 *)operator new(0x58uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v4 = 0LL;
    if ( v3 )
    {
      sub_180032388(v3);
      *v3 = (volatile signed __int64)&off_18004BFA0;
      *((_QWORD *)v3 + 1) = off_18004BE30;
      *((_QWORD *)v3 + 2) = off_18004BF68;
      *((_QWORD *)v3 + 3) = off_18004BDB0;
      *((_QWORD *)v3 + 9) = 0LL;
      v2 = v3;
      v22 = v3;
      v4 = v3;
    }
    if ( v4 )
    {
      v5 = sub_18003256C(v2, *(_QWORD *)(a1 + 96));
      if ( v5 >= 0 )
      {
        v6 = 0LL;
        v7 = (RTL_SRWLOCK *)operator new(0x70uLL, (const struct std::nothrow_t *)&unk_18005AF88);
        v8 = v7;
        if ( v7 )
        {
          sub_180032388(v7);
          v8->Ptr = &off_18004BE50;
          v8[1].Ptr = off_18004BE30;
          v8[2].Ptr = off_18004BDF8;
          v8[3].Ptr = off_18004BDB0;
          InitializeSRWLock(v8 + 9);
          v8[10].Ptr = 0LL;
          v8[11].Ptr = 0LL;
          v8[12].Ptr = 0LL;
          BYTE5(v8[13].Ptr) = 0;
          v6 = (volatile signed __int64 *)v8;
          v21 = (volatile signed __int64 *)v8;
          v9 = *((_QWORD *)v2 + 9);
          v10 = *(_DWORD *)(a1 + 104) - *(_DWORD *)(v9 + 12);
          if ( *(_DWORD *)(v9 + 12) && v10 )
          {
            v11 = *(void **)(a1 + 96);
            if ( v11 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(a1 + 96));
              Ptr = v8[12].Ptr;
              v8[12].Ptr = v11;
              if ( Ptr )
                (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
            }
            LODWORD(v8[13].Ptr) = v10;
            BYTE5(v8[13].Ptr) = 1;
          }
          else
          {
            v6 = 0LL;
            v21 = 0LL;
            sub_18000D490((volatile signed __int64 *)v8);
          }
          if ( *(volatile signed __int64 **)(a1 + 80) != v2 )
          {
            v13 = *((_QWORD *)v2 + 8);
            while ( v13 >= 0 )
            {
              v14 = v13;
              v13 = _InterlockedCompareExchange64(v2 + 8, v13 + 1, v13);
              if ( v14 == v13 )
                goto LABEL_19;
            }
            _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
LABEL_19:
            v15 = *(volatile signed __int64 **)(a1 + 80);
            v2 = v22;
            *(_QWORD *)(a1 + 80) = v22;
            if ( v15 )
              sub_18000D490(v15);
            v6 = v21;
          }
          if ( *(volatile signed __int64 **)(a1 + 88) != v6 )
          {
            if ( v6 )
            {
              v16 = *((_QWORD *)v6 + 8);
              while ( v16 >= 0 )
              {
                v17 = v16;
                v16 = _InterlockedCompareExchange64(v6 + 8, v16 + 1, v16);
                if ( v17 == v16 )
                  goto LABEL_28;
              }
              _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
LABEL_28:
              v6 = v21;
              v2 = v22;
            }
            v18 = *(volatile signed __int64 **)(a1 + 88);
            *(_QWORD *)(a1 + 88) = v6;
            if ( v18 )
              sub_18000D490(v18);
          }
          v19 = *(_QWORD *)(a1 + 96);
          if ( v19 )
          {
            *(_QWORD *)(a1 + 96) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v5 = 0;
        }
        else
        {
          v5 = -2147024882;
        }
        if ( v6 )
          sub_18000D490(v6);
      }
    }
    else
    {
      v5 = -2147024882;
    }
    if ( v2 )
      sub_18000D490(v2);
  }
  else
  {
    v5 = 0;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v5;
}
