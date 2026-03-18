/*
 * XREFs of CmRegisterInternalCallback @ 0x1405CFAE4
 * Callers:
 *     VrpIncrementSiloCount @ 0x1405CFA40 (VrpIncrementSiloCount.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1406C2298 (CmpRegisterCallbackInternal.c)
 */

__int64 __fastcall CmRegisterInternalCallback(__int64 a1, int a2)
{
  if ( VrpDriverObject )
    return CmpRegisterCallbackInternal((unsigned int)VrpRegistryCallback, 0, a2, 0, 1, (__int64)&VrpCallbackCookie);
  else
    return 3221225713LL;
}
