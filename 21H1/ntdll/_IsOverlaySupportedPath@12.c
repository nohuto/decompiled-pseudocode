/*
 * XREFs of _IsOverlaySupportedPath@12 @ 0x4B2B8E4D
 * Callers:
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 * Callees:
 *     _IsSystemRootPath@8 @ 0x4B2B8E93 (_IsSystemRootPath@8.c)
 *     _IsProgramFilesPath@8 @ 0x4B2DAE59 (_IsProgramFilesPath@8.c)
 */

int __fastcall IsOverlaySupportedPath(wchar_t *a1, int a2, _DWORD *a3)
{
  *a3 = 0;
  if ( IsSystemRootPath(a1) >= 0 )
  {
    *a3 = L"\\Windows";
    return 0;
  }
  if ( IsProgramFilesPath(a1, a2) >= 0 )
  {
    *a3 = L"\\Program Files";
    return 0;
  }
  return -1073741637;
}
