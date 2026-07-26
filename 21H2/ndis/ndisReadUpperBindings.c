/*
 * XREFs of ndisReadUpperBindings @ 0x1C005F2BC
 * Callers:
 *     NdisReadConfiguration @ 0x1C00289C0 (NdisReadConfiguration.c)
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 __fastcall ndisReadUpperBindings(_NDIS_M_DRIVER_BLOCK *a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *v8; // r9
  KIRQL v9; // r15
  unsigned int v10; // esi
  _WORD *PoolWithTag; // rax
  _WORD *v12; // rbp
  struct _NDIS_MINIPORT_BLOCK *v13; // rdi
  _WORD *v14; // r14
  _WORD *v15; // r14

  v3 = 0;
  *a2 = 0LL;
  v5 = 0;
  *a3 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v8 = ndisMiniportList;
  v9 = v7;
  while ( v8 )
  {
    if ( v8->DriverHandle == a1 )
      v5 += v8->MiniportName.Length + 2;
    v8 = v8->NextGlobalMiniport;
  }
  v10 = v5 + 2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6E70444Eu);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    v13 = ndisMiniportList;
    v14 = PoolWithTag;
    while ( v13 )
    {
      if ( v13->DriverHandle == a1 )
      {
        memmove(v14, v13->MiniportName.Buffer, v13->MiniportName.Length);
        v15 = (_WORD *)((char *)v14 + v13->MiniportName.Length);
        *v15 = 0;
        v14 = v15 + 1;
      }
      v13 = v13->NextGlobalMiniport;
    }
    *v14 = 0;
    *a3 = v10;
    *a2 = v12;
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
  }
  else
  {
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
    return (unsigned int)-1073741670;
  }
  return v3;
}
