/*
 * XREFs of _ClientEventCallback@8 @ 0x189761
 * Callers:
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
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

char *__fastcall ClientEventCallback(int a1, unsigned __int16 *a2)
{
  const unsigned __int8 *v2; // esi
  char *result; // eax
  char *v4; // ebx
  PKTHREAD CurrentThread; // eax
  int v6; // esi
  int *v7; // ecx
  int v8; // esi
  PVOID *v9; // ebx
  int v10; // [esp+0h] [ebp-278h]
  unsigned int v11; // [esp+0h] [ebp-278h]
  unsigned int v12; // [esp+4h] [ebp-274h]
  void **v13; // [esp+4h] [ebp-274h]
  _BYTE v14[32]; // [esp+10h] [ebp-268h] BYREF
  _DWORD v15[5]; // [esp+30h] [ebp-248h] BYREF
  unsigned __int16 *v16; // [esp+44h] [ebp-234h]
  int v17; // [esp+48h] [ebp-230h]
  unsigned int v18; // [esp+4Ch] [ebp-22Ch] BYREF
  int v19; // [esp+50h] [ebp-228h] BYREF
  ULONG_PTR RegionSize; // [esp+54h] [ebp-224h] BYREF
  char v21; // [esp+5Ah] [ebp-21Eh] BYREF
  char v22; // [esp+5Bh] [ebp-21Dh] BYREF
  char v23[516]; // [esp+5Ch] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+260h] [ebp-18h]

  v16 = a2;
  v17 = a1;
  v2 = (const unsigned __int8 *)(a2[3] + 8);
  memset(v14, 0, sizeof(v14));
  v18 = 0;
  v19 = 0;
  result = AllocCallbackMessage(1, 32, (ULONG_PTR)v2, v23, 1u, 0x200u, v10, v12);
  v4 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    W32GetThreadWin32Thread(CurrentThread);
    memset(v15, 0, 12);
    if ( v4 != v14 && v4 != v23 )
      PushW32ThreadLock((int)v4, v15, (int)Win32FreePool);
    *((_DWORD *)v4 + 6) = v17;
    if ( CaptureCallbackData(v16, v4, v2, v4 + 28, v11, v13) < 0 )
      goto LABEL_15;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v21);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
    EtwTraceBeginCallback(65);
    *((_DWORD *)v4 + 3) = 0;
    v6 = KeUserModeCallback(65, v4, *(_DWORD *)v4, &v18, &v19);
    EtwTraceEndCallback(65);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v21);
    if ( v6 < 0 )
      goto LABEL_15;
    if ( v19 == 12 )
    {
      ms_exc.registration.TryLevel = 0;
      v7 = (int *)v18;
      if ( v18 + 4 < v18 || v18 + 4 > _MmUserProbeAddress )
        v7 = (int *)_MmUserProbeAddress;
      v8 = *v7;
      v15[4] = *v7;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
LABEL_15:
      v8 = 0;
    }
    if ( v4 != v14 && v4 != v23 )
    {
      v9 = (PVOID *)(v4 + 20);
      if ( *v9 )
      {
        RegionSize = 0;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v9, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((int)v15);
    }
    return (char *)v8;
  }
  return result;
}
