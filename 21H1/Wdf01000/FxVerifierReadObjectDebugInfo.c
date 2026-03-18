/*
 * XREFs of FxVerifierReadObjectDebugInfo @ 0x1C0058448
 * Callers:
 *     FxVerifierGetObjectDebugInfo @ 0x1C0058104 (FxVerifierGetObjectDebugInfo.c)
 * Callees:
 *     FxVerifyAllocateDebugInfo @ 0x1C00585A8 (FxVerifyAllocateDebugInfo.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C005F744 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0060F4C (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 */

__int64 __fastcall FxVerifierReadObjectDebugInfo(
        void *Key,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObjectDebugInfo **Info,
        const wchar_t *KeyName,
        FxObjectDebugInfoFlags DebugFlag,
        wchar_t *DefaultSettings)
{
  int v9; // eax
  int DebugInfo; // ebx
  PVOID Value; // rdi
  unsigned int length; // [rsp+40h] [rbp-20h] BYREF
  unsigned int type; // [rsp+44h] [rbp-1Ch] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-18h] BYREF

  length = 0;
  type = 7;
  valueName = 0LL;
  RtlInitUnicodeString(&valueName, KeyName);
  v9 = FxRegKey::_QueryValue(FxDriverGlobals, Key, &valueName, 0, 0LL, &length, &type);
  DebugInfo = v9;
  if ( v9 != -2147483643 && v9 != -1073741789 )
    goto LABEL_9;
  Value = ExAllocatePoolWithTag(PagedPool, length, FxDriverGlobals->Tag);
  if ( Value )
  {
    DebugInfo = FxRegKey::_QueryValue(FxDriverGlobals, Key, &valueName, length, Value, &length, &type);
    if ( DebugInfo >= 0 )
    {
      DebugInfo = FxRegKey::_VerifyMultiSzString(FxDriverGlobals, &valueName, (wchar_t *)Value, length);
      if ( DebugInfo >= 0 )
        DebugInfo = FxVerifyAllocateDebugInfo(Info, (const wchar_t *)Value, FxDriverGlobals, DebugFlag);
    }
    ExFreePoolWithTag(Value, 0);
LABEL_9:
    if ( DebugInfo >= 0 )
      return (unsigned int)DebugInfo;
    goto LABEL_10;
  }
  DebugInfo = -1073741664;
LABEL_10:
  if ( DefaultSettings )
    return (unsigned int)FxVerifyAllocateDebugInfo(Info, DefaultSettings, FxDriverGlobals, DebugFlag);
  return (unsigned int)DebugInfo;
}
