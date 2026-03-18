/*
 * XREFs of _xxxClientLoadMenu@8 @ 0x16C34
 * Callers:
 *     _xxxLoadSysMenu@4 @ 0x1D24C (_xxxLoadSysMenu@4.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z @ 0x1A3018 (-xxxGetScrollMenu@@YGPAUtagMENU@@PAUtagWND@@H@Z.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

_DWORD *__fastcall xxxClientLoadMenu(int a1, ULONG_PTR a2)
{
  int v2; // eax
  _DWORD *v3; // esi
  PKTHREAD CurrentThread; // eax
  unsigned __int16 *v5; // ecx
  unsigned __int16 v6; // ax
  int v7; // esi
  int *v8; // ecx
  ULONG v9; // edx
  int v10; // esi
  _DWORD *result; // eax
  unsigned int v12; // [esp+0h] [ebp-27Ch]
  void **v13; // [esp+4h] [ebp-278h]
  _BYTE v14[12]; // [esp+10h] [ebp-26Ch] BYREF
  int v15; // [esp+20h] [ebp-25Ch]
  _DWORD v16[9]; // [esp+24h] [ebp-258h] BYREF
  int v17; // [esp+48h] [ebp-234h]
  PVOID *v18; // [esp+4Ch] [ebp-230h]
  unsigned int v19; // [esp+50h] [ebp-22Ch] BYREF
  int v20; // [esp+54h] [ebp-228h] BYREF
  ULONG_PTR RegionSize; // [esp+58h] [ebp-224h] BYREF
  char v22; // [esp+5Eh] [ebp-21Eh] BYREF
  char v23; // [esp+5Fh] [ebp-21Dh] BYREF
  _BYTE v24[516]; // [esp+60h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+264h] [ebp-18h]

  RegionSize = a2;
  v17 = a1;
  memset(v16, 0, sizeof(v16));
  v19 = 0;
  v20 = 0;
  v2 = *(unsigned __int16 *)(a2 + 2);
  if ( (_WORD)v2 )
  {
    result = AllocCallbackMessage(*(_WORD *)(a2 + 2) != 0 ? v2 : 0, v24, 1u, 0x200u, v12, (unsigned int)v13);
    v3 = result;
    v18 = (PVOID *)result;
    if ( !result )
      return result;
  }
  else
  {
    v3 = v16;
    v18 = (PVOID *)v16;
    memset(&v16[1], 0, 32);
    v16[0] = 36;
  }
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v14, 0, sizeof(v14));
  if ( v3 != v16 && v3 != (_DWORD *)v24 )
    PushW32ThreadLock(v3, v14, Win32FreePool);
  v3[6] = v17;
  v5 = (unsigned __int16 *)RegionSize;
  *((_WORD *)v3 + 14) = *(_WORD *)RegionSize;
  v6 = v5[1];
  *((_WORD *)v3 + 15) = v6;
  if ( v6 )
  {
    if ( CaptureCallbackData(*v5 + 2, v3 + 8, v12, v13) < 0 )
      goto LABEL_19;
  }
  else
  {
    v3[8] = *((_DWORD *)v5 + 1);
  }
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v22);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  EtwTraceBeginCallback(76);
  v3[3] = 0;
  v7 = KeUserModeCallback(76, v3, *v3, &v19, &v20);
  EtwTraceEndCallback(76);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v22);
  if ( v7 >= 0 && v20 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v8 = (int *)v19;
    v9 = v19 + 4;
    if ( v19 + 4 < v19 || v9 > _MmUserProbeAddress )
      v8 = (int *)_MmUserProbeAddress;
    v15 = *v8;
    ms_exc.registration.TryLevel = -2;
    LOBYTE(v9) = 2;
    v10 = HMValidateHandleNoRip(v15, v9);
    goto LABEL_12;
  }
LABEL_19:
  v10 = 0;
LABEL_12:
  if ( v18 != v16 && v18 != (PVOID *)v24 )
  {
    if ( v18[5] )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v18 + 5, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v14);
  }
  return (_DWORD *)v10;
}
