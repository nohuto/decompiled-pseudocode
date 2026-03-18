/*
 * XREFs of DereferenceDeviceResetInterface @ 0x1C00416F8
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0077CC0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C00788B0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DereferenceDeviceResetInterface(__int64 a1)
{
  void (__fastcall *v1)(_QWORD); // rax
  __int64 result; // rax

  v1 = *(void (__fastcall **)(_QWORD))(a1 + 24);
  if ( v1 )
    v1(*(_QWORD *)(a1 + 8));
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
