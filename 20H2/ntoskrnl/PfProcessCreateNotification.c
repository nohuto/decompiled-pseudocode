/*
 * XREFs of PfProcessCreateNotification @ 0x14064CF8C
 * Callers:
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 * Callees:
 *     PfSnBeginAppLaunch @ 0x14064D024 (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x14064D294 (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x14064D410 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140C4FA48 & 1) != 0 || (dword_140C50270 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140C50270 & 1) != 0 && *(_DWORD *)(a1 + 1524) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
