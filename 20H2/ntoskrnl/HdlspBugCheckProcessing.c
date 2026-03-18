/*
 * XREFs of HdlspBugCheckProcessing @ 0x1409F1D54
 * Callers:
 *     HdlspDispatch @ 0x1409F1E80 (HdlspDispatch.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _stricmp @ 0x1403D1460 (_stricmp.c)
 *     HalReturnToFirmware @ 0x1404BC7E0 (HalReturnToFirmware.c)
 *     HdlspGetLine @ 0x1409F25F8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1409F2C18 (HdlspProcessDumpCommand.c)
 *     HdlspSendStringAtBaud @ 0x1409F3350 (HdlspSendStringAtBaud.c)
 */

__int64 HdlspBugCheckProcessing()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  const char *v3; // rcx
  char Str1[80]; // [rsp+20h] [rbp-68h] BYREF

  result = HdlspGetLine(Str1, 0x50uLL);
  if ( (_BYTE)result )
  {
    if ( !stricmp(Str1, "?") || !stricmp(Str1, "help") )
    {
      HdlspSendStringAtBaud("\r\n");
      HdlspSendStringAtBaud("d        Display all log entries, paging is on.\r\n");
      HdlspSendStringAtBaud("help     Display this list.\r\n");
      HdlspSendStringAtBaud("restart  Restart the system immediately.\r\n");
      HdlspSendStringAtBaud("?        Display this list.\r\n");
      v3 = "\r\n";
    }
    else
    {
      if ( !stricmp(Str1, "d") )
      {
        LOBYTE(v1) = 1;
        HdlspProcessDumpCommand(v1);
        return HdlspSendStringAtBaud("\n\r!SAC>");
      }
      if ( !stricmp(Str1, "restart") )
      {
        v2 = 10LL;
        do
        {
          KeStallExecutionProcessor(0x186A0u);
          --v2;
        }
        while ( v2 );
        HalReturnToFirmware(3);
      }
      v3 = "Type ? or Help for a list of commands.\r\n";
    }
    HdlspSendStringAtBaud(v3);
    return HdlspSendStringAtBaud("\n\r!SAC>");
  }
  return result;
}
