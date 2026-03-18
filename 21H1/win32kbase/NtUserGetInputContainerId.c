/*
 * XREFs of NtUserGetInputContainerId @ 0x1C0139430
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetInputContainerId(struct _GUID *a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG64 v11; // rcx
  int v12; // eax
  _DWORD v14[12]; // [rsp+20h] [rbp-68h] BYREF
  struct _GUID v15; // [rsp+50h] [rbp-38h]
  struct _GUID v16; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(0LL, 1);
  v16 = 0LL;
  v4 = 0;
  v14[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( isChildPartition(v8, v7) )
    goto LABEL_2;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _GUID *)MmUserProbeAddress;
  v15 = *a1;
  v16 = v15;
  if ( gpfnIVResolveContainerId )
    v12 = gpfnIVResolveContainerId(&v16, (struct CONTAINER_ID *)v14);
  else
    v12 = -1073741637;
  if ( v12 < 0 )
  {
    v10 = 87LL;
    goto LABEL_3;
  }
  if ( (*(_WORD *)(CurrentProcessWin32Process + 1088) || *(_WORD *)(CurrentProcessWin32Process + 1090))
    && *(_DWORD *)(CurrentProcessWin32Process + 1088) != v14[0] )
  {
LABEL_2:
    v10 = 5LL;
LABEL_3:
    UserSetLastError(v10, v9);
    goto LABEL_18;
  }
  v11 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v14[0];
  *(_DWORD *)(CurrentProcessWin32Process + 1088) = v14[0];
  v4 = 1;
LABEL_18:
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
