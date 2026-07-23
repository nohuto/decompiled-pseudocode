/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x18010E460
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180108014 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = ((v4 >> 12) + ((v4 >> 1) & 1)) << 12;
  v8 = *a2;
  v10 = (1LL << ((unsigned __int8)v4 >> 2))
      - (((1LL << ((unsigned __int8)v4 >> 2)) - 1) & (v5 + (1LL << ((unsigned __int8)v4 >> 2)) - 1))
      + v5
      - 1;
  RtlpHpFreeVA((PVOID *)&v11, (PSIZE_T)&v10, 0x8000, &v8);
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v6 = 2147353480LL;
  if ( *(_BYTE *)v6 )
    RtlpHeapLogRangeRelease((__int64)a2, v11, v10);
  v9 = *a2;
  return RtlpHpMetadataFree(a1, &v9);
}
