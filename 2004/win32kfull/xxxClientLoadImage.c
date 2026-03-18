/*
 * XREFs of xxxClientLoadImage @ 0x1C0043B54
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0042BEC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C004308C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C005A7AC (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DB3B0 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadImage(
        void **a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  __int64 v9; // r8
  unsigned __int8 *v10; // rdi
  unsigned __int16 v11; // ax
  int v12; // ebx
  __int64 *v13; // rbx
  __int64 v14; // rbx
  unsigned __int8 *result; // rax
  char v16; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v18; // [rsp+34h] [rbp-2E4h] BYREF
  __int64 v19; // [rsp+38h] [rbp-2E0h]
  void *v20; // [rsp+40h] [rbp-2D8h]
  unsigned __int64 v21; // [rsp+48h] [rbp-2D0h] BYREF
  unsigned __int8 *v22; // [rsp+50h] [rbp-2C8h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-2C0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-2B8h] BYREF
  __int64 v25; // [rsp+70h] [rbp-2A8h]
  __int64 v26; // [rsp+78h] [rbp-2A0h]
  _DWORD v27[24]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v28[512]; // [rsp+F0h] [rbp-228h] BYREF

  v7 = a3;
  v19 = 0LL;
  memset(v27, 0, sizeof(v27));
  v21 = 0LL;
  v18 = 0;
  v9 = *((unsigned __int16 *)a1 + 1);
  v20 = 0LL;
  if ( (_WORD)v9 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(
                                  0x60u,
                                  (_WORD)v9 != 0,
                                  v9 & -(__int64)((_WORD)v9 != 0),
                                  v28,
                                  1,
                                  0x200uLL);
    v10 = result;
    v22 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v27;
    v22 = (unsigned __int8 *)v27;
    memset(&v27[1], 0, 0x5CuLL);
    v27[0] = 96;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v24 = 0LL;
  v25 = 0LL;
  if ( v10 != (unsigned __int8 *)v27 && v10 != v28 )
    PushW32ThreadLock((__int64)v10, &v24, (__int64)Win32FreePool);
  *((_DWORD *)v10 + 10) = v19;
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v10, v20, (unsigned __int16)v19 + 2, (void **)v10 + 6) < 0 )
    goto LABEL_22;
  *((_WORD *)v10 + 28) = *(_WORD *)a1;
  v11 = *((_WORD *)a1 + 1);
  *((_WORD *)v10 + 29) = v11;
  if ( v11 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v10, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v10 + 8) < 0 )
      goto LABEL_22;
  }
  else
  {
    *((_QWORD *)v10 + 8) = a1[1];
  }
  *((_DWORD *)v10 + 18) = v7;
  *((_DWORD *)v10 + 19) = a4;
  *((_DWORD *)v10 + 20) = a5;
  *((_DWORD *)v10 + 21) = a6;
  *((_DWORD *)v10 + 22) = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v17);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v12 = KeUserModeCallback(74LL, v10, *(unsigned int *)v10, &v21, &v18);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v17);
  if ( v12 >= 0 && v18 == 24 )
  {
    v13 = (__int64 *)v21;
    if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
      v13 = (__int64 *)MmUserProbeAddress;
    v14 = *v13;
    v26 = v14;
    if ( v14 )
      v14 = HMValidateHandleNoRip(v14, 3);
    goto LABEL_15;
  }
LABEL_22:
  v14 = 0LL;
LABEL_15:
  if ( v10 != (unsigned __int8 *)v27 && v10 != v28 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v24);
  }
  return (unsigned __int8 *)v14;
}
