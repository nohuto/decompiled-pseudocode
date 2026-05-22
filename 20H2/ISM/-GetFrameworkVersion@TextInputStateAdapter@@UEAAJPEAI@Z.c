/*
 * XREFs of ?GetFrameworkVersion@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801A2670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetFrameworkVersion(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 128LL))(
           *((_QWORD *)this + 4),
           a2);
}
