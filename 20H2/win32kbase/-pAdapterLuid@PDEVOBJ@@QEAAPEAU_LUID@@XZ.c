/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0011700
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C000E7DC (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C00115B0 (DxgkEngFindViewDesktopPosition.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C0011660 (DrvGetWDDMAdapterInfo.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C01488A0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     NtHWCursorUpdatePointer @ 0x1C014BE10 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
  if ( v2 == -4 )
  {
    if ( (*(_DWORD *)(v1 + 40) & 0x20000) == 0 )
      return (struct _LUID *)(v2 + 248);
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1800) + 40LL) + 2576LL) + 248LL);
  }
  else
  {
    if ( v2 && (*(_DWORD *)(v1 + 40) & 0x20000) == 0 )
      return (struct _LUID *)(v2 + 248);
    return 0LL;
  }
}
