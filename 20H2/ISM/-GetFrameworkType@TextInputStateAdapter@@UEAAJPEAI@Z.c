/*
 * XREFs of ?GetFrameworkType@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801A2650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetFrameworkType(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 120LL))(
           *((_QWORD *)this + 4),
           a2);
}
