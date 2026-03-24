/*
 * XREFs of PfProcessCreateNotification @ 0x1406CC014
 * Callers:
 *     PspUserThreadStartup @ 0x140646E40 (PspUserThreadStartup.c)
 * Callees:
 *     PfSnBeginAppLaunch @ 0x1406CC0AC (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x1406CC31C (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x1406CC490 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140C4FBC8 & 1) != 0 || (dword_140C503F0 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140C503F0 & 1) != 0 && *(_DWORD *)(a1 + 1524) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
