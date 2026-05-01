/*
 * XREFs of sub_18001E1D8 @ 0x18001E1D8
 * Callers:
 *     sub_18001C890 @ 0x18001C890 (sub_18001C890.c)
 *     sub_18001E00C @ 0x18001E00C (sub_18001E00C.c)
 * Callees:
 *     sub_18001E15C @ 0x18001E15C (sub_18001E15C.c)
 *     sub_18001EC54 @ 0x18001EC54 (sub_18001EC54.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001E1D8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // esi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *i; // rsi
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  volatile signed __int32 *v19; // [rsp+88h] [rbp+58h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  v17 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(_QWORD *)a1;
  v19 = 0LL;
  if ( v9 )
    v10 = ((__int64)(*(_QWORD *)(v9 + 24) - *(_QWORD *)(v9 + 16)) >> 3) + 1;
  else
    v10 = 1LL;
  v18 = v10;
  v11 = sub_18001EC54(&v19, &v18);
  if ( v11 >= 0 )
  {
    v12 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v13 = (_QWORD *)v12[4];
      for ( i = (_QWORD *)v12[2]; i != (_QWORD *)v12[3]; ++i )
      {
        sub_1800267DC(v19, *i, *v13);
        v12 = *(_QWORD **)a1;
        ++v13;
      }
    }
    v15 = v19;
    *a4 = a2;
    sub_1800267DC(v15, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    sub_18001E15C((__int64 *)&v17, (__int64 *)a1);
    sub_18001E15C((__int64 *)a1, (__int64 *)&v19);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
        if ( qword_18005ADB0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v11 = 0;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
        if ( qword_18005ADB0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
      }
    }
  }
  else
  {
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
        if ( qword_18005ADB0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  return (unsigned int)v11;
}
