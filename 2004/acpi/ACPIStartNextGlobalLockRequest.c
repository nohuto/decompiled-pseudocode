/*
 * XREFs of ACPIStartNextGlobalLockRequest @ 0x1C000E720
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C000F0E4 (ACPIReleaseGlobalLock.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0025B50 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E64C (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C005C498 (ACPIReleaseHardwareGlobalLock.c)
 */

void ACPIStartNextGlobalLockRequest()
{
  int v0; // edx
  KIRQL v1; // di
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  IRP **v5; // rbx
  IRP *v6; // rcx

  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v2 = (_QWORD *)((char *)AcpiInformation + 48);
  v3 = (_QWORD *)*((_QWORD *)AcpiInformation + 6);
  if ( v3 == (_QWORD *)((char *)AcpiInformation + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        3,
        18,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids);
    }
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
  }
  else
  {
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
    v5 = (IRP **)(v3 - 2);
    *((_QWORD *)AcpiInformation + 9) = v5;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v5 + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        3u,
        0x13u,
        (__int64)&WPP_46fdfefd1e063d3591824ef1bcf3110e_Traceguids,
        v5,
        *v5);
    if ( *((_WORD *)v5 + 4) == 1 )
    {
      v6 = *v5;
      v6->IoStatus.Status = 0;
      IofCompleteRequest(v6, 0);
    }
    else if ( *((_WORD *)v5 + 4) == 2 )
    {
      ((void (__fastcall *)(IRP **))*v5)(v5);
    }
  }
}
