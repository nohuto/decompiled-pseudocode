/*
 * XREFs of ?SetPosition@CApplicationFrameWrapper@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180086CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetPosition(
        CApplicationFrameWrapper *this,
        struct IApplicationViewPosition *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(**((_QWORD **)this + 13) + 32LL))(
           *((_QWORD *)this + 13),
           a2);
}
