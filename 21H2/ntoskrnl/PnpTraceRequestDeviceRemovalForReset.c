/*
 * XREFs of PnpTraceRequestDeviceRemovalForReset @ 0x1408B2150
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1408A0710 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PnpTraceRequestDeviceRemovalForReset(__int64 a1, int a2, int a3)
{
  unsigned __int16 *v5; // r9
  unsigned __int16 *v6; // r10
  int v7; // r11d
  int v8; // [rsp+30h] [rbp-59h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  int v10; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-49h] BYREF
  _DWORD *v12; // [rsp+60h] [rbp-29h]
  int v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+6Ch] [rbp-1Dh]
  __int64 v15; // [rsp+70h] [rbp-19h]
  _DWORD v16[2]; // [rsp+78h] [rbp-11h] BYREF
  _DWORD *v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+8Ch] [rbp+3h]
  __int64 v20; // [rsp+90h] [rbp+7h]
  _DWORD v21[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  int *v25; // [rsp+B0h] [rbp+27h]
  int v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+BCh] [rbp+33h]
  int *v28; // [rsp+C0h] [rbp+37h]
  int v29; // [rsp+C8h] [rbp+3Fh]
  int v30; // [rsp+CCh] [rbp+43h]

  if ( (unsigned int)dword_140C02D90 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02D90, 0x400000000000LL) )
    {
      v14 = 0;
      v16[1] = 0;
      v19 = 0;
      v21[1] = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v12 = v16;
      v15 = *((_QWORD *)v5 + 1);
      v16[0] = *v5;
      v17 = v21;
      v20 = *((_QWORD *)v6 + 1);
      v21[0] = *v6;
      v22 = &v8;
      v25 = &v9;
      v28 = &v10;
      v13 = 2;
      v18 = 2;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      v8 = v7;
      v9 = a2;
      v10 = a3;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02D90,
        (unsigned __int8 *)byte_14002548B,
        0LL,
        0LL,
        9u,
        &v11);
    }
  }
}
