/*
 * XREFs of ?EthInitializeFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x1C0064850
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 */

char __fastcall EthInitializeFilter(unsigned int a1, const unsigned __int8 *a2, struct _X_FILTER *a3)
{
  char v4; // di
  struct _NDIS_RW_LOCK_EX *BindListLock; // rbx
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rax
  unsigned __int8 *MiniportMCastAddressBuf; // rcx
  unsigned __int8 *NextMCastAddressBuf; // rcx
  unsigned __int8 *MiniportOldMCastAddressBuf; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // rcx

  v4 = 0;
  if ( !is_mul_ok(6u, a1) )
    goto LABEL_8;
  BindListLock = a3->BindListLock;
  memset(a3, 0, sizeof(struct _X_FILTER));
  *(_DWORD *)a3->AdapterAddress = *(_DWORD *)a2;
  *(_WORD *)&a3->AdapterAddress[4] = *((_WORD *)a2 + 2);
  a3->MaxMulticastAddresses = a1;
  a3->BindListLock = BindListLock;
  if ( !a1 )
    return 1;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * a1, 0x6166444Eu);
  a3->MiniportMCastAddressBuf = (unsigned __int8 (*)[6])PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_8;
  v9 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * a3->MaxMulticastAddresses, 0x6166444Eu);
  a3->MiniportOldMCastAddressBuf = (unsigned __int8 (*)[6])v9;
  if ( v9 )
  {
    v10 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * a3->MaxMulticastAddresses, 0x6166444Eu);
    a3->NextMCastAddressBuf = (unsigned __int8 (*)[6])v10;
    if ( v10 )
    {
      v11 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * a3->MaxMulticastAddresses, 0x6166444Eu);
      a3->NextOldMCastAddressBuf = (unsigned __int8 (*)[6])v11;
      if ( v11 )
        return 1;
    }
  }
LABEL_8:
  MiniportMCastAddressBuf = (unsigned __int8 *)a3->MiniportMCastAddressBuf;
  a3->MaxMulticastAddresses = 0;
  if ( MiniportMCastAddressBuf )
  {
    ExFreePoolWithTag(MiniportMCastAddressBuf, 0);
    a3->MiniportMCastAddressBuf = 0LL;
  }
  NextMCastAddressBuf = (unsigned __int8 *)a3->NextMCastAddressBuf;
  if ( NextMCastAddressBuf )
  {
    ExFreePoolWithTag(NextMCastAddressBuf, 0);
    a3->NextMCastAddressBuf = 0LL;
  }
  MiniportOldMCastAddressBuf = (unsigned __int8 *)a3->MiniportOldMCastAddressBuf;
  if ( MiniportOldMCastAddressBuf )
  {
    ExFreePoolWithTag(MiniportOldMCastAddressBuf, 0);
    a3->MiniportOldMCastAddressBuf = 0LL;
  }
  NextOldMCastAddressBuf = (unsigned __int8 *)a3->NextOldMCastAddressBuf;
  if ( NextOldMCastAddressBuf )
  {
    ExFreePoolWithTag(NextOldMCastAddressBuf, 0);
    a3->NextOldMCastAddressBuf = 0LL;
  }
  return v4;
}
