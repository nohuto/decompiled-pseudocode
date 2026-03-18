/*
 * XREFs of ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094707C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14033DA64 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ExpLogRefreshTimeZoneInformationCutoverFail(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  int *v4; // r10
  char v5; // cl
  NTSTATUS result; // eax
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  char v9; // [rsp+32h] [rbp-CEh] BYREF
  char v10; // [rsp+33h] [rbp-CDh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-A0h] BYREF
  char *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
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
  _BYTE v33[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]

  if ( (unsigned int)dword_140C04710 > 5 )
  {
    v7 = a4;
    v19 = &v7;
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
    v20 = 1LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 1LL;
    v30 = 1LL;
    v32 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v33, (const size_t *)(a1 + 172));
    v5 = *((_BYTE *)v4 + 428);
    v34 = &v10;
    v14 = *v4;
    v10 = v5;
    v36 = &v14;
    v15 = v4[21];
    v38 = &v15;
    v16 = v4[42];
    v40 = &v16;
    v42 = v4 + 17;
    v44 = v4 + 38;
    v43 = 16LL;
    v45 = 16LL;
    v35 = 1LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C04710,
             (unsigned __int8 *)byte_14002C7FB,
             0LL,
             0LL,
             0x10u,
             &v18);
  }
  return result;
}
