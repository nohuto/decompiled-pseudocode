/*
 * XREFs of PipAddDevicesToBootDriver @ 0x140B4F76C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 */

NTSTATUS __fastcall PipAddDevicesToBootDriver(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v5; // [rsp+20h] [rbp-28h]
  void *v6; // [rsp+30h] [rbp-18h]

  return PipApplyFunctionToServiceInstances(a1, (UNICODE_STRING *)(*(_QWORD *)(a1 + 48) + 24LL), a3, a4, v5, a1, v6);
}
