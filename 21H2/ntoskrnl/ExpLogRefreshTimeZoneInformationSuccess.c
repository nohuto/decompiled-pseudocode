/*
 * XREFs of ExpLogRefreshTimeZoneInformationSuccess @ 0x1407AA138
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

int __fastcall ExpLogRefreshTimeZoneInformationSuccess(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  char v7; // r14
  _QWORD *CurrentServerSiloGlobals; // rax
  _DWORD *v10; // rcx
  char v11; // cl
  char v13; // [rsp+38h] [rbp-D0h] BYREF
  char v14; // [rsp+39h] [rbp-CFh] BYREF
  char v15; // [rsp+3Ah] [rbp-CEh] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+78h] [rbp-90h] BYREF
  int *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  int *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  char *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  char *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  _BYTE v42[16]; // [rsp+118h] [rbp+10h] BYREF
  char *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  int *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  __int64 *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  __int64 v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  __int64 v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]

  v7 = a2;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
  v10 = (_DWORD *)CurrentServerSiloGlobals[133];
  if ( (unsigned int)dword_140C02C60 > 5 )
  {
    v16 = v10[250];
    v26 = &v16;
    v17 = v10[109];
    v28 = &v17;
    v18 = v10[108];
    v30 = &v18;
    v13 = ExpRealTimeIsUniversal;
    v32 = &v13;
    v34 = &v14;
    v22 = *a3;
    v36 = &v22;
    v23 = *a4;
    v38 = &v23;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    v24 = *a5;
    v33 = 1LL;
    v14 = v7;
    v35 = 1LL;
    v37 = 8LL;
    v39 = 8LL;
    v40 = &v24;
    v41 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v42, (const size_t *)(a1 + 172));
    v11 = *(_BYTE *)(a1 + 428);
    v43 = &v15;
    v19 = *(_DWORD *)a1;
    v15 = v11;
    v45 = &v19;
    v20 = *(_DWORD *)(a1 + 84);
    v47 = &v20;
    LODWORD(v21) = *(_DWORD *)(a1 + 168);
    v49 = &v21;
    v51 = a1 + 68;
    v53 = a1 + 152;
    v44 = 1LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 16LL;
    v54 = 16LL;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C02C60,
                                          (unsigned __int8 *)byte_14002DDE5,
                                          0LL,
                                          0LL,
                                          0x11u,
                                          &v25);
  }
  return (int)CurrentServerSiloGlobals;
}
