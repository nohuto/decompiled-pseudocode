/*
 * XREFs of HalpUsbLegacyStopUhciInterrupt @ 0x1404D76E8
 * Callers:
 *     HalpPiix4Detect @ 0x14099B3E0 (HalpPiix4Detect.c)
 *     HalpStopLegacyUsbInterruptsInternal @ 0x1409AA104 (HalpStopLegacyUsbInterruptsInternal.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
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
