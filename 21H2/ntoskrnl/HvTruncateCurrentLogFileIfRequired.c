/*
 * XREFs of HvTruncateCurrentLogFileIfRequired @ 0x1406FC414
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x1406FC61C (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406FC688 (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r11
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned __int64 v9; // r8

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 1) == 0 && (result & 0x8000) == 0 )
  {
    v2 = *(unsigned int *)(a1 + 164);
    if ( (_DWORD)v2 )
    {
      if ( *(_QWORD *)(a1 + 8 * v2 + 1536) )
      {
        v3 = HvpLogTypeToLogArrayIndex((unsigned int)v2);
        v5 = *(_QWORD *)(v4 + 8LL * v3 + 1800);
        result = HvGetEffectiveLogSizeCapForHive(v4, v6, v7);
        if ( v5 > (unsigned int)result )
        {
          v9 = *(unsigned int *)(v8 + 176);
          if ( v5 > v9 )
            return CmpDoFileSetSizeEx(v8, (unsigned int)v2, v9, 0LL);
        }
      }
    }
  }
  return result;
}
