/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x1406645B0
 * Callers:
 *     CmpDoReconcileNextHive @ 0x140664660 (CmpDoReconcileNextHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1406FC61C (HvGetEffectiveLogSizeCapForHive.c)
 */

char __fastcall CmpIsHiveEligibleForLazyReconcile(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  unsigned int v4; // r10d
  __int64 v5; // r11
  int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v11; // r11

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 || !*(_DWORD *)(a1 + 128) || CmpHoldLazyFlush )
    return 0;
  if ( !CmpUserPresent )
    return 1;
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1, a2, a3);
  if ( *(_DWORD *)(v5 + 176) >= EffectiveLogSizeCapForHive )
    return 1;
  v6 = *(_DWORD *)(v5 + 164);
  v7 = v4;
  if ( v6 == 1 )
    return 1;
  v8 = v4;
  v9 = v4;
  do
  {
    if ( v8 != v6 && *(_BYTE *)(v9 + v5 + 188) == (_BYTE)v4 )
      ++v7;
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  if ( v7
    && (UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(),
        UnbiasedInterruptTime < *(_QWORD *)(v11 + 4184) + 10000000 * (unsigned __int64)(unsigned int)dword_140C004C0) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
