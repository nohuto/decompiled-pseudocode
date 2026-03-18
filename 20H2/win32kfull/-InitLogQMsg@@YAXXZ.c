/*
 * XREFs of ?InitLogQMsg@@YAXXZ @ 0x1C0129F60
 * Callers:
 *     InitModuleAllocations @ 0x1C0129E90 (InitModuleAllocations.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01D2534 (-EnsureQMsgLog@@YAHXZ.c)
 *     MsgQRegGetDWORD @ 0x1C01D2AA8 (MsgQRegGetDWORD.c)
 */

void InitLogQMsg(void)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  gMsgQLog = 0uLL;
  *(_QWORD *)((char *)&xmmword_1C0335688 + 12) = 0LL;
  dword_1C033569C = 0;
  DestinationString = 0LL;
  *(_QWORD *)&xmmword_1C0335688 = 0x1000000100LL;
  DWORD2(xmmword_1C0335688) = 1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\USERPostMessageLog");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      LODWORD(gMsgQLog) = 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      LODWORD(xmmword_1C0335688) = 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      DWORD2(xmmword_1C0335688) = 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      DWORD1(xmmword_1C0335688) = 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      DWORD1(gMsgQLog) = 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      DWORD2(gMsgQLog) = 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      HIDWORD(xmmword_1C0335688) = 0;
    EnsureQMsgLog();
    ZwClose(KeyHandle);
  }
}
