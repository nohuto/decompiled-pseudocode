/*
 * XREFs of _xxxConsoleControl@12 @ 0x1A9EA
 * Callers:
 *     _NtUserConsoleControl@12 @ 0x1A906 (_NtUserConsoleControl@12.c)
 * Callees:
 *     ?xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1AC7E (-xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YGHPAU_CONSOLE_CARET_INFO@@@Z @ 0x1B6CC (-xxxSetConsoleCaretInfo@@YGHPAU_CONSOLE_CARET_INFO@@@Z.c)
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxClientFreeWindowClassExtraBytes@8 @ 0xA270A (_xxxClientFreeWindowClassExtraBytes@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _xxxbFullscreenSwitch@8 @ 0x181710 (_xxxbFullscreenSwitch@8.c)
 */

unsigned int __fastcall xxxConsoleControl(int a1, _DWORD *a2, void *a3)
{
  NTSTATUS v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  void *v10; // ecx
  int ProcessWin32Process; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // ebx
  int v17; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  SIZE_T *v20; // ecx
  _DWORD *v21; // edx
  int v22; // eax
  int v23; // eax
  struct _CONSOLE_PROCESS_INFO *v24; // [esp+0h] [ebp-5Ch]
  _DWORD v25[3]; // [esp+10h] [ebp-4Ch] BYREF
  const void *v26; // [esp+20h] [ebp-3Ch]
  size_t v27; // [esp+24h] [ebp-38h]
  int CurrentProcess; // [esp+28h] [ebp-34h]
  _DWORD *v29; // [esp+2Ch] [ebp-30h]
  int v30; // [esp+30h] [ebp-2Ch]
  _DWORD *v31; // [esp+34h] [ebp-28h]
  _DWORD *v32; // [esp+3Ch] [ebp-20h]
  PVOID Object; // [esp+40h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]
  void *v35; // [esp+64h] [ebp+8h]

  v31 = a2;
  v4 = 0;
  v30 = 0;
  if ( !a1 )
    return -1073741811;
  v5 = a1 - 1;
  if ( !v5 )
  {
    if ( a3 == (void *)8 )
      return xxxUserNotifyConsoleApplication(v24);
    return -1073741811;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 == (void *)12 )
    {
      xxxbFullscreenSwitch(*a2, a2[1]);
      return v4;
    }
    return -1073741811;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      if ( a3 == (void *)8 )
      {
        v23 = ValidateHwnd(*a2);
        if ( v23 )
        {
          *(_DWORD *)(*(_DWORD *)(v23 + 8) + 488) = a2[1];
          return v4;
        }
      }
      return -1073741811;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a3 == (void *)8 )
      {
        v10 = (void *)*a2;
        Object = 0;
        v4 = ObReferenceObjectByHandle(v10, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0);
        if ( v4 >= 0 )
        {
          if ( PsGetProcessSessionId(Object) == _gSessionId )
          {
            ProcessWin32Process = PsGetProcessWin32Process(Object);
            if ( ProcessWin32Process )
            {
              v12 = *(_DWORD *)(ProcessWin32Process + 8);
              if ( a2[1] )
                v13 = v12 | 0x4080000;
              else
                v13 = v12 & 0xFBF7FFFF;
              *(_DWORD *)(ProcessWin32Process + 8) = v13;
            }
            else
            {
              v4 = -1073741816;
            }
          }
          else
          {
            v4 = -1073741811;
          }
          ObfDereferenceObject(Object);
        }
        return v4;
      }
      return -1073741811;
    }
    if ( v9 != 1 )
      return -1073741821;
    if ( a3 != (void *)12 )
      return -1073741811;
    v15 = (_DWORD *)ValidateHwnd(*a2);
    v16 = v15;
    v29 = v15;
    if ( !v15 )
      return v4;
    v32 = v15 + 5;
    v17 = v15[5];
    if ( (*(_BYTE *)(v17 + 10) & 4) != 0 || *(char *)(v17 + 11) < 0 || *(int *)(v17 + 128) < 8 )
      return v4;
    if ( *(_DWORD *)(v16[2] + 232) != PsGetCurrentProcessWin32Process() )
      return -1073741790;
    v25[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v25[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v25;
    v25[1] = v16;
    HMLockObject(v16);
    v20 = (SIZE_T *)v16[5];
    if ( (v20[36] & 0x800) != 0 )
    {
      v21 = (_DWORD *)(v20[48] + *(_DWORD *)(v16[3] + 64));
    }
    else
    {
      v21 = (_DWORD *)DesktopAlloc(v16[3], v20[32], 0);
      v35 = v21;
      if ( !v21 )
      {
        v4 = -1073741801;
LABEL_34:
        ThreadUnlock1();
        return v4;
      }
      if ( *(_DWORD *)(v16[5] + 192) )
      {
        CurrentProcess = PsGetCurrentProcess();
        ms_exc.registration.TryLevel = 0;
        v22 = v16[5];
        v27 = *(_DWORD *)(v22 + 128);
        v26 = *(const void **)(v22 + 192);
        memcpy(v35, v26, v27);
        ms_exc.registration.TryLevel = -2;
        v21 = v35;
        if ( (*(_DWORD *)(CurrentProcess + 252) & 0x40000008) == 0 )
        {
          xxxClientFreeWindowClassExtraBytes(v16, *(_DWORD *)(v16[5] + 192));
          v21 = v35;
        }
      }
      *(_DWORD *)(*v32 + 192) = (char *)v21 - *(_DWORD *)(v16[3] + 64);
    }
    if ( v21 )
    {
      *v21 = a2[1];
      v21[1] = a2[2];
    }
    *(_DWORD *)(*v32 + 144) |= 0x800u;
    goto LABEL_34;
  }
  if ( a3 == (void *)20 )
    xxxSetConsoleCaretInfo(v24);
  return a3 != (void *)20 ? 0xC000000D : 0;
}
