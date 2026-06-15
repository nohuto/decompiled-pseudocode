/*
 * XREFs of ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x18002F1F4
 * Callers:
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18001C400 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdIsAudioInStandbyAllowed(DWORD a1)
{
  unsigned int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // eax
  _DWORD *v5; // r10
  int v7; // [rsp+38h] [rbp-69h] BYREF
  int v8; // [rsp+3Ch] [rbp-65h] BYREF
  int v9; // [rsp+40h] [rbp-61h] BYREF
  int v10; // [rsp+44h] [rbp-5Dh] BYREF
  int v11; // [rsp+48h] [rbp-59h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp-51h] BYREF
  struct TSSession *v13; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION **v15; // [rsp+88h] [rbp-19h]
  __int64 v16; // [rsp+90h] [rbp-11h]
  int *v17; // [rsp+98h] [rbp-9h]
  __int64 v18; // [rsp+A0h] [rbp-1h]
  int *v19; // [rsp+A8h] [rbp+7h]
  __int64 v20; // [rsp+B0h] [rbp+Fh]
  int *v21; // [rsp+B8h] [rbp+17h]
  __int64 v22; // [rsp+C0h] [rbp+1Fh]
  int *v23; // [rsp+C8h] [rbp+27h]
  __int64 v24; // [rsp+D0h] [rbp+2Fh]
  int *v25; // [rsp+D8h] [rbp+37h]
  __int64 v26; // [rsp+E0h] [rbp+3Fh]

  v2 = 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v12 = v3;
  if ( !(unsigned int)TsSessionFromSessionId(a1, 0, 0LL, &v13) )
  {
    v4 = *((_DWORD *)v13 + 58);
    if ( (v4 == 1 || !*((_DWORD *)v13 + 57)) && g_bLowPowerEpoch == 1
      || (v4 == 1 || !*((_DWORD *)v13 + 57)) && g_bApmSuspended == 1 )
    {
      v2 = 0;
    }
    else if ( v4 == 1 && g_bIsSystemAsleep == 1 )
    {
      v2 = 0;
    }
    g_bIsSystemAsleep &= -(v4 != 0);
    v5 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v5 > 4u )
    {
      v7 = g_bIsSystemAsleep;
      v8 = g_bApmSuspended;
      v9 = g_bLowPowerEpoch;
      v10 = *((_DWORD *)v13 + 57);
      v11 = *((_DWORD *)v13 + 58);
      LODWORD(v12) = *(_DWORD *)v13;
      v25 = &v7;
      v26 = 4LL;
      v23 = &v8;
      v24 = 4LL;
      v21 = &v9;
      v22 = 4LL;
      v19 = &v10;
      v20 = 4LL;
      v17 = &v11;
      v18 = 4LL;
      v15 = &v12;
      v16 = 4LL;
      tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18004BB39, 0LL, 0LL, 8u, &v14);
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
