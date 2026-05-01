/*
 * XREFs of ?GetContextMenu@CAsyncSwitchItemController@@UEAAJPEAUISwitchItem@@PEAPEAUHMENU__@@@Z @ 0x1803AE0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncSwitchItemController::GetContextMenu(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2,
        HMENU *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ISwitchItem *, HMENU *))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
