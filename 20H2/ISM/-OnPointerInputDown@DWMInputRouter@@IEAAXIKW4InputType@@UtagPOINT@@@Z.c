/*
 * XREFs of ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@UtagPOINT@@@Z @ 0x180138840
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180138280 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call @ 0x1801396D0 (std--_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTE_ea_1801396D0.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180103820 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 */

unsigned __int8 __fastcall DWMInputRouter::OnPointerInputDown(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  unsigned __int8 result; // al

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 328) + 40LL))(
    *(_QWORD *)(a1 + 328),
    a4,
    (unsigned int)a5,
    HIDWORD(a5));
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(*(_QWORD *)(a1 + 336) + 64LL), a2);
  result = IsEdition(8778LL);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 80LL))(
             a1,
             a2,
             a3,
             a4,
             a5);
  return result;
}
