/*
 * XREFs of ReadFileInfo @ 0x1C001422C
 * Callers:
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C001518C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTO.c)
 * Callees:
 *     Win32FileInfo @ 0x1C0014298 (Win32FileInfo.c)
 */

__int64 __fastcall ReadFileInfo(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx

  v2 = 0;
  if ( !a2 )
    return 1LL;
  while ( (unsigned int)Win32FileInfo(*(PCWSTR *)(*a1 + 80)) )
  {
    v5 = *a1;
    ++v2;
    ++a1;
    *(_DWORD *)(v5 + 24) = 0;
    if ( v2 >= a2 )
      return 1LL;
  }
  return 0LL;
}
