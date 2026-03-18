/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x1406E9C5C
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140689BB8 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140689DAC (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(unsigned int *a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v3; // r11
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r11
  unsigned int v7; // edx

  if ( a1[42] == 1 )
  {
    HvpLogTypeToLogArrayIndex(1);
    result = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_QWORD *)&a1[2 * v6 + 452] <= (unsigned __int64)(unsigned int)result )
      return result;
    v7 = 1;
    return CmpDoFileSetSizeEx((__int64)a1, v7, 0LL, 0);
  }
  HvpLogTypeToLogArrayIndex(4);
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)&a1[2 * v3 + 452] > (unsigned __int64)EffectiveLogSizeCapForHive )
    CmpDoFileSetSizeEx((__int64)a1, 4u, 0LL, 0);
  HvpLogTypeToLogArrayIndex(5);
  result = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)&a1[2 * v5 + 452] > (unsigned __int64)(unsigned int)result )
  {
    v7 = 5;
    return CmpDoFileSetSizeEx((__int64)a1, v7, 0LL, 0);
  }
  return result;
}
