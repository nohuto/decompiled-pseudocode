/*
 * XREFs of CmpDoReconcileNextHive @ 0x140664660
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140619E1C (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1406645B0 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1406FC61C (HvGetEffectiveLogSizeCapForHive.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // bp
  unsigned __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx

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
      if ( CmpIsHiveEligibleForLazyReconcile(NextActiveHive, v10, v11) )
      {
        HvGetEffectiveLogSizeCapForHive(NextActiveHive, v12, v13);
        if ( (int)CmpFlushHive(NextActiveHive) < 0 )
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
          v14 = *(_QWORD *)(NextActiveHive + 4184) + 10000000LL * (unsigned int)dword_140C004C0;
          if ( UnbiasedInterruptTime < v14 )
            v8 = v14 - UnbiasedInterruptTime;
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
