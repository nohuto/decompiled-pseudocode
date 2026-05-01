/*
 * XREFs of ?SetMaximumSize@CApplicationFrameWrapper@@UEAAJPEBUtagSIZE@@@Z @ 0x180151F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetMaximumSize(CApplicationFrameWrapper *this, const struct tagSIZE *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct tagSIZE *))(**((_QWORD **)this + 13) + 88LL))(
           *((_QWORD *)this + 13),
           a2);
}
