/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x140014D1C
 * Callers:
 *     WinMain @ 0x140014C00 (WinMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister_EtwEventRegister()
{
  __int64 result; // rax

  result = 0LL;
  if ( !AUDIO_EVENT_PROVIDER_Context )
    return EtwEventRegister(
             &AUDIO_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &AUDIO_EVENT_PROVIDER_Context);
  return result;
}
