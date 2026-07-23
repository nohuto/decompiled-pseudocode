/*
 * XREFs of PfProcessCreateNotification @ 0x14067A904
 * Callers:
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 * Callees:
 *     PfSnBeginAppLaunch @ 0x14067A99C (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x14067AC0C (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x14067AD80 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140C4FC08 & 1) != 0 || (dword_140C50430 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140C50430 & 1) != 0 && *(_DWORD *)(a1 + 1524) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
