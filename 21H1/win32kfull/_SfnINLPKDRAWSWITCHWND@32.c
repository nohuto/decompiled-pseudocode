/*
 * XREFs of _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     __WindowFromDC@4 @ 0x9A764 (__WindowFromDC@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char *__stdcall SfnINLPKDRAWSWITCHWND(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  char *result; // eax
  int v11; // esi
  PKTHREAD v12; // eax
  struct tagWND *v13; // eax
  HDC DC; // edi
  int DPIServerInfo; // eax
  _DWORD *v16; // edi
  _DWORD *v17; // esi
  char *v18; // ecx
  PKTHREAD v19; // eax
  int v20; // eax
  int *v21; // ecx
  _DWORD *v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // ecx
  char *v26; // eax
  _DWORD *v27; // edi
  HDC v28; // esi
  int *v29; // ecx
  int v30; // esi
  unsigned int v31; // [esp+0h] [ebp-2E0h]
  ULONG *v32; // [esp+0h] [ebp-2E0h]
  unsigned int v33; // [esp+0h] [ebp-2E0h]
  unsigned int *v34; // [esp+4h] [ebp-2DCh]
  unsigned int v35; // [esp+4h] [ebp-2DCh]
  void **v36; // [esp+4h] [ebp-2DCh]
  _DWORD v37[3]; // [esp+10h] [ebp-2D0h] BYREF
  int v38; // [esp+1Ch] [ebp-2C4h]
  int v39; // [esp+20h] [ebp-2C0h]
  int v40; // [esp+24h] [ebp-2BCh]
  int v41; // [esp+34h] [ebp-2ACh]
  int v42; // [esp+38h] [ebp-2A8h] BYREF
  int *v43; // [esp+3Ch] [ebp-2A4h]
  int v44; // [esp+40h] [ebp-2A0h]
  int v45; // [esp+4Ch] [ebp-294h]
  HDC v46; // [esp+50h] [ebp-290h]
  unsigned int v47; // [esp+54h] [ebp-28Ch] BYREF
  int v48; // [esp+58h] [ebp-288h] BYREF
  ULONG_PTR RegionSize; // [esp+5Ch] [ebp-284h] BYREF
  int v50; // [esp+60h] [ebp-280h]
  char *v51; // [esp+64h] [ebp-27Ch]
  int v52; // [esp+68h] [ebp-278h]
  int *v53; // [esp+6Ch] [ebp-274h]
  int v54; // [esp+70h] [ebp-270h]
  int v55; // [esp+74h] [ebp-26Ch]
  ULONG_PTR v56; // [esp+78h] [ebp-268h] BYREF
  char *v57; // [esp+7Ch] [ebp-264h]
  char v58; // [esp+82h] [ebp-25Eh] BYREF
  char v59; // [esp+83h] [ebp-25Dh] BYREF
  _BYTE v60[64]; // [esp+84h] [ebp-25Ch] BYREF
  char v61[516]; // [esp+C4h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2C8h] [ebp-18h]

  v53 = a1;
  v50 = a3;
  v54 = a4;
  v56 = 0;
  memset(v60, 0, sizeof(v60));
  v57 = v60;
  v47 = 0;
  v48 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v55 = ThreadWin32Thread;
  if ( a1 )
    v52 = v53[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v52 = 0;
  if ( (ULongAdd(2, *(_DWORD *)(v54 + 16), (int *)&v56, v31, v34) & 0x80000000) != 0
    || *(int *)(v54 + 20) < 0 && ULongLongToULong(2LL * v56, v32) < 0 )
  {
    goto LABEL_28;
  }
  result = AllocCallbackMessage(1, 64, v56, v61, 1u, 0x200u, (int)v32, v35);
  v11 = (int)result;
  v57 = result;
  v51 = result;
  if ( !result )
    return result;
  v12 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v12);
  memset(v37, 0, sizeof(v37));
  if ( (_BYTE *)v11 != v60 && (char *)v11 != v61 )
    PushW32ThreadLock(v11, v37, (int)Win32FreePool);
  if ( CaptureCallbackData(
         *(const void **)(v54 + 24),
         (char *)v11,
         (const unsigned __int8 *)(*(_DWORD *)(v54 + 16) + 2),
         (char *)(v11 + 44),
         v33,
         v36) < 0 )
    goto LABEL_28;
  v13 = _WindowFromDC();
  DC = (HDC)_GetDC(v13);
  v46 = DC;
  RegionSize = GreSetTextColor(DC, *(_DWORD *)(_gpsi + 4240));
  v45 = GreSetBkColor(DC, *(_DWORD *)(_gpsi + 4228));
  DPIServerInfo = GetDPIServerInfo();
  v50 = GreSelectFont(DC, *(_DWORD *)(DPIServerInfo + 8));
  *(_DWORD *)(v11 + 24) = v52;
  *(_DWORD *)(v11 + 28) = a2;
  *(_DWORD *)(v11 + 32) = DC;
  v16 = (_DWORD *)(v11 + 48);
  v17 = (_DWORD *)v54;
  *v16 = *(_DWORD *)v54;
  *++v16 = *++v17;
  *++v16 = *++v17;
  v16[1] = v17[1];
  v18 = v57;
  *((_DWORD *)v57 + 9) = a5;
  *((_DWORD *)v18 + 10) = a6;
  v19 = KeGetCurrentThread();
  v20 = W32GetThreadWin32Thread(v19);
  v42 = *(_DWORD *)(v20 + 228);
  *(_DWORD *)(v20 + 228) = &v42;
  v21 = v53;
  v43 = v53;
  if ( v53 )
  {
    HMLockObject(v53);
    v21 = v53;
  }
  ms_exc.registration.TryLevel = 0;
  v22 = *(_DWORD **)(v55 + 260);
  v38 = v22[10];
  v39 = v22[11];
  v40 = v22[12];
  v22[11] = v52;
  v23 = 0;
  if ( v21 )
    v23 = *v21;
  v24 = v55;
  *(_DWORD *)(*(_DWORD *)(v55 + 260) + 40) = v23;
  if ( v21 )
    v25 = *(_DWORD *)(v21[5] + 140);
  else
    v25 = 0;
  *(_DWORD *)(*(_DWORD *)(v24 + 260) + 48) = v25;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v58);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v59);
  EtwTraceBeginCallback(97);
  v26 = v57;
  *((_DWORD *)v57 + 3) = 0;
  v55 = KeUserModeCallback(97, v26, *(_DWORD *)v26, &v47, &v48);
  EtwTraceEndCallback(97);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v59);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v58);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v27 = (_DWORD *)(*(_DWORD *)(v24 + 260) + 40);
  *v27++ = v38;
  *v27 = v39;
  v27[1] = v40;
  ms_exc.registration.TryLevel = -2;
  v28 = v46;
  GreSelectFont(v46, v50);
  GreSetBkColor(v28, v45);
  GreSetTextColor(v28, RegionSize);
  _ReleaseDC(v28);
  if ( v55 < 0 )
    goto LABEL_28;
  if ( v48 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v29 = (int *)v47;
    if ( v47 + 4 < v47 || v47 + 4 > _MmUserProbeAddress )
      v29 = (int *)_MmUserProbeAddress;
    v30 = *v29;
    v41 = *v29;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
LABEL_28:
    v30 = 0;
  }
  if ( v57 != v60 && v57 != v61 )
  {
    if ( *((_DWORD *)v57 + 5) )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v57 + 5, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v37);
  }
  return (char *)v30;
}
