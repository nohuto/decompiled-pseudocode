/*
 * XREFs of HdlspSendStringAtBaud @ 0x1409F3350
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1409F1D54 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1409F1E80 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x1409F252C (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1409F25F8 (HdlspGetLine.c)
 *     HdlspPutString @ 0x1409F30C0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1409F31E8 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1409F32AC (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1405C86BC (InbvPortPutByte.c)
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
