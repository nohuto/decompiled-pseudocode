/*
 * XREFs of ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0014DF4
 * Callers:
 *     imp_WdfRegistryQueryULong @ 0x1C0014D20 (imp_WdfRegistryQueryULong.c)
 *     ?ReadRegistrySleepstudyEnabled@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C002008C (-ReadRegistrySleepstudyEnabled@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C0027EF4 (FxRegistrySettingsInitialize.c)
 *     FxOverrideDefaultVerifierSettings @ 0x1C0028478 (FxOverrideDefaultVerifierSettings.c)
 *     GetEnhancedVerifierOptions @ 0x1C0028C04 (GetEnhancedVerifierOptions.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C0028D68 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0028F20 (-FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C002ED04 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C003227C (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C006BA84 (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryStateSeparationDetection @ 0x1C006BC74 (FxVerifierQueryStateSeparationDetection.c)
 *     FxVerifierQueryTrackPower @ 0x1C006BD1C (FxVerifierQueryTrackPower.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C0084C2C (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     ?ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0089C88 (-ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FxRegKey::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS result; // eax
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  result = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
  {
    if ( *(_DWORD *)&buffer[4] == 4 )
    {
      if ( result >= 0 )
        *Value = *(_DWORD *)&buffer[12];
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
