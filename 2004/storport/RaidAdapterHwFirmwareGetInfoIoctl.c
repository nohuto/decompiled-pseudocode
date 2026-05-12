/*
 * XREFs of RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C160
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000C838 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001B764 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002C0F4 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C004366C (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoIoctl(__int64 *a1, IRP *a2)
{
  _IRP *MasterIrp; // r14
  PVOID v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  signed int InfoFromMiniport; // ebx
  signed int v8; // eax
  unsigned int Length; // ecx
  unsigned __int64 v10; // rax
  ULONG v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v12 = 0;
  P = 0LL;
  if ( !a1[67] || !a1[68] )
  {
    InfoFromMiniport = -1073741823;
    goto LABEL_14;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    InfoFromMiniport = -1073741820;
LABEL_14:
    v10 = 0LL;
    goto LABEL_15;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x38 )
  {
    InfoFromMiniport = -1073741789;
    goto LABEL_14;
  }
  RaBuildHwFirmwareGetInfoBufferForMiniport(a1[1], (__int64)a2, &P, &v12);
  v3 = P;
  if ( !P )
  {
    InfoFromMiniport = -1073741801;
    goto LABEL_14;
  }
  InfoFromMiniport = RaidAdapterHwFirmwareGetInfoFromMiniport((__int64)a1, a2, (unsigned int *)P, v12);
  if ( InfoFromMiniport < 0 )
    goto LABEL_14;
  memset(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
  v8 = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(a2, v3);
  Length = CurrentStackLocation->Parameters.Read.Length;
  InfoFromMiniport = v8;
  if ( Length >= *(_DWORD *)(&MasterIrp->Size + 1) )
    Length = *(_DWORD *)(&MasterIrp->Size + 1);
  v10 = Length;
LABEL_15:
  a2->IoStatus.Information = v10;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  return RaidCompleteRequestEx(a2, 0, InfoFromMiniport);
}
