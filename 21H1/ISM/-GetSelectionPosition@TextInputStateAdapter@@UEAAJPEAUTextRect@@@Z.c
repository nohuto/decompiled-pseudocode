/*
 * XREFs of ?GetSelectionPosition@TextInputStateAdapter@@UEAAJPEAUTextRect@@@Z @ 0x1801A2E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetSelectionPosition(TextInputStateAdapter *this, struct TextRect *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct TextRect *))(**((_QWORD **)this + 4) + 104LL))(
           *((_QWORD *)this + 4),
           a2);
}
