/*
 * XREFs of ExpLogRefreshTimeZoneInformationQueryFail @ 0x140947250
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ExpLogRefreshTimeZoneInformationQueryFail(int a1)
{
  NTSTATUS result; // eax
  char v2; // [rsp+30h] [rbp-59h] BYREF
  char v3; // [rsp+31h] [rbp-58h] BYREF
  int v4; // [rsp+34h] [rbp-55h] BYREF
  int v5; // [rsp+38h] [rbp-51h] BYREF
  int v6; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v7; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-39h] BYREF
  int *v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  int *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  int *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  int *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  char *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  char *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_140C04710 > 5 )
  {
    v4 = a1;
    v9 = &v4;
    v5 = ExpRefreshFailures;
    v10 = 4LL;
    v11 = &v5;
    v6 = ExpLastTimeZoneBias;
    v13 = &v6;
    v7 = ExpCurrentTimeZoneId;
    v15 = &v7;
    v2 = ExpRealTimeIsUniversal;
    v17 = &v2;
    v3 = byte_140C10DB8;
    v19 = &v3;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 1LL;
    v20 = 1LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C04710,
             (unsigned __int8 *)byte_14002CF58,
             0LL,
             0LL,
             8u,
             &v8);
  }
  return result;
}
