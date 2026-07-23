/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x1408E8010
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PoFxIdleDevice @ 0x14036D564 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036D6E4 (PoFxActivateDevice.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     PopFxReleaseDevice @ 0x14056A950 (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405746F0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxUpdateVetoMaskWork(__int64 P)
{
  __int64 v1; // rbp
  __int64 *v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(P + 16);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
  if ( byte_140C24778 )
  {
    v3 = (__int64 *)qword_140C24770;
    if ( *(__int64 **)qword_140C24770 != &qword_140C24768 )
      __fastfail(3u);
    *(_QWORD *)P = &qword_140C24768;
    *(_QWORD *)(P + 8) = v3;
    *v3 = P;
    qword_140C24770 = P;
  }
  else
  {
    ++dword_140C2477C;
    KeResetEvent(&stru_140C24780);
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopFxUpdateDripsConstraintContext,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
    KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
    PoFxActivateDevice(v4);
    PopPepUpdateDripsDeviceVetoMask(v1, *(_DWORD *)(P + 24));
    PoFxIdleDevice(v4);
    PopFxReleaseDevice(v1);
    ExFreePoolWithTag((PVOID)P, 0x4D584650u);
    ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxUpdateDripsConstraintContext, 0LL);
    if ( !--dword_140C2477C )
      KeSetEvent(&stru_140C24780, 0, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxUpdateDripsConstraintContext);
  return KeAbPostRelease((ULONG_PTR)&PopFxUpdateDripsConstraintContext);
}
