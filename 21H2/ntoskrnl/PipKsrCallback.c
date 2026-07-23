/*
 * XREFs of PipKsrCallback @ 0x1408B3060
 * Callers:
 *     <none>
 * Callees:
 *     PipKsrNotifyDrivers @ 0x1408B30D8 (PipKsrNotifyDrivers.c)
 */

void __fastcall PipKsrCallback(PVOID CallbackContext, unsigned __int64 Argument1, int *Argument2)
{
  int v3; // edx
  int v4; // edx
  GUID *v5; // rcx

  if ( Argument1 <= 0x14 )
  {
    if ( (_DWORD)Argument1 )
    {
      v3 = Argument1 - 1;
      if ( v3 )
      {
        v4 = v3 - 14;
        if ( v4 )
        {
          if ( v4 != 5 )
            return;
          v5 = &GUID_RECOVERY_PCI_PREPARE_SHUTDOWN;
        }
        else
        {
          v5 = &GUID_RECOVERY_NVMED_PREPARE_SHUTDOWN;
        }
      }
      else
      {
        if ( !PnpKsrPrepared )
          return;
        PnpKsrPrepared = 0;
        v5 = &GUID_KERNEL_SOFT_RESTART_CANCEL;
      }
      PipKsrNotifyDrivers(v5);
    }
    else if ( *Argument2 >= 0 )
    {
      *Argument2 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_PREPARE);
      PnpKsrPrepared = 1;
    }
  }
}
