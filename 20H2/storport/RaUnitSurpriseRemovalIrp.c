/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x1C00742F0
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000BA18 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006380 (RaidIsUnitControlSupported.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 *     StorpLogPerUnitStatistics @ 0x1C000CA80 (StorpLogPerUnitStatistics.c)
 *     RaCallMiniportUnitControl @ 0x1C001859C (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0019120 (RaUnitWaitForRemoveLock.c)
 *     McTemplateK0zqjuuujsssztt_EtwWriteTransfer @ 0x1C00199C8 (McTemplateK0zqjuuujsssztt_EtwWriteTransfer.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C0019F58 (RaidUnitConvertToZombieUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001A018 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x1C001A07C (RaidUnitCancelPendingRequests.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001B240 (RaidUnitUnRegisterInterfaces.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // ebx
  void (__fastcall *v5)(_QWORD, _QWORD); // rax
  const wchar_t *v6; // r10
  __int64 v7; // rdi

  v2 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = 5;
  v5 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 3352);
  if ( v5 )
  {
    v5(0LL, 0LL);
    *(_QWORD *)(a1 + 3352) = 0LL;
  }
  if ( (unsigned int)(v2 - 6) > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests(a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
    RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 320LL);
  if ( (byte_1C0069845 & 1) != 0 )
  {
    v6 = (const wchar_t *)&unk_1C005B620;
    v7 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v7 + 5208) )
      v6 = *(const wchar_t **)(v7 + 5208);
    McTemplateK0zqjuuujsssztt_EtwWriteTransfer(
      a1 + 169,
      a1 + 160,
      a1 + 1976,
      *(const wchar_t **)(v7 + 4864),
      *(_DWORD *)(v7 + 56),
      v7 + 5192,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v6,
      (*(_BYTE *)(a1 + 450) & 0x40) != 0,
      *(_BYTE *)(a1 + 450) >> 7);
  }
  StorpLogPerUnitStatistics(a1, 52);
  RaUnitReleaseRemoveLock(a1);
  RaUnitWaitForRemoveLock(a1);
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
