/*
 * XREFs of RaidAdapterWmiDeferredRoutine @ 0x1C004D430
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C0002870 (RaidFreeDeferredItem.c)
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     memmove @ 0x1C001F600 (memmove.c)
 *     StorPortGetLogicalUnit @ 0x1C0039390 (StorPortGetLogicalUnit.c)
 */

PSLIST_ENTRY __fastcall RaidAdapterWmiDeferredRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // dl
  struct _DEVICE_OBJECT *v5; // rbx
  __int64 LogicalUnit; // rax
  _DWORD *Pool; // rax
  _DWORD *v8; // rbp

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_BYTE *)(a2 + 32);
  if ( v4 == -1 )
  {
    v5 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v2 + 104) & 4) != 0));
  }
  else
  {
    LogicalUnit = StorPortGetLogicalUnit(*(_QWORD *)(a1 + 64), v4, *(_BYTE *)(a2 + 33), *(_BYTE *)(a2 + 34));
    if ( !LogicalUnit || (*(_BYTE *)(LogicalUnit + 448) & 0x10) == 0 )
      return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 1536), a2);
    v5 = *(struct _DEVICE_OBJECT **)(LogicalUnit + 8);
  }
  if ( v5 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a2 + 40), 0x4D576152u, *(_QWORD *)(v2 + 8));
    v8 = Pool;
    if ( Pool )
    {
      memmove(Pool, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v8[1] = IoWMIDeviceObjectToProviderId(v5);
      *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v8) < 0 )
        ExFreePoolWithTag(v8, 0x4D576152u);
    }
  }
  return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 1536), a2);
}
