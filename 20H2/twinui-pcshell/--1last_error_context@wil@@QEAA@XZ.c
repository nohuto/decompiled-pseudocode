/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x180138628
 * Callers:
 *     ?IsDeviceAADJoined@@YA_NXZ @ 0x1800970D0 (-IsDeviceAADJoined@@YA_NXZ.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800B7E0C (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
