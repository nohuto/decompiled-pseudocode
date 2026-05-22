/*
 * XREFs of ?GetVisibilityRequestKind@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801A2A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetVisibilityRequestKind(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 168LL))(
           *((_QWORD *)this + 4),
           a2);
}
