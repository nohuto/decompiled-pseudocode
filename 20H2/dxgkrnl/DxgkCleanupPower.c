/*
 * XREFs of DxgkCleanupPower @ 0x1C02C68A8
 * Callers:
 *     DxgkUnload @ 0x1C02604C0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C00B0B18 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C00B0F48 )
    {
      PoUnregisterPowerSettingCallback(qword_1C00B0F48);
      qword_1C00B0F48 = 0LL;
    }
    if ( qword_1C00B0FD8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C00B0FD8, qword_1C00B0FD8 | 3, qword_1C00B0FD8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C00B0FD8 = 0LL;
      }
    }
  }
}
