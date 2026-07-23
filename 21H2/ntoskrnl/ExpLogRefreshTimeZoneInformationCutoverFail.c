/*
 * XREFs of ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094BAD0
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

int __fastcall ExpLogRefreshTimeZoneInformationCutoverFail(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  char v6; // r14
  _QWORD *CurrentServerSiloGlobals; // rax
  _DWORD *v9; // rcx
  char v10; // cl
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  char v14; // [rsp+32h] [rbp-CEh] BYREF
  char v15; // [rsp+33h] [rbp-CDh] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-A0h] BYREF
  char *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  char *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  __int64 *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  _BYTE v38[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  int *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  __int64 v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  __int64 v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]

  v6 = a2;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
  v9 = (_DWORD *)CurrentServerSiloGlobals[133];
  if ( (unsigned int)dword_140C02C60 > 5 )
  {
    v12 = a4;
    v24 = &v12;
    v16 = v9[250];
    v26 = &v16;
    v17 = v9[109];
    v28 = &v17;
    v18 = v9[108];
    v30 = &v18;
    v13 = ExpRealTimeIsUniversal;
    v32 = &v13;
    v34 = &v14;
    v22 = *a3;
    v36 = &v22;
    v25 = 1LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 1LL;
    v14 = v6;
    v35 = 1LL;
    v37 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v38, (const size_t *)(a1 + 172));
    v10 = *(_BYTE *)(a1 + 428);
    v39 = &v15;
    v19 = *(_DWORD *)a1;
    v15 = v10;
    v41 = &v19;
    v20 = *(_DWORD *)(a1 + 84);
    v43 = &v20;
    v21 = *(_DWORD *)(a1 + 168);
    v45 = &v21;
    v47 = a1 + 68;
    v49 = a1 + 152;
    v48 = 16LL;
    v50 = 16LL;
    v40 = 1LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C02C60,
                                          (unsigned __int8 *)byte_14002E11B,
                                          0LL,
                                          0LL,
                                          0x10u,
                                          &v23);
  }
  return (int)CurrentServerSiloGlobals;
}
