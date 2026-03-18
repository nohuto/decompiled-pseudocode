/*
 * XREFs of HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0025FF8
 * Callers:
 *     HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x1C001D040 (HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001D070 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C001D0D0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001D120 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30 @ 0x1C001E720 (HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteDefaultEndpointFromUCX(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*a1 + 456LL))(*(_QWORD *)(*a1 + 248LL), a1[3], a1[11]);
  a1[11] = 0LL;
  return result;
}
