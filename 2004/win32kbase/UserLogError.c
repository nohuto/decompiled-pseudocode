/*
 * XREFs of UserLogError @ 0x1C013E170
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0167AE8 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     <none>
 */

void __fastcall UserLogError(int a1)
{
  _DWORD *ErrorLogEntry; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(gpWin32kDriverObject, 0x30u);
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a1;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
