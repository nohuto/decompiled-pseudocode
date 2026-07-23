/*
 * XREFs of _RtlpHpTlLogGCScheduled@0 @ 0x4B370973
 * Callers:
 *     _RtlpHpScheduleCompaction@4 @ 0x4B358965 (_RtlpHpScheduleCompaction@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

ULONG __thiscall RtlpHpTlLogGCScheduled(void *this)
{
  ULONG result; // eax
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+0h] [ebp-28h] BYREF

  if ( (unsigned int)dword_4B3A33F0 > 5 )
    return _tlgWriteTransfer_EtwEventWriteTransfer(
             (int)&dword_4B3A33F0,
             (unsigned __int8 *)byte_4B290F15,
             (int)this,
             (int)this,
             2u,
             &UserData);
  return result;
}
