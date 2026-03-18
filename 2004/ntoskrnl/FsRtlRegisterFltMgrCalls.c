/*
 * XREFs of FsRtlRegisterFltMgrCalls @ 0x1407C2B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlRegisterFltMgrCalls(__int64 a1)
{
  _InterlockedExchange64(&FltMgrCallbacks, a1);
}
