/*
 * XREFs of DxgkCleanupPower @ 0x1C02C7C18
 * Callers:
 *     DxgkUnload @ 0x1C0261750 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0307D3C (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C00B2B18 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C00B2F48 )
    {
      PoUnregisterPowerSettingCallback(qword_1C00B2F48);
      qword_1C00B2F48 = 0LL;
    }
    if ( qword_1C00B2FD8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C00B2FD8, qword_1C00B2FD8 | 3, qword_1C00B2FD8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C00B2FD8 = 0LL;
      }
    }
  }
}
