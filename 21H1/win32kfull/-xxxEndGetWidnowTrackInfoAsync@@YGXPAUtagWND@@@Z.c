/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YGXPAUtagWND@@@Z @ 0x12F80
 * Callers:
 *     _xxxProcessAsyncSendMessage@16 @ 0x1426A (_xxxProcessAsyncSendMessage@16.c)
 * Callees:
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YGXPAUtagWND@@QBUtagMINMAXINFO@@@Z @ 0x12FC4 (-TrackedWindowTrackingInfo@NotifyShell@@YGXPAUtagWND@@QBUtagMINMAXINFO@@@Z.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __thiscall xxxEndGetWidnowTrackInfoAsync(void *this)
{
  NotifyShell *v1; // [esp+0h] [ebp-38h]
  struct tagWND *v2; // [esp+4h] [ebp-34h]
  const struct tagMINMAXINFO *v3; // [esp+8h] [ebp-30h]
  _BYTE v4[40]; // [esp+Ch] [ebp-2Ch] BYREF

  memset(v4, 0, sizeof(v4));
  xxxInitSendValidateMinMaxInfoEx(this, 0, 0);
  NotifyShell::TrackedWindowTrackingInfo(v1, v2, v3);
}
