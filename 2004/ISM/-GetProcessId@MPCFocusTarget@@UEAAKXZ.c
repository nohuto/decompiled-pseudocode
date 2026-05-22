/*
 * XREFs of ?GetProcessId@MPCFocusTarget@@UEAAKXZ @ 0x18001C580
 * Callers:
 *     ?GetProcessId@MPCFocusTarget@@WEA@EAAKXZ @ 0x18004AF30 (-GetProcessId@MPCFocusTarget@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetProcessId(MPCFocusTarget *this)
{
  return *((unsigned int *)this + 14);
}
