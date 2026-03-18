/*
 * XREFs of NtUserGetGestureConfig @ 0x1C01F92D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     GetGestureConfigSettings @ 0x1C0227198 (GetGestureConfigSettings.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rsi
  int GestureConfigSettings; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  size_t v19; // r15
  __int64 v20; // rcx
  void *v21; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+68h] [rbp-40h] BYREF
  __int128 v26; // [rsp+70h] [rbp-38h] BYREF
  __int64 v27; // [rsp+80h] [rbp-28h]

  v26 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v26;
    *((_QWORD *)&v26 + 1) = v9;
    HMLockObject(v9);
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004LL, v11, v12);
        GestureConfigSettings = 0;
LABEL_20:
        ThreadUnlock1(v15, v14, v16);
        goto LABEL_21;
      }
      v17 = *(_QWORD *)(v9 + 40);
      if ( *(char *)(v17 + 20) < 0 || *(char *)(v17 + 19) < 0 )
      {
        v13 = 1400LL;
        goto LABEL_19;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v18 = *a4;
        if ( (unsigned int)(v18 - 1) <= 0xFF )
        {
          v19 = (unsigned int)(12 * v18);
          v21 = (void *)Win32AllocPoolWithQuota(v19, 1667724117LL);
          if ( v21 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20);
            ProbeForWrite(Address, 12 * v18, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v21, (const void *)Address, v19);
            GestureConfigSettings = GetGestureConfigSettings((struct tagWND *)v9, (__int64)v21);
            if ( GestureConfigSettings )
              memmove((void *)Address, v21, v19);
            Win32FreePool(v21);
            goto LABEL_20;
          }
          v13 = 8LL;
          goto LABEL_19;
        }
      }
    }
    v13 = 87LL;
LABEL_19:
    GestureConfigSettings = 0;
    UserSetLastError(v13, v11, v12);
    goto LABEL_20;
  }
  GestureConfigSettings = 0;
LABEL_21:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  UserSessionSwitchLeaveCrit(v23);
  return GestureConfigSettings;
}
