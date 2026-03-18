/*
 * XREFs of _MapDesktop@4 @ 0x6FA98
 * Callers:
 *     _NtUserBuildHwndList@32 @ 0x2A632 (_NtUserBuildHwndList@32.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _UserCommitDesktopMemory@12 @ 0xAAE84 (_UserCommitDesktopMemory@12.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

NTSTATUS __stdcall MapDesktop(_DWORD *a1)
{
  _DWORD *v1; // edi
  NTSTATUS v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v5; // ebx
  int DLT; // eax
  int v7; // ecx
  ULONG v8; // eax
  int v9; // [esp-4h] [ebp-30h]
  int v10; // [esp+Ch] [ebp-20h] BYREF
  int v11; // [esp+10h] [ebp-1Ch]
  int v12; // [esp+14h] [ebp-18h] BYREF
  _DWORD *v13; // [esp+18h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-10h]
  int v15; // [esp+20h] [ebp-Ch] BYREF
  int v16; // [esp+24h] [ebp-8h] BYREF
  int ProcessWin32Process; // [esp+28h] [ebp-4h]

  v1 = a1;
  v2 = 0;
  v15 = 0;
  v10 = 0;
  v11 = 0;
  v3 = (_DWORD *)a1[2];
  v13 = v3;
  v16 = 0;
  a1 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(6, 24, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, (char)v3, v1[1]);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  if ( *v1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(v1[1]);
    if ( ProcessWin32Process )
    {
      if ( (v1[1] == _gpepCSRSS
         || IsProcessDwm(v1[1])
         || (unsigned __int8)ObFindHandleForObject(v1[1], v3, ExDesktopObjectType, 0, &v16))
        && (v9 = v1[1], v14 = v3[15], PsGetProcessSessionId(v9) == *v3) )
      {
        if ( GetDesktopView(ProcessWin32Process, v3) )
          goto LABEL_10;
        v5 = (_DWORD *)Win32AllocPoolWithQuota(12, 1768977237);
        if ( v5 )
        {
          v10 = 4096;
          v11 = 0;
          v2 = MmMapViewOfSection(v14, v1[1], &a1, 0, 0, &v10, &v15, 2, 0x400000, 2);
          if ( v2 < 0 )
          {
            Win32FreePool(v5);
          }
          else
          {
            v5[1] = v13;
            v5[2] = a1;
            DLT = DLT_DESKTOP::getDLT();
            GetDomainLockRef(DLT);
            v7 = ProcessWin32Process;
            *v5 = *(_DWORD *)(ProcessWin32Process + 384);
            *(_DWORD *)(v7 + 384) = v5;
          }
          if ( v2 >= 0 )
            goto LABEL_10;
        }
        else
        {
          v2 = -1073741801;
        }
      }
      else
      {
        v2 = -1073741790;
      }
    }
    else
    {
      v2 = -1073741811;
    }
    v8 = RtlNtStatusToDosError(v2);
    UserSetLastError(v8);
  }
LABEL_10:
  if ( !v12 )
    UserSessionSwitchLeaveCrit();
  return v2;
}
