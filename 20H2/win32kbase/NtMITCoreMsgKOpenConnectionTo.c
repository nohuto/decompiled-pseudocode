/*
 * XREFs of NtMITCoreMsgKOpenConnectionTo @ 0x1C00B1A30
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C00A9C34 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKOpenConnectionTo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _BOOL8 v10; // rcx
  ULONG64 v11; // rcx
  unsigned int v12; // ebx
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+60h] [rbp-48h]
  __int128 v16; // [rsp+68h] [rbp-40h] BYREF
  __int128 v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+88h] [rbp-20h]

  EnterCrit(0, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
  v10 = 0LL;
  if ( CurrentProcess )
    v10 = CurrentProcess == g_pepDwm;
  if ( !v10 )
  {
    v12 = -1073741790;
LABEL_9:
    UserSessionSwitchLeaveCrit(v10, v7, v8, v9);
    return v12;
  }
  if ( a1 <= 0x12 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v11 = a2 + 40;
    if ( a2 + 40 < a2 || v11 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v14 = *(_OWORD *)(a2 + 16);
    v15 = *(_QWORD *)(a2 + 32);
    v16 = *(_OWORD *)a2;
    v17 = v14;
    v18 = v15;
    v12 = InputExtensibilityCallout::CoreMsgOpenDestinationHandle(v11, a1, (__int64)&v16, v9);
    goto LABEL_9;
  }
  UserSessionSwitchLeaveCrit(v10, v7, v8, v9);
  return 3221225485LL;
}
