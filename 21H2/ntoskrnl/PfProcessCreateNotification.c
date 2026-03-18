/*
 * XREFs of PfProcessCreateNotification @ 0x1407DCC40
 * Callers:
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 * Callees:
 *     PfCalculateProcessHash @ 0x1407DB510 (PfCalculateProcessHash.c)
 *     PfCheckDeprioritizeImage @ 0x1407DBF54 (PfCheckDeprioritizeImage.c)
 *     PfSnBeginAppLaunch @ 0x1407DCCD8 (PfSnBeginAppLaunch.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140C4E968 & 1) != 0 || (dword_140C54630 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (unsigned __int64)&P + 1);
    if ( (dword_140C54630 & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1524);
      if ( v3 )
      {
        if ( PfCheckDeprioritizeImage(v3) )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x4000u);
      }
    }
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
