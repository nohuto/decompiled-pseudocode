/*
 * XREFs of USBDeviceCreate @ 0x1C002B8D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0014140 (memset.c)
 */

__int64 __fastcall USBDeviceCreate(__int64 a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // edi
  char *PoolWithTag; // rax
  char *v5; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = -1073741670;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x100uLL, 0x41627845u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)(v1 + 72) = PoolWithTag;
    memset(PoolWithTag + 4, 0, 0xFCuLL);
    *(_DWORD *)v5 = 1096971093;
    ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)(v5 + 64), 0LL, 0LL, 0x200u, 0x88uLL, 0x41627355u, 0x14u);
    v3 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v5, ExFreePool);
    if ( v3 < 0 )
      ExFreePool(v5);
  }
  return (unsigned int)v3;
}
