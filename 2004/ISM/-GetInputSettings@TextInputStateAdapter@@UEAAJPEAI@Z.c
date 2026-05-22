/*
 * XREFs of ?GetInputSettings@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801A2900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputSettings(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4), a2);
}
