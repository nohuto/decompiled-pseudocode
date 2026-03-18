/*
 * XREFs of ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180023EC0
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800240AC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CAEF8 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNotificationResource::GetChannelCallbackId(CNotificationResource *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 6);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 68);
  return result;
}
