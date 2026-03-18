/*
 * XREFs of MapDesktop @ 0x1C0026340
 * Callers:
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     NtUserBuildHwndList @ 0x1C006BFF0 (NtUserBuildHwndList.c)
 *     xxxSetThreadDesktop @ 0x1C00BD740 (xxxSetThreadDesktop.c)
 *     xxxResolveDesktop @ 0x1C00C45C0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     UserCommitDesktopMemory @ 0x1C0114F50 (UserCommitDesktopMemory.c)
 * Callees:
 *     GetDesktopView @ 0x1C0026530 (GetDesktopView.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0026A10 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v2; // r14
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 ProcessWin32Process; // r15
  __int64 v8; // rcx
  __int64 v9; // r12
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  ULONG v13; // eax
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v15[8]; // [rsp+58h] [rbp-8h] BYREF
  int v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+58h] BYREF

  v14 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(a1, 4, 6, 24, (__int64)&WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids, v2, *(_QWORD *)(a1 + 8));
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( ProcessWin32Process )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( (v8 == gpepCSRSS
         || (unsigned int)IsProcessDwm(v8)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v2, ExDesktopObjectType, 0LL, &v19))
        && (v9 = *(_QWORD *)(v2 + 120), (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) == *(_DWORD *)v2) )
      {
        if ( GetDesktopView(ProcessWin32Process, v2) )
          goto LABEL_10;
        v11 = (_QWORD *)Win32AllocPoolWithQuota(24LL, 1768977237LL);
        if ( v11 )
        {
          v12 = *(_QWORD *)(a1 + 8);
          v17 = 4096LL;
          v3 = MmMapViewOfSection(v9, v12, &v18, 0LL, 0LL, &v17, &v14, 2, 0x400000, 2);
          if ( v3 < 0 )
          {
            Win32FreePool(v11);
          }
          else
          {
            v11[1] = v2;
            v11[2] = v18;
            CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v15);
            *v11 = *(_QWORD *)(ProcessWin32Process + 704);
            *(_QWORD *)(ProcessWin32Process + 704) = v11;
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
    v13 = RtlNtStatusToDosError(v3);
    UserSetLastError(v13);
  }
LABEL_10:
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v5, v4, v6);
  return (unsigned int)v3;
}
