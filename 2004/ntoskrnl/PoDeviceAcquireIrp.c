/*
 * XREFs of PoDeviceAcquireIrp @ 0x14037A8A4
 * Callers:
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     PoHandleIrp @ 0x140395D54 (PoHandleIrp.c)
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x140395EF8 (PopDiagTraceDeviceAcquireIrp.c)
 */

__int64 __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      return PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
  return result;
}
