/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C0138610
 * Callers:
 *     <none>
 * Callees:
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00952B8 (_DeviceInfoTranslateStatusDefault.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C01508F0 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rdi
  ULONG64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  _DWORD *v6; // rdx
  size_t v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v11[4]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v12; // [rsp+50h] [rbp-88h] BYREF
  __int64 v13; // [rsp+60h] [rbp-78h]
  _QWORD v14[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v14[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 30;
  LOBYTE(v14[6]) = -1;
  v2 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v11[0] = 0x2000;
  v11[1] = -1;
  EnterCrit(0LL, 1);
  if ( !gbVideoInitialized )
  {
LABEL_2:
    v4 = -1073741823;
    goto LABEL_31;
  }
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL);
    v5 = *(_DWORD *)(v3 + 24) & 0x10;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 880LL), v11, 0) )
    goto LABEL_30;
  v6 = Src + 4;
  v3 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  v7 = (unsigned int)*v6;
  if ( *v6 < 0x14u )
  {
    v4 = -1073741789;
    v2 = 0LL;
    goto LABEL_31;
  }
  v2 = (_DWORD *)Win32AllocPoolWithQuota((unsigned int)*v6, 0x63447355u);
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  if ( qword_1C0257E80 )
    qword_1C0257E80(v2, &v12, Win32FreePool);
  if ( ((unsigned __int8)Src & (PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0)) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v7] > MmUserProbeAddress || &Src[v7] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, Src, v7);
  v2[1] = v7;
  if ( gfSwitchInProgress )
    goto LABEL_2;
  if ( *v2 != -19 )
  {
    if ( (unsigned int)UserIsWddmConnectedSession() )
      goto LABEL_25;
LABEL_30:
    v4 = -1073741790;
    goto LABEL_31;
  }
  if ( gSessionId != gServiceSessionId )
    goto LABEL_30;
LABEL_25:
  v9 = DrvDisplayConfigSetDeviceInfo(v2, v14);
  v4 = v9;
  if ( v9 == -2147483643 )
  {
    v4 = -1073741789;
  }
  else if ( v9 != -1073741789 )
  {
    v4 = DeviceInfoTranslateStatusDefault(*v2, v9);
  }
LABEL_31:
  if ( v2 && qword_1C0257FA8 )
    qword_1C0257FA8(&v12);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
