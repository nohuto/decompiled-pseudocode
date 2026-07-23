/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x1406202D4
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x1406FC61C (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406FC688 (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v5; // r11
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rdx

  if ( *(_DWORD *)(a1 + 164) == 1 )
  {
    HvpLogTypeToLogArrayIndex(1LL);
    result = HvGetEffectiveLogSizeCapForHive(a1, v10, v11);
    if ( *(_QWORD *)(a1 + 8 * v12 + 1800) <= (unsigned __int64)(unsigned int)result )
      return result;
    v13 = 1LL;
    return CmpDoFileSetSizeEx(a1, v13, 0LL, 0LL);
  }
  HvpLogTypeToLogArrayIndex(4LL);
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1, v2, v3);
  if ( *(_QWORD *)(a1 + 8 * v5 + 1800) > (unsigned __int64)EffectiveLogSizeCapForHive )
    CmpDoFileSetSizeEx(a1, 4LL, 0LL, 0LL);
  HvpLogTypeToLogArrayIndex(5LL);
  result = HvGetEffectiveLogSizeCapForHive(a1, v6, v7);
  if ( *(_QWORD *)(a1 + 8 * v9 + 1800) > (unsigned __int64)(unsigned int)result )
  {
    v13 = 5LL;
    return CmpDoFileSetSizeEx(a1, v13, 0LL, 0LL);
  }
  return result;
}
