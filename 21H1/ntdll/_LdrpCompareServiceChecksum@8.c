/*
 * XREFs of _LdrpCompareServiceChecksum@8 @ 0x4B2AA440
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

bool __fastcall LdrpCompareServiceChecksum(void *a1, void *a2)
{
  _DWORD *RcConfig; // esi
  _DWORD *v4; // eax
  bool result; // al
  size_t v6; // [esp-4h] [ebp-10h]

  RcConfig = (_DWORD *)LdrpGetRcConfig(a1, 0, 1);
  result = 0;
  if ( RcConfig )
  {
    v4 = (_DWORD *)LdrpGetRcConfig(a2, 0, 0);
    if ( v4 )
    {
      if ( *RcConfig != -20054323 )
        return 1;
      if ( *v4 != -20054323 )
        return 1;
      LODWORD(v6) = 16;
      if ( !memcmp(RcConfig + 7, v4 + 7, v6) )
        return 1;
    }
  }
  return result;
}
