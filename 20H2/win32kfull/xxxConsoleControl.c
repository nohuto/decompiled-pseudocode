/*
 * XREFs of xxxConsoleControl @ 0x1C003B148
 * Callers:
 *     NtUserConsoleControl @ 0x1C003B030 (NtUserConsoleControl.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0036AD0 (DesktopAlloc.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C003A080 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003B498 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00D442C (xxxClientFreeWindowClassExtraBytes.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     xxxbFullscreenSwitch @ 0x1C021E45C (xxxbFullscreenSwitch.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  void *v11; // rcx
  PVOID v12; // rdi
  __int64 ProcessWin32Process; // rax
  unsigned int v14; // edx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  _QWORD *v20; // r12
  __int64 v21; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r15
  _DWORD *v27; // r15
  __int64 v28; // rax
  PVOID Object[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 CurrentProcess; // [rsp+58h] [rbp-60h]
  _QWORD *v31; // [rsp+60h] [rbp-58h]
  _QWORD v32[3]; // [rsp+68h] [rbp-50h] BYREF
  const void *v33; // [rsp+80h] [rbp-38h]
  int v34; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 == 8 )
      return (unsigned int)xxxUserNotifyConsoleApplication(a2);
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a3 == 24 )
    {
      xxxbFullscreenSwitch(*(unsigned int *)a2, *((_QWORD *)a2 + 1));
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a3 == 16 )
      {
        v28 = ValidateHwnd(*(_QWORD *)a2);
        if ( v28 )
        {
          *(_DWORD *)(*(_QWORD *)(v28 + 16) + 876LL) = *((_DWORD *)a2 + 2);
          return v5;
        }
      }
      return (unsigned int)-1073741811;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      if ( a3 == 16 )
      {
        v11 = *(void **)a2;
        Object[0] = 0LL;
        v5 = ObReferenceObjectByHandle(v11, 0x200u, (POBJECT_TYPE)PsProcessType, 1, Object, 0LL);
        if ( (v5 & 0x80000000) == 0 )
        {
          v12 = Object[0];
          if ( (unsigned int)PsGetProcessSessionId(Object[0]) == gSessionId )
          {
            ProcessWin32Process = PsGetProcessWin32Process(v12);
            if ( ProcessWin32Process )
            {
              v14 = *(_DWORD *)(ProcessWin32Process + 12) | 0x4080000;
              if ( !*((_DWORD *)a2 + 2) )
                v14 = *(_DWORD *)(ProcessWin32Process + 12) & 0xFBF7FFFF;
              *(_DWORD *)(ProcessWin32Process + 12) = v14;
            }
            else
            {
              v5 = -1073741816;
            }
          }
          else
          {
            v5 = -1073741811;
          }
          ObfDereferenceObject(v12);
        }
        return v5;
      }
      return (unsigned int)-1073741811;
    }
    if ( v10 != 1 )
      return (unsigned int)-1073741821;
    if ( a3 != 16 )
      return (unsigned int)-1073741811;
    v16 = (_QWORD *)ValidateHwnd(*(_QWORD *)a2);
    v19 = v16;
    Object[2] = v16;
    if ( !v16 )
      return v5;
    v20 = v16 + 5;
    v31 = v16 + 5;
    v21 = v16[5];
    if ( (*(_BYTE *)(v21 + 18) & 4) != 0 || *(char *)(v21 + 19) < 0 || *(int *)(v21 + 200) < 8 )
      return v5;
    if ( *(_QWORD *)(v16[2] + 424LL) != PsGetCurrentProcessWin32Process(v21, v17, v18) )
      return (unsigned int)-1073741790;
    v32[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v32[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v32;
    v32[1] = v19;
    HMLockObject(v19);
    v26 = *v20;
    if ( (*(_DWORD *)(*v20 + 232LL) & 0x800) != 0 )
    {
      v27 = (_DWORD *)(*(_QWORD *)(v19[3] + 128LL) + *(_QWORD *)(v26 + 296));
    }
    else
    {
      v27 = DesktopAlloc(v19[3], *(_DWORD *)(v26 + 200));
      Object[3] = v27;
      if ( !v27 )
      {
        v5 = -1073741801;
LABEL_33:
        ThreadUnlock1(v24, v23, v25);
        return v5;
      }
      if ( *(_QWORD *)(*v20 + 296LL) )
      {
        CurrentProcess = PsGetCurrentProcess(v24, v23, v25);
        v34 = *(_DWORD *)(*v20 + 200LL);
        v33 = *(const void **)(*v20 + 296LL);
        memmove(v27, v33, v34);
        if ( (*(_DWORD *)(CurrentProcess + 1124) & 0x40000008) == 0 )
          xxxClientFreeWindowClassExtraBytes(v19, *(_QWORD *)(v19[5] + 296LL));
      }
      v24 = (char *)v27 - *(_QWORD *)(v19[3] + 128LL);
      *(_QWORD *)(*v20 + 296LL) = v24;
    }
    if ( v27 )
    {
      *v27 = *((_DWORD *)a2 + 2);
      v27[1] = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(*v20 + 232LL) |= 0x800u;
    goto LABEL_33;
  }
  if ( a3 == 24 )
    xxxSetConsoleCaretInfo(a2);
  return a3 != 24 ? 0xC000000D : 0;
}
