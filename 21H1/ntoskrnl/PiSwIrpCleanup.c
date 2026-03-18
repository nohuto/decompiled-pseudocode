/*
 * XREFs of PiSwIrpCleanup @ 0x140754680
 * Callers:
 *     PiSwDispatch @ 0x140753730 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x14073464C (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x140734680 (PiSwFindSwDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1)
{
  IRP *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  char v5; // si
  const wchar_t *v6; // rbp
  struct _DMA_ADAPTER *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_11;
  v4 = *(_QWORD *)(a1 + 112);
  v5 = 0;
  while ( 1 )
  {
    v6 = *(const wchar_t **)(v4 + 8);
    if ( wcsnicmp(v6, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v6);
    if ( !SwDevice )
      goto LABEL_11;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_6;
    v4 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v6);
  v7 = (struct _DMA_ADAPTER *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
  if ( v7 )
    HalPutDmaAdapter(v7);
  else
LABEL_11:
    v5 = 1;
LABEL_6:
  v8 = *(_QWORD *)(a1 + 144);
  if ( v8 && _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL) )
  {
    v1 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v5 )
  {
    PiSwCloseDescendants(a1 + 72);
    PiSwCloseDevice((PVOID)a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( v1 )
  {
    v1->IoStatus.Information = 0LL;
    v1->IoStatus.Status = -1073741536;
    IofCompleteRequest(v1, 0);
  }
}
