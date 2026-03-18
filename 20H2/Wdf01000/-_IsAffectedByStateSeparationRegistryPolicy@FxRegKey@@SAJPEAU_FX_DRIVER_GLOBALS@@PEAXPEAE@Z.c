/*
 * XREFs of ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x1C0060360
 * Callers:
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0004440 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001CA80 (memset.c)
 */

__int64 __fastcall FxRegKey::_IsAffectedByStateSeparationRegistryPolicy(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *Key,
        unsigned __int8 *IsAffectedResult)
{
  FX_POOL **v3; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  FX_POOL **v9; // rax
  unsigned int keyNameInfoSize; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING systemMachineHiveRoot; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING softwareMachineHiveRoot; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING fullKeyPath; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING bspdriversMachineHiveRoot; // [rsp+68h] [rbp-98h] BYREF
  _KEY_NAME_INFORMATION keyNameInfo; // [rsp+78h] [rbp-88h] BYREF
  wchar_t bspdriversMachineHiveRoot_buffer[32]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t systemMachineHiveRoot_buffer[28]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t softwareMachineHiveRoot_buffer[28]; // [rsp+F8h] [rbp-8h] BYREF
  void *Caller; // [rsp+168h] [rbp+68h]

  v3 = 0LL;
  keyNameInfo = 0LL;
  keyNameInfoSize = 0;
  systemMachineHiveRoot.Buffer = systemMachineHiveRoot_buffer;
  softwareMachineHiveRoot.Buffer = softwareMachineHiveRoot_buffer;
  *(_QWORD *)&systemMachineHiveRoot.Length = 3407922LL;
  *(_QWORD *)&softwareMachineHiveRoot.Length = 3670070LL;
  *(_QWORD *)&bspdriversMachineHiveRoot.Length = 3932218LL;
  bspdriversMachineHiveRoot.Buffer = bspdriversMachineHiveRoot_buffer;
  fullKeyPath = 0LL;
  wcscpy(systemMachineHiveRoot_buffer, L"\\REGISTRY\\MACHINE\\SYSTEM\\");
  wcscpy(softwareMachineHiveRoot_buffer, L"\\REGISTRY\\MACHINE\\SOFTWARE\\");
  wcscpy(bspdriversMachineHiveRoot_buffer, L"\\REGISTRY\\MACHINE\\BSPDRIVERS\\");
  if ( FxDriverGlobals && Key && IsAffectedResult )
  {
    *IsAffectedResult = 0;
    v7 = ZwQueryKey(Key, KeyNameInformation, &keyNameInfo, 8u, &keyNameInfoSize);
    v8 = v7;
    if ( v7 != -2147483643 )
    {
      if ( v7 >= 0 )
        return (unsigned int)-1073741823;
      return (unsigned int)v8;
    }
    keyNameInfoSize += 2;
    v9 = FxPoolAllocator(
           FxDriverGlobals,
           &FxDriverGlobals->FxPoolFrameworks,
           1u,
           keyNameInfoSize,
           FxDriverGlobals->Tag,
           Caller);
    v3 = v9;
    if ( !v9 )
      return (unsigned int)-1073741801;
    memset(v9, 0, keyNameInfoSize);
    v8 = ZwQueryKey(Key, KeyNameInformation, v3, keyNameInfoSize, &keyNameInfoSize);
    if ( v8 >= 0 )
    {
      RtlInitUnicodeString(&fullKeyPath, (PCWSTR)v3 + 2);
      if ( RtlPrefixUnicodeString(&systemMachineHiveRoot, &fullKeyPath, 1u)
        || RtlPrefixUnicodeString(&softwareMachineHiveRoot, &fullKeyPath, 1u)
        || RtlPrefixUnicodeString(&bspdriversMachineHiveRoot, &fullKeyPath, 1u) )
      {
        *IsAffectedResult = 1;
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v3 )
    FxPoolFree((FX_POOL_TRACKER *)v3);
  return (unsigned int)v8;
}
