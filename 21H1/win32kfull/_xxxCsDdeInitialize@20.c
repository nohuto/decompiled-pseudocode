/*
 * XREFs of _xxxCsDdeInitialize@20 @ 0xE3B3C
 * Callers:
 *     _NtUserDdeInitialize@20 @ 0xE3AA0 (_NtUserDdeInitialize@20.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowLong@20 @ 0x3EF3C (_xxxSetWindowLong@20.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _xxxChangeMonitorFlags@8 @ 0xE3CE8 (_xxxChangeMonitorFlags@8.c)
 */

int __fastcall xxxCsDdeInitialize(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  struct tagVWPL *v5; // edi
  int CurrentProcessWin32Process; // eax
  char v7; // si
  struct tagVWPL **Window; // esi
  int v9; // edx
  int v10; // ecx
  int *v11; // ebx
  int v12; // eax
  struct tagVWPL **v13; // eax
  int v15; // [esp+4h] [ebp-44h]
  int v16; // [esp+8h] [ebp-40h]
  _DWORD v17[4]; // [esp+14h] [ebp-34h] BYREF
  int v18; // [esp+24h] [ebp-24h] BYREF
  int v19; // [esp+28h] [ebp-20h] BYREF
  int *v20; // [esp+2Ch] [ebp-1Ch]
  int v21; // [esp+34h] [ebp-14h] BYREF
  int v22; // [esp+38h] [ebp-10h]
  int v23; // [esp+44h] [ebp-4h]

  v17[0] = a1;
  v5 = 0;
  v17[1] = a2;
  v23 = 0;
  v22 = 0;
  v7 = 0;
  if ( PsGetCurrentProcessWin32Process() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v7 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(&v18, 0);
  v20 = 0;
  Window = (struct tagVWPL **)xxxCreateWindowEx(
                                0,
                                (_DWORD *)*(unsigned __int16 *)(_gpsi + 484),
                                *(unsigned __int16 *)(_gpsi + 484),
                                0,
                                0xC0000000,
                                0,
                                0,
                                0,
                                0,
                                0,
                                (int)&v18,
                                _hModuleWin,
                                0,
                                0,
                                0x30Au,
                                v7,
                                0);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v18);
  if ( !Window )
    return 16399;
  v11 = (int *)HMAllocObject(_gptiCurrent, 0, 9, 32);
  if ( !v11 )
  {
    xxxDestroyWindow(Window);
    return 16399;
  }
  HMAssignmentLock(v10, v9);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  xxxSetWindowLong(v11[6], 0, *v11, 0, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  v11[7] = a5;
  v11[3] = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  v11[5] = 0;
  v11[4] = *(_DWORD *)(v15 + 336);
  v12 = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 336) = v11;
  v19 = v12;
  *(_DWORD *)(v15 + 228) = &v19;
  WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = (ULONG)v11;
  v20 = v11;
  HMLockObject(v11);
  v21 = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = &v21;
  v22 = v16;
  HMLockObject(v16);
  xxxChangeMonitorFlags(v11, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v11) + 13) & 1) != 0 )
  {
    HMAssignmentUnlock(v11 + 6);
    if ( ThreadUnlock1() )
      xxxDestroyWindow(Window);
    ThreadUnlock1();
    return 16399;
  }
  *_gptiCurrent = *v11;
  v13 = (struct tagVWPL **)v11[6];
  if ( v13 )
    v5 = *v13;
  *Window = v5;
  ThreadUnlock1();
  ThreadUnlock1();
  *a3 = MonitorFlags;
  return 0;
}
