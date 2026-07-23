/*
 * XREFs of PoDeviceReleaseIrp @ 0x14037CAE4
 * Callers:
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     PoHandleIrp @ 0x1403987D4 (PoHandleIrp.c)
 * Callees:
 *     PopDiagTraceDeviceReleaseIrp @ 0x1403993EC (PopDiagTraceDeviceReleaseIrp.c)
 */

__int64 __fastcall PoDeviceReleaseIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
    result = PopDiagTraceDeviceReleaseIrp(a1, a3);
    *(_QWORD *)(v3 + 40) = 0LL;
  }
  return result;
}
