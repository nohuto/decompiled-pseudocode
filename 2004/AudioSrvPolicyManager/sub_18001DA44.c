/*
 * XREFs of sub_18001DA44 @ 0x18001DA44
 * Callers:
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180015E4C @ 0x180015E4C (sub_180015E4C.c)
 *     sub_1800163F0 @ 0x1800163F0 (sub_1800163F0.c)
 *     sub_180017FBC @ 0x180017FBC (sub_180017FBC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001DA44(__int64 a1, volatile signed __int32 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 **v5; // r12
  __int64 *i; // rbx
  RTL_SRWLOCK *v7; // r14

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = (__int64 **)(a1 + 128);
  for ( i = *(__int64 **)(a1 + 128); i && (volatile signed __int32 *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v7 = (RTL_SRWLOCK *)(a1 + 120);
    AcquireSRWLockExclusive(v7);
    sub_180017FBC(v5, i);
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    if ( a2 )
    {
      sub_1800163F0((__int64)a2, 0);
      sub_180015E4C((__int64)a2, 1);
      if ( _InterlockedExchangeAdd(a2 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a2 + 32LL))(a2);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
