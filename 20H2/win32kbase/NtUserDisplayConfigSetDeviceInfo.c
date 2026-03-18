/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C01302D0
 * Callers:
 *     <none>
 * Callees:
 *     _DeviceInfoTranslateStatusDefault @ 0x1C000DCE8 (_DeviceInfoTranslateStatusDefault.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C01480D0 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rdi
  struct tagTHREADINFO *v3; // rdx
  ULONG64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  size_t v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v13[4]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v14; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15; // [rsp+60h] [rbp-78h]
  _QWORD v16[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 30;
  LOBYTE(v16[6]) = -1;
  v2 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v13[0] = 0x2000;
  v13[1] = -1;
  EnterCrit(0, 1);
  if ( !gbVideoInitialized )
  {
LABEL_2:
    v7 = -1073741823;
    goto LABEL_31;
  }
  v3 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v8 = *(_DWORD *)(v4 + 24) & 0x10;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v13, 0) )
    goto LABEL_30;
  v3 = (struct tagTHREADINFO *)(Src + 4);
  v4 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v3 = (struct tagTHREADINFO *)MmUserProbeAddress;
  v9 = *(unsigned int *)v3;
  if ( *(_DWORD *)v3 < 0x14u )
  {
    v7 = -1073741789;
    v2 = 0LL;
    goto LABEL_31;
  }
  v2 = (_DWORD *)Win32AllocPoolWithQuota(*(unsigned int *)v3, 0x63447355u);
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  if ( qword_1C024FEC0 )
    qword_1C024FEC0(v2, &v14, Win32FreePool);
  if ( ((unsigned __int8)Src & (PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0)) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v9] > MmUserProbeAddress || &Src[v9] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, Src, v9);
  v2[1] = v9;
  if ( gfSwitchInProgress )
    goto LABEL_2;
  if ( *v2 != -19 )
  {
    if ( (unsigned int)UserIsWddmConnectedSession() )
      goto LABEL_25;
LABEL_30:
    v7 = -1073741790;
    goto LABEL_31;
  }
  if ( gSessionId != gServiceSessionId )
    goto LABEL_30;
LABEL_25:
  v11 = DrvDisplayConfigSetDeviceInfo(v2, v16);
  v7 = v11;
  if ( v11 == -2147483643 )
  {
    v7 = -1073741789;
  }
  else if ( v11 != -1073741789 )
  {
    v7 = DeviceInfoTranslateStatusDefault(*v2, v11);
  }
LABEL_31:
  if ( v2 && qword_1C024FFE8 )
    qword_1C024FFE8(&v14);
  UserSessionSwitchLeaveCrit(v4, (__int64)v3, v5, v6);
  return v7;
}
