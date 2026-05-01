/*
 * XREFs of ?PointerUp@TabletModeInputHandler@@UEAAXIUtagPOINT@@@Z @ 0x1803F1690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabletModeInputHandler::PointerUp(TabletModeInputHandler *this, __int64 a2, struct tagPOINT a3)
{
  struct tagPOINT v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  (*(void (__fastcall **)(_QWORD, __int64, struct tagPOINT *))(**((_QWORD **)this + 4) + 40LL))(
    *((_QWORD *)this + 4),
    a2,
    &v3);
}
