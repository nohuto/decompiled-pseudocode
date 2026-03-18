/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C023397C
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025F60C (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025F73C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     GreSaveDC @ 0x1C0078370 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     CreateCompatiblePublicDC @ 0x1C014BEB8 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        int a2,
        int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC v14; // rsi
  __int64 MaximumLength; // r8
  unsigned __int8 *v17; // rbx
  unsigned int v18; // r12d
  int v19; // r15d
  __int64 *v20; // rcx
  __int64 v21; // r15
  char v22; // [rsp+60h] [rbp-358h] BYREF
  _BYTE v23[3]; // [rsp+61h] [rbp-357h] BYREF
  int v24; // [rsp+64h] [rbp-354h] BYREF
  __int64 v25; // [rsp+68h] [rbp-350h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-348h] BYREF
  _QWORD v27[4]; // [rsp+80h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-318h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-310h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-300h]
  __int64 v31; // [rsp+C0h] [rbp-2F8h]
  unsigned __int8 v32[168]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v33[512]; // [rsp+180h] [rbp-238h] BYREF

  v27[3] = a1;
  memset(v32, 0, sizeof(v32));
  v27[0] = 0LL;
  v24 = 0;
  v25 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v14 = CreateCompatiblePublicDC(a1, &v25);
  v27[2] = v14;
  if ( !v14 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a5 + 1)) )
    MaximumLength = 2LL * (a5 + 1);
  v17 = AllocCallbackMessage(168, 1u, MaximumLength, v33, 1, 0x200uLL);
  v27[1] = v17;
  if ( !v17 )
  {
    if ( v14 != a1 )
    {
      GreDeleteDC(v14);
      GreDeleteObject(v25);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v29 = 0LL;
  v30 = 0LL;
  if ( v17 != v32 && v17 != v33 )
    PushW32ThreadLock((__int64)v17, &v29, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 7) = v14;
  *((_DWORD *)v17 + 16) = a2;
  *((_DWORD *)v17 + 17) = a3;
  *((_DWORD *)v17 + 18) = a5;
  *((_DWORD *)v17 + 19) = a6;
  *((_DWORD *)v17 + 20) = a7;
  *(_OWORD *)(v17 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v17 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v17 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v17 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v17 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v17 + 40) = a9;
  *((_DWORD *)v17 + 41) = a10;
  *((_WORD *)v17 + 20) = DestinationString.Length;
  *((_WORD *)v17 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v17,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v17 + 6) < 0 )
    goto LABEL_24;
  v18 = GreSaveDC(a1);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v23);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v19 = KeUserModeCallback(79LL, v17, *(unsigned int *)v17, v27, &v24);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v23);
  GreRestoreDC(a1, v18);
  if ( v14 != a1 )
  {
    if ( v19 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      v14,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v19 >= 0 && v24 == 24 )
  {
    v20 = (__int64 *)v27[0];
    if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || v27[0] + 8LL > MmUserProbeAddress )
      v20 = (__int64 *)MmUserProbeAddress;
    v21 = *v20;
    v31 = *v20;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v21) = 0;
LABEL_25:
  if ( v14 != a1 )
  {
    GreDeleteDC(v14);
    GreDeleteObject(v25);
  }
  if ( v17 != v32 && v17 != v33 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
  }
  return (unsigned int)v21;
}
