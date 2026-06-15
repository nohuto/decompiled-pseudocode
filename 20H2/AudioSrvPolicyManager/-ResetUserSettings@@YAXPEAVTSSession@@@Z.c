/*
 * XREFs of ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x180026E04
 * Callers:
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180026E90 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

void __fastcall ResetUserSettings(struct TSSession *a1)
{
  _DWORD *v2; // rcx
  int v3; // eax
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v2 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v2 > 4u )
  {
    v3 = *(_DWORD *)a1;
    v8 = 0;
    v4 = v3;
    v7 = 4;
    v6 = &v4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1800466B7, 0LL, 0LL, 3u, &v5);
  }
  *((_DWORD *)a1 + 80) = 1;
}
