/*
 * XREFs of ?GetHardwareKeyboardUIEnabled@TextInputStateAdapter@@UEAAJPEA_N@Z @ 0x1801A2730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetHardwareKeyboardUIEnabled(TextInputStateAdapter *this, bool *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, bool *))(**((_QWORD **)this + 4) + 240LL))(*((_QWORD *)this + 4), a2);
}
