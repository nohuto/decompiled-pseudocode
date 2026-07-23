/*
 * XREFs of PnpTraceSecureDeviceEnumeration @ 0x1408B22B0
 * Callers:
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B5584 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PnpTraceSecureDeviceEnumeration()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // r11d
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  __int64 v8; // [rsp+70h] [rbp+17h]
  _DWORD v9[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140C02D90 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02D90, 0x400000000000LL) )
    {
      v7 = 2LL;
      v6 = v9;
      v8 = *(_QWORD *)(v0 + 48);
      v9[0] = *(unsigned __int16 *)(v0 + 40);
      v10 = &v3;
      v12 = &v4;
      v9[1] = 0;
      v3 = v2;
      v11 = 4LL;
      v4 = v1;
      v13 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02D90, (unsigned __int8 *)byte_140025400, 0LL, 0LL, 6u, &v5);
    }
  }
}
