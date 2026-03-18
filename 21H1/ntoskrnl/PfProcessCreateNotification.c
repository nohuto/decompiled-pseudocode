/*
 * XREFs of PfProcessCreateNotification @ 0x14064E808
 * Callers:
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 * Callees:
 *     PfSnBeginAppLaunch @ 0x14064E8A0 (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x14064F958 (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x14064FAD0 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140C4FB08 & 1) != 0 || (dword_140C50330 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_140C50330 & 1) != 0 )
    {
      v3 = *(unsigned int *)(a1 + 1524);
      if ( (_DWORD)v3 )
      {
        if ( (unsigned int)PfCheckDeprioritizeImage(v3) )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x4000u);
      }
    }
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
