/*
 * XREFs of CmpDoReconcileNextHive @ 0x1406D5040
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1405DC88C (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1406D5154 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1406D5200 (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // bp
  unsigned __int64 v3; // rsi
  ULONG_PTR v6; // rcx
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r14
  unsigned __int64 v10; // rcx
  unsigned int EffectiveLogSizeCapForHive; // eax

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140C004C4;
  if ( !BYTE1(NlsMbCodePageTag) )
  {
    v6 = 0LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v6);
      if ( !NextActiveHive )
        break;
      v8 = -1LL;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
      {
        EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive((unsigned int *)NextActiveHive);
        if ( (int)CmpFlushHive(NextActiveHive, *(_DWORD *)(NextActiveHive + 176) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_140C004CC;
        }
      }
      else if ( *(_DWORD *)(NextActiveHive + 128) )
      {
        if ( (*(_DWORD *)(NextActiveHive + 160) & 0x8001) == 0 )
        {
          v2 = 1;
          v10 = *(_QWORD *)(NextActiveHive + 4184) + 10000000LL * (unsigned int)dword_140C004C0;
          if ( UnbiasedInterruptTime < v10 )
            v8 = v10 - UnbiasedInterruptTime;
        }
      }
      v6 = NextActiveHive;
      if ( v8 >= v3 )
        v8 = v3;
      v3 = v8;
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
