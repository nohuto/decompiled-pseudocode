/*
 * XREFs of PnpTraceRebalanceResult @ 0x1408B1F24
 * Callers:
 *     PnpRebalance @ 0x1408B8904 (PnpRebalance.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PnpTraceRebalanceResult()
{
  __int64 v0; // rdx
  __int64 v1; // r9
  __int64 v2; // rbx
  int *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-80h]
  _DWORD v18[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  _DWORD v22[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  _DWORD *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  _DWORD v28[2]; // [rsp+D8h] [rbp-28h] BYREF
  char *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  char *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]

  if ( dword_140C02D90 && tlgKeywordOn((__int64)&dword_140C02D90, 0x400000000000LL) )
  {
    if ( !v1 || !*(_QWORD *)(v1 + 40) || !*(_QWORD *)(v1 + 24) )
      __fastfail(5u);
    v2 = MEMORY[0xFFFFF78000000008];
    if ( (unsigned int)dword_140C02D90 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02D90, v0) )
      {
        v16 = 2LL;
        v15 = v18;
        v6 = v2 - *((_QWORD *)v3 + 7);
        v17 = *(_QWORD *)(v4 + 48);
        v18[0] = *(unsigned __int16 *)(v4 + 40);
        v19 = v22;
        v21 = *(_QWORD *)(v4 + 64);
        v22[0] = *(unsigned __int16 *)(v4 + 56);
        v9 = *v3;
        v23 = &v9;
        v25 = v28;
        v27 = *(_QWORD *)(v5 + 48);
        v28[0] = *(unsigned __int16 *)(v5 + 40);
        v7 = *((_BYTE *)v3 + 32);
        v29 = &v7;
        v8 = *((_BYTE *)v3 + 48);
        v31 = &v8;
        v10 = v3[3];
        v33 = &v10;
        v11 = v3[5];
        v35 = &v11;
        v18[1] = 0;
        v37 = &v12;
        v39 = &v13;
        v12 = v6 / 0x2710;
        v20 = 2LL;
        v22[1] = 0;
        v24 = 4LL;
        v26 = 2LL;
        v28[1] = 0;
        v30 = 1LL;
        v32 = 1LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 8LL;
        v13 = v2;
        v40 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02D90,
          (unsigned __int8 *)byte_140025588,
          0LL,
          0LL,
          0xFu,
          &v14);
      }
    }
  }
}
