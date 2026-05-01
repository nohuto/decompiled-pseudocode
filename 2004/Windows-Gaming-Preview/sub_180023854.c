/*
 * XREFs of sub_180023854 @ 0x180023854
 * Callers:
 *     sub_180021AA0 @ 0x180021AA0 (sub_180021AA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180023854(__int64 a1)
{
  RTL_SRWLOCK *v1; // r14
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  char *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  v3 = (__int64 *)(a1 + 16);
  v4 = 0LL;
  v5 = 0LL;
  if ( &v9 != (char *)(a1 + 16) )
  {
    v4 = *v3;
    *v3 = 0LL;
    v5 = v4;
  }
  v6 = (char *)(a1 + 24);
  v7 = 0LL;
  v8 = 0LL;
  if ( &v9 != v6 )
  {
    v8 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    v7 = v8;
  }
  ReleaseSRWLockExclusive(v1);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
