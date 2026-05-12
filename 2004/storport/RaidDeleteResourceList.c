/*
 * XREFs of RaidDeleteResourceList @ 0x1C0079B24
 * Callers:
 *     RaidDeleteAdapter @ 0x1C002FD44 (RaidDeleteAdapter.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0077C8C (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidDeleteResourceList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C526152u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x4C526152u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
