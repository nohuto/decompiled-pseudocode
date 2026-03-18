/*
 * XREFs of _ClientGetListboxString@36 @ 0x189964
 * Callers:
 *     _SfnOUTCBOXSTRING@32 @ 0x1A005D (_SfnOUTCBOXSTRING@32.c)
 *     _SfnOUTLBOXSTRING@32 @ 0x1A00F1 (_SfnOUTLBOXSTRING@32.c)
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

char *__fastcall ClientGetListboxString(int *a1, ULONG_PTR a2, int a3, int a4, int a5, int a6, char a7, int a8, int a9)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ecx
  int v11; // esi
  char *result; // eax
  int v13; // esi
  PKTHREAD v14; // eax
  ULONG_PTR v15; // edi
  PKTHREAD v16; // eax
  int v17; // eax
  int *v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx
  int v21; // esi
  int v22; // ecx
  char *v23; // eax
  _DWORD *v24; // edi
  signed int *v25; // esi
  signed int v26; // esi
  int v27; // eax
  int v28; // edi
  _DWORD *v29; // ecx
  unsigned int *v30; // esi
  unsigned int *v31; // esi
  int v32; // eax
  int v33; // eax
  struct _CALLBACKSTATUS *v34; // eax
  struct _CALLBACKSTATUS *v35; // eax
  ULONG_PTR v36; // esi
  unsigned int v37; // [esp+0h] [ebp-2ECh]
  ULONG *v38; // [esp+0h] [ebp-2ECh]
  unsigned int v39; // [esp+0h] [ebp-2ECh]
  int v40; // [esp+0h] [ebp-2ECh]
  unsigned int v41; // [esp+0h] [ebp-2ECh]
  unsigned int *v42; // [esp+4h] [ebp-2E8h]
  unsigned int v43; // [esp+4h] [ebp-2E8h]
  void **v44; // [esp+4h] [ebp-2E8h]
  int v45; // [esp+4h] [ebp-2E8h]
  int v46; // [esp+4h] [ebp-2E8h]
  _BYTE v47[52]; // [esp+10h] [ebp-2DCh] BYREF
  unsigned int v48; // [esp+44h] [ebp-2A8h]
  unsigned int v49; // [esp+48h] [ebp-2A4h]
  unsigned int v50; // [esp+4Ch] [ebp-2A0h]
  _DWORD v51[3]; // [esp+50h] [ebp-29Ch] BYREF
  unsigned int v52[3]; // [esp+5Ch] [ebp-290h] BYREF
  int v53; // [esp+68h] [ebp-284h]
  int v54; // [esp+6Ch] [ebp-280h]
  int v55; // [esp+70h] [ebp-27Ch]
  int v56; // [esp+88h] [ebp-264h] BYREF
  int *v57; // [esp+8Ch] [ebp-260h]
  int v58; // [esp+90h] [ebp-25Ch]
  int v59; // [esp+9Ch] [ebp-250h] BYREF
  int v60; // [esp+A0h] [ebp-24Ch]
  struct _LARGE_STRING *v61; // [esp+A4h] [ebp-248h]
  int v62; // [esp+A8h] [ebp-244h]
  int *v63; // [esp+ACh] [ebp-240h]
  ULONG_PTR v64; // [esp+B0h] [ebp-23Ch]
  unsigned int v65; // [esp+B4h] [ebp-238h] BYREF
  ULONG_PTR RegionSize[2]; // [esp+B8h] [ebp-234h] BYREF
  int v67; // [esp+C0h] [ebp-22Ch]
  char v68; // [esp+C6h] [ebp-226h] BYREF
  char v69; // [esp+C7h] [ebp-225h] BYREF
  char *v70; // [esp+C8h] [ebp-224h]
  ULONG_PTR v71; // [esp+CCh] [ebp-220h] BYREF
  char v72[516]; // [esp+D0h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2D4h] [ebp-18h]

  RegionSize[0] = a2;
  v63 = a1;
  v67 = a4;
  v71 = 0;
  v61 = (struct _LARGE_STRING *)(a7 & 1);
  memset(v47, 0, sizeof(v47));
  v70 = v47;
  v65 = 0;
  v59 = 0;
  v64 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v60 = ThreadWin32Thread;
  if ( v63 )
    v62 = v63[5] - *(_DWORD *)(ThreadWin32Thread + 256);
  else
    v62 = 0;
  v11 = *(_DWORD *)(v67 + 4);
  if ( (ULongAdd(2, v11 & 0x7FFFFFFF, (int *)&v71, v37, v42) & 0x80000000) != 0
    || v11 < 0 && !v61 && ULongLongToULong(2LL * v71, v38) < 0 )
  {
    goto LABEL_58;
  }
  result = AllocCallbackMessage(1, 52, v71, v72, 0, 0x200u, (int)v38, v43);
  v13 = (int)result;
  v70 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( !result )
    return result;
  v14 = KeGetCurrentThread();
  W32GetThreadWin32Thread(v14);
  memset(v51, 0, sizeof(v51));
  if ( (_BYTE *)v13 != v47 && (char *)v13 != v72 )
    PushW32ThreadLock(v13, v51, (int)Win32FreePool);
  *(_DWORD *)(v13 + 24) = v62;
  *(_DWORD *)(v13 + 28) = RegionSize[0];
  *(_DWORD *)(v13 + 32) = a3;
  *(_DWORD *)(v13 + 36) = a5;
  *(_DWORD *)(v13 + 40) = a6;
  v15 = v71;
  if ( AllocateCallbackData(v71, v13, (struct _CAPTUREBUF *)(v13 + 44), v39, v44) < 0 )
    goto LABEL_58;
  *(_DWORD *)(v13 + 48) = v15;
  v16 = KeGetCurrentThread();
  v17 = W32GetThreadWin32Thread(v16);
  v56 = *(_DWORD *)(v17 + 228);
  *(_DWORD *)(v17 + 228) = &v56;
  v18 = v63;
  v57 = v63;
  if ( v63 )
  {
    HMLockObject(v63);
    v18 = v63;
  }
  ms_exc.registration.TryLevel = 0;
  v19 = *(_DWORD **)(v60 + 260);
  v53 = v19[10];
  v54 = v19[11];
  v55 = v19[12];
  v19[11] = v62;
  v20 = 0;
  if ( v18 )
    v20 = *v18;
  v21 = v60;
  *(_DWORD *)(*(_DWORD *)(v60 + 260) + 40) = v20;
  if ( v18 )
    v22 = *(_DWORD *)(v18[5] + 140);
  else
    v22 = 0;
  *(_DWORD *)(*(_DWORD *)(v21 + 260) + 48) = v22;
  ms_exc.registration.TryLevel = -2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v68);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v69);
  EtwTraceBeginCallback(72);
  v23 = v70;
  *((_DWORD *)v70 + 3) = 0;
  RegionSize[0] = KeUserModeCallback(72, v23, *(_DWORD *)v23, &v65, &v59);
  EtwTraceEndCallback(72);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v69);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v68);
  ThreadUnlock1();
  ms_exc.registration.TryLevel = 1;
  v24 = (_DWORD *)(*(_DWORD *)(v21 + 260) + 40);
  *v24++ = v53;
  *v24 = v54;
  v24[1] = v55;
  ms_exc.registration.TryLevel = -2;
  if ( (RegionSize[0] & 0x80000000) != 0 || v59 != 12 )
    goto LABEL_58;
  ms_exc.registration.TryLevel = 2;
  v25 = (signed int *)v65;
  if ( v65 + 4 < v65 || v65 + 4 > _MmUserProbeAddress )
    v25 = (signed int *)_MmUserProbeAddress;
  v26 = *v25;
  v71 = v26;
  v64 = v26;
  ms_exc.registration.TryLevel = -2;
  if ( v26 < 0 || a9 && (*(_BYTE *)(a9 + 44) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_59;
  if ( !a8 )
  {
    ms_exc.registration.TryLevel = 4;
    v30 = (unsigned int *)v65;
    if ( v65 + 12 < v65 || v65 + 12 > _MmUserProbeAddress )
      v30 = (unsigned int *)_MmUserProbeAddress;
    v48 = *v30;
    v31 = v30 + 1;
    v49 = *v31;
    v50 = v31[1];
    v52[0] = v48;
    v52[1] = v49;
    v52[2] = v50;
    v32 = *(_DWORD *)(_gptiCurrent + 276);
    v28 = v67;
    if ( !v32 || (*(_BYTE *)(v32 + 44) & 1) == 0 || *(_DWORD *)(v32 + 52) != v67 )
    {
      v26 = CalcOutputStringSize(
              v71,
              (int)v52,
              (struct _CALLBACKSTATUS *)(*(_DWORD *)(v67 + 4) >> 31),
              (unsigned int)v61,
              v40,
              v45);
      v71 = v26;
      v64 = v26;
      v33 = *(_DWORD *)(v28 + 4);
      if ( v33 >= 0 )
        v34 = (struct _CALLBACKSTATUS *)(((unsigned int)v33 >> 1) & 0x3FFFFFFF);
      else
        v34 = (struct _CALLBACKSTATUS *)(v33 & 0x7FFFFFFF);
      CopyOutputString((struct _CALLBACKSTATUS **)v28, v52, v34, v61, v41, v46);
      goto LABEL_51;
    }
    ms_exc.registration.TryLevel = -2;
LABEL_58:
    v36 = 0;
    goto LABEL_57;
  }
  v27 = *(_DWORD *)(_gptiCurrent + 276);
  v28 = v67;
  if ( v27 && (*(_BYTE *)(v27 + 44) & 1) != 0 && *(_DWORD *)(v27 + 52) == *(_DWORD *)(v67 + 8) )
    goto LABEL_58;
  ms_exc.registration.TryLevel = 3;
  v29 = *(_DWORD **)(v65 + 8);
  if ( v29 + 1 < v29 || (unsigned int)(v29 + 1) > _MmUserProbeAddress )
    v29 = (_DWORD *)_MmUserProbeAddress;
  **(_DWORD **)(v67 + 8) = *v29;
LABEL_51:
  ms_exc.registration.TryLevel = -2;
  v35 = *(struct _CALLBACKSTATUS **)v28;
  if ( *(int *)(v28 + 4) >= 0 )
    v35 = (struct _CALLBACKSTATUS *)((unsigned int)v35 >> 1);
  if ( !a8 && v26 != -1 && v26 > (unsigned int)v35 )
  {
    v36 = (ULONG_PTR)v35;
LABEL_57:
    v64 = v36;
    goto LABEL_60;
  }
LABEL_59:
  v36 = v71;
LABEL_60:
  if ( v70 != v47 && v70 != v72 )
  {
    if ( *((_DWORD *)v70 + 5) )
    {
      RegionSize[0] = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v70 + 5, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v51);
  }
  return (char *)v36;
}
