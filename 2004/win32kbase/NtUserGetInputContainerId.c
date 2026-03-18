/*
 * XREFs of NtUserGetInputContainerId @ 0x1C0133790
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetInputContainerId(struct _GUID *a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  ULONG64 v13; // rcx
  int v14; // eax
  _DWORD v16[12]; // [rsp+20h] [rbp-68h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-38h]
  struct _GUID v18; // [rsp+60h] [rbp-28h] BYREF

  EnterCrit(0LL, 1);
  v18 = 0LL;
  v4 = 0;
  v16[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( isChildPartition(v8, v7) )
    goto LABEL_2;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _GUID *)MmUserProbeAddress;
  v17 = *a1;
  v18 = v17;
  if ( gpfnIVResolveContainerId )
    v14 = gpfnIVResolveContainerId(&v18, (struct CONTAINER_ID *)v16);
  else
    v14 = -1073741637;
  if ( v14 < 0 )
  {
    v12 = 87LL;
    goto LABEL_3;
  }
  if ( (*(_WORD *)(CurrentProcessWin32Process + 1088) || *(_WORD *)(CurrentProcessWin32Process + 1090))
    && *(_DWORD *)(CurrentProcessWin32Process + 1088) != v16[0] )
  {
LABEL_2:
    v12 = 5LL;
LABEL_3:
    UserSetLastError(v12, v9);
    goto LABEL_18;
  }
  v13 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v16[0];
  *(_DWORD *)(CurrentProcessWin32Process + 1088) = v16[0];
  v4 = 1;
LABEL_18:
  UserSessionSwitchLeaveCrit(v13, v9, v10, v11);
  return v4;
}
