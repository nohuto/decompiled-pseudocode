/*
 * XREFs of ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C008E990
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C002D3E0 (NdisAllocateRWLock.c)
 *     NdisFreeRWLock @ 0x1C0039060 (NdisFreeRWLock.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

unsigned __int8 __fastcall nullCreateFilter(struct _X_FILTER **a1)
{
  char v2; // bl
  struct _NDIS_RW_LOCK_EX *RWLock; // rdi
  struct _X_FILTER *PoolWithTag; // rax
  struct _X_FILTER *v5; // rsi

  v2 = 0;
  RWLock = NdisAllocateRWLock(&ndisDummyObject);
  if ( RWLock )
  {
    PoolWithTag = (struct _X_FILTER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x198uLL, 0x6670444Eu);
    *a1 = PoolWithTag;
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, sizeof(struct _X_FILTER));
      v5->BindListLock = RWLock;
      return 1;
    }
    else
    {
      NdisFreeRWLock(RWLock);
    }
  }
  return v2;
}
