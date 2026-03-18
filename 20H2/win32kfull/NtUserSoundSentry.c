/*
 * XREFs of NtUserSoundSentry @ 0x1C02038B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  v3 = (int)xxxSoundSentry(v1, v0, v2);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
