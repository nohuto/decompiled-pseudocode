/*
 * XREFs of _IsSysEntryApiExtSupported@0 @ 0xF8F7A
 * Callers:
 *     _NtUserProcessConnect@8 @ 0x1B300 (_NtUserProcessConnect@8.c)
 * Callees:
 *     <none>
 */

int __stdcall IsSysEntryApiExtSupported()
{
  if ( ext_ms_win_moderncore_win32k_base_sysentry_l1 )
    return ext_ms_win_moderncore_win32k_base_sysentry_l1();
  else
    return -1073741637;
}
