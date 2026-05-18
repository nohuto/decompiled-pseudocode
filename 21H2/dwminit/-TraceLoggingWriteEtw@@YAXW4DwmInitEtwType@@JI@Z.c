/*
 * XREFs of ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180008364
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x180009580 (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180009840 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180009C00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpNotifyUserLogon @ 0x18000A270 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x18000A4F0 (DwmpNotifyUserLogoff.c)
 *     DwmpTerminateSessionProcess @ 0x18000A560 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 */

ULONG __fastcall TraceLoggingWriteEtw(int a1, int a2, int a3)
{
  ULONG result; // eax
  unsigned __int16 v4; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int16 v5; // [rsp+32h] [rbp-57h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  int v7; // [rsp+38h] [rbp-51h] BYREF
  int v8; // [rsp+3Ch] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-49h] BYREF
  GUID *v10; // [rsp+60h] [rbp-29h]
  __int64 v11; // [rsp+68h] [rbp-21h]
  int *v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  int *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  int *v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  GUID *v18; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]
  unsigned __int16 *v20; // [rsp+B0h] [rbp+27h]
  __int64 v21; // [rsp+B8h] [rbp+2Fh]
  unsigned __int16 *v22; // [rsp+C0h] [rbp+37h]
  __int64 v23; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_180014000 > 4 )
  {
    v4 = gSessionId;
    v5 = gBootId;
    v22 = &v4;
    v20 = &v5;
    v18 = &gDwmInitTargetAppSessionGuid;
    v16 = &v6;
    v14 = &v7;
    v12 = &v8;
    v10 = &gDwmInitTelemetryActivityId;
    v6 = a3;
    v7 = a2;
    v8 = a1;
    v17 = 4LL;
    v15 = 4LL;
    v13 = 4LL;
    v23 = 2LL;
    v21 = 2LL;
    v19 = 16LL;
    v11 = 16LL;
    return tlgWriteTransfer_EventWriteTransfer(
             (__int64)&dword_180014000,
             (unsigned __int8 *)dword_180010F61,
             0LL,
             0LL,
             9u,
             &v9);
  }
  return result;
}
