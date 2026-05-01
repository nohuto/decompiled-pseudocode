/*
 * XREFs of ?AddViewHostItem@HolographicViewHostItemLedger@@UEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180225400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180120E18 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicViewHostItemLedger::AddViewHostItem(
        HolographicViewHostItemLedger *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem *a2)
{
  RTL_SRWLOCK *v4; // rsi
  const char *v5; // r9
  _QWORD *v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (RTL_SRWLOCK *)((char *)this + 88);
  AcquireSRWLockExclusive((PSRWLOCK)this + 11);
  try
  {
    v6 = (_QWORD *)*((_QWORD *)this + 9);
    if ( *((_QWORD **)this + 10) == v6 )
    {
      std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        (__int64 *)this + 8,
        (__int64)v6,
        (__int64 *)&v9);
    }
    else
    {
      *v6 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)a2 + 8LL))(a2);
      *((_QWORD *)this + 9) += 8LL;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE1,
                           (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                           v5);
  }
  return result;
}
