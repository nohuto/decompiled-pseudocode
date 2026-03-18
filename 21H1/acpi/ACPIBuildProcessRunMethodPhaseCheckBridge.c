/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0028970
 * Callers:
 *     <none>
 * Callees:
 *     IsPciBusAsync @ 0x1C00173B0 (IsPciBusAsync.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A470 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckBridge(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ecx
  int v4; // edi
  signed __int32 v5; // ecx
  KIRQL v6; // bl
  int v7; // edx
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 84);
  v4 = 0;
  if ( (v3 & 1) != 0 && (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
LABEL_3:
    v5 = *(_DWORD *)(a1 + 32);
    if ( v4 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v4 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v4;
        KeBugCheckEx(0xA5u, 3uLL, 0LL, v4, 0LL);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v5, 1);
      v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v7 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v7;
      if ( (v7 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v7 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
    }
    return (unsigned int)v4;
  }
  *(_DWORD *)(a1 + 32) = 7;
  if ( (v3 & 0x40) == 0 )
    goto LABEL_3;
  *(_DWORD *)(a1 + 128) = 0;
  v9 = IsPciBusAsync(
         *(volatile signed __int32 **)(v1 + 720),
         (__int64)ACPIBuildCompleteMustSucceed,
         a1,
         (_BYTE *)(a1 + 128));
  v10 = *(_QWORD *)(v1 + 8);
  v4 = v9;
  v11 = &unk_1C00701BA;
  v12 = &unk_1C00701BA;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(void **)(v1 + 568);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(void **)(v1 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x3Au,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v4,
      v1,
      (__int64)v11,
      (__int64)v12);
  result = 259LL;
  if ( v4 != 259 )
    goto LABEL_3;
  return result;
}
