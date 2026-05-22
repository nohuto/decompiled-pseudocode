/*
 * XREFs of ?GetInputAppDelegationStateInfo@TextInputStateAdapter@@UEAAJPEAUDelegationStateInfo@@@Z @ 0x1801A2C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputAppDelegationStateInfo(
        TextInputStateAdapter *this,
        struct DelegationStateInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DelegationStateInfo *))(**((_QWORD **)this + 4) + 304LL))(
           *((_QWORD *)this + 4),
           a2);
}
