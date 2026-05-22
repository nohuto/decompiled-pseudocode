/*
 * XREFs of ?GetInputPaneTryHide@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801A2D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputPaneTryHide(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 152LL))(
           *((_QWORD *)this + 4),
           a2);
}
