/*
 * XREFs of HdlspSendStringAtBaud @ 0x1409F1350
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1409EFD54 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1409EFE80 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x1409F052C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1409F05F8 (HdlspGetLine.c)
 *     HdlspPutString @ 0x1409F10C0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1409F11E8 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1409F12AC (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1405CA11C (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1, __int64 a2, __int64 a3)
{
  char result; // al
  _BYTE *v4; // rbx

  result = *a1;
  v4 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2, a3);
    result = *++v4;
  }
  return result;
}
