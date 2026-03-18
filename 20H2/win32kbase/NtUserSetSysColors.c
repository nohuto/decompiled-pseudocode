/*
 * XREFs of NtUserSetSysColors @ 0x1C008B8D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetSysColors @ 0x1C001BB80 (xxxSetSysColors.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     CreateProfileUserName @ 0x1C008DA20 (CreateProfileUserName.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, unsigned int a4)
{
  __int64 v7; // r12
  char *v8; // rdi
  char *v9; // rsi
  struct tagTHREADINFO *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r14d
  int v25[2]; // [rsp+38h] [rbp-90h] BYREF
  char *v26; // [rsp+40h] [rbp-88h]
  char *v27; // [rsp+48h] [rbp-80h]
  __int128 v28; // [rsp+58h] [rbp-70h] BYREF
  __int64 v29; // [rsp+68h] [rbp-60h]
  __int128 v30; // [rsp+70h] [rbp-58h] BYREF
  __int64 v31; // [rsp+80h] [rbp-48h]
  __int128 v32; // [rsp+88h] [rbp-40h] BYREF
  __int64 v33; // [rsp+98h] [rbp-30h]

  v7 = a1;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v25[0] = 0x2000;
  v25[1] = -1;
  EnterCrit(0, 1);
  v10 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 8;
  else
    v11 = 0;
  if ( v11 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v25, 0) )
  {
    v23 = 0;
    UserSetLastError(5LL, (__int64)v10);
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v13 = 4 * v7;
      if ( 4 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
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
      v15 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x72637355u);
      v8 = v15;
      v26 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      memmove(v15, a2, 4 * v7);
      v16 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x76637355u);
      v9 = v16;
      v27 = v16;
      if ( !v16 )
        ExRaiseStatus(-1073741801);
      memmove(v16, a3, 4 * v7);
    }
    if ( qword_1C024FEC0 )
      qword_1C024FEC0(v8, &v32, Win32FreePool);
    if ( qword_1C024FEC0 )
      qword_1C024FEC0(v9, &v30, Win32FreePool);
    v17 = CreateProfileUserName(&v28);
    v23 = xxxSetSysColors(v18, v7, v8, v9, a4);
    if ( v17 && qword_1C024FFE8 )
      qword_1C024FFE8(&v28);
    if ( qword_1C024FED0 )
      qword_1C024FED0(&v30);
    if ( qword_1C024FED0 )
      qword_1C024FED0(&v32);
    if ( v8 )
      Win32FreePool((__int64)v8);
    if ( v9 )
      Win32FreePool((__int64)v9);
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v23;
}
