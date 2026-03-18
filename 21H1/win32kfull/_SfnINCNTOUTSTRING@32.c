/*
 * XREFs of _SfnINCNTOUTSTRING@32 @ 0x18BE0A
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
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356 (-AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z.c)
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z @ 0xCA80C (-CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char *__stdcall SfnINCNTOUTSTRING(int *a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  PKTHREAD CurrentThread; // eax
  ULONG_PTR ThreadWin32Thread; // ecx
  int v10; // esi
  char *result; // eax
  int v12; // esi
  PKTHREAD v13; // eax
  __int16 v14; // ax
  ULONG_PTR v15; // edi
  PKTHREAD v16; // eax
  int v17; // eax
  int *v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx
  ULONG_PTR v21; // esi
  int v22; // ecx
  char *v23; // eax
  _DWORD *v24; // edi
  ULONG_PTR *v25; // esi
  ULONG_PTR v26; // esi
  unsigned int *v27; // esi
  unsigned int *v28; // esi
  int v29; // eax
  struct _CALLBACKSTATUS **v30; // edi
  _WORD *v31; // eax
  unsigned int v32; // [esp+0h] [ebp-2F0h]
  ULONG *v33; // [esp+0h] [ebp-2F0h]
  unsigned int v34; // [esp+0h] [ebp-2F0h]
  int v35; // [esp+0h] [ebp-2F0h]
  unsigned int v36; // [esp+0h] [ebp-2F0h]
  unsigned int *v37; // [esp+4h] [ebp-2ECh]
  unsigned int v38; // [esp+4h] [ebp-2ECh]
  void **v39; // [esp+4h] [ebp-2ECh]
  int v40; // [esp+4h] [ebp-2ECh]
  int v41; // [esp+4h] [ebp-2ECh]
  _BYTE v42[56]; // [esp+10h] [ebp-2E0h] BYREF
  unsigned int v43; // [esp+48h] [ebp-2A8h]
  unsigned int v44; // [esp+4Ch] [ebp-2A4h]
  unsigned int v45; // [esp+50h] [ebp-2A0h]
  _DWORD v46[3]; // [esp+54h] [ebp-29Ch] BYREF
  unsigned int v47[3]; // [esp+60h] [ebp-290h] BYREF
  int v48; // [esp+6Ch] [ebp-284h]
  int v49; // [esp+70h] [ebp-280h]
  int v50; // [esp+74h] [ebp-27Ch]
  int v51; // [esp+8Ch] [ebp-264h] BYREF
  int *v52; // [esp+90h] [ebp-260h]
  int v53; // [esp+94h] [ebp-25Ch]
  int v54; // [esp+A0h] [ebp-250h] BYREF
  ULONG_PTR v55; // [esp+A4h] [ebp-24Ch]
  struct _LARGE_STRING *v56; // [esp+A8h] [ebp-248h]
  unsigned int v57; // [esp+ACh] [ebp-244h] BYREF
  int v58; // [esp+B0h] [ebp-240h]
  int *v59; // [esp+B4h] [ebp-23Ch]
  int v60; // [esp+B8h] [ebp-238h]
  char *v61; // [esp+BCh] [ebp-234h]
  ULONG_PTR v62; // [esp+C0h] [ebp-230h] BYREF
  int v63; // [esp+C4h] [ebp-22Ch]
  char v64; // [esp+CAh] [ebp-226h] BYREF
  char v65; // [esp+CBh] [ebp-225h] BYREF
  ULONG_PTR RegionSize; // [esp+CCh] [ebp-224h] BYREF
  char *v67; // [esp+D0h] [ebp-220h]
  char v68[516]; // [esp+D4h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2D8h] [ebp-18h]

  v59 = a1;
  v63 = a4;
  v62 = 0;
  v56 = (struct _LARGE_STRING *)(a7 & 1);
  memset(v42, 0, sizeof(v42));
  v67 = v42;
  v57 = 0;
  v54 = 0;
  v55 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  RegionSize = ThreadWin32Thread;
  if ( v59 )
    v58 = v59[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v58 = 0;
  v10 = *(_DWORD *)(v63 + 4);
  if ( (ULongAdd(2, v10 & 0x7FFFFFFF, (int *)&v62, v32, v37) & 0x80000000) == 0
    && (v10 >= 0 || v56 || ULongLongToULong(2LL * v62, v33) >= 0) )
  {
    result = AllocCallbackMessage(1, 56, v62, v68, 0, 0x200u, (int)v33, v38);
    v12 = (int)result;
    v67 = result;
    v61 = result;
    if ( !result )
      return result;
    v13 = KeGetCurrentThread();
    W32GetThreadWin32Thread(v13);
    memset(v46, 0, sizeof(v46));
    if ( (_BYTE *)v12 != v42 && (char *)v12 != v68 )
      PushW32ThreadLock(v12, v46, (int)Win32FreePool);
    *(_DWORD *)(v12 + 24) = v58;
    *(_DWORD *)(v12 + 28) = a2;
    *(_DWORD *)(v12 + 32) = a3;
    v60 = *(unsigned __int16 *)(v63 + 4);
    if ( *(int *)(v63 + 4) >= 0 )
      LOWORD(v60) = (unsigned __int16)v60 >> 1;
    v14 = -1;
    if ( (_WORD)v60 != 0xFFFF )
      v14 = v60;
    *(_WORD *)(v12 + 44) = v14;
    *(_DWORD *)(v12 + 36) = a5;
    *(_DWORD *)(v12 + 40) = a6;
    v15 = v62;
    if ( AllocateCallbackData(v62, v12, (struct _CAPTUREBUF *)(v12 + 48), v34, v39) >= 0 )
    {
      *(_DWORD *)(v12 + 52) = v15;
      v16 = KeGetCurrentThread();
      v17 = W32GetThreadWin32Thread(v16);
      v51 = *(_DWORD *)(v17 + 228);
      *(_DWORD *)(v17 + 228) = &v51;
      v18 = v59;
      v52 = v59;
      if ( v59 )
      {
        HMLockObject(v59);
        v18 = v59;
      }
      ms_exc.registration.TryLevel = 0;
      v19 = *(_DWORD **)(RegionSize + 260);
      v48 = v19[10];
      v49 = v19[11];
      v50 = v19[12];
      v19[11] = v58;
      v20 = 0;
      if ( v18 )
        v20 = *v18;
      v21 = RegionSize;
      *(_DWORD *)(*(_DWORD *)(RegionSize + 260) + 40) = v20;
      if ( v18 )
        v22 = *(_DWORD *)(v18[5] + 140);
      else
        v22 = 0;
      *(_DWORD *)(*(_DWORD *)(v21 + 260) + 48) = v22;
      ms_exc.registration.TryLevel = -2;
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v64);
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v65);
      EtwTraceBeginCallback(7);
      v23 = v67;
      *((_DWORD *)v67 + 3) = 0;
      RegionSize = KeUserModeCallback(7, v23, *(_DWORD *)v23, &v57, &v54);
      EtwTraceEndCallback(7);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v65);
      ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v64);
      ThreadUnlock1();
      ms_exc.registration.TryLevel = 1;
      v24 = (_DWORD *)(*(_DWORD *)(v21 + 260) + 40);
      *v24++ = v48;
      *v24 = v49;
      v24[1] = v50;
      ms_exc.registration.TryLevel = -2;
      if ( (RegionSize & 0x80000000) == 0 && v54 == 12 )
      {
        ms_exc.registration.TryLevel = 2;
        v25 = (ULONG_PTR *)v57;
        if ( v57 + 4 < v57 || v57 + 4 > _MmUserProbeAddress )
          v25 = (ULONG_PTR *)_MmUserProbeAddress;
        v26 = *v25;
        RegionSize = v26;
        v55 = v26;
        ms_exc.registration.TryLevel = -2;
        if ( a8 && (*(_BYTE *)(a8 + 44) & 5) != 0 || (a7 & 2) != 0 )
          goto LABEL_49;
        if ( !v26 )
        {
          ms_exc.registration.TryLevel = 4;
          v31 = *(_WORD **)(v63 + 8);
          if ( *(int *)(v63 + 4) >= 0 )
            *v31 = 0;
          else
            *(_BYTE *)v31 = 0;
          ms_exc.registration.TryLevel = -2;
          goto LABEL_49;
        }
        ms_exc.registration.TryLevel = 3;
        v27 = (unsigned int *)v57;
        if ( v57 + 12 < v57 || v57 + 12 > _MmUserProbeAddress )
          v27 = (unsigned int *)_MmUserProbeAddress;
        v43 = *v27;
        v28 = v27 + 1;
        v44 = *v28;
        v45 = v28[1];
        v47[0] = v43;
        v47[1] = v44;
        v47[2] = v45;
        v29 = *(_DWORD *)(_gptiCurrent + 276);
        v30 = (struct _CALLBACKSTATUS **)v63;
        if ( !v29 || (*(_BYTE *)(v29 + 44) & 1) == 0 || *(_DWORD *)(v29 + 52) != v63 )
        {
          v26 = CalcOutputStringSize(
                  RegionSize,
                  (int)v47,
                  (struct _CALLBACKSTATUS *)(*(_DWORD *)(v63 + 4) >> 31),
                  (unsigned int)v56,
                  v35,
                  v40);
          v55 = v26;
          CopyOutputString(v30, v47, (struct _CALLBACKSTATUS *)(unsigned __int16)v60, v56, v36, v41);
          ms_exc.registration.TryLevel = -2;
          goto LABEL_49;
        }
        ms_exc.registration.TryLevel = -2;
      }
    }
  }
  v26 = 0;
  v55 = 0;
LABEL_49:
  if ( v67 != v42 && v67 != v68 )
  {
    if ( *((_DWORD *)v67 + 5) )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v67 + 5, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v46);
  }
  return (char *)v26;
}
