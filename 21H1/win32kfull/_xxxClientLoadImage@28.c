/*
 * XREFs of _xxxClientLoadImage@28 @ 0xD94BC
 * Callers:
 *     _xxxUpdateSystemIconsFromRegistry@4 @ 0xD8AEE (_xxxUpdateSystemIconsFromRegistry@4.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DF2 (-xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason.c)
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YGXXZ @ 0x148BFC (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YGXXZ.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
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

char *__thiscall xxxClientLoadImage(unsigned __int16 *this, unsigned __int16 a2, int a3, int a4, int a5, int a6)
{
  int v7; // esi
  char *v8; // ebx
  PKTHREAD CurrentThread; // eax
  const void **v10; // ecx
  unsigned __int16 v11; // ax
  int v12; // esi
  int *v13; // esi
  int v14; // esi
  char *result; // eax
  PVOID *v16; // ebx
  unsigned int v17; // [esp+0h] [ebp-298h]
  unsigned int v18; // [esp+0h] [ebp-298h]
  void **v19; // [esp+4h] [ebp-294h]
  void **v20; // [esp+4h] [ebp-294h]
  _DWORD v21[15]; // [esp+10h] [ebp-288h] BYREF
  _DWORD v22[5]; // [esp+4Ch] [ebp-24Ch] BYREF
  char *v23; // [esp+60h] [ebp-238h]
  unsigned int v24; // [esp+64h] [ebp-234h] BYREF
  int v25; // [esp+68h] [ebp-230h] BYREF
  int v26; // [esp+6Ch] [ebp-22Ch]
  const void *v27; // [esp+70h] [ebp-228h]
  ULONG_PTR RegionSize; // [esp+74h] [ebp-224h] BYREF
  char v29; // [esp+7Ah] [ebp-21Eh] BYREF
  char v30; // [esp+7Bh] [ebp-21Dh] BYREF
  char v31[516]; // [esp+7Ch] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+280h] [ebp-18h]

  RegionSize = (ULONG_PTR)this;
  memset(v21, 0, sizeof(v21));
  v24 = 0;
  v25 = 0;
  v7 = this[1];
  v26 = 0;
  v27 = 0;
  if ( (_WORD)v7 )
  {
    result = AllocCallbackMessage((_WORD)v7 != 0, 60, v7 != 0 ? v7 : 0, v31, 1u, 0x200u, v17, (unsigned int)v19);
    v8 = result;
    v23 = result;
    if ( !result )
      return result;
  }
  else
  {
    v8 = (char *)v21;
    v23 = (char *)v21;
    v21[0] = 60;
  }
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v22, 0, 12);
  if ( v8 != (char *)v21 && v8 != v31 )
    PushW32ThreadLock((int)v8, v22, (int)Win32FreePool);
  *((_DWORD *)v8 + 6) = v26;
  if ( CaptureCallbackData(v27, v8, (const unsigned __int8 *)((unsigned __int16)v26 + 2), v8 + 28, v17, v19) < 0 )
    goto LABEL_21;
  v10 = (const void **)RegionSize;
  *((_WORD *)v8 + 16) = *(_WORD *)RegionSize;
  v11 = *((_WORD *)v10 + 1);
  *((_WORD *)v8 + 17) = v11;
  if ( v11 )
  {
    if ( CaptureCallbackData(v10[1], v8, (const unsigned __int8 *)(*(unsigned __int16 *)v10 + 2), v8 + 36, v18, v20) < 0 )
      goto LABEL_21;
  }
  else
  {
    *((_DWORD *)v8 + 9) = v10[1];
  }
  *((_DWORD *)v8 + 10) = a2;
  *((_DWORD *)v8 + 11) = a3;
  *((_DWORD *)v8 + 12) = a4;
  *((_DWORD *)v8 + 13) = a5;
  *((_DWORD *)v8 + 14) = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(74);
  *((_DWORD *)v8 + 3) = 0;
  v12 = KeUserModeCallback(74, v8, *(_DWORD *)v8, &v24, &v25);
  EtwTraceEndCallback(74);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v29);
  if ( v12 >= 0 && v25 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v13 = (int *)v24;
    if ( v24 + 4 < v24 || v24 + 4 > _MmUserProbeAddress )
      v13 = (int *)_MmUserProbeAddress;
    v14 = *v13;
    v22[4] = v14;
    ms_exc.registration.TryLevel = -2;
    if ( v14 )
      v14 = HMValidateHandleNoRip(v14, 3);
    goto LABEL_14;
  }
LABEL_21:
  v14 = 0;
LABEL_14:
  if ( v8 != (char *)v21 && v8 != v31 )
  {
    v16 = (PVOID *)(v8 + 20);
    if ( *v16 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v16, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v22);
  }
  return (char *)v14;
}
