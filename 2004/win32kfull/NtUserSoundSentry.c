/*
 * XREFs of NtUserSoundSentry @ 0x1C0204720
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C014FB00 (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  EnterCrit(0LL, 1LL);
  v3 = (int)xxxSoundSentry(v1, v0, v2);
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v3;
}
