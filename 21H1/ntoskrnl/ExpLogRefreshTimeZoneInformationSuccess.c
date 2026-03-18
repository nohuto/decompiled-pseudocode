/*
 * XREFs of ExpLogRefreshTimeZoneInformationSuccess @ 0x140790D3C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14033DA64 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ExpLogRefreshTimeZoneInformationSuccess(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  int *v5; // r10
  char v6; // cl
  NTSTATUS result; // eax
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  char v10; // [rsp+32h] [rbp-CEh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-90h] BYREF
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  __int64 *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  __int64 *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  _BYTE v37[16]; // [rsp+110h] [rbp+10h] BYREF
  char *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  int *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]

  if ( (unsigned int)dword_140C04710 > 5 )
  {
    v11 = ExpRefreshFailures;
    v21 = &v11;
    v12 = ExpLastTimeZoneBias;
    v23 = &v12;
    v13 = ExpCurrentTimeZoneId;
    v25 = &v13;
    v8 = ExpRealTimeIsUniversal;
    v27 = &v8;
    v9 = byte_140C10DB8;
    v29 = &v9;
    v17 = *a3;
    v31 = &v17;
    v18 = *a4;
    v33 = &v18;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v19 = *a5;
    v28 = 1LL;
    v30 = 1LL;
    v32 = 8LL;
    v34 = 8LL;
    v35 = &v19;
    v36 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v37, (const size_t *)(a1 + 172));
    v6 = *((_BYTE *)v5 + 428);
    v38 = &v10;
    v14 = *v5;
    v10 = v6;
    v40 = &v14;
    v15 = v5[21];
    v42 = &v15;
    v16 = v5[42];
    v44 = &v16;
    v46 = v5 + 17;
    v48 = v5 + 38;
    v39 = 1LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 16LL;
    v49 = 16LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C04710,
             (unsigned __int8 *)&word_14002CA6E,
             0LL,
             0LL,
             0x11u,
             &v20);
  }
  return result;
}
