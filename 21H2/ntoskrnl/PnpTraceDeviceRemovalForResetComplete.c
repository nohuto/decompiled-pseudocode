/*
 * XREFs of PnpTraceDeviceRemovalForResetComplete @ 0x1408B19A0
 * Callers:
 *     IopDeviceRemovalForResetComplete @ 0x1408A0870 (IopDeviceRemovalForResetComplete.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PnpTraceDeviceRemovalForResetComplete()
{
  __int64 v0; // rdx
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v10; // [rsp+70h] [rbp-90h]
  int v11; // [rsp+78h] [rbp-88h]
  int v12; // [rsp+7Ch] [rbp-84h]
  __int64 v13; // [rsp+80h] [rbp-80h]
  _DWORD v14[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v15; // [rsp+90h] [rbp-70h]
  int v16; // [rsp+98h] [rbp-68h]
  int v17; // [rsp+9Ch] [rbp-64h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  _DWORD v19[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  int v22; // [rsp+BCh] [rbp-44h]
  int *v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  int v25; // [rsp+CCh] [rbp-34h]
  int *v26; // [rsp+D0h] [rbp-30h]
  int v27; // [rsp+D8h] [rbp-28h]
  int v28; // [rsp+DCh] [rbp-24h]
  __int64 *v29; // [rsp+E0h] [rbp-20h]
  int v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+ECh] [rbp-14h]
  int *v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+FCh] [rbp-4h]
  _DWORD *v35; // [rsp+100h] [rbp+0h]
  int v36; // [rsp+108h] [rbp+8h]
  int v37; // [rsp+10Ch] [rbp+Ch]
  __int64 v38; // [rsp+110h] [rbp+10h]
  _DWORD v39[2]; // [rsp+118h] [rbp+18h] BYREF

  if ( dword_140C02D90 && tlgKeywordOn((__int64)&dword_140C02D90, 0x400000000000LL) && v1 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02D90, v0) )
    {
      v12 = 0;
      v14[1] = 0;
      v17 = 0;
      v19[1] = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v39[1] = 0;
      v10 = v14;
      v13 = *(_QWORD *)(v2 + 48);
      v14[0] = *(unsigned __int16 *)(v2 + 40);
      v15 = v19;
      v18 = *(_QWORD *)(v2 + 64);
      v19[0] = *(unsigned __int16 *)(v2 + 56);
      v4 = *(_DWORD *)(v2 + 300);
      v20 = &v4;
      v5 = *(_DWORD *)(v3 + 164);
      v23 = &v5;
      v6 = *(_DWORD *)(v3 + 176);
      v26 = &v6;
      v8 = PnpResetRetryInterval;
      v29 = &v8;
      v7 = *(_DWORD *)(v3 + 192);
      v32 = &v7;
      v35 = v39;
      v38 = *(_QWORD *)(v3 + 208);
      v39[0] = *(unsigned __int16 *)(v3 + 200);
      v11 = 2;
      v16 = 2;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      v33 = 4;
      v36 = 2;
      v30 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02D90,
        (unsigned __int8 *)byte_1400254F5,
        0LL,
        0LL,
        0xDu,
        &v9);
    }
  }
}
