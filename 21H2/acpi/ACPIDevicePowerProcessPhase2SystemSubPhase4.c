/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C0050840
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0051AC8 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase4(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  int v4; // ebp
  __int64 *v5; // rbp
  __int64 Pool2; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+74h] [rbp+Ch]

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      67,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      0);
  v3 = *(_DWORD *)(a1 + 104);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v3 != 1 || v4 != 5 || !Usb4ControlGranted )
    goto LABEL_13;
  v5 = AMLIGetNamedChild(*(__int64 **)(RootDeviceExtension + 760), 1129533279);
  if ( v5 )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1097884481LL);
    v13 = 0;
    v7 = Pool2;
    v8 = 2LL;
    v9 = 1LL;
    v14 = AcpiRootFeaturesGranted;
    *(_QWORD *)(Pool2 + 32) = &SB_OSC_UUID;
    v10 = (_QWORD *)(Pool2 + 56);
    *(_WORD *)(v7 + 2) = 3;
    *(_DWORD *)(v7 + 24) = 16;
    do
    {
      *((_WORD *)v10 - 7) = 1;
      *v10 = v9++;
      v10 += 5;
      --v8;
    }
    while ( v8 );
    *(_WORD *)(v7 + 122) = 3;
    *(_DWORD *)(v7 + 144) = 8;
    *(_QWORD *)(v7 + 152) = &v13;
    v11 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
    v1 = AMLIAsyncEvalObject(v5, v11, 4u, v7, ACPIDeviceCompleteOscReevalPhase, a1);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x44u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1);
  result = 259LL;
  if ( v1 != 259 )
  {
LABEL_13:
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
    return 0LL;
  }
  return result;
}
