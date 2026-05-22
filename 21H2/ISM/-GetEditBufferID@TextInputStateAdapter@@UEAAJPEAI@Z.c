/*
 * XREFs of ?GetEditBufferID@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801A2A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetEditBufferID(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), a2);
}
