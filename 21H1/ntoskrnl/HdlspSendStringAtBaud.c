/*
 * XREFs of HdlspSendStringAtBaud @ 0x1409ED350
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1409EBD54 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1409EBE80 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x1409EC52C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1409EC5F8 (HdlspGetLine.c)
 *     HdlspPutString @ 0x1409ED0C0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1409ED1E8 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1409ED2AC (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1405C42FC (InbvPortPutByte.c)
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
