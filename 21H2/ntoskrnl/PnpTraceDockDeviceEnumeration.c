/*
 * XREFs of PnpTraceDockDeviceEnumeration @ 0x1408B1C74
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PnpTraceDockDeviceEnumeration()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-29h] BYREF
  int v3; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v5; // [rsp+60h] [rbp+7h]
  __int64 v6; // [rsp+68h] [rbp+Fh]
  __int64 v7; // [rsp+70h] [rbp+17h]
  _DWORD v8[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  int *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140C02D90 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02D90, 0x400000000000LL) )
    {
      v6 = 2LL;
      v5 = v8;
      v7 = *(_QWORD *)(v0 + 48);
      v8[0] = *(unsigned __int16 *)(v0 + 40);
      v2 = *(_DWORD *)(v0 + 568);
      v9 = &v2;
      v11 = &v3;
      v8[1] = 0;
      v10 = 4LL;
      v3 = v1;
      v12 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02D90, (unsigned __int8 *)byte_14002564D, 0LL, 0LL, 6u, &v4);
    }
  }
}
