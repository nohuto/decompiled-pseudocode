/*
 * XREFs of _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD
 * Callers:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 *     _LdrpWriteBackProtectedDelayLoad@20 @ 0x4B2CFDFF (_LdrpWriteBackProtectedDelayLoad@20.c)
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _LdrpDoPostSnapWork@4 @ 0x4B2D0C67 (_LdrpDoPostSnapWork@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlValidateUserCallTarget@8 @ 0x4B363B20 (_RtlValidateUserCallTarget@8.c)
 * Callees:
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

BOOL __stdcall LdrControlFlowGuardEnforcedWithExportSuppression()
{
  int v0; // eax
  BOOL result; // eax
  _DWORD v2[6]; // [esp+Ch] [ebp-1Ch] BYREF

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  result = 0;
  if ( v0 )
  {
    qmemcpy(v2, &unk_4B3A92E8, sizeof(v2));
    if ( (BYTE1(v2[1]) & 3) == 3 )
      return 1;
  }
  return result;
}
