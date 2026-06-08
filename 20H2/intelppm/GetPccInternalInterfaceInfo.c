/*
 * XREFs of GetPccInternalInterfaceInfo @ 0x1C00326B4
 * Callers:
 *     AcquirePccInterface @ 0x1C00237F8 (AcquirePccInterface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPccInternalInterfaceInfo(__int64 a1)
{
  __int64 v1; // rax
  __int16 v3; // [rsp+20h] [rbp-28h]
  __int16 v4; // [rsp+28h] [rbp-20h]

  dword_1C001C858 = -1;
  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v4 = 1;
  v3 = 88;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v1,
           &GUID_PCC_INTERFACE_INTERNAL,
           &unk_1C001C838,
           v3,
           v4,
           0LL);
}
