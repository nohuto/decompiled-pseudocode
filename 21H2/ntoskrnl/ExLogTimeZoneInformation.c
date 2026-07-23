/*
 * XREFs of ExLogTimeZoneInformation @ 0x1403B4C0C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

int __fastcall ExLogTimeZoneInformation(__int64 a1, __int64 a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v3; // r10
  int v4; // eax
  int *v5; // r10
  char v6; // cl
  int v7; // r11d
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-A0h] BYREF
  int *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  int *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  int *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  char *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  _BYTE v34[16]; // [rsp+D0h] [rbp-30h] BYREF
  char *v35; // [rsp+E0h] [rbp-20h]
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
  int *v47; // [rsp+120h] [rbp+20h]
  int v48; // [rsp+128h] [rbp+28h]
  int v49; // [rsp+12Ch] [rbp+2Ch]
  int *v50; // [rsp+130h] [rbp+30h]
  int v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+13Ch] [rbp+3Ch]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
  v3 = CurrentServerSiloGlobals[133];
  if ( (unsigned int)dword_140C02C60 > 5 )
  {
    v4 = *(_DWORD *)(v3 + 1000);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v11 = v4;
    v20 = 4;
    v19 = &v11;
    v12 = *(_DWORD *)(v3 + 436);
    v22 = &v12;
    v13 = *(_DWORD *)(v3 + 432);
    v25 = &v13;
    v9 = ExpRealTimeIsUniversal;
    v28 = &v9;
    v17 = *(_QWORD *)(v3 + 992);
    v31 = &v17;
    v23 = 4;
    v26 = 4;
    v29 = 1;
    v32 = 8;
    tlgCreate1Sz_wchar_t((__int64)v34, (const size_t *)(v3 + 172));
    v6 = *((_BYTE *)v5 + 428);
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v52 = 0;
    v35 = &v10;
    v14 = *v5;
    v38 = &v14;
    v15 = v5[21];
    v41 = &v15;
    v16 = v5[42];
    v44 = &v16;
    v47 = v5 + 17;
    v10 = v6;
    v50 = v5 + 38;
    v48 = 16;
    v51 = 16;
    v36 = v7;
    v39 = 4;
    v42 = 4;
    v45 = 4;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C02C60,
                                          (unsigned __int8 *)&byte_14002DB97,
                                          0LL,
                                          0LL,
                                          0xEu,
                                          &v18);
  }
  return (int)CurrentServerSiloGlobals;
}
