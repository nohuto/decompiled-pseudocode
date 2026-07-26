/*
 * XREFs of ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C002F860
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C002CE40 (NdisAllocateRWLock.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

char __fastcall EthCreateFilter(unsigned int a1, const unsigned __int8 *a2, struct _X_FILTER **a3)
{
  char v4; // di
  struct _X_FILTER *PoolWithTag; // rax
  struct _X_FILTER *v8; // rbx
  PNDIS_RW_LOCK_EX RWLock; // rax
  unsigned int MaxMulticastAddresses; // eax
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rax
  unsigned __int8 *MiniportOldMCastAddressBuf; // rcx
  unsigned __int8 *NextMCastAddressBuf; // rcx

  v4 = 0;
  *a3 = 0LL;
  if ( is_mul_ok(6u, a1) )
  {
    PoolWithTag = (struct _X_FILTER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x198uLL, 0x6670444Eu);
    *a3 = PoolWithTag;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, sizeof(struct _X_FILTER));
      *(_DWORD *)v8->AdapterAddress = *(_DWORD *)a2;
      *(_WORD *)&v8->AdapterAddress[4] = *((_WORD *)a2 + 2);
      v8->MaxMulticastAddresses = a1;
      RWLock = NdisAllocateRWLock(&ndisDummyObject);
      v8->BindListLock = RWLock;
      if ( RWLock )
      {
        MaxMulticastAddresses = v8->MaxMulticastAddresses;
        if ( !MaxMulticastAddresses )
          return 1;
        v11 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * MaxMulticastAddresses, 0x6166444Eu);
        v8->MiniportMCastAddressBuf = (unsigned __int8 (*)[6])v11;
        if ( v11 )
        {
          v12 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * v8->MaxMulticastAddresses, 0x6166444Eu);
          v8->MiniportOldMCastAddressBuf = (unsigned __int8 (*)[6])v12;
          if ( v12 )
          {
            v13 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * v8->MaxMulticastAddresses, 0x6166444Eu);
            v8->NextMCastAddressBuf = (unsigned __int8 (*)[6])v13;
            if ( v13 )
            {
              v14 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, 6 * v8->MaxMulticastAddresses, 0x6166444Eu);
              v8->NextOldMCastAddressBuf = (unsigned __int8 (*)[6])v14;
              if ( v14 )
                return 1;
              ExFreePoolWithTag(v8->MiniportMCastAddressBuf, 0);
              NextMCastAddressBuf = (unsigned __int8 *)v8->NextMCastAddressBuf;
            }
            else
            {
              NextMCastAddressBuf = (unsigned __int8 *)v8->MiniportMCastAddressBuf;
            }
            ExFreePoolWithTag(NextMCastAddressBuf, 0);
            MiniportOldMCastAddressBuf = (unsigned __int8 *)v8->MiniportOldMCastAddressBuf;
          }
          else
          {
            MiniportOldMCastAddressBuf = (unsigned __int8 *)v8->MiniportMCastAddressBuf;
          }
          ExFreePoolWithTag(MiniportOldMCastAddressBuf, 0);
        }
      }
      ExFreePoolWithTag(v8, 0);
      *a3 = 0LL;
    }
  }
  return v4;
}
