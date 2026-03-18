/*
 * XREFs of MapDesktop @ 0x1C003E670
 * Callers:
 *     xxxResolveDesktop @ 0x1C00103F0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     NtUserBuildHwndList @ 0x1C0049870 (NtUserBuildHwndList.c)
 *     xxxSetThreadDesktop @ 0x1C007DFF0 (xxxSetThreadDesktop.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     UserCommitDesktopMemory @ 0x1C01164E0 (UserCommitDesktopMemory.c)
 * Callees:
 *     GetDesktopView @ 0x1C003E860 (GetDesktopView.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003E8B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C003ED40 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v2; // r14
  NTSTATUS v3; // ebx
  __int64 v4; // rcx
  __int64 ProcessWin32Process; // r15
  __int64 v6; // rcx
  __int64 v7; // r12
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  ULONG v11; // eax
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v13[8]; // [rsp+58h] [rbp-8h] BYREF
  int v14; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+58h] BYREF

  v12 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(a1, 4, 6, 24, (__int64)&WPP_9563cc11843c38630c872e630d898c35_Traceguids, v2, *(_QWORD *)(a1 + 8));
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( ProcessWin32Process )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( (v6 == gpepCSRSS
         || (unsigned int)IsProcessDwm(v6)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v2, ExDesktopObjectType, 0LL, &v17))
        && (v7 = *(_QWORD *)(v2 + 120), (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) == *(_DWORD *)v2) )
      {
        if ( GetDesktopView(ProcessWin32Process, v2) )
          goto LABEL_10;
        v9 = (_QWORD *)Win32AllocPoolWithQuota(24LL, 1768977237LL);
        if ( v9 )
        {
          v10 = *(_QWORD *)(a1 + 8);
          v15 = 4096LL;
          v3 = MmMapViewOfSection(v7, v10, &v16, 0LL, 0LL, &v15, &v12, 2, 0x400000, 2);
          if ( v3 < 0 )
          {
            Win32FreePool(v9);
          }
          else
          {
            v9[1] = v2;
            v9[2] = v16;
            CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v13);
            *v9 = *(_QWORD *)(ProcessWin32Process + 704);
            *(_QWORD *)(ProcessWin32Process + 704) = v9;
          }
          if ( v3 >= 0 )
            goto LABEL_10;
        }
        else
        {
          v3 = -1073741801;
        }
      }
      else
      {
        v3 = -1073741790;
      }
    }
    else
    {
      v3 = -1073741811;
    }
    v11 = RtlNtStatusToDosError(v3);
    UserSetLastError(v11);
  }
LABEL_10:
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)v3;
}
