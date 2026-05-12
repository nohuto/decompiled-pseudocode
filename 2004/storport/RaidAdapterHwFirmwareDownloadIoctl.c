/*
 * XREFs of RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002BFA8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000C838 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001B764 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002C0F4 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0042A70 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareDownloadIoctl(__int64 a1, IRP *a2)
{
  PVOID v2; // rdi
  signed int InfoFromMiniport; // ebx
  ULONG v7; // [rsp+60h] [rbp+20h] BYREF
  PVOID P; // [rsp+68h] [rbp+28h] BYREF

  v2 = 0LL;
  v7 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 536) || !*(_QWORD *)(a1 + 544) )
  {
    InfoFromMiniport = -1073741823;
    goto LABEL_13;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x28 )
  {
    InfoFromMiniport = -1073741820;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 5492) )
    goto LABEL_10;
  RaBuildHwFirmwareGetInfoBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, &v7);
  v2 = P;
  if ( !P )
  {
LABEL_7:
    InfoFromMiniport = -1073741801;
    goto LABEL_15;
  }
  InfoFromMiniport = RaidAdapterHwFirmwareGetInfoFromMiniport(a1, a2, P, v7);
  if ( InfoFromMiniport >= 0 )
  {
    ExFreePoolWithTag(v2, 0x72536152u);
    P = 0LL;
    v7 = 0;
LABEL_10:
    RaBuildHwFirmwareDownloadBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v7);
    v2 = P;
    if ( !P )
      goto LABEL_7;
    InfoFromMiniport = RaidAdapterSendSrbIoControlSynchronously(
                         a1,
                         a2,
                         (unsigned int *)P,
                         v7,
                         (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
                         0,
                         128);
  }
LABEL_13:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72536152u);
LABEL_15:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, InfoFromMiniport);
}
