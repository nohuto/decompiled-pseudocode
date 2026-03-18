/*
 * XREFs of xxxCsDdeInitialize @ 0x1C011DD40
 * Callers:
 *     NtUserDdeInitialize @ 0x1C011DC40 (NtUserDdeInitialize.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00A6928 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C011DFD0 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v11; // edi
  __int64 *Window; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  struct tagWND **v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
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
  _QWORD v31[2]; // [rsp+A8h] [rbp-31h] BYREF
  _QWORD v32[3]; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v33[3]; // [rsp+D0h] [rbp-9h] BYREF
  _QWORD v34[4]; // [rsp+E8h] [rbp+Fh] BYREF

  v6 = 0LL;
  v34[2] = 0LL;
  v33[2] = 0LL;
  if ( !PsGetCurrentProcessWin32Process(gptiCurrent)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9),
        v11 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v11 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v32, 0LL);
  v32[2] = 0LL;
  Window = (__int64 *)xxxCreateWindowEx(
                        0,
                        (wchar_t *)*(unsigned __int16 *)(gpsi + 884LL),
                        *(unsigned __int16 *)(gpsi + 884LL),
                        0LL,
                        -1073741824,
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
                        v11,
                        0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
  if ( !Window )
    return 16399LL;
  LOBYTE(v13) = 9;
  v14 = HMAllocObject(gptiCurrent, 0LL, v13);
  v15 = v14;
  if ( !v14 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v16 = (struct tagWND **)(v14 + 48);
  v31[1] = Window;
  v31[0] = v14 + 48;
  HMAssignmentLock(v31);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v31);
  xxxSetWindowLongPtr(*v16, 0LL, *(_QWORD *)v15, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v31);
  *(_QWORD *)(v15 + 56) = a5;
  *(_QWORD *)(v15 + 24) = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  *(_DWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(gptiCurrent + 616LL);
  v17 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 616LL) = v15;
  v33[0] = v17;
  *(_QWORD *)(gptiCurrent + 408LL) = v33;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = (PVOID)v15;
  v33[1] = v15;
  HMLockObject(v15);
  v34[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v34;
  v34[1] = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v15, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v15) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v16);
    if ( ThreadUnlock1(v26, v25, v27) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v29, v28, v30);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v15;
  if ( *v16 )
    v6 = *(_QWORD *)*v16;
  *a2 = v6;
  ThreadUnlock1(v19, v18, v20);
  ThreadUnlock1(v22, v21, v23);
  *a3 = MonitorFlags;
  return 0LL;
}
