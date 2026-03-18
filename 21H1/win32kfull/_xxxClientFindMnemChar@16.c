/*
 * XREFs of _xxxClientFindMnemChar@16 @ 0x19406B
 * Callers:
 *     _xxxMNFindChar@16 @ 0x1ACD4F (_xxxMNFindChar@16.c)
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

char *__fastcall xxxClientFindMnemChar(const void **a1, __int16 a2, int a3, int a4)
{
  char *result; // eax
  char *v6; // ebx
  PKTHREAD CurrentThread; // eax
  int v8; // esi
  int *v9; // ecx
  int v10; // esi
  PVOID *v11; // ebx
  int v12; // [esp+0h] [ebp-27Ch]
  unsigned int v13; // [esp+0h] [ebp-27Ch]
  unsigned int v14; // [esp+4h] [ebp-278h]
  void **v15; // [esp+4h] [ebp-278h]
  _BYTE v16[44]; // [esp+10h] [ebp-26Ch] BYREF
  _DWORD v17[5]; // [esp+3Ch] [ebp-240h] BYREF
  unsigned int v18; // [esp+50h] [ebp-22Ch] BYREF
  int v19; // [esp+54h] [ebp-228h] BYREF
  ULONG_PTR RegionSize; // [esp+58h] [ebp-224h] BYREF
  __int16 v21; // [esp+5Ch] [ebp-220h] BYREF
  char v22; // [esp+5Fh] [ebp-21Dh] BYREF
  char v23[516]; // [esp+60h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+264h] [ebp-18h]

  v21 = a2;
  memset(v16, 0, sizeof(v16));
  v18 = 0;
  v19 = 0;
  result = AllocCallbackMessage(1, 44, *((unsigned __int16 *)a1 + 1), v23, 1u, 0x200u, v12, v14);
  v6 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    W32GetThreadWin32Thread(CurrentThread);
    memset(v17, 0, 12);
    if ( v6 != v16 && v6 != v23 )
      PushW32ThreadLock((int)v6, v17, (int)Win32FreePool);
    *((_WORD *)v6 + 16) = v21;
    *((_DWORD *)v6 + 9) = 1;
    *((_DWORD *)v6 + 10) = 1;
    *((_WORD *)v6 + 12) = *(_WORD *)a1;
    *((_WORD *)v6 + 13) = *((_WORD *)a1 + 1);
    if ( CaptureCallbackData(a1[1], v6, (const unsigned __int8 *)(*(unsigned __int16 *)a1 + 2), v6 + 28, v13, v15) < 0 )
      goto LABEL_15;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&v21 + 1));
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
    EtwTraceBeginCallback(66);
    *((_DWORD *)v6 + 3) = 0;
    v8 = KeUserModeCallback(66, v6, *(_DWORD *)v6, &v18, &v19);
    EtwTraceEndCallback(66);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)((char *)&v21 + 1));
    if ( v8 < 0 )
      goto LABEL_15;
    if ( v19 == 12 )
    {
      ms_exc.registration.TryLevel = 0;
      v9 = (int *)v18;
      if ( v18 + 4 < v18 || v18 + 4 > _MmUserProbeAddress )
        v9 = (int *)_MmUserProbeAddress;
      v10 = *v9;
      v17[4] = *v9;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
LABEL_15:
      v10 = 0;
    }
    if ( v6 != v16 && v6 != v23 )
    {
      v11 = (PVOID *)(v6 + 20);
      if ( *v11 )
      {
        RegionSize = 0;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v11, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((int)v17);
    }
    return (char *)v10;
  }
  return result;
}
