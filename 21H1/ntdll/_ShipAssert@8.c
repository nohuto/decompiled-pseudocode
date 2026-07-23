/*
 * XREFs of _ShipAssert@8 @ 0x4B33B510
 * Callers:
 *     _ShipAssertMsgA@12 @ 0x4B33B620 (_ShipAssertMsgA@12.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _GetShipAssertBuffer@0 @ 0x4B33B3F0 (_GetShipAssertBuffer@0.c)
 *     _WerReportSQMEvent@16 @ 0x4B33BAB0 (_WerReportSQMEvent@16.c)
 */

unsigned int __stdcall ShipAssert(int a1, int a2)
{
  struct _TEB *v2; // ecx
  unsigned int result; // eax
  int ShipAssertBuffer; // eax
  int v5; // ecx
  unsigned int LastErrorValue; // [esp+10h] [ebp-30h]
  struct _TEB *v7; // [esp+14h] [ebp-2Ch]
  _DWORD v8[4]; // [esp+18h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v2 = NtCurrentTeb();
  v7 = v2;
  LastErrorValue = v2->LastErrorValue;
  result = v2->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v2->SameTebFlags = result | 0x10;
    ms_exc.registration.TryLevel = 0;
    ShipAssertBuffer = GetShipAssertBuffer();
    if ( ShipAssertBuffer && ShipAssertBuffer != 255 && ShipAssertBuffer != 238 )
    {
      v5 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_4B3A3934, 1u) + 1) & 0x3FF;
      *(_DWORD *)(ShipAssertBuffer + 8 * v5) = a1;
      *(_DWORD *)(ShipAssertBuffer + 8 * v5 + 4) = a2;
    }
    v8[0] = a1;
    v8[1] = a2;
    v8[2] = 0;
    WerReportSQMEvent(1, v8, 3, 0);
    ms_exc.registration.TryLevel = -2;
    v7->SameTebFlags &= ~0x10u;
    result = LastErrorValue;
    v7->LastErrorValue = LastErrorValue;
  }
  return result;
}
