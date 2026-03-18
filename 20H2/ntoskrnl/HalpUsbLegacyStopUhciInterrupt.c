/*
 * XREFs of HalpUsbLegacyStopUhciInterrupt @ 0x1404D5AD8
 * Callers:
 *     HalpPiix4Detect @ 0x14099CE60 (HalpPiix4Detect.c)
 *     HalpStopLegacyUsbInterruptsInternal @ 0x1409AC304 (HalpStopLegacyUsbInterruptsInternal.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

unsigned __int16 __fastcall HalpUsbLegacyStopUhciInterrupt(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned __int16 result; // ax
  unsigned __int16 v8[8]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v9[16]; // [rsp+40h] [rbp-9h] BYREF

  memset(v9, 0, sizeof(v9));
  *(_DWORD *)v8 = 0;
  if ( a4 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int16 *, __int64, int))qword_140C00638)(a2, a3, v8, 192LL, 4);
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, _QWORD, int))qword_140C00630)(a2, a3, v9, 0LL, 64);
    if ( (v9[1] & 1) != 0 )
    {
      *(_DWORD *)v8 = v9[8] & 0xFFFFFFFC;
      if ( (v9[8] & 0xFFFFFFFC) - 1 <= 0xFFFD )
      {
        result = __inword(v9[8] & 0xFFFC);
        if ( (result & 8) == 0 )
        {
          __outword(v8[0], 4u);
          KeStallExecutionProcessor(0x2710u);
          result = 0;
          __outword(v8[0], 0);
        }
      }
    }
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int16 *, __int64, int))qword_140C00630)(a2, a3, v8, 192LL, 4);
    *(_DWORD *)v8 &= 0xFFFF40FF;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int16 *, __int64, int))qword_140C00638)(
             a2,
             a3,
             v8,
             192LL,
             4);
  }
  return result;
}
