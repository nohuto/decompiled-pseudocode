/*
 * XREFs of xxxConsoleControl @ 0x1C0027F08
 * Callers:
 *     NtUserConsoleControl @ 0x1C0027DF0 (NtUserConsoleControl.c)
 * Callees:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0028258 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C002ADB0 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4 (xxxClientFreeWindowClassExtraBytes.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     DesktopAlloc @ 0x1C00ADCA0 (DesktopAlloc.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     xxxbFullscreenSwitch @ 0x1C021F2EC (xxxbFullscreenSwitch.c)
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
  _QWORD *v17; // rdi
  _QWORD *v18; // r12
  __int64 v19; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // r15
  _DWORD *v22; // r15
  __int64 v23; // rax
  PVOID Object[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 CurrentProcess; // [rsp+58h] [rbp-60h]
  _QWORD *v26; // [rsp+60h] [rbp-58h]
  _QWORD v27[3]; // [rsp+68h] [rbp-50h] BYREF
  const void *v28; // [rsp+80h] [rbp-38h]
  int v29; // [rsp+D8h] [rbp+20h]

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
        v23 = ValidateHwnd(*(_QWORD *)a2);
        if ( v23 )
        {
          *(_DWORD *)(*(_QWORD *)(v23 + 16) + 868LL) = *((_DWORD *)a2 + 2);
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
    v17 = v16;
    Object[2] = v16;
    if ( !v16 )
      return v5;
    v18 = v16 + 5;
    v26 = v16 + 5;
    v19 = v16[5];
    if ( (*(_BYTE *)(v19 + 18) & 4) != 0 || *(char *)(v19 + 19) < 0 || *(int *)(v19 + 200) < 8 )
      return v5;
    if ( *(_QWORD *)(v16[2] + 416LL) != PsGetCurrentProcessWin32Process(v19) )
      return (unsigned int)-1073741790;
    v27[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v27[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v27;
    v27[1] = v17;
    HMLockObject(v17);
    v21 = *v18;
    if ( (*(_DWORD *)(*v18 + 232LL) & 0x800) != 0 )
    {
      v22 = (_DWORD *)(*(_QWORD *)(v17[3] + 128LL) + *(_QWORD *)(v21 + 296));
    }
    else
    {
      v22 = (_DWORD *)DesktopAlloc(v17[3], *(unsigned int *)(v21 + 200), 0LL);
      Object[3] = v22;
      if ( !v22 )
      {
        v5 = -1073741801;
LABEL_33:
        ThreadUnlock1();
        return v5;
      }
      if ( *(_QWORD *)(*v18 + 296LL) )
      {
        CurrentProcess = PsGetCurrentProcess();
        v29 = *(_DWORD *)(*v18 + 200LL);
        v28 = *(const void **)(*v18 + 296LL);
        memmove(v22, v28, v29);
        if ( (*(_DWORD *)(CurrentProcess + 1124) & 0x40000008) == 0 )
          xxxClientFreeWindowClassExtraBytes(v17, *(_QWORD *)(v17[5] + 296LL));
      }
      *(_QWORD *)(*v18 + 296LL) = (char *)v22 - *(_QWORD *)(v17[3] + 128LL);
    }
    if ( v22 )
    {
      *v22 = *((_DWORD *)a2 + 2);
      v22[1] = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(*v18 + 232LL) |= 0x800u;
    goto LABEL_33;
  }
  if ( a3 == 24 )
    xxxSetConsoleCaretInfo(a2);
  return a3 != 24 ? 0xC000000D : 0;
}
