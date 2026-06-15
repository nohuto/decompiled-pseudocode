/*
 * XREFs of ?CheckDataFlowAccess@CProcess@@UEAA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180014E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CProcess::CheckDataFlowAccess(CProcess *this, unsigned int a2)
{
  char v2; // r8

  v2 = 1;
  if ( a2 > 1 || *((int *)this + (int)a2 + 58) < 0 )
    return 0;
  return v2;
}
