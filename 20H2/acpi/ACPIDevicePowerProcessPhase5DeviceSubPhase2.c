/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B2F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001DEBC (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E180 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // r14
  unsigned int v3; // edi
  _OWORD *PoolWithTag; // rbp
  int v5; // edx
  void *v7; // r8
  __int64 v8; // r9
  void *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 result; // rax
  KIRQL v13; // al
  __int64 v14; // rcx
  KIRQL v15; // r12
  _OWORD *v16; // rax
  size_t v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // edx
  void *v21; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C00701BA;
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = 0;
  v7 = &unk_1C00701BA;
  v8 = 0x400000000000LL;
  *(_DWORD *)(a1 + 212) = 5;
  v9 = &unk_1C00701BA;
  if ( v1 )
  {
    v10 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(v1 + 568);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(void **)(v1 + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      74,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      5,
      v5,
      (__int64)v7,
      (__int64)v9);
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0
    || (v11 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 720), 1397904223LL, v7, v8)) == 0LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 960), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v14 = *(_QWORD *)(v1 + 648);
  v15 = v13;
  if ( v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v14 + 24) + 40LL, 0x4F706341u);
    if ( PoolWithTag )
    {
      v16 = *(_OWORD **)(v1 + 648);
      *PoolWithTag = *v16;
      PoolWithTag[1] = v16[1];
      v17 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(*(_QWORD *)(v1 + 648) + 32LL), v17);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
  if ( PoolWithTag )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 960), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v18 = AMLIAsyncEvalObject(v11, 0LL, 1u, PoolWithTag, ACPIDeviceCompleteGenericPhase, a1);
    v19 = *(_QWORD *)(v1 + 8);
    v20 = 0;
    v3 = v18;
    v21 = &unk_1C00701BA;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 568);
      v20 = 0;
      if ( (v19 & 0x400000000000LL) != 0 )
        v21 = *(void **)(v1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_qLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        10,
        75,
        (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
        a1,
        v3,
        v1,
        (__int64)v2,
        (__int64)v21);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  AMLIDereferenceHandleEx((__int64)v11);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_8;
  return result;
}
