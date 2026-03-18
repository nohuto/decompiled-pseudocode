/*
 * XREFs of _NtUserBuildHwndList@32 @ 0x2A632
 * Callers:
 *     <none>
 * Callees:
 *     _CallerCanSeeImmersiveWindows@0 @ 0x2A4A8 (_CallerCanSeeImmersiveWindows@0.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserBuildHwndList(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        volatile void *Address,
        ULONG a8)
{
  int v8; // ebx
  int v9; // edi
  int ThreadDesktopWindow; // eax
  int v11; // eax
  unsigned int v12; // edi
  _DWORD *v13; // edx
  _DWORD *v14; // ecx
  int v15; // esi
  int v17; // eax
  int v18; // eax
  int v19; // [esp+10h] [ebp-44h] BYREF
  int CurrentProcess; // [esp+14h] [ebp-40h]
  PVOID v21; // [esp+18h] [ebp-3Ch]
  int v22; // [esp+1Ch] [ebp-38h]
  int v23; // [esp+20h] [ebp-34h]
  _BYTE v24[8]; // [esp+24h] [ebp-30h] BYREF
  int v25; // [esp+34h] [ebp-20h]
  PVOID Object; // [esp+38h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  int v28; // [esp+6Ch] [ebp+18h]

  Object = 0;
  v8 = 0;
  v19 = 0;
  CurrentProcess = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  v9 = 2 * (*_gpsi & 4 | 1);
  if ( a4 && !CallerCanSeeImmersiveWindows() )
    v9 |= 0x20u;
  if ( a2 )
  {
    ThreadDesktopWindow = ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_37;
  }
  else
  {
    ThreadDesktopWindow = 0;
  }
  if ( a5 )
  {
    v17 = PtiFromThreadId(a5);
    v28 = v17;
    if ( !v17 )
      goto LABEL_38;
    v18 = *(_DWORD *)(v17 + 248);
    if ( !v18 )
      goto LABEL_38;
    ThreadDesktopWindow = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18 + 4) + 12) + 60);
  }
  else
  {
    v28 = 0;
  }
  if ( !a1 )
  {
LABEL_9:
    if ( ThreadDesktopWindow )
    {
      if ( !a3 )
        goto LABEL_13;
      v9 |= 1u;
      goto LABEL_12;
    }
    if ( Object )
    {
LABEL_13:
      v11 = BuildHwndList(ThreadDesktopWindow, v9, v28);
      v8 = v11;
      if ( v11 )
      {
        v12 = ((*(_DWORD *)(v11 + 4) - v11 - 16) >> 2) + 1;
        ms_exc.registration.TryLevel = 0;
        if ( a6 > 0x3FFFFFFF )
          ExRaiseAccessViolation();
        ProbeForWrite(Address, 4 * a6, 4u);
        v13 = (_DWORD *)a8;
        v14 = (_DWORD *)a8;
        if ( a8 >= _MmUserProbeAddress )
          v14 = (_DWORD *)_MmUserProbeAddress;
        *v14 = *v14;
        if ( v12 > a6 )
        {
          v15 = -1073741789;
        }
        else
        {
          memcpy((void *)Address, (const void *)(v8 + 16), 4 * v12);
          v15 = 0;
          v13 = (_DWORD *)a8;
        }
        v25 = v15;
        *v13 = v12;
        ms_exc.registration.TryLevel = -2;
      }
      else
      {
        v15 = -1073741816;
        UserSetLastError(8);
      }
      goto LABEL_20;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(v28);
    if ( ThreadDesktopWindow )
    {
LABEL_12:
      ThreadDesktopWindow = *(_DWORD *)(ThreadDesktopWindow + 60);
      goto LABEL_13;
    }
LABEL_38:
    v15 = -1073741816;
    UserSetLastError(87);
    goto LABEL_24;
  }
  if ( (int)ValidateHdesk(a1, 1, 1, &Object) < 0 )
  {
LABEL_37:
    v15 = -1073741816;
    goto LABEL_24;
  }
  v21 = Object;
  v19 = 1;
  CurrentProcess = PsGetCurrentProcess();
  v15 = MapDesktop(&v19);
  v25 = v15;
  if ( v15 >= 0 )
  {
    ThreadDesktopWindow = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)Object + 1) + 12) + 60);
    goto LABEL_9;
  }
  UserSetLastError(6);
LABEL_20:
  if ( v8 )
    FreeHwndList(v8);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_24:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit();
  return v15;
}
