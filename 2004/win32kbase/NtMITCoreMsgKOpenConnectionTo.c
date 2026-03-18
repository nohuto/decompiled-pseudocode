/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C0050F70
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0048694 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // r9
  _BOOL8 v8; // rcx
  ULONG64 v9; // rcx
  unsigned int v10; // ebx
  __int128 v12; // [rsp+50h] [rbp-58h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  __int128 v14; // [rsp+68h] [rbp-40h] BYREF
  __int128 v15; // [rsp+78h] [rbp-30h]
  __int64 v16; // [rsp+88h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
  v8 = 0LL;
  if ( CurrentProcess )
    v8 = CurrentProcess == g_pepDwm;
  if ( !v8 )
  {
    v10 = -1073741790;
LABEL_9:
    UserSessionSwitchLeaveCrit(v8);
    return v10;
  }
  if ( a1 <= 0x12 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v9 = a2 + 40;
    if ( a2 + 40 < a2 || v9 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a2 + 32);
    v14 = *(_OWORD *)a2;
    v15 = v12;
    v16 = v13;
    v10 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(v9, a1, (__int64)&v14, v7);
    goto LABEL_9;
  }
  UserSessionSwitchLeaveCrit(v8);
  return 3221225485LL;
}
