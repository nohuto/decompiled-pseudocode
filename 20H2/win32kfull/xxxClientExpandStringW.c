/*
 * XREFs of xxxClientExpandStringW @ 0x1C007A6A4
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079A50 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C007634C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0077BF8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0078ADC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *v3; // rdi
  int v4; // ebx
  __int64 *v5; // rcx
  __int64 v6; // r10
  ULONG64 v7; // rcx
  __int64 v8; // xmm0_8
  __int64 v9; // rdx
  unsigned int v10; // ebx
  char v12; // [rsp+30h] [rbp-308h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-307h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-304h] BYREF
  unsigned __int8 *v15; // [rsp+40h] [rbp-2F8h]
  __int64 v16; // [rsp+48h] [rbp-2F0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-2E8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-2E0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-2D0h]
  __int128 v20; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v21; // [rsp+80h] [rbp-2B8h]
  _OWORD v22[3]; // [rsp+98h] [rbp-2A0h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-270h]
  unsigned __int8 v24[592]; // [rsp+D0h] [rbp-268h] BYREF

  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  memset(v14, 0, sizeof(v14));
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v3 = AllocCallbackMessage(56, 1u, v2, v24, 1, 0x248uLL);
  v15 = v3;
  if ( !v3 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v20 = 0LL;
  v21 = 0LL;
  if ( v3 != (unsigned __int8 *)v22 && v3 != v24 )
    PushW32ThreadLock(v3, &v20, Win32FreePool);
  *((_DWORD *)v3 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v3 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v3 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v3, *((_QWORD *)a1 + 1), *(_DWORD *)a1 + 2, (void **)v3 + 6) < 0 )
    goto LABEL_26;
  *((_DWORD *)v3 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v3 + 2) = 0LL;
  v4 = KeUserModeCallback(59LL, v3, *(unsigned int *)v3, &v14[1], v14);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  if ( v4 < 0 || v14[0] != 24 )
    goto LABEL_26;
  v5 = *(__int64 **)&v14[1];
  if ( (unsigned __int64)(*(_QWORD *)&v14[1] + 8LL) < *(_QWORD *)&v14[1]
    || *(_QWORD *)&v14[1] + 8LL > MmUserProbeAddress )
  {
    v5 = (__int64 *)MmUserProbeAddress;
  }
  v6 = *v5;
  v16 = *v5;
  v7 = *(_QWORD *)&v14[1];
  if ( (unsigned __int64)(*(_QWORD *)&v14[1] + 24LL) < *(_QWORD *)&v14[1]
    || *(_QWORD *)&v14[1] + 24LL > MmUserProbeAddress )
  {
    v7 = MmUserProbeAddress;
  }
  v8 = *(_QWORD *)(v7 + 16);
  v18 = *(_OWORD *)v7;
  v19 = v8;
  v9 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v9 && (*(_DWORD *)(v9 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v9 + 96) == a1 )
  {
LABEL_26:
    v10 = 0;
  }
  else
  {
    v10 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v18, v6, *((_DWORD *)a1 + 1) >> 31, 0);
    v16 = v10;
    CopyOutputString((volatile void **)&v18, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v3 != (unsigned __int8 *)v22 && v3 != v24 )
  {
    if ( *((_QWORD *)v3 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v3 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v20);
  }
  return v10;
}
