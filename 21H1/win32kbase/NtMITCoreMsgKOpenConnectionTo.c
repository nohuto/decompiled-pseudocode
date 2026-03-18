/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C0043870
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C003B744 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  _BOOL8 v7; // rcx
  ULONG64 v8; // rcx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+60h] [rbp-48h]
  __int128 v13; // [rsp+68h] [rbp-40h] BYREF
  __int128 v14; // [rsp+78h] [rbp-30h]
  __int64 v15; // [rsp+88h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
  v7 = 0LL;
  if ( CurrentProcess )
    v7 = CurrentProcess == g_pepDwm;
  if ( !v7 )
  {
    v9 = -1073741790;
LABEL_9:
    UserSessionSwitchLeaveCrit(v7);
    return v9;
  }
  if ( a1 <= 0x12 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v8 = a2 + 40;
    if ( a2 + 40 < a2 || v8 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11 = *(_OWORD *)(a2 + 16);
    v12 = *(_QWORD *)(a2 + 32);
    v13 = *(_OWORD *)a2;
    v14 = v11;
    v15 = v12;
    v9 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(v8, a1, (__int64)&v13);
    goto LABEL_9;
  }
  UserSessionSwitchLeaveCrit(v7);
  return 3221225485LL;
}
