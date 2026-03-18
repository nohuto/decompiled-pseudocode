/*
 * XREFs of ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C00537A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0065F6C (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxRequestBase::_TimerDPC(
        _KDPC *Dpc,
        FxRequestBase *Context,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxIoTarget::TimerCallback(Context->m_Target, Context);
}
