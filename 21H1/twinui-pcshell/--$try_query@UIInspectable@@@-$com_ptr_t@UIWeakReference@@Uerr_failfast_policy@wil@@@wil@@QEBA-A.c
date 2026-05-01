/*
 * XREFs of ??$try_query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_failfast_policy@wil@@@1@XZ @ 0x180228E9C
 * Callers:
 *     _lambda_3dcd48245164aa834a1499666ccdc6ed_::operator() @ 0x18009CA70 (_lambda_3dcd48245164aa834a1499666ccdc6ed_--operator().c)
 *     _lambda_f39b2aea233dc9be0ddf7118a39ff465_::operator() @ 0x18009CB44 (_lambda_f39b2aea233dc9be0ddf7118a39ff465_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___::Run @ 0x18009CF90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IInspectable>(
        _QWORD *a1,
        __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*a1 + 24LL))(
    *a1,
    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
    a2);
  return a2;
}
