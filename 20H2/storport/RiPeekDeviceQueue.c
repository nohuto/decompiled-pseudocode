/*
 * XREFs of RiPeekDeviceQueue @ 0x1C000ADE8
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C000A8B0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C000ABF0 (RiGetEnqueueReason.c)
 *     RiNormalizeDeviceQueue @ 0x1C000ACFC (RiNormalizeDeviceQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RiPeekDeviceQueue(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 == a1 + 96 && (v1 = *(_QWORD *)(a1 + 80), v1 == a1 + 80) )
    return 0LL;
  else
    return v1;
}
