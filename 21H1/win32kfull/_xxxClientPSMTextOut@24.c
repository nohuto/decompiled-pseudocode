/*
 * XREFs of _xxxClientPSMTextOut@24 @ 0x19495D
 * Callers:
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _GreSaveDC@4 @ 0x93070 (_GreSaveDC@4.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// bad sp value at call has been detected, the output may be wrong!
char *__fastcall xxxClientPSMTextOut(HDC a1, int a2, int a3, const void **a4, int a5, int a6)
{
  char *result; // eax
  HDC v8; // edi
  char *v9; // ebx
  PKTHREAD CurrentThread; // eax
  HDC v11; // edi
  const void **v12; // ecx
  int v13; // eax
  PVOID *v14; // ebx
  int v15; // [esp+0h] [ebp-2A0h]
  unsigned int v16; // [esp+0h] [ebp-2A0h]
  int v17; // [esp+0h] [ebp-2A0h]
  unsigned int v18; // [esp+4h] [ebp-29Ch]
  void **v19; // [esp+4h] [ebp-29Ch]
  _BYTE v20[52]; // [esp+10h] [ebp-290h] BYREF
  _DWORD v21[5]; // [esp+44h] [ebp-25Ch] BYREF
  int v22; // [esp+58h] [ebp-248h] BYREF
  char *v23; // [esp+5Ch] [ebp-244h]
  int v24; // [esp+60h] [ebp-240h] BYREF
  ULONG_PTR RegionSize; // [esp+64h] [ebp-23Ch] BYREF
  int v26; // [esp+68h] [ebp-238h]
  int v27; // [esp+6Ch] [ebp-234h] BYREF
  const void **v28; // [esp+70h] [ebp-230h]
  HDC v29; // [esp+74h] [ebp-22Ch]
  char v30; // [esp+7Ah] [ebp-226h] BYREF
  char v31; // [esp+7Bh] [ebp-225h] BYREF
  char v32[524]; // [esp+7Ch] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+288h] [ebp-18h]

  v26 = a2;
  v29 = a1;
  RegionSize = (ULONG_PTR)a1;
  v28 = a4;
  memset(v20, 0, sizeof(v20));
  v22 = 0;
  v24 = 0;
  v27 = 0;
  result = (char *)CreateCompatiblePublicDC(a1, &v27);
  v8 = (HDC)result;
  v23 = result;
  if ( !result )
    return result;
  result = AllocCallbackMessage(1, 52, *((unsigned __int16 *)v28 + 1), v32, 1u, 0x200u, v15, v18);
  v9 = result;
  v21[4] = result;
  if ( !result )
  {
    if ( v8 != v29 )
    {
      GreDeleteDC(v8);
      return (char *)GreDeleteObject(v27);
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v21, 0, 12);
  if ( v9 != v20 && v9 != v32 )
    PushW32ThreadLock((int)v9, v21, (int)Win32FreePool);
  v11 = (HDC)v23;
  *((_DWORD *)v9 + 8) = v23;
  *((_DWORD *)v9 + 9) = v26;
  *((_DWORD *)v9 + 10) = a3;
  *((_DWORD *)v9 + 11) = a5;
  *((_DWORD *)v9 + 12) = a6;
  v12 = v28;
  *((_WORD *)v9 + 12) = *(_WORD *)v28;
  *((_WORD *)v9 + 13) = *((_WORD *)v12 + 1);
  if ( CaptureCallbackData(v12[1], v9, (const unsigned __int8 *)(*(unsigned __int16 *)v12 + 2), v9 + 28, v16, v19) >= 0 )
  {
    GreSaveDC(v17);
    v26 = v13;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v30);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
    EtwTraceBeginCallback(78);
    *((_DWORD *)v9 + 3) = 0;
    v28 = (const void **)KeUserModeCallback(78, v9, *(_DWORD *)v9, &v22, &v24);
    EtwTraceEndCallback(78);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v30);
    GreRestoreDC(v29, v26);
    if ( v11 == v29 )
      goto LABEL_15;
    if ( (int)v28 >= 0 )
    {
      NtGdiBitBltInternal(
        v29,
        0,
        0,
        *(_DWORD *)(_gpDispInfo + 44),
        *(_DWORD *)(_gpDispInfo + 48),
        v11,
        0,
        0,
        13369376,
        0,
        0);
LABEL_15:
      if ( (int)v28 >= 0 && v24 == 12 )
        ms_exc.registration.TryLevel = -2;
    }
  }
  if ( v11 != v29 )
  {
    GreDeleteDC(v11);
    GreDeleteObject(v27);
  }
  result = v20;
  if ( v9 != v20 )
  {
    result = v32;
    if ( v9 != v32 )
    {
      v14 = (PVOID *)(v9 + 20);
      if ( *v14 )
      {
        RegionSize = 0;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v14, &RegionSize, 0x8000u);
      }
      return (char *)PopAndFreeAlwaysW32ThreadLock((int)v21);
    }
  }
  return result;
}
