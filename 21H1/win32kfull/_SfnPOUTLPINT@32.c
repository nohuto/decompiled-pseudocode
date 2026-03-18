/*
 * XREFs of _SfnPOUTLPINT@32 @ 0x191E47
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
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356 (-AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char *__stdcall SfnPOUTLPINT(int *a1, int a2, unsigned int a3, ULONG_PTR a4, int a5, int a6, char a7, int a8)
{
  char *v8; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // esi
  char *result; // eax
  PKTHREAD v13; // eax
  bool v14; // zf
  const unsigned __int8 *v15; // esi
  PKTHREAD v16; // eax
  int v17; // eax
  int *v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx
  int v21; // esi
  _DWORD *v22; // edi
  int *v23; // ecx
  int v24; // esi
  int *v25; // esi
  int *v26; // esi
  PVOID *v27; // ebx
  struct _CAPTUREBUF *v28; // [esp-4h] [ebp-2E4h]
  ULONG *v29; // [esp+0h] [ebp-2E0h]
  int v30; // [esp+0h] [ebp-2E0h]
  unsigned int v31; // [esp+0h] [ebp-2E0h]
  unsigned int v32; // [esp+4h] [ebp-2DCh]
  void **v33; // [esp+4h] [ebp-2DCh]
  _BYTE v34[52]; // [esp+10h] [ebp-2D0h] BYREF
  int v35; // [esp+44h] [ebp-29Ch]
  int v36; // [esp+48h] [ebp-298h]
  volatile void *v37; // [esp+4Ch] [ebp-294h]
  _DWORD v38[3]; // [esp+50h] [ebp-290h] BYREF
  int v39; // [esp+5Ch] [ebp-284h]
  int v40; // [esp+60h] [ebp-280h]
  int v41; // [esp+64h] [ebp-27Ch]
  int v42; // [esp+78h] [ebp-268h]
  int v43; // [esp+7Ch] [ebp-264h]
  int v44; // [esp+80h] [ebp-260h]
  volatile void *Address; // [esp+84h] [ebp-25Ch]
  int v46; // [esp+88h] [ebp-258h] BYREF
  int *v47; // [esp+8Ch] [ebp-254h]
  int v48; // [esp+90h] [ebp-250h]
  int v49; // [esp+A0h] [ebp-240h] BYREF
  int v50; // [esp+A4h] [ebp-23Ch]
  int *v51; // [esp+A8h] [ebp-238h]
  unsigned int v52; // [esp+ACh] [ebp-234h] BYREF
  ULONG_PTR RegionSize[2]; // [esp+B0h] [ebp-230h] BYREF
  int v54; // [esp+B8h] [ebp-228h]
  SIZE_T Length; // [esp+BCh] [ebp-224h]
  char v56; // [esp+C2h] [ebp-21Eh] BYREF
  char v57; // [esp+C3h] [ebp-21Dh] BYREF
  char v58[516]; // [esp+C4h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2C8h] [ebp-18h]
  int v60; // [esp+300h] [ebp+20h]

  v51 = a1;
  RegionSize[0] = a4;
  Length = 0;
  memset(v34, 0, sizeof(v34));
  v8 = v34;
  v52 = 0;
  v49 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v54 = ThreadWin32Thread;
  if ( a1 )
    v11 = a1[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v11 = 0;
  v50 = v11;
  if ( ULongLongToULong(4LL * a3, v29) < 0 )
    goto LABEL_37;
  result = AllocCallbackMessage(1, 52, Length, v58, 0, 0x200u, v30, v32);
  v8 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( !result )
    return result;
  v13 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v13);
  memset(v38, 0, sizeof(v38));
  if ( v8 != v34 && v8 != v58 )
    PushW32ThreadLock((int)v8, v38, (int)Win32FreePool);
  *((_DWORD *)v8 + 6) = v11;
  *((_DWORD *)v8 + 7) = a2;
  *((_DWORD *)v8 + 8) = a3;
  *((_DWORD *)v8 + 9) = a5;
  *((_DWORD *)v8 + 10) = a6;
  v14 = (a7 & 2) == 0;
  v60 = a7 & 2;
  v15 = (const unsigned __int8 *)Length;
  v28 = (struct _CAPTUREBUF *)(v8 + 44);
  if ( v14 )
  {
    if ( AllocateCallbackData(Length, (int)v8, v28, v31, v33) < 0 )
      goto LABEL_37;
    *((_DWORD *)v8 + 12) = v15;
  }
  else
  {
    *((_DWORD *)v8 + 12) = Length;
    if ( CaptureCallbackData((const void *)RegionSize[0], v8, v15, (char *)v28, v31, v33) < 0 )
      goto LABEL_37;
  }
  v16 = KeGetCurrentThread();
  v17 = W32GetThreadWin32Thread(v16);
  v46 = *(_DWORD *)(v17 + 228);
  *(_DWORD *)(v17 + 228) = &v46;
  v18 = v51;
  v47 = v51;
  if ( v51 )
  {
    HMLockObject(v51);
    v18 = v51;
  }
  ms_exc.registration.TryLevel = 0;
  v19 = *(_DWORD **)(v54 + 260);
  v39 = v19[10];
  v40 = v19[11];
  v41 = v19[12];
  v19[11] = v50;
  if ( v18 )
    v20 = *v18;
  else
    v20 = 0;
  v21 = v54;
  *(_DWORD *)(*(_DWORD *)(v54 + 260) + 40) = v20;
  if ( v18 )
    v18 = *(int **)(v18[5] + 140);
  *(_DWORD *)(*(_DWORD *)(v21 + 260) + 48) = v18;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v56);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  EtwTraceBeginCallback(37);
  *((_DWORD *)v8 + 3) = 0;
  v54 = KeUserModeCallback(37, v8, *(_DWORD *)v8, &v52, &v49);
  EtwTraceEndCallback(37);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v57);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v56);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v22 = (_DWORD *)(*(_DWORD *)(v21 + 260) + 40);
  *v22++ = v39;
  *v22 = v40;
  v22[1] = v41;
  ms_exc.registration.TryLevel = -2;
  if ( v54 >= 0 && v49 == 12 )
  {
    ms_exc.registration.TryLevel = 2;
    v23 = (int *)v52;
    if ( v52 + 4 < v52 || v52 + 4 > _MmUserProbeAddress )
      v23 = (int *)_MmUserProbeAddress;
    v24 = *v23;
    v54 = v24;
    v42 = v24;
    ms_exc.registration.TryLevel = -2;
    if ( Length && (!a8 || (*(_BYTE *)(a8 + 44) & 5) == 0) && !v60 )
    {
      ms_exc.registration.TryLevel = 3;
      v25 = (int *)v52;
      if ( v52 + 12 < v52 || v52 + 12 > _MmUserProbeAddress )
        v25 = (int *)_MmUserProbeAddress;
      v43 = *v25;
      v26 = v25 + 1;
      v44 = *v26;
      Address = (volatile void *)v26[1];
      v35 = v43;
      v36 = v44;
      v37 = Address;
      ProbeForRead(Address, Length, 4u);
      memcpy((void *)RegionSize[0], (const void *)Address, Length);
      ms_exc.registration.TryLevel = -2;
      v24 = v54;
    }
    goto LABEL_38;
  }
LABEL_37:
  v24 = 0;
LABEL_38:
  if ( v8 != v34 && v8 != v58 )
  {
    v27 = (PVOID *)(v8 + 20);
    if ( *v27 )
    {
      RegionSize[0] = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v27, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v38);
  }
  return (char *)v24;
}
