/*
 * XREFs of ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180087D60
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180087F4C (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCD08 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
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
