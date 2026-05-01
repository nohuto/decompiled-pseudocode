/*
 * XREFs of ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180055AC4
 * Callers:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18001B10C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002F340 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180053A80 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x1800558B0 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180055A3C (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_8d958b4643e24e2ce219100e0108e65c___ @ 0x1800922D4 (CDelayIAMOperations--AddOperation__lambda_8d958b4643e24e2ce219100e0108e65c___.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x1801428F4 (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x1801429F8 (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x180142AFC (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x180142C30 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180186A08 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802AC32C (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsValidWindow(CApplicationManagerUtility *this, HWND a2)
{
  int v3; // eax
  char v4; // bl

  SetLastError(0);
  v3 = IsWindowInDestroy(this);
  v4 = 0;
  if ( !v3 )
    return GetLastError() != 1400;
  return v4;
}
