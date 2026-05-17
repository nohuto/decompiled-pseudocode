/*
 * XREFs of _RtlpTraceDatabaseAllocate@12 @ 0x4B36A468
 * Callers:
 *     _RtlTraceDatabaseCreate@20 @ 0x4B36A1A0 (_RtlTraceDatabaseCreate@20.c)
 *     _RtlpTraceDatabaseInternalAdd@16 @ 0x4B36A4C6 (_RtlpTraceDatabaseInternalAdd@16.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

int __thiscall RtlpTraceDatabaseAllocate(void *this, int a2)
{
  void *v3; // [esp+0h] [ebp-8h] BYREF
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v3 = this;
  if ( NtAllocateVirtualMemory(-1, (int)&v4, 0, (int)&v3, 12288, 4) < 0 )
    return 0;
  else
    return v4;
}
