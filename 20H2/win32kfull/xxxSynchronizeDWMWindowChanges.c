/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C0014FB4
 * Callers:
 *     xxxSendInput @ 0x1C00BA53C (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C0015004 (DwmSyncFlushWindowChanges.c)
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
