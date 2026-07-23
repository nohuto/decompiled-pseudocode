/*
 * XREFs of _RtlpHeapLogRangeDestroy@4 @ 0x4B36D816
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall RtlpHeapLogRangeDestroy(void *this)
{
  int v1; // eax
  _DWORD Fields[11]; // [esp+8h] [ebp-30h] BYREF

  memset(Fields, 0, 0x28u);
  Fields[8] = this;
  HIWORD(Fields[1]) = 616;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v1 = 2147353480;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x20402u, 8u, Fields);
}
