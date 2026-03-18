/*
 * XREFs of HdlspSendStringAtBaud @ 0x140AAA418
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140AA8D9C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140AA8ED0 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140AA9594 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140AA9660 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140AAA178 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140AAA2B0 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140AAA374 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x14065461C (InbvPortPutByte.c)
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
