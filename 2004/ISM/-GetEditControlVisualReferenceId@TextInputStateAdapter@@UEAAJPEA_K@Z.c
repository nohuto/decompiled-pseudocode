/*
 * XREFs of ?GetEditControlVisualReferenceId@TextInputStateAdapter@@UEAAJPEA_K@Z @ 0x1801A2680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetEditControlVisualReferenceId(
        TextInputStateAdapter *this,
        unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 4) + 264LL))(
           *((_QWORD *)this + 4),
           a2);
}
