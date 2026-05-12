/*
 * XREFs of RaidGetStorageAdapterTemperatureProperty @ 0x1C003044C
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C00714A8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C001D740 (memmove.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0042FA4 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 */

__int64 __fastcall RaidGetStorageAdapterTemperatureProperty(__int64 a1, IRP *a2, size_t *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rsi
  size_t Length; // rbx
  unsigned int v9; // edi
  int v10; // eax
  char *v11; // rbp
  ULONG v13; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v13 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *a3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    if ( (unsigned int)Length >= 0x28 )
    {
      v10 = RaBuildQueryTemperaturePropertyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v13);
      v11 = (char *)P;
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (unsigned int *)P, v13, 0LL, 0, 64);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
        {
          memmove(MasterIrp, v11 + 28, Length);
          *a3 = Length;
          *(_DWORD *)&MasterIrp->Type = 40;
          *(_DWORD *)(&MasterIrp->Size + 1) = 40;
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x72536152u);
    }
    else if ( (unsigned int)Length < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v9 = 0;
      *(_DWORD *)&MasterIrp->Type = 40;
      *(_DWORD *)(&MasterIrp->Size + 1) = 40;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v9;
}
