/*
 * XREFs of _xxxClientExpandStringW@4 @ 0xD97D4
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DF2 (-xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason.c)
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
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z @ 0xCA80C (-CalcOutputStringSize@@YGKPAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

ULONG __thiscall xxxClientExpandStringW(const void **this)
{
  ULONG_PTR v2; // ecx
  char *v3; // ebx
  PKTHREAD CurrentThread; // eax
  int v5; // esi
  ULONG *v6; // ecx
  ULONG v7; // edx
  unsigned int *v8; // esi
  unsigned int *v9; // esi
  int v10; // eax
  struct _CALLBACKSTATUS **v11; // esi
  ULONG v12; // edi
  PVOID *v14; // ebx
  int v15; // [esp+0h] [ebp-2D0h]
  unsigned int v16; // [esp+0h] [ebp-2D0h]
  int v17; // [esp+0h] [ebp-2D0h]
  unsigned int v18; // [esp+0h] [ebp-2D0h]
  unsigned int v19; // [esp+4h] [ebp-2CCh]
  void **v20; // [esp+4h] [ebp-2CCh]
  int v21; // [esp+4h] [ebp-2CCh]
  int v22; // [esp+4h] [ebp-2CCh]
  _BYTE v23[36]; // [esp+10h] [ebp-2C0h] BYREF
  unsigned int v24; // [esp+34h] [ebp-29Ch]
  unsigned int v25; // [esp+38h] [ebp-298h]
  unsigned int v26; // [esp+3Ch] [ebp-294h]
  _DWORD v27[3]; // [esp+44h] [ebp-28Ch] BYREF
  unsigned int v28[3]; // [esp+50h] [ebp-280h] BYREF
  int v29; // [esp+64h] [ebp-26Ch] BYREF
  ULONG v30; // [esp+68h] [ebp-268h]
  const void **v31; // [esp+6Ch] [ebp-264h]
  unsigned int v32; // [esp+70h] [ebp-260h] BYREF
  ULONG_PTR RegionSize; // [esp+74h] [ebp-25Ch] BYREF
  char v34; // [esp+7Ah] [ebp-256h] BYREF
  char v35; // [esp+7Bh] [ebp-255h] BYREF
  char v36[572]; // [esp+7Ch] [ebp-254h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2B8h] [ebp-18h]

  v31 = this;
  memset(v23, 0, sizeof(v23));
  v32 = 0;
  v29 = 0;
  v30 = 0;
  v2 = 520;
  if ( ((unsigned int)this[1] & 0x7FFFFFFF) <= 0x208 )
    v2 = (unsigned int)this[1] & 0x7FFFFFFF;
  v3 = AllocCallbackMessage(1, 36, v2, v36, 1u, 0x230u, v15, v19);
  RegionSize = (ULONG_PTR)v3;
  if ( !v3 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v27, 0, sizeof(v27));
  if ( v3 != v23 && v3 != v36 )
    PushW32ThreadLock((int)v3, v27, (int)Win32FreePool);
  *((_DWORD *)v3 + 6) = *this;
  *((_DWORD *)v3 + 7) ^= ((unsigned int)this[1] ^ *((_DWORD *)v3 + 7)) & 0x7FFFFFFF;
  if ( CaptureCallbackData(this[2], v3, (const unsigned __int8 *)*this + 2, v3 + 32, v16, v20) >= 0 )
  {
    *((_DWORD *)v3 + 7) &= ~0x80000000;
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
    EtwTraceBeginCallback(59);
    *((_DWORD *)v3 + 3) = 0;
    v5 = KeUserModeCallback(59, v3, *(_DWORD *)v3, &v32, &v29);
    EtwTraceEndCallback(59);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34);
    if ( v5 >= 0 && v29 == 12 )
    {
      ms_exc.registration.TryLevel = 0;
      v6 = (ULONG *)v32;
      if ( v32 + 4 < v32 || v32 + 4 > _MmUserProbeAddress )
        v6 = (ULONG *)_MmUserProbeAddress;
      v7 = *v6;
      v30 = *v6;
      ms_exc.registration.TryLevel = 1;
      v8 = (unsigned int *)v32;
      if ( v32 + 12 < v32 || v32 + 12 > _MmUserProbeAddress )
        v8 = (unsigned int *)_MmUserProbeAddress;
      v24 = *v8;
      v9 = v8 + 1;
      v25 = *v9;
      v26 = v9[1];
      v28[0] = v24;
      v28[1] = v25;
      v28[2] = v26;
      v10 = *(_DWORD *)(_gptiCurrent + 276);
      v11 = (struct _CALLBACKSTATUS **)v31;
      if ( !v10 || (*(_BYTE *)(v10 + 44) & 1) == 0 || *(const void ***)(v10 + 52) != v31 )
      {
        v12 = CalcOutputStringSize(v7, (int)v28, (struct _CALLBACKSTATUS *)((unsigned int)v31[1] >> 31), 0, v17, v21);
        v30 = v12;
        CopyOutputString(v11, v28, (struct _CALLBACKSTATUS *)((unsigned int)v11[1] & 0x7FFFFFFF), 0, v18, v22);
        ms_exc.registration.TryLevel = -2;
        goto LABEL_17;
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
  v12 = 0;
  v30 = 0;
LABEL_17:
  if ( v3 != v23 && v3 != v36 )
  {
    v14 = (PVOID *)(v3 + 20);
    if ( *v14 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v14, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v27);
  }
  return v12;
}
