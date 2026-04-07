/*
 * XREFs of ?RemoveAllElements@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@QEAAXXZ @ 0x180053394
 * Callers:
 *     _dynamic_atexit_destructor_for__ColorCache::_cachedColors__ @ 0x180056CE0 (_dynamic_atexit_destructor_for__ColorCache--_cachedColors__.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::RemoveAllElements(void *a1)
{
  PVOID result; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = a1;
  while ( 1 )
  {
    RestartKey = 0LL;
    result = RtlEnumerateGenericTableWithoutSplaying(&ColorCache::_cachedColors, &RestartKey);
    if ( !result )
      break;
    RtlDeleteElementGenericTable(&ColorCache::_cachedColors, result);
  }
  return result;
}
