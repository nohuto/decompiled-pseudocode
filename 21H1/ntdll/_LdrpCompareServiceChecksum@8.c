/*
 * XREFs of _LdrpCompareServiceChecksum@8 @ 0x4B2AA440
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

bool LdrpCompareServiceChecksum()
{
  _DWORD *RcConfig; // esi
  _DWORD *v1; // eax
  bool result; // al

  RcConfig = (_DWORD *)LdrpGetRcConfig(0, 1);
  result = 0;
  if ( RcConfig )
  {
    v1 = (_DWORD *)LdrpGetRcConfig(0, 0);
    if ( v1 )
    {
      if ( *RcConfig != -20054323 || *v1 != -20054323 || !memcmp(RcConfig + 7, v1 + 7, 0x10u) )
        return 1;
    }
  }
  return result;
}
