/*
 * XREFs of HalpUsbLegacyScanBusForHandoff @ 0x1403BA9CC
 * Callers:
 *     HalpErrataInitSystem @ 0x1409A1090 (HalpErrataInitSystem.c)
 * Callees:
 *     HalpUsbLegacyDeviceHandoff @ 0x1403CA734 (HalpUsbLegacyDeviceHandoff.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int16 HalpUsbLegacyScanBusForHandoff()
{
  unsigned int v0; // ebx
  unsigned int i; // esi
  unsigned __int8 j; // bp
  unsigned __int8 k; // di
  int v4; // eax
  bool v5; // zf
  __int64 v7; // [rsp+20h] [rbp-78h]
  _WORD v8[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  v0 = 0;
  for ( i = 0; i <= 0xFF; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; k < 8u; ++k )
      {
        LODWORD(v7) = 2;
        v0 = j & 0x1F | v0 & 0xFFFFFF00 | (32 * (k & 7));
        v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _WORD *, _QWORD, __int64))qword_140C00630)(i, v0, v8, 0LL, v7);
        if ( v4 && (LOWORD(v4) = v8[0] - 1, (unsigned __int16)(v8[0] - 1) <= 0xFFFDu) )
        {
          v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _WORD *, _QWORD, int))qword_140C00630)(i, v0, v8, 0LL, 16);
          if ( !v4 )
            continue;
          LOWORD(v4) = HalpUsbLegacyDeviceHandoff(0LL, i, v0, v8, 0LL);
          if ( k )
            continue;
          v5 = SLOBYTE(v8[7]) >= 0;
        }
        else
        {
          v5 = k == 0;
        }
        if ( v5 )
          break;
      }
    }
  }
  return v4;
}
