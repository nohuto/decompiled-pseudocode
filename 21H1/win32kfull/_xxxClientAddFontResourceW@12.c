/*
 * XREFs of _xxxClientAddFontResourceW@12 @ 0xD719A
 * Callers:
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 *     _xxxAddFontResourceW@12 @ 0xD716A (_xxxAddFontResourceW@12.c)
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
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xxxClientAddFontResourceW(const void **a1, int a2, _DWORD *a3)
{
  char *v4; // ebx
  PKTHREAD CurrentThread; // eax
  int v6; // esi
  int *v7; // ecx
  int v8; // esi
  PVOID *v10; // ebx
  int v11; // [esp+0h] [ebp-2C0h]
  unsigned int v12; // [esp+0h] [ebp-2C0h]
  unsigned int v13; // [esp+4h] [ebp-2BCh]
  void **v14; // [esp+4h] [ebp-2BCh]
  _DWORD v15[5]; // [esp+10h] [ebp-2B0h] BYREF
  int v16; // [esp+24h] [ebp-29Ch]
  unsigned int v17; // [esp+28h] [ebp-298h] BYREF
  int v18; // [esp+2Ch] [ebp-294h] BYREF
  ULONG_PTR RegionSize; // [esp+30h] [ebp-290h] BYREF
  char v20; // [esp+36h] [ebp-28Ah] BYREF
  char v21; // [esp+37h] [ebp-289h] BYREF
  _BYTE v22[108]; // [esp+38h] [ebp-288h] BYREF
  char v23[516]; // [esp+A4h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2A8h] [ebp-18h]

  v16 = a2;
  memset(v22, 0, sizeof(v22));
  v17 = 0;
  v18 = 0;
  v4 = AllocCallbackMessage(1, 108, *((unsigned __int16 *)a1 + 1), v23, 1u, 0x200u, v11, v13);
  RegionSize = (ULONG_PTR)v4;
  if ( !v4 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v15, 0, 12);
  if ( v4 != v22 && v4 != v23 )
    PushW32ThreadLock((int)v4, v15, (int)Win32FreePool);
  *((_WORD *)v4 + 12) = *(_WORD *)a1;
  *((_WORD *)v4 + 13) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData(a1[1], v4, (const unsigned __int8 *)(*(unsigned __int16 *)a1 + 2), v4 + 28, v12, v14) < 0 )
    goto LABEL_19;
  *((_DWORD *)v4 + 8) = v16;
  if ( a3 && a3[1] )
    qmemcpy(v4 + 36, a3, 0x48u);
  else
    *((_DWORD *)v4 + 10) = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(83);
  *((_DWORD *)v4 + 3) = 0;
  v6 = KeUserModeCallback(83, v4, *(_DWORD *)v4, &v17, &v18);
  EtwTraceEndCallback(83);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v20);
  if ( v6 < 0 )
    goto LABEL_19;
  if ( v18 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v7 = (int *)v17;
    if ( v17 + 4 < v17 || v17 + 4 > _MmUserProbeAddress )
      v7 = (int *)_MmUserProbeAddress;
    v8 = *v7;
    v15[4] = *v7;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
LABEL_19:
    v8 = 0;
  }
  if ( v4 != v22 && v4 != v23 )
  {
    v10 = (PVOID *)(v4 + 20);
    if ( *v10 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v10, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v15);
  }
  return v8;
}
