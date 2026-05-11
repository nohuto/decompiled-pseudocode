/*
 * XREFs of USBParseMIDIInJack @ 0x1C00310F0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1305584954__private_IsEnabledDeviceUsage @ 0x1C0004370 (Feature_1305584954__private_IsEnabledDeviceUsage.c)
 *     BusApiBuildTerminalFunctionUnit @ 0x1C002B63C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002F6C8 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C0030FC0 (USBParseGetMIDIJackStringFromDeviceID.c)
 */

__int64 __fastcall USBParseMIDIInJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int PinIndexForStreamingTerminal; // edi
  const WCHAR *v10; // r8
  int v11; // ecx
  const WCHAR *v12; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  v7 = *(_QWORD *)(v3 + 72);
  if ( (unsigned int)Feature_1305584954__private_IsEnabledDeviceUsage()
    && (*a3 < 6u
     || (unsigned __int64)(a3 + 6) > *(_QWORD *)(v7 + 40)
                                   + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL)) )
  {
    return 3221225858LL;
  }
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  result = USBParseGetUnitString(a1, a3, &v12);
  if ( (int)result >= 0 )
  {
    v10 = v12;
    if ( !v12 && PinIndexForStreamingTerminal != -1 )
    {
      result = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v12);
      v10 = v12;
    }
    if ( (int)result >= 0 )
    {
      v11 = 2305;
      if ( a3[3] == 1 )
        v11 = 257;
      return BusApiBuildTerminalFunctionUnit(
               a1,
               (*(unsigned __int8 *)(a2 + 2) << 8) | (unsigned int)a3[4],
               0,
               0,
               0,
               0,
               0LL,
               v10,
               0LL,
               v11,
               2,
               PinIndexForStreamingTerminal);
    }
  }
  return result;
}
