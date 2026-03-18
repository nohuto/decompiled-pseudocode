/*
 * XREFs of EtwTraceTimeZoneInformationRefresh @ 0x140790C24
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

char __fastcall EtwTraceTimeZoneInformationRefresh(int a1, __int64 a2, __int64 a3, char a4)
{
  char result; // al
  char v5; // [rsp+38h] [rbp-D0h] BYREF
  char v6; // [rsp+39h] [rbp-CFh] BYREF
  char v7; // [rsp+3Ah] [rbp-CEh] BYREF
  int v8; // [rsp+40h] [rbp-C8h] BYREF
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  int v11; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v14; // [rsp+78h] [rbp-90h]
  int v15; // [rsp+80h] [rbp-88h]
  int v16; // [rsp+84h] [rbp-84h]
  int *v17; // [rsp+88h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+94h] [rbp-74h]
  char *v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+A0h] [rbp-68h]
  int v22; // [rsp+A4h] [rbp-64h]
  int *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  int v25; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+B8h] [rbp-50h] BYREF
  int *v27; // [rsp+D8h] [rbp-30h]
  int v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E4h] [rbp-24h]
  int *v30; // [rsp+E8h] [rbp-20h]
  int v31; // [rsp+F0h] [rbp-18h]
  int v32; // [rsp+F4h] [rbp-14h]
  char *v33; // [rsp+F8h] [rbp-10h]
  int v34; // [rsp+100h] [rbp-8h]
  int v35; // [rsp+104h] [rbp-4h]
  char *v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+110h] [rbp+8h]
  int v38; // [rsp+114h] [rbp+Ch]
  char *v39; // [rsp+118h] [rbp+10h]
  int v40; // [rsp+120h] [rbp+18h]
  int v41; // [rsp+124h] [rbp+1Ch]
  int v42; // [rsp+148h] [rbp+40h] BYREF
  char v43; // [rsp+160h] [rbp+58h] BYREF

  v43 = a4;
  v42 = a1;
  v12 = ExpCurrentTimeZoneId;
  LOBYTE(v8) = byte_140C10DB8;
  v11 = ExpLastTimeZoneBias;
  if ( ExpCurrentTimeZoneId == 1 )
  {
    result = 83;
  }
  else if ( ExpCurrentTimeZoneId == 2 )
  {
    result = 68;
  }
  else
  {
    result = 85;
  }
  if ( (unsigned int)dword_140C02BB0 > 5 )
  {
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v5 = result;
    v33 = &v5;
    v9 = a1;
    v36 = &v6;
    v27 = &v9;
    v39 = &v7;
    v10 = ExpLastTimeZoneBias;
    v30 = &v10;
    v6 = a4;
    v7 = byte_140C10DB8;
    v28 = 4;
    v31 = 4;
    v34 = 1;
    v37 = 1;
    v40 = 1;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C02BB0,
               (unsigned __int8 *)byte_14002B5D0,
               0LL,
               0LL,
               7u,
               &v26);
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    UserData.Ptr = (ULONGLONG)&v42;
    v14 = &v11;
    v17 = &v12;
    v20 = &v43;
    v23 = &v8;
    UserData.Size = 4;
    v15 = 4;
    v18 = 4;
    v21 = 1;
    v24 = 1;
    return EtwWrite(EtwKernelProvRegHandle, &KernelTimeZoneInformationRefresh, 0LL, 5u, &UserData);
  }
  return result;
}
