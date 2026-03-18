/*
 * XREFs of ExpLogRefreshTimeZoneInformationQueryFail @ 0x14094E318
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

int __fastcall ExpLogRefreshTimeZoneInformationQueryFail(int a1, char a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  _DWORD *v5; // r8
  char v7; // [rsp+30h] [rbp-59h] BYREF
  char v8; // [rsp+31h] [rbp-58h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  int v10; // [rsp+38h] [rbp-51h] BYREF
  int v11; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v12; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-39h] BYREF
  int *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  int *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  int *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  int *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  char *v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]
  char *v24; // [rsp+C0h] [rbp+37h]
  __int64 v25; // [rsp+C8h] [rbp+3Fh]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (_DWORD *)CurrentServerSiloGlobals[133];
  if ( (unsigned int)dword_140C02C20 > 5 )
  {
    v9 = a1;
    v14 = &v9;
    v10 = v5[250];
    v15 = 4LL;
    v16 = &v10;
    v11 = v5[109];
    v18 = &v11;
    v12 = v5[108];
    v20 = &v12;
    v7 = ExpRealTimeIsUniversal;
    v22 = &v7;
    v24 = &v8;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 1LL;
    v8 = a2;
    v25 = 1LL;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C02C20,
                                          (unsigned __int8 *)byte_14002D2E0,
                                          0LL,
                                          0LL,
                                          8u,
                                          &v13);
  }
  return (int)CurrentServerSiloGlobals;
}
