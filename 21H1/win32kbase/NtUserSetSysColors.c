/*
 * XREFs of NtUserSetSysColors @ 0x1C00113D0
 * Callers:
 *     <none>
 * Callees:
 *     CreateProfileUserName @ 0x1C0012C40 (CreateProfileUserName.c)
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     xxxSetSysColors @ 0x1C00A8604 (xxxSetSysColors.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, int a4)
{
  __int64 v7; // r12
  void *v8; // rdi
  void *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  char *v13; // rcx
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // rbx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // r14d
  _DWORD v21[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v22; // [rsp+40h] [rbp-88h]
  void *v23; // [rsp+48h] [rbp-80h]
  __int128 v24; // [rsp+58h] [rbp-70h] BYREF
  __int64 v25; // [rsp+68h] [rbp-60h]
  __int128 v26; // [rsp+70h] [rbp-58h] BYREF
  __int64 v27; // [rsp+80h] [rbp-48h]
  __int128 v28; // [rsp+88h] [rbp-40h] BYREF
  __int64 v29; // [rsp+98h] [rbp-30h]

  v7 = a1;
  v8 = 0LL;
  v22 = 0LL;
  v9 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v21[0] = 0x2000;
  v21[1] = -1;
  EnterCrit(0LL, 1LL);
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL) + 24LL) & 8;
  else
    v10 = 0;
  if ( v10 || !(unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 52) + 880LL, v21, 0LL) )
  {
    v19 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v12 = 4 * v7;
      if ( 4 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = &a2[v12];
        if ( (unsigned __int64)&a2[v12] > MmUserProbeAddress || v13 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v12 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v12] > MmUserProbeAddress || &a3[v12] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v14 = (void *)Win32AllocPoolWithQuota(4 * v7, 1919120213LL);
      v8 = v14;
      v22 = v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      memmove(v14, a2, 4 * v7);
      v15 = (void *)Win32AllocPoolWithQuota(4 * v7, 1986229077LL);
      v9 = v15;
      v23 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      memmove(v15, a3, 4 * v7);
    }
    if ( qword_1C0257E80 )
      qword_1C0257E80(v8, &v28, Win32FreePool);
    if ( qword_1C0257E80 )
      qword_1C0257E80(v9, &v26, Win32FreePool);
    v16 = CreateProfileUserName(&v24);
    v19 = xxxSetSysColors(v17, v7, (_DWORD)v8, (_DWORD)v9, a4);
    if ( v16 && qword_1C0257FA8 )
      qword_1C0257FA8(&v24);
    if ( qword_1C0257E90 )
      qword_1C0257E90(&v26);
    if ( qword_1C0257E90 )
      qword_1C0257E90(&v28);
    if ( v8 )
      Win32FreePool(v8);
    if ( v9 )
      Win32FreePool(v9);
  }
  UserSessionSwitchLeaveCrit(v18);
  return v19;
}
