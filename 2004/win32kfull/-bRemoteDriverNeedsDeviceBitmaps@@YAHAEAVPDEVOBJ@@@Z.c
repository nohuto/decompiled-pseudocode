/*
 * XREFs of ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0114EA4
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0018F9C (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0114D58 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bRemoteDriverNeedsDeviceBitmaps(struct PDEVOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 3440LL)
    && (*(_DWORD *)(*(_QWORD *)a1 + 2128LL) & 0x400) != 0
    && (!g_pDwmState || !(unsigned int)UserIsRemoteAndNotDisconnectConnection()) )
  {
    return 1;
  }
  return v1;
}
