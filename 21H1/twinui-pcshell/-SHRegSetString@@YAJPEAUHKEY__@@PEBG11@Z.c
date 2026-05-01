/*
 * XREFs of ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x180448A8C
 * Callers:
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x180448E00 (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18017C874 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetString(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, BYTE *a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&a4[2 * v4] );
  if ( v4 >= 0x7FFFFFFF )
    result = 534LL;
  else
    result = _RegSetKeyValueWithSDDL(a1, 0LL, L"PreviousFailure_SourceFile", 1u, a4, 2 * (int)v4 + 2);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
