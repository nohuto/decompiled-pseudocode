/*
 * XREFs of CrmSrvUnregister @ 0x180035F74
 * Callers:
 *     CrmRpcSrvUnregister @ 0x180035F50 (CrmRpcSrvUnregister.c)
 *     CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800873D0 (CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmRegistrationCleanup @ 0x180036074 (CrmRegistrationCleanup.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

char __fastcall CrmSrvUnregister(char *P)
{
  int v2; // eax
  __int128 v3; // xmm1
  int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  char result; // al
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v9[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+98h] [rbp-70h] BYREF
  UUID *v12; // [rsp+B8h] [rbp-50h]
  int v13; // [rsp+C0h] [rbp-48h]
  int v14; // [rsp+C4h] [rbp-44h]
  int *v15; // [rsp+C8h] [rbp-40h]
  int v16; // [rsp+D0h] [rbp-38h]
  int v17; // [rsp+D4h] [rbp-34h]
  _OWORD *v18; // [rsp+D8h] [rbp-30h]
  int v19; // [rsp+E0h] [rbp-28h]
  int v20; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+E8h] [rbp-20h] BYREF
  UUID *v22; // [rsp+108h] [rbp+0h]
  int v23; // [rsp+110h] [rbp+8h]
  int v24; // [rsp+114h] [rbp+Ch]

  if ( (unsigned int)dword_1800B3250 > 5 && tlgKeywordOn((__int64)&dword_1800B3250, 1LL) )
  {
    v24 = 0;
    v22 = &Uuid;
    v23 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3250,
      (unsigned __int8 *)dword_1800A2565,
      0LL,
      0LL,
      3u,
      &v21);
  }
  v2 = *((_DWORD *)P + 34);
  v3 = *(_OWORD *)(P + 88);
  v4 = *((_DWORD *)P + 6);
  v9[0] = *(_OWORD *)(P + 72);
  v5 = *(_OWORD *)(P + 104);
  v10 = v2;
  v9[1] = v3;
  v6 = *(_OWORD *)(P + 120);
  v9[2] = v5;
  v9[3] = v6;
  CrmRegistrationCleanup(P, 1LL);
  result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_1800B3250, 1LL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v15 = &v8;
      v12 = &Uuid;
      v18 = v9;
      v13 = 16;
      v8 = v4;
      v16 = 4;
      v19 = 4 * BYTE1(v9[0]) + 8;
      return tlgWriteTransfer_EventWriteTransfer(
               (__int64)&dword_1800B3250,
               (unsigned __int8 *)dword_1800A2734,
               0LL,
               0LL,
               5u,
               &v11);
    }
  }
  return result;
}
