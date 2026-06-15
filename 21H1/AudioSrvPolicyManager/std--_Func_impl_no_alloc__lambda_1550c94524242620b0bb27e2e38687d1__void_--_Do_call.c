/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Do_call @ 0x18001E390
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(v1 + 32);
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = *(_QWORD **)(v1 + 72);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, v1 + 16);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
