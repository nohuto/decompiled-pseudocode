/*
 * XREFs of _RtlpIsProtectedHeap@4 @ 0x4B2ECC15
 * Callers:
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _RtlpSetRequestedFrontEndHeap@8 @ 0x4B2ECB78 (_RtlpSetRequestedFrontEndHeap@8.c)
 *     _RtlSetHeapDebuggingInformation@8 @ 0x4B357004 (_RtlSetHeapDebuggingInformation@8.c)
 *     _RtlpHpStackTraceHeapDisable@8 @ 0x4B36E4A0 (_RtlpHpStackTraceHeapDisable@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RtlpIsProtectedHeap(_DWORD *this)
{
  return *(_WORD *)((char *)this + (this[2] == -571548178 ? 0 : 0x68) + 20) == 0xFFFF;
}
