/*
 * XREFs of ?GetCurrentModuleName@details@wil@@YGPBDXZ @ 0x10002160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z @ 0x10002084 (-GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z.c)
 */

const char *wil::details::GetCurrentModuleName()
{
  unsigned int v1; // [esp+0h] [ebp-4h]

  if ( !`wil::details::GetCurrentModuleName'::`2'::s_fModuleValid )
  {
    wil::details::GetModuleInformation(
      (LPCWSTR)wil::details::RecordFailFast,
      0,
      &`wil::details::GetCurrentModuleName'::`2'::s_szModule,
      (char *)0x40,
      v1);
    `wil::details::GetCurrentModuleName'::`2'::s_fModuleValid = 1;
  }
  return (const char *)&`wil::details::GetCurrentModuleName'::`2'::s_szModule;
}
