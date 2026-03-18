/*
 * XREFs of DxgkCleanupPower @ 0x1C0388458
 * Callers:
 *     DxgkUnload @ 0x1C0301B10 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C0130497 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C01308D0 )
    {
      PoUnregisterPowerSettingCallback(qword_1C01308D0);
      qword_1C01308D0 = 0LL;
    }
    if ( qword_1C0130960 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C0130960, qword_1C0130960 | 3, qword_1C0130960 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C0130960 = 0LL;
      }
    }
  }
}
