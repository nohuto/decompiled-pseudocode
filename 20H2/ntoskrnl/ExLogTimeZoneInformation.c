/*
 * XREFs of ExLogTimeZoneInformation @ 0x1403B3334
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14023D318 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

int ExLogTimeZoneInformation()
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v1; // r10
  int v2; // eax
  int *v3; // r10
  char v4; // cl
  int v5; // r11d
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-A0h] BYREF
  int *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  int *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  int *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  char *v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  _BYTE v32[16]; // [rsp+D0h] [rbp-30h] BYREF
  char *v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]
  int *v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+FCh] [rbp-4h]
  int *v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]
  int v41; // [rsp+10Ch] [rbp+Ch]
  int *v42; // [rsp+110h] [rbp+10h]
  int v43; // [rsp+118h] [rbp+18h]
  int v44; // [rsp+11Ch] [rbp+1Ch]
  int *v45; // [rsp+120h] [rbp+20h]
  int v46; // [rsp+128h] [rbp+28h]
  int v47; // [rsp+12Ch] [rbp+2Ch]
  int *v48; // [rsp+130h] [rbp+30h]
  int v49; // [rsp+138h] [rbp+38h]
  int v50; // [rsp+13Ch] [rbp+3Ch]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v1 = CurrentServerSiloGlobals[133];
  if ( (unsigned int)dword_140C02C20 > 5 )
  {
    v2 = *(_DWORD *)(v1 + 1000);
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v9 = v2;
    v18 = 4;
    v17 = &v9;
    v10 = *(_DWORD *)(v1 + 436);
    v20 = &v10;
    v11 = *(_DWORD *)(v1 + 432);
    v23 = &v11;
    v7 = ExpRealTimeIsUniversal;
    v26 = &v7;
    v15 = *(_QWORD *)(v1 + 992);
    v29 = &v15;
    v21 = 4;
    v24 = 4;
    v27 = 1;
    v30 = 8;
    tlgCreate1Sz_wchar_t((__int64)v32, (const size_t *)(v1 + 172));
    v4 = *((_BYTE *)v3 + 428);
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v33 = &v8;
    v12 = *v3;
    v36 = &v12;
    v13 = v3[21];
    v39 = &v13;
    v14 = v3[42];
    v42 = &v14;
    v45 = v3 + 17;
    v8 = v4;
    v48 = v3 + 38;
    v46 = 16;
    v49 = 16;
    v34 = v5;
    v37 = 4;
    v40 = 4;
    v43 = 4;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C02C20,
                                          (unsigned __int8 *)&word_14002CDF6,
                                          0LL,
                                          0LL,
                                          0xEu,
                                          &v16);
  }
  return (int)CurrentServerSiloGlobals;
}
