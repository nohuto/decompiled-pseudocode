/*
 * XREFs of _xxxSynchronizeDWMWindowChanges@0 @ 0x148325
 * Callers:
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 * Callees:
 *     _DwmSyncFlushWindowChanges@4 @ 0x1D2C0E (_DwmSyncFlushWindowChanges@4.c)
 */

void *__stdcall xxxSynchronizeDWMWindowChanges()
{
  void *result; // eax
  void *v1; // esi

  result = (void *)ReferenceDwmApiPort();
  v1 = result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v1);
    return (void *)EnterCrit(0, 1);
  }
  return result;
}
