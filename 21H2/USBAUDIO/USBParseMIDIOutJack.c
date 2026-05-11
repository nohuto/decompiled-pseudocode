/*
 * XREFs of USBParseMIDIOutJack @ 0x1C0031210
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1305584954__private_IsEnabledDeviceUsage @ 0x1C0004370 (Feature_1305584954__private_IsEnabledDeviceUsage.c)
 *     BusApiBuildTerminalFunctionUnit @ 0x1C002B63C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002F6C8 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C0030FC0 (USBParseGetMIDIJackStringFromDeviceID.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v13; // rbp
  int MIDIJackStringFromDeviceID; // eax
  int v15; // r15d
  int *PoolWithTag; // rax
  int *v17; // r12
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // eax
  const WCHAR *v21; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  v7 = *(_QWORD *)(v3 + 72);
  if ( (unsigned int)Feature_1305584954__private_IsEnabledDeviceUsage() )
  {
    v8 = *a3;
    if ( (unsigned __int8)v8 < 6u )
      return 3221225858LL;
    v9 = a3[5];
    if ( v8 < 2 * v9 + 7
      || (unsigned __int64)&a3[2 * v9 + 7] > *(_QWORD *)(v7 + 40)
                                           + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL) )
    {
      return 3221225858LL;
    }
  }
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  UnitString = USBParseGetUnitString(a1, a3, &v21);
  if ( UnitString >= 0 )
  {
    v13 = v21;
    if ( !v21 && PinIndexForStreamingTerminal != -1 )
    {
      MIDIJackStringFromDeviceID = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v21);
      v13 = v21;
      UnitString = MIDIJackStringFromDeviceID;
    }
    if ( UnitString >= 0 )
    {
      v15 = *(unsigned __int8 *)(a2 + 2) << 8;
      PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[5], 0x41627845u);
      v17 = PoolWithTag;
      UnitString = -1073741670;
      if ( PoolWithTag )
      {
        LOBYTE(v18) = a3[5];
        v19 = 0LL;
        if ( (_BYTE)v18 )
        {
          do
          {
            PoolWithTag[v19] = v15 | a3[2 * v19 + 6];
            v19 = (unsigned int)(v19 + 1);
            v18 = a3[5];
          }
          while ( (unsigned int)v19 < v18 );
        }
        v20 = 2305;
        if ( a3[3] == 1 )
          v20 = 257;
        UnitString = BusApiBuildTerminalFunctionUnit(
                       a1,
                       v15 | (unsigned int)a3[4],
                       1,
                       0,
                       0,
                       (unsigned __int8)v18,
                       v17,
                       v13,
                       0LL,
                       v20,
                       2,
                       PinIndexForStreamingTerminal);
        ExFreePool(v17);
      }
    }
  }
  return (unsigned int)UnitString;
}
