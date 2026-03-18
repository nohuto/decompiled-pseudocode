/*
 * XREFs of PiSwIrpCleanup @ 0x140953700
 * Callers:
 *     PiSwDispatch @ 0x140764DB0 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x14056370C (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PiSwFindSwDevice @ 0x140767130 (PiSwFindSwDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwCloseDescendants @ 0x140811C50 (PiSwCloseDescendants.c)
 *     PiSwCloseDevice @ 0x14095341C (PiSwCloseDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  char v7; // si
  __int64 SwDevice; // rax
  const wchar_t *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpClose_Start,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_12;
  v6 = *(_QWORD *)(a1 + 112);
  v7 = 0;
  while ( 1 )
  {
    v9 = *(const wchar_t **)(v6 + 8);
    if ( wcsnicmp(v9, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v9);
    if ( !SwDevice )
      goto LABEL_12;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_13;
    v6 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v9);
  v10 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
  if ( v10 )
    ObfDereferenceObject(v10);
  else
LABEL_12:
    v7 = 1;
LABEL_13:
  v11 = *(_QWORD *)(a1 + 144);
  if ( v11 && _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL) )
  {
    v3 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v7 )
  {
    PiSwCloseDescendants(a1 + 72, 0);
    PiSwCloseDevice(a1, v12, v13);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741536;
    IofCompleteRequest(v3, 0);
  }
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v14,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpClose_Stop,
      v15,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16),
      v7);
}
