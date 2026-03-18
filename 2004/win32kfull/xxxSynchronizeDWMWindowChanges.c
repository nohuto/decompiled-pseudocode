/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C003DE4C
 * Callers:
 *     xxxSendInput @ 0x1C003A9BC (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C003DE9C (DwmSyncFlushWindowChanges.c)
 */

__int64 xxxSynchronizeDWMWindowChanges()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = ReferenceDwmApiPort();
  v1 = result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v1);
    return EnterCrit(0LL, 1LL);
  }
  return result;
}
