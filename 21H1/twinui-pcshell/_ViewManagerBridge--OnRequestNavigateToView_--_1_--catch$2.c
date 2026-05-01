/*
 * XREFs of _ViewManagerBridge::OnRequestNavigateToView_::_1_::catch$2 @ 0x18029F7B7
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::OnRequestNavigateToView_::_1_::catch_2(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)(a2 + 64) + 72LL) + 112LL))(
    *(_QWORD *)(*(_QWORD *)(a2 + 64) + 72LL),
    *(unsigned int *)(a2 + 56),
    0LL,
    0LL,
    1);
  return 0LL;
}
