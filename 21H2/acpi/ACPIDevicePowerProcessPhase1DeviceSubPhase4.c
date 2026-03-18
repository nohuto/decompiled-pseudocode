/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C0007F80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C00080D4 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C0008168 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rax
  char v3; // r8
  __int64 v4; // rbx
  void *v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // bl
  __int64 v10; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C006FB8B;
  v3 = 0;
  v4 = a1 + 216;
  v6 = &unk_1C006FB8B;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(void **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      10,
      61,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      v3,
      (__int64)v2,
      v10);
  }
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  FreeDataBuffs(v4, 1LL);
  *(_OWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  ACPIDevicePowerEnumerateAssociatedPowerNodes(a1, ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes, a1);
  *(_DWORD *)(v1 + 544) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 384);
  *(_DWORD *)(v1 + 384) = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  ACPIDeviceCompletePhase3Common(a1 + 208, 0LL);
  return 0LL;
}
