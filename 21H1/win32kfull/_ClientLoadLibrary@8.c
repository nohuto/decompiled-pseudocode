/*
 * XREFs of _ClientLoadLibrary@8 @ 0x16A64
 * Callers:
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 * Callees:
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

int __fastcall ClientLoadLibrary(unsigned __int16 *a1, unsigned __int16 *a2)
{
  _DWORD *v3; // ebx
  PKTHREAD CurrentThread; // eax
  unsigned __int16 *v5; // ecx
  int v6; // esi
  int *v7; // ecx
  int v8; // esi
  PVOID *v10; // ebx
  int v11; // [esp+0h] [ebp-280h]
  unsigned int v12; // [esp+0h] [ebp-280h]
  unsigned int v13; // [esp+0h] [ebp-280h]
  unsigned int v14; // [esp+4h] [ebp-27Ch]
  void **v15; // [esp+4h] [ebp-27Ch]
  void **v16; // [esp+4h] [ebp-27Ch]
  _BYTE v17[40]; // [esp+10h] [ebp-270h] BYREF
  _BYTE v18[12]; // [esp+38h] [ebp-248h] BYREF
  int v19; // [esp+48h] [ebp-238h]
  unsigned __int16 *v20; // [esp+4Ch] [ebp-234h]
  unsigned int v21; // [esp+50h] [ebp-230h] BYREF
  int v22; // [esp+54h] [ebp-22Ch] BYREF
  ULONG_PTR RegionSize; // [esp+58h] [ebp-228h] BYREF
  char v24; // [esp+5Eh] [ebp-222h] BYREF
  char v25; // [esp+5Fh] [ebp-221h] BYREF
  _BYTE v26[520]; // [esp+60h] [ebp-220h] BYREF
  CPPEH_RECORD ms_exc; // [esp+268h] [ebp-18h]

  v20 = a1;
  memset(v17, 0, sizeof(v17));
  v21 = 0;
  v22 = 0;
  v3 = AllocCallbackMessage(a1[1] + a2[1], v26, 1u, 0x200u, v11, v14);
  RegionSize = (ULONG_PTR)v3;
  if ( !v3 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v18, 0, sizeof(v18));
  if ( v3 != (_DWORD *)v17 && v3 != (_DWORD *)v26 )
    PushW32ThreadLock(v3, v18, Win32FreePool);
  v5 = v20;
  *((_WORD *)v3 + 12) = *v20;
  *((_WORD *)v3 + 13) = v5[1];
  if ( CaptureCallbackData(*v5 + 2, v3 + 7, v12, v15) < 0 )
    goto LABEL_18;
  *((_WORD *)v3 + 16) = *a2;
  *((_WORD *)v3 + 17) = a2[1];
  if ( CaptureCallbackData(*a2 + 2, v3 + 9, v13, v16) < 0 )
    goto LABEL_18;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v24);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  EtwTraceBeginCallback(75);
  v3[3] = 0;
  v6 = KeUserModeCallback(75, v3, *v3, &v21, &v22);
  EtwTraceEndCallback(75);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v24);
  if ( v6 < 0 )
    goto LABEL_18;
  if ( v22 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v7 = (int *)v21;
    if ( v21 + 4 < v21 || v21 + 4 > _MmUserProbeAddress )
      v7 = (int *)_MmUserProbeAddress;
    v8 = *v7;
    v19 = *v7;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
LABEL_18:
    v8 = 0;
  }
  if ( v3 != (_DWORD *)v17 && v3 != (_DWORD *)v26 )
  {
    v10 = (PVOID *)(v3 + 5);
    if ( *v10 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v10, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v18);
  }
  return v8;
}
