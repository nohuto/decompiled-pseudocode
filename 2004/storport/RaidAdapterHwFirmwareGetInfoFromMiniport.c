/*
 * XREFs of RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002C0F4
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002BFA8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C160 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoFromMiniport(__int64 a1, IRP *a2, unsigned int *a3, ULONG a4)
{
  __int64 result; // rax
  __int64 v7; // rcx

  result = RaidAdapterSendSrbIoControlSynchronously(
             a1,
             a2,
             a3,
             a4,
             (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
             0,
             64);
  if ( (int)result >= 0 )
  {
    v7 = a3[11];
    if ( *(unsigned int *)((char *)a3 + v7) == 2 && *(unsigned int *)((char *)a3 + v7 + 4) == 24 )
      *(_DWORD *)(a1 + 5492) = 2;
    else
      *(_DWORD *)(a1 + 5492) = 1;
  }
  return result;
}
