/*
 * XREFs of _GreGetRedirectionEvent@0 @ 0xEC466
 * Callers:
 *     _NtUserSignalRedirectionStartComplete@0 @ 0xEC422 (_NtUserSignalRedirectionStartComplete@0.c)
 *     _NtUserWaitForRedirectionStartComplete@0 @ 0x16B369 (_NtUserWaitForRedirectionStartComplete@0.c)
 * Callees:
 *     <none>
 */

int __stdcall GreGetRedirectionEvent()
{
  if ( g_pDwmState )
    return *((_DWORD *)g_pDwmState + 63);
  else
    return 0;
}
