/*
 * XREFs of RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00492BC
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00724D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002E4C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001C094 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C001F600 (memmove.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r14
  size_t Length; // rbx
  int v6; // edx
  unsigned int v7; // edi
  int v8; // eax
  char *v9; // rbp
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v12 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v6 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v6 )
  {
    if ( v6 != 1 )
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
  v8 = RaBuildQueryPhysicalTopologyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, (unsigned int *)&v12);
  v9 = (char *)P;
  v7 = v8;
  if ( v8 >= 0 )
  {
    v7 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v12, 0LL, v11, 64);
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
    {
      memmove(MasterIrp, v9 + 28, Length);
      *(_DWORD *)&MasterIrp->Type = 56;
      a2->IoStatus.Information = Length;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72536152u);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
    goto LABEL_17;
  return RaidCompleteRequestEx(a2, 0, v7);
}
