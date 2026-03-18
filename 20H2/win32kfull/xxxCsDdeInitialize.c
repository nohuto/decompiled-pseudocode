/*
 * XREFs of xxxCsDdeInitialize @ 0x1C011F460
 * Callers:
 *     NtUserDdeInitialize @ 0x1C011F360 (NtUserDdeInitialize.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00B20A8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C011F72C (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v12; // edi
  unsigned __int64 Window; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  struct tagWND **v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD v31[2]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v32[3]; // [rsp+A8h] [rbp-31h] BYREF
  _QWORD v33[3]; // [rsp+C0h] [rbp-19h] BYREF
  _QWORD v34[10]; // [rsp+D8h] [rbp-1h] BYREF

  v5 = 0LL;
  v34[2] = 0LL;
  v33[2] = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 16399LL;
  if ( !PsGetCurrentProcessWin32Process(a1, a2, a3)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10),
        v12 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v12 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v32, 0LL);
  v32[2] = 0LL;
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)*(unsigned __int16 *)(gpsi + 884LL),
             *(unsigned __int16 *)(gpsi + 884LL),
             0LL,
             0xC0000000,
             0,
             0,
             0,
             0,
             0LL,
             (__int64)v32,
             hModuleWin,
             0LL,
             0,
             -2147482870,
             v12,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
  if ( !Window )
    return 16399LL;
  LOBYTE(v14) = 9;
  v15 = HMAllocObject(gptiCurrent, 0LL, v14);
  v16 = v15;
  if ( !v15 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v17 = (struct tagWND **)(v15 + 48);
  v31[1] = Window;
  v31[0] = v15 + 48;
  HMAssignmentLock(v31);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v31);
  xxxSetWindowLongPtr(*v17, 0, *(_QWORD *)v16, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v31);
  *(_QWORD *)(v16 + 56) = a5;
  *(_QWORD *)(v16 + 24) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  *(_DWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 32) = *(_QWORD *)(gptiCurrent + 624LL);
  v18 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 624LL) = v16;
  v33[0] = v18;
  *(_QWORD *)(gptiCurrent + 416LL) = v33;
  v33[1] = v16;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (PKDPC)v16;
  HMLockObject(v16);
  v34[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v34;
  v34[1] = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v16, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v16) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v17);
    if ( ThreadUnlock1(v26, v25, v27) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v29, v28, v30);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v16;
  if ( *v17 )
    v5 = *(_QWORD *)*v17;
  *a2 = v5;
  ThreadUnlock1(a1, v19, v20);
  ThreadUnlock1(v22, v21, v23);
  *a3 = MonitorFlags;
  return 0LL;
}
