/*
 * XREFs of USBParseMIDIInJack @ 0x1C0030000
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C002B10C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002EE10 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C002F1F4 (USBParseGetUnitString.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002FEC4 (USBParseGetMIDIJackStringFromDeviceID.c)
 */

__int64 __fastcall USBParseMIDIInJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  unsigned int PinIndexForStreamingTerminal; // ebx
  __int64 result; // rax
  const WCHAR *v9; // r8
  int v10; // ecx
  const WCHAR *v11; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(*(_QWORD *)(v3 + 72), a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  result = USBParseGetUnitString(a1, a3, &v11);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    if ( !v11 && PinIndexForStreamingTerminal != -1 )
    {
      result = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v11);
      v9 = v11;
    }
    if ( (int)result >= 0 )
    {
      v10 = 2305;
      if ( a3[3] == 1 )
        v10 = 257;
      return BusApiBuildTerminalFunctionUnit(
               a1,
               (*(unsigned __int8 *)(a2 + 2) << 8) | (unsigned int)a3[4],
               0,
               0,
               0,
               0,
               0LL,
               v9,
               0LL,
               v10,
               2,
               PinIndexForStreamingTerminal);
    }
  }
  return result;
}
