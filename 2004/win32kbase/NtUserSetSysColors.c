/*
 * XREFs of NtUserSetSysColors @ 0x1C0024F00
 * Callers:
 *     <none>
 * Callees:
 *     CreateProfileUserName @ 0x1C0025900 (CreateProfileUserName.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0095808 (CheckAccessEx.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     xxxSetSysColors @ 0x1C00A6C60 (xxxSetSysColors.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, int a4)
{
  __int64 v7; // r12
  void *v8; // rdi
  void *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbx
  char *v14; // rcx
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // r14d
  _DWORD v22[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v23; // [rsp+40h] [rbp-88h]
  void *v24; // [rsp+48h] [rbp-80h]
  __int128 v25; // [rsp+58h] [rbp-70h] BYREF
  __int64 v26; // [rsp+68h] [rbp-60h]
  __int128 v27; // [rsp+70h] [rbp-58h] BYREF
  __int64 v28; // [rsp+80h] [rbp-48h]
  __int128 v29; // [rsp+88h] [rbp-40h] BYREF
  __int64 v30; // [rsp+98h] [rbp-30h]

  v7 = a1;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v22[0] = 0x2000;
  v22[1] = -1;
  EnterCrit(0LL, 1LL);
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL) + 24LL) & 8;
  else
    v10 = 0;
  if ( v10 || !(unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 52) + 880LL, v22, 0LL) )
  {
    v20 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v13 = 4 * v7;
      if ( 4 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = &a2[v13];
        if ( (unsigned __int64)&a2[v13] > MmUserProbeAddress || v14 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v13 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v13] > MmUserProbeAddress || &a3[v13] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v15 = (void *)Win32AllocPoolWithQuota(4 * v7, 1919120213LL);
      v8 = v15;
      v23 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      memmove(v15, a2, 4 * v7);
      v16 = (void *)Win32AllocPoolWithQuota(4 * v7, 1986229077LL);
      v9 = v16;
      v24 = v16;
      if ( !v16 )
        ExRaiseStatus(-1073741801);
      memmove(v16, a3, 4 * v7);
    }
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(v8, &v29, Win32FreePool, v12);
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(v9, &v27, Win32FreePool, v12);
    v17 = CreateProfileUserName(&v25);
    v20 = xxxSetSysColors(v18, v7, (_DWORD)v8, (_DWORD)v9, a4);
    if ( v17 && qword_1C0251FE8 )
      qword_1C0251FE8(&v25);
    if ( qword_1C0251ED0 )
      qword_1C0251ED0(&v27);
    if ( qword_1C0251ED0 )
      qword_1C0251ED0(&v29);
    if ( v8 )
      Win32FreePool(v8);
    if ( v9 )
      Win32FreePool(v9);
  }
  UserSessionSwitchLeaveCrit(v19);
  return v20;
}
