/*
 * XREFs of RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000D060
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C00715A0 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000D150 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     memmove @ 0x1C001B200 (memmove.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C00515C4 (StorpLogPhysicalTopologyInfo.c)
 */

__int64 __fastcall RaidGetStorageAdapterPhysicalTopologyProperty(__int64 a1, IRP *a2, size_t *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rsi
  size_t Length; // rbp
  int v9; // eax
  char *v10; // r15
  int v11; // edi
  ULONG v13; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  P = 0LL;
  v13 = 0;
  *a3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 8 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( (unsigned int)Length < 0x38 )
  {
    if ( (unsigned int)Length < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v11 = 0;
      *(_DWORD *)&MasterIrp->Type = 56;
      *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    }
  }
  else
  {
    v9 = RaBuildQueryPhysicalTopologyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v13);
    v10 = (char *)P;
    v11 = v9;
    if ( v9 >= 0 )
    {
      v11 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (unsigned int *)P, v13, 0LL, 0, 64);
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        memmove(MasterIrp, v10 + 28, Length);
        *(_DWORD *)&MasterIrp->Type = 56;
        *a3 = Length;
        if ( v11 >= 0 && !*(_BYTE *)(a1 + 5472) && *(_DWORD *)(&MasterIrp->Size + 1) <= (unsigned int)Length )
        {
          *(_BYTE *)(a1 + 5472) = 1;
          StorpLogPhysicalTopologyInfo(a1, MasterIrp, (unsigned int)Length);
        }
      }
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72536152u);
  }
  return (unsigned int)v11;
}
