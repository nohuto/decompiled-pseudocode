/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C01442D0
 * Callers:
 *     <none>
 * Callees:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0144188 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

struct D3DKMT_GETPATHSMODALITY **__fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_(
        struct D3DKMT_GETPATHSMODALITY **a1,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  return a1;
}
