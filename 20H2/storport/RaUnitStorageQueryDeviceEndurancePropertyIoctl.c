/*
 * XREFs of RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00490D0
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00724D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001C094 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0043C44 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceEndurancePropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rsi
  unsigned __int64 Length; // r14
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  char *v9; // rbp
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v12 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v6 = *(unsigned int *)(&MasterIrp->Size + 1);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      v7 = -1073741637;
LABEL_17:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
LABEL_7:
    v7 = 0;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  if ( (unsigned int)Length < 0x38 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v7 = -1073741789;
      goto LABEL_17;
    }
    *(_DWORD *)&MasterIrp->Type = 56;
    *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    a2->IoStatus.Information = 8LL;
    goto LABEL_7;
  }
  v8 = RaBuildQueryEnduranceInfoPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), v6, &P, &v12);
  v9 = (char *)P;
  v7 = v8;
  if ( v8 >= 0 )
  {
    v7 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v12, 0LL, v11, 64);
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
    {
      *(_OWORD *)&MasterIrp->Type = *(_OWORD *)(v9 + 28);
      *(_OWORD *)&MasterIrp->Flags = *(_OWORD *)(v9 + 44);
      MasterIrp->ThreadListEntry = *(_LIST_ENTRY *)(v9 + 60);
      MasterIrp->IoStatus.Pointer = *(void **)(v9 + 76);
      *(_DWORD *)&MasterIrp->Type = 56;
      *(_DWORD *)(&MasterIrp->Size + 1) = 56;
      a2->IoStatus.Information = Length;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72536152u);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
    goto LABEL_17;
  return RaidCompleteRequestEx(a2, 0, v7);
}
