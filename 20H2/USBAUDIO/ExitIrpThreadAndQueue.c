/*
 * XREFs of ExitIrpThreadAndQueue @ 0x1C0003790
 * Callers:
 *     DeviceStop @ 0x1C0022F60 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0023160 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x1C002BAB0 (CleanupPendingIrpQ.c)
 */

LONG_PTR __fastcall ExitIrpThreadAndQueue(__int64 a1)
{
  LONG_PTR result; // rax

  result = CleanupPendingIrpQ();
  if ( *(_QWORD *)(a1 + 688) )
  {
    *(_BYTE *)(a1 + 696) = 1;
    KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 656), 0, 1, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 688), Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(*(PVOID *)(a1 + 688));
    *(_QWORD *)(a1 + 688) = 0LL;
  }
  return result;
}
