/*
 * XREFs of PnpTraceIommuDeviceProperties @ 0x1408B1E60
 * Callers:
 *     PiIommuAllocateExtension @ 0x1407660DC (PiIommuAllocateExtension.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PnpTraceIommuDeviceProperties()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v4; // [rsp+60h] [rbp+17h]
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  __int64 v6; // [rsp+70h] [rbp+27h]
  _DWORD v7[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v8; // [rsp+80h] [rbp+37h]
  __int64 v9; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C02D90 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02D90, 0x400000000000LL) )
    {
      v7[1] = 0;
      v4 = v7;
      v6 = *(_QWORD *)(v1 + 48);
      v7[0] = *(unsigned __int16 *)(v1 + 40);
      v8 = &v2;
      v2 = v0;
      v5 = 2LL;
      v9 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02D90,
        (unsigned __int8 *)&dword_1400253B4,
        0LL,
        0LL,
        5u,
        &v3);
    }
  }
}
