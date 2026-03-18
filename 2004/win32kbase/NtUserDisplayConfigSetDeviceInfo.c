/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C0132620
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0095808 (CheckAccessEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00B48C8 (_DeviceInfoTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C014A5A0 (DrvDisplayConfigSetDeviceInfo.c)
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
  __int64 v11; // r9
  unsigned int v12; // eax
  int v14[4]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v15; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+60h] [rbp-78h]
  _QWORD v17[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 30;
  LOBYTE(v17[6]) = -1;
  v2 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v14[0] = 0x2000;
  v14[1] = -1;
  EnterCrit(0LL, 1);
  if ( !gbVideoInitialized )
  {
LABEL_2:
    v7 = -1073741823;
    goto LABEL_31;
  }
  v3 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL);
    v8 = *(_DWORD *)(v4 + 24) & 0x10;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 880LL), v14, 0) )
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
  if ( qword_1C0251EC0 )
    qword_1C0251EC0(v2, &v15, Win32FreePool, v11);
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
  v12 = DrvDisplayConfigSetDeviceInfo(v2, v17);
  v7 = v12;
  if ( v12 == -2147483643 )
  {
    v7 = -1073741789;
  }
  else if ( v12 != -1073741789 )
  {
    v7 = DeviceInfoTranslateStatusDefault(*v2, v12);
  }
LABEL_31:
  if ( v2 && qword_1C0251FE8 )
    qword_1C0251FE8(&v15);
  UserSessionSwitchLeaveCrit(v4, (__int64)v3, v5, v6);
  return v7;
}
