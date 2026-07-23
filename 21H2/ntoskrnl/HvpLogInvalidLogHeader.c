/*
 * XREFs of HvpLogInvalidLogHeader @ 0x140881CA8
 * Callers:
 *     HvAnalyzeLogFiles @ 0x140880D8C (HvAnalyzeLogFiles.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvpHeaderCheckSum @ 0x1406FC8D4 (HvpHeaderCheckSum.c)
 */

void HvpLogInvalidLogHeader()
{
  int v0; // edx
  int *v1; // r9
  char v2; // r10
  __int64 *v3; // r11
  int v4; // eax
  int v5; // r10d
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-A0h] BYREF
  char *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  int *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  int *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  int *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  __int64 *v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  int *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  int *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]
  int *v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+108h] [rbp+8h]
  int v43; // [rsp+10Ch] [rbp+Ch]
  int *v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+11Ch] [rbp+1Ch]

  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v17 = &v6;
      v7 = *v1;
      v20 = &v7;
      v8 = v1[1];
      v23 = &v8;
      v9 = v1[2];
      v26 = &v9;
      v14 = *(_QWORD *)(v1 + 3);
      v29 = &v14;
      v15 = *v3;
      v32 = &v15;
      v10 = v1[7];
      v35 = &v10;
      v11 = v1[10];
      v38 = &v11;
      v12 = v1[127];
      v6 = v2;
      v41 = &v12;
      v18 = 1;
      v21 = v0 - 4;
      v24 = v0 - 4;
      v27 = v0 - 4;
      v30 = v0;
      v33 = v0;
      v36 = v0 - 4;
      v39 = v0 - 4;
      v42 = v0 - 4;
      v4 = HvpHeaderCheckSum(v1);
      v46 = 0;
      v13 = v4;
      v45 = v5;
      v44 = &v13;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)&word_140023E8E,
        0LL,
        0LL,
        0xCu,
        &v16);
    }
  }
}
