/*
 * XREFs of _xxxClientLoadStringW@12 @ 0xD9AD4
 * Callers:
 *     ?xxxLoadSomeStrings@@YGXXZ @ 0xD9A20 (-xxxLoadSomeStrings@@YGXXZ.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356 (-AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z.c)
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z @ 0xCA80C (-CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

ULONG __fastcall xxxClientLoadStringW(int a1, struct _CALLBACKSTATUS *a2, struct _CALLBACKSTATUS *a3)
{
  char *v3; // esi
  PKTHREAD CurrentThread; // eax
  int v5; // esi
  ULONG *v6; // ecx
  ULONG v7; // edx
  unsigned int *v8; // esi
  unsigned int *v9; // esi
  int v10; // eax
  ULONG v11; // esi
  PVOID *v13; // eax
  int v14; // [esp+0h] [ebp-2B4h]
  unsigned int v15; // [esp+0h] [ebp-2B4h]
  int v16; // [esp+0h] [ebp-2B4h]
  unsigned int v17; // [esp+0h] [ebp-2B4h]
  unsigned int v18; // [esp+4h] [ebp-2B0h]
  void **v19; // [esp+4h] [ebp-2B0h]
  int v20; // [esp+4h] [ebp-2B0h]
  int v21; // [esp+4h] [ebp-2B0h]
  _BYTE v22[40]; // [esp+10h] [ebp-2A4h] BYREF
  unsigned int v23; // [esp+38h] [ebp-27Ch]
  unsigned int v24; // [esp+3Ch] [ebp-278h]
  unsigned int v25; // [esp+40h] [ebp-274h]
  _DWORD v26[3]; // [esp+4Ch] [ebp-268h] BYREF
  unsigned int v27[3]; // [esp+58h] [ebp-25Ch] BYREF
  struct _CALLBACKSTATUS *v28[3]; // [esp+6Ch] [ebp-248h] BYREF
  int v29; // [esp+78h] [ebp-23Ch]
  int v30; // [esp+7Ch] [ebp-238h] BYREF
  ULONG_PTR RegionSize; // [esp+80h] [ebp-234h] BYREF
  ULONG v32; // [esp+84h] [ebp-230h]
  unsigned int v33; // [esp+88h] [ebp-22Ch] BYREF
  char v34; // [esp+8Eh] [ebp-226h] BYREF
  char v35; // [esp+8Fh] [ebp-225h] BYREF
  char v36[524]; // [esp+90h] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+29Ch] [ebp-18h]

  v29 = a1;
  memset(v22, 0, sizeof(v22));
  v33 = 0;
  v30 = 0;
  v32 = 0;
  v28[2] = a2;
  v28[0] = 0;
  v28[1] = (struct _CALLBACKSTATUS *)2;
  v3 = AllocCallbackMessage(1, 40, 2 * (_DWORD)a3, v36, 0, 0x200u, v14, v18);
  RegionSize = (ULONG_PTR)v3;
  if ( !v3 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v26, 0, sizeof(v26));
  if ( v3 != v22 && v3 != v36 )
    PushW32ThreadLock((int)v3, v26, (int)Win32FreePool);
  *((_DWORD *)v3 + 6) = v29;
  *((_DWORD *)v3 + 7) = a3;
  if ( AllocateCallbackData(2 * (_DWORD)a3, (int)v3, (struct _CAPTUREBUF *)(v3 + 32), v15, v19) >= 0 )
  {
    *((_DWORD *)v3 + 9) = 2 * (_DWORD)a3;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
    EtwTraceBeginCallback(98);
    *((_DWORD *)v3 + 3) = 0;
    v5 = KeUserModeCallback(98, v3, *(_DWORD *)v3, &v33, &v30);
    EtwTraceEndCallback(98);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
    if ( v5 >= 0 && v30 == 12 )
    {
      ms_exc.registration.TryLevel = 0;
      v6 = (ULONG *)v33;
      if ( v33 + 4 < v33 || v33 + 4 > _MmUserProbeAddress )
        v6 = (ULONG *)_MmUserProbeAddress;
      v7 = *v6;
      v32 = *v6;
      ms_exc.registration.TryLevel = 1;
      v8 = (unsigned int *)v33;
      if ( v33 + 12 < v33 || v33 + 12 > _MmUserProbeAddress )
        v8 = (unsigned int *)_MmUserProbeAddress;
      v23 = *v8;
      v9 = v8 + 1;
      v24 = *v9;
      v25 = v9[1];
      v27[0] = v23;
      v27[1] = v24;
      v27[2] = v25;
      v10 = *(_DWORD *)(_gptiCurrent + 276);
      if ( !v10 || (*(_BYTE *)(v10 + 44) & 1) == 0 || *(struct _CALLBACKSTATUS ***)(v10 + 52) != v28 )
      {
        v11 = CalcOutputStringSize(v7, (int)v27, 0, 0, v16, v20);
        v32 = v11;
        CopyOutputString(v28, v27, a3, 0, v17, v21);
        ms_exc.registration.TryLevel = -2;
        goto LABEL_15;
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
  v11 = 0;
  v32 = 0;
LABEL_15:
  if ( (_BYTE *)RegionSize != v22 && (char *)RegionSize != v36 )
  {
    v13 = (PVOID *)(RegionSize + 20);
    if ( *(_DWORD *)(RegionSize + 20) )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v13, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v26);
  }
  return v11;
}
