/*
 * XREFs of ?SetPreferredAspectRatioHint@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@@Z @ 0x180084F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetPreferredAspectRatioHint(
        CApplicationFrameWrapper *this,
        struct tagSIZE *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE *))(**((_QWORD **)this + 13) + 200LL))(
           *((_QWORD *)this + 13),
           a2);
}
