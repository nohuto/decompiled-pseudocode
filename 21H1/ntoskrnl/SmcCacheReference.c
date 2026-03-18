/*
 * XREFs of SmcCacheReference @ 0x140928E5C
 * Callers:
 *     SmcGetCacheStats @ 0x140929138 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1409292A8 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x140929508 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1409297D0 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x140929D20 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  BOOLEAN v5; // dl

  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v5 = ExAcquireRundownProtection_0(v4 + 1);
  if ( v5 )
  {
    if ( (v4[3].Count & 0xFFF) == a2 >> 4 )
    {
      v3.Count = v4->Count;
      v5 = 0;
    }
    if ( v5 )
      ExReleaseRundownProtection_0(v4 + 1);
  }
  return v3;
}
