/*
 * XREFs of _RtlpHpTlLogGCTimerFinished@0 @ 0x4B3709B8
 * Callers:
 *     _RtlpHpGCCallback@12 @ 0x4B358430 (_RtlpHpGCCallback@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

int __thiscall RtlpHpTlLogGCTimerFinished(void *this)
{
  int result; // eax
  _DWORD v2[9]; // [esp+0h] [ebp-28h] BYREF

  if ( (unsigned int)dword_4B3A33F0 > 5 )
    return _tlgWriteTransfer_EtwEventWriteTransfer(
             &dword_4B3A33F0,
             (unsigned __int8 *)dword_4B290F70,
             (int)this,
             (int)this,
             2,
             v2);
  return result;
}
