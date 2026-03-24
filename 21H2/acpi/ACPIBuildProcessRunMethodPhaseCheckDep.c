/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001FB30
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A6D0 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rdx
  signed __int32 v10; // ecx
  KIRQL v11; // di
  int v12; // edx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // [rsp+40h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 88) = 0LL;
  v5 = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( (*(_BYTE *)(v4 + 960) & 0x20) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 )
    {
      AMLIDereferenceHandleEx(v14);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v15 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 1346716767LL, a3, a4);
    *(_QWORD *)(a1 + 56) = v15;
    if ( v15 )
    {
      v5 = AMLIAsyncEvalObject(v15, a1 + 88, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v4 + 960), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = &unk_1C00701BA;
  v9 = &unk_1C00701BA;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(void **)(v4 + 568);
    if ( (v7 & 0x400000000000LL) != 0 )
      v9 = *(void **)(v4 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      6,
      61,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v5,
      v4,
      (__int64)v8,
      v16);
  }
  if ( v5 != 259 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    if ( v5 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v5;
        KeBugCheckEx(0xA5u, 3uLL, 0LL, v5, 0LL);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v10, 1);
      v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v12 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v12;
      if ( (v12 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v12 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v11);
    }
  }
  return (unsigned int)v5;
}
