/*
 * XREFs of ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000D0E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002FF98 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnPowerResumeSuspend(CWindowsPolicyManager *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v4; // eax
  _DWORD *v5; // rcx
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( a2 != g_bApmSuspended )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v4 = g_bIsSystemAsleep;
    g_bApmSuspended = a2;
    if ( !a2 )
      v4 = 1;
    g_bIsSystemAsleep = v4;
    v5 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v5 > 4u )
    {
      v15 = 0;
      v12 = 0;
      v7 = g_bIsSystemAsleep;
      v8 = g_bApmSuspended;
      v13 = &v7;
      v10 = &v8;
      v14 = 4;
      v11 = 4;
      tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18004B0B9, 0LL, 0LL, 4u, &v9);
    }
    TsSessionOnApmResumeSuspendStateChanged();
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
