/*
 * XREFs of _xxxClientExtTextOutW@32 @ 0xBC862
 * Callers:
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940 (-CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8 (-AllocCallbackMessage@@YGPAXKKKPAEHK@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _GreSaveDC@4 @ 0x93070 (_GreSaveDC@4.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xxxClientExtTextOutW(HDC a1, int a2, int a3, int a4, _DWORD *a5, PCWSTR SourceString, int a7, int a8)
{
  HDC CompatiblePublicDC; // edi
  ULONG_PTR MaximumLength; // eax
  char *v11; // esi
  PKTHREAD CurrentThread; // eax
  HDC v13; // edi
  int v14; // eax
  int v15; // eax
  int *v16; // ecx
  PVOID *v18; // esi
  int v19; // [esp+0h] [ebp-2C0h]
  unsigned int v20; // [esp+0h] [ebp-2C0h]
  int v21; // [esp+0h] [ebp-2C0h]
  unsigned int v22; // [esp+4h] [ebp-2BCh]
  void **v23; // [esp+4h] [ebp-2BCh]
  _DWORD v24[5]; // [esp+10h] [ebp-2B0h] BYREF
  int v25; // [esp+24h] [ebp-29Ch]
  char *v26; // [esp+28h] [ebp-298h]
  unsigned int v27; // [esp+2Ch] [ebp-294h] BYREF
  int v28; // [esp+30h] [ebp-290h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+34h] [ebp-28Ch] BYREF
  ULONG_PTR RegionSize; // [esp+3Ch] [ebp-284h] BYREF
  int v31; // [esp+40h] [ebp-280h]
  HDC v32; // [esp+44h] [ebp-27Ch]
  HDC v33; // [esp+48h] [ebp-278h]
  int v34; // [esp+4Ch] [ebp-274h]
  char v35; // [esp+52h] [ebp-26Eh] BYREF
  char v36; // [esp+53h] [ebp-26Dh] BYREF
  _BYTE v37[72]; // [esp+54h] [ebp-26Ch] BYREF
  char v38[524]; // [esp+9Ch] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2A8h] [ebp-18h]

  v34 = a2;
  v33 = a1;
  RegionSize = (ULONG_PTR)a1;
  memset(v37, 0, sizeof(v37));
  v27 = 0;
  v28 = 0;
  v31 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v32 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned int)(2 * a7 + 2) )
    MaximumLength = 2 * a7 + 2;
  v11 = AllocCallbackMessage(1, 72, MaximumLength, v38, 1u, 0x200u, v19, v22);
  v26 = v11;
  if ( !v11 )
  {
    if ( CompatiblePublicDC != v33 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v31);
    }
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v24, 0, 12);
  if ( v11 != v37 && v11 != v38 )
    PushW32ThreadLock((int)v11, v24, (int)Win32FreePool);
  v13 = v32;
  *((_DWORD *)v11 + 8) = v32;
  *((_DWORD *)v11 + 9) = v34;
  *((_DWORD *)v11 + 10) = a3;
  *((_DWORD *)v11 + 11) = a4;
  if ( a5 )
  {
    *((_DWORD *)v11 + 12) = *a5;
    *((_DWORD *)v11 + 13) = a5[1];
    *((_DWORD *)v11 + 14) = a5[2];
    *((_DWORD *)v11 + 15) = a5[3];
    v11 = v26;
    v13 = v32;
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  *((_DWORD *)v11 + 17) = v14;
  *((_DWORD *)v11 + 16) = a7;
  *((_WORD *)v11 + 12) = DestinationString.Length;
  *((_WORD *)v11 + 13) = DestinationString.MaximumLength;
  if ( CaptureCallbackData(
         DestinationString.Buffer,
         v11,
         (const unsigned __int8 *)(DestinationString.Length + 2),
         v11 + 28,
         v20,
         v23) < 0 )
    goto LABEL_24;
  GreSaveDC(v21);
  v25 = v15;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(80);
  *((_DWORD *)v11 + 3) = 0;
  v34 = KeUserModeCallback(80, v11, *(_DWORD *)v11, &v27, &v28);
  EtwTraceEndCallback(80);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v35);
  GreRestoreDC(v33, v25);
  if ( v13 != v33 )
  {
    if ( v34 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      v33,
      0,
      0,
      *(_DWORD *)(_gpDispInfo + 44),
      *(_DWORD *)(_gpDispInfo + 48),
      v13,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v34 >= 0 && v28 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v16 = (int *)v27;
    if ( v27 + 4 < v27 || v27 + 4 > _MmUserProbeAddress )
      v16 = (int *)_MmUserProbeAddress;
    v34 = *v16;
    v24[4] = v34;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_18;
  }
LABEL_24:
  v34 = 0;
LABEL_18:
  if ( v13 != v33 )
  {
    GreDeleteDC(v13);
    GreDeleteObject(v31);
  }
  if ( v11 != v37 && v11 != v38 )
  {
    v18 = (PVOID *)(v11 + 20);
    if ( *v18 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v18, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v24);
  }
  return v34;
}
