/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x18000EE64
 * Callers:
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18000662C (RtlpHpSegMgrReserve.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     RtlpLogHeapFailure @ 0x18010DE0C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]

  v2 = a2;
  if ( a2 == 64 && ((int)ZwQueryVirtualMemory(-1LL, a1, 3LL, &v5, 48LL, 0LL) < 0 || (v6 & 0x60) == 0 || v5 != a1) )
  {
    RtlpLogHeapFailure(0, a1, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
