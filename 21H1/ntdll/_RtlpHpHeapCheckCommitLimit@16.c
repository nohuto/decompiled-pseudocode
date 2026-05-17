/*
 * XREFs of _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA
 * Callers:
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 * Callees:
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpHpHeapCheckCommitLimit(int a1, int a2, int a3, int *a4)
{
  int *v6; // edx
  unsigned int v7; // ecx
  int v8; // esi

  if ( dword_4B3A373C )
    return 1;
  v6 = a4;
  v7 = *a4;
  if ( !*a4 )
  {
    v7 = dword_4B3A432C;
    v6 = &dword_4B3A432C;
    if ( !dword_4B3A432C )
      return 1;
  }
  if ( a1 + a2 <= v7 )
    return 1;
  v8 = 0;
  if ( v6[1] )
    RtlpLogHeapFailure(0, v6[1], a1, a2);
  return v8;
}
