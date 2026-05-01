/*
 * XREFs of ?SetSizeConstraintOverridesLogical@CApplicationFrameWrapper@@UEAAJPEAUtagSIZE@@0@Z @ 0x180086C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetSizeConstraintOverridesLogical(
        CApplicationFrameWrapper *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE *, struct tagSIZE *))(**((_QWORD **)this + 13) + 192LL))(
           *((_QWORD *)this + 13),
           a2,
           a3);
}
