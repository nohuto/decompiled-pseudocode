/*
 * XREFs of ?InitLogQMsg@@YGXXZ @ 0xEAB0E
 * Callers:
 *     ?InitPostMortemLogging@@YGXXZ @ 0xEAABC (-InitPostMortemLogging@@YGXXZ.c)
 * Callees:
 *     ?EnsureQMsgLog@@YGHXZ @ 0x141B02 (-EnsureQMsgLog@@YGHXZ.c)
 *     _MsgQRegGetDWORD@12 @ 0x141F33 (_MsgQRegGetDWORD@12.c)
 */

void __stdcall InitLogQMsg()
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-10h] BYREF
  void *KeyHandle; // [esp+24h] [ebp-8h] BYREF
  int v3; // [esp+28h] [ebp-4h] BYREF

  dword_273AC0 = 256;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  v3 = 0;
  gMsgQLog = 0;
  dword_273AB4 = 0;
  dword_273AB8 = 0;
  dword_273ABC = 0;
  dword_273ACC = 0;
  dword_273AD0 = 0;
  Count = 16;
  dword_273AC8 = 1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\USERPostMessageLog");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( MsgQRegGetDWORD(KeyHandle, L"Enable", (int)&v3) >= 0 )
      gMsgQLog = v3 != 0;
    if ( MsgQRegGetDWORD(KeyHandle, L"LogSize", (int)&v3) >= 0 )
    {
      dword_273AC0 = v3;
      if ( (unsigned int)v3 >= 0x2000 )
        dword_273AC0 = 0x2000;
    }
    if ( MsgQRegGetDWORD(KeyHandle, L"FrameType", (int)&v3) >= 0 && (unsigned int)v3 < 3 )
      dword_273AC8 = v3;
    if ( MsgQRegGetDWORD(KeyHandle, L"FrameCount", (int)&v3) >= 0 )
    {
      Count = v3;
      if ( (unsigned int)v3 >= 0x40 )
        Count = 64;
    }
    if ( MsgQRegGetDWORD(KeyHandle, L"MsgFirst", (int)&v3) >= 0 )
      dword_273AB4 = v3;
    if ( MsgQRegGetDWORD(KeyHandle, L"MsgLast", (int)&v3) >= 0 )
      dword_273AB8 = v3;
    if ( MsgQRegGetDWORD(KeyHandle, L"BreakOnLog", (int)&v3) >= 0 && (unsigned int)v3 < 2 )
      dword_273ACC = v3;
    EnsureQMsgLog();
    ZwClose(KeyHandle);
  }
}
