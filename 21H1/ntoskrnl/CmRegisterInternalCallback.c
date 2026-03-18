/*
 * XREFs of CmRegisterInternalCallback @ 0x1405CC2B0
 * Callers:
 *     VrpIncrementSiloCount @ 0x1405CC20C (VrpIncrementSiloCount.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1406CD078 (CmpRegisterCallbackInternal.c)
 */

__int64 __fastcall CmRegisterInternalCallback(__int64 a1, int a2)
{
  if ( VrpDriverObject )
    return CmpRegisterCallbackInternal((unsigned int)VrpRegistryCallback, 0, a2, 0, 1, (__int64)&VrpCallbackCookie);
  else
    return 3221225713LL;
}
