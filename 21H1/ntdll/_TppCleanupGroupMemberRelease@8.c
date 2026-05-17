/*
 * XREFs of _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6
 * Callers:
 *     _TpReleaseWait@4 @ 0x4B2B1E70 (_TpReleaseWait@4.c)
 *     _TpReleaseTimer@4 @ 0x4B2B3B90 (_TpReleaseTimer@4.c)
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _TpReleaseIoCompletion@4 @ 0x4B2E6E00 (_TpReleaseIoCompletion@4.c)
 *     _TpReleaseAlpcCompletion@4 @ 0x4B2E9950 (_TpReleaseAlpcCompletion@4.c)
 *     _TpReleaseWork@4 @ 0x4B2EC490 (_TpReleaseWork@4.c)
 *     _TpReleaseJobNotification@4 @ 0x4B383720 (_TpReleaseJobNotification@4.c)
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

BOOL __fastcall TppCleanupGroupMemberRelease(int a1, int a2)
{
  signed __int32 v2; // eax

  v2 = _InterlockedOr((volatile signed __int32 *)(a1 + 104), 0x10000u);
  if ( a2 && (v2 & 0x10000) != 0 )
    TppRaiseInvalidParameter();
  return (v2 & 0x30000) == 0;
}
