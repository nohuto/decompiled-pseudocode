/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00B69CC
 * Callers:
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     bDynamicModeChange @ 0x1C0099854 (bDynamicModeChange.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00B68D0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00B6BAC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01485D0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1720);
  else
    v3 = *(_QWORD *)(v2 + 2152);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
