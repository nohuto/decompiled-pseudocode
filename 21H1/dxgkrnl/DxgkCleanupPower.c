/*
 * XREFs of DxgkCleanupPower @ 0x1C02C32E8
 * Callers:
 *     DxgkUnload @ 0x1C025D1A0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0302C24 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_1C00AFA18 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1C00AFE48 )
    {
      PoUnregisterPowerSettingCallback(qword_1C00AFE48);
      qword_1C00AFE48 = 0LL;
    }
    if ( qword_1C00AFED8 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_1C00AFED8, qword_1C00AFED8 | 3, qword_1C00AFED8 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_1C00AFED8 = 0LL;
      }
    }
  }
}
