/*
 * XREFs of ShipAssert @ 0x1800DDF50
 * Callers:
 *     ShipAssertMsgA @ 0x1800DE0A0 (ShipAssertMsgA.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     GetShipAssertBuffer @ 0x1800DDDD4 (GetShipAssertBuffer.c)
 *     WerReportSQMEvent @ 0x1800DE550 (WerReportSQMEvent.c)
 */

__int64 __fastcall ShipAssert(int a1, int a2)
{
  struct _TEB *v4; // rbx
  unsigned int LastErrorValue; // edi
  __int64 result; // rax
  __int64 ShipAssertBuffer; // rax
  unsigned int v8; // ecx
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = NtCurrentTeb();
  LastErrorValue = v4->LastErrorValue;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v4->SameTebFlags = result | 0x10;
    ShipAssertBuffer = GetShipAssertBuffer();
    if ( ShipAssertBuffer && ShipAssertBuffer != 255 && ShipAssertBuffer != 238 )
    {
      v8 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_1801697B4, 1u) + 1) & 0x3FF;
      *(_DWORD *)(ShipAssertBuffer + 8LL * v8) = a1;
      *(_DWORD *)(ShipAssertBuffer + 8LL * v8 + 4) = a2;
    }
    v9[0] = a1;
    v9[1] = a2;
    v9[2] = 0;
    WerReportSQMEvent(1LL, v9, 3LL);
    result = 65519LL;
    v4->SameTebFlags &= ~0x10u;
    v4->LastErrorValue = LastErrorValue;
  }
  return result;
}
