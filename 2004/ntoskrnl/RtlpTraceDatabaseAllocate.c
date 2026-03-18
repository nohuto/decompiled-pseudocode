/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x140589840
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x140589480 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140589868 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpTraceDatabaseAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  bool v3; // zf
  POOL_TYPE v5; // ecx

  v3 = (a2 & 4) == 0;
  v5 = NonPagedPoolNx;
  if ( v3 )
    v5 = PagedPool;
  return ExAllocatePoolWithTag(v5, NumberOfBytes, a3);
}
