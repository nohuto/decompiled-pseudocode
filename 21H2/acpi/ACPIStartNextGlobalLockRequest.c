/*
 * XREFs of ACPIStartNextGlobalLockRequest @ 0x1C005D54C
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C00239A4 (ACPIReleaseGlobalLock.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0030DD0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0052650 (WPP_RECORDER_SF_qq.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C005D504 (ACPIReleaseHardwareGlobalLock.c)
 */

void ACPIStartNextGlobalLockRequest()
{
  KIRQL v0; // di
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx
  __int64 v3; // rax
  IRP **v4; // rbx
  IRP *v5; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v1 = (_QWORD *)((char *)AcpiInformation + 48);
  v2 = (_QWORD *)*((_QWORD *)AcpiInformation + 6);
  if ( v2 == (_QWORD *)((char *)AcpiInformation + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x12u,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids);
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v0);
  }
  else
  {
    if ( (_QWORD *)v2[1] != v1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = v3;
    *(_QWORD *)(v3 + 8) = v1;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v0);
    v4 = (IRP **)(v2 - 2);
    *((_QWORD *)AcpiInformation + 9) = v4;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v4 + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        3u,
        0x13u,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        v4,
        *v4);
    if ( *((_WORD *)v4 + 4) == 1 )
    {
      v5 = *v4;
      v5->IoStatus.Status = 0;
      IofCompleteRequest(v5, 0);
    }
    else if ( *((_WORD *)v4 + 4) == 2 )
    {
      ((void (__fastcall *)(IRP **))*v4)(v4);
    }
  }
}
