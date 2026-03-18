/*
 * XREFs of ?ProbeAndReadDesignVector@@YGKPAUtagDESIGNVECTOR@@0@Z @ 0x211FC1
 * Callers:
 *     _NtGdiAddFontResourceW@24 @ 0xDC320 (_NtGdiAddFontResourceW@24.c)
 *     _NtGdiRemoveFontResourceW@24 @ 0x213CF7 (_NtGdiRemoveFontResourceW@24.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

size_t __fastcall ProbeAndReadDesignVector(_DWORD *a1, ULONG a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // eax
  size_t v5; // esi
  const void *v6; // edx

  v2 = (_DWORD *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v2 = (_DWORD *)_MmUserProbeAddress;
  *a1 = *v2;
  a1[1] = v2[1];
  v3 = a1[1];
  if ( v3 > 0x10 )
    return 0;
  v5 = 4 * v3;
  if ( v3 )
  {
    v6 = (const void *)(a2 + 8);
    if ( (unsigned int)v6 >= _MmUserProbeAddress )
      v6 = (const void *)_MmUserProbeAddress;
    memcpy(a1 + 2, v6, v5);
  }
  return v5 + 8;
}
