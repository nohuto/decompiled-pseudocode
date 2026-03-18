/*
 * XREFs of xxxClientExtTextOutW @ 0x1C014B850
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024D214 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(HDC a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  unsigned __int8 *v13; // rbx
  int v14; // eax
  unsigned int v15; // r12d
  int v16; // r15d
  __int64 *v17; // rcx
  __int64 v18; // r15
  char v20; // [rsp+60h] [rbp-308h] BYREF
  _BYTE v21[3]; // [rsp+61h] [rbp-307h] BYREF
  int v22; // [rsp+64h] [rbp-304h] BYREF
  __int64 v23; // [rsp+68h] [rbp-300h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-2C8h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-2C0h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-2B0h]
  __int64 v29; // [rsp+C0h] [rbp-2A8h]
  unsigned __int8 v30[104]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v31[512]; // [rsp+140h] [rbp-228h] BYREF

  v25[3] = a1;
  memset(v30, 0, sizeof(v30));
  v25[0] = 0LL;
  v22 = 0;
  v23 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v25[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v13 = AllocCallbackMessage(104, 1u, MaximumLength, v31, 1, 0x200uLL);
  v25[1] = v13;
  if ( !v13 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v23);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27 = 0LL;
  v28 = 0LL;
  if ( v13 != v30 && v13 != v31 )
    PushW32ThreadLock((__int64)v13, &v27, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 7) = CompatiblePublicDC;
  *((_DWORD *)v13 + 16) = a2;
  *((_DWORD *)v13 + 17) = a3;
  *((_DWORD *)v13 + 18) = a4;
  v14 = (int)a5;
  if ( a5 )
  {
    *(_OWORD *)(v13 + 76) = *a5;
    v14 = 1;
  }
  *((_DWORD *)v13 + 24) = v14;
  *((_DWORD *)v13 + 23) = a7;
  *((_WORD *)v13 + 20) = DestinationString.Length;
  *((_WORD *)v13 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v13,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v13 + 6) < 0 )
    goto LABEL_24;
  v15 = GreSaveDC(a1);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v16 = KeUserModeCallback(80LL, v13, *(unsigned int *)v13, v25, &v22);
  EtwTraceEndCallback(80LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v21);
  GreRestoreDC(a1, v15);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v16 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v16 >= 0 && v22 == 24 )
  {
    v17 = (__int64 *)v25[0];
    if ( (unsigned __int64)(v25[0] + 8LL) < v25[0] || v25[0] + 8LL > MmUserProbeAddress )
      v17 = (__int64 *)MmUserProbeAddress;
    v18 = *v17;
    v29 = *v17;
    goto LABEL_19;
  }
LABEL_24:
  LODWORD(v18) = 0;
LABEL_19:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v23);
  }
  if ( v13 != v30 && v13 != v31 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v27);
  }
  return (unsigned int)v18;
}
