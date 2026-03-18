/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x1406D6F24
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1406D6E10 (CmpDoReconcileNextHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140689BB8 (HvGetEffectiveLogSizeCapForHive.c)
 */

char __fastcall CmpIsHiveEligibleForLazyReconcile(unsigned int *a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  unsigned int v2; // r10d
  __int64 v3; // r11
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // rdx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v9; // r11

  if ( (a1[40] & 0x8001) != 0 || !a1[32] || CmpHoldLazyFlush )
    return 0;
  if ( !CmpUserPresent )
    return 1;
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_DWORD *)(v3 + 180) >= EffectiveLogSizeCapForHive )
    return 1;
  v4 = *(_DWORD *)(v3 + 168);
  v5 = v2;
  if ( v4 == 1 )
    return 1;
  v6 = v2;
  v7 = (_BYTE *)(v3 + 192);
  do
  {
    if ( v6 != v4 && *v7 == (_BYTE)v2 )
      ++v5;
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  if ( v5
    && (UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(),
        UnbiasedInterruptTime < *(_QWORD *)(v9 + 4144) + 10000000 * (unsigned __int64)(unsigned int)dword_140C01B10) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
