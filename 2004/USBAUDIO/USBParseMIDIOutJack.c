/*
 * XREFs of USBParseMIDIOutJack @ 0x1C0030180
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C002B18C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002EE90 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C002F274 (USBParseGetUnitString.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002FF44 (USBParseGetMIDIJackStringFromDeviceID.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v9; // r14
  int MIDIJackStringFromDeviceID; // eax
  int v11; // r15d
  int *PoolWithTag; // rax
  int *v13; // r12
  unsigned int v14; // ecx
  __int64 v15; // r8
  int v16; // eax
  const WCHAR *v18; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(*(_QWORD *)(v3 + 72), a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  UnitString = USBParseGetUnitString(a1, a3, &v18);
  if ( UnitString >= 0 )
  {
    v9 = v18;
    if ( !v18 && PinIndexForStreamingTerminal != -1 )
    {
      MIDIJackStringFromDeviceID = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v18);
      v9 = v18;
      UnitString = MIDIJackStringFromDeviceID;
    }
    if ( UnitString >= 0 )
    {
      v11 = *(unsigned __int8 *)(a2 + 2) << 8;
      PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[5], 0x41627845u);
      v13 = PoolWithTag;
      UnitString = -1073741670;
      if ( PoolWithTag )
      {
        LOBYTE(v14) = a3[5];
        v15 = 0LL;
        if ( (_BYTE)v14 )
        {
          do
          {
            PoolWithTag[v15] = v11 | a3[2 * v15 + 6];
            v15 = (unsigned int)(v15 + 1);
            v14 = a3[5];
          }
          while ( (unsigned int)v15 < v14 );
        }
        v16 = 2305;
        if ( a3[3] == 1 )
          v16 = 257;
        UnitString = BusApiBuildTerminalFunctionUnit(
                       a1,
                       v11 | (unsigned int)a3[4],
                       1,
                       0,
                       0,
                       (unsigned __int8)v14,
                       v13,
                       v9,
                       0LL,
                       v16,
                       2,
                       PinIndexForStreamingTerminal);
        ExFreePool(v13);
      }
    }
  }
  return (unsigned int)UnitString;
}
