/*
 * XREFs of _xxxClientGetTextExtentPointW@16 @ 0xBCB06
 * Callers:
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B (-DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
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

int __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, int a3, _DWORD *a4)
{
  HDC CompatiblePublicDC; // edi
  ULONG_PTR MaximumLength; // eax
  char *v8; // esi
  PKTHREAD CurrentThread; // eax
  HDC v10; // edi
  ULONG_PTR v11; // eax
  int *v12; // ecx
  int v13; // eax
  int *v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // edx
  PVOID *v19; // esi
  int v20; // [esp+0h] [ebp-2B0h]
  unsigned int v21; // [esp+0h] [ebp-2B0h]
  int v22; // [esp+0h] [ebp-2B0h]
  unsigned int v23; // [esp+4h] [ebp-2ACh]
  void **v24; // [esp+4h] [ebp-2ACh]
  _BYTE v25[48]; // [esp+10h] [ebp-2A0h] BYREF
  _DWORD v26[8]; // [esp+40h] [ebp-270h] BYREF
  _DWORD *v27; // [esp+60h] [ebp-250h]
  int v28; // [esp+64h] [ebp-24Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+68h] [ebp-248h] BYREF
  ULONG_PTR RegionSize; // [esp+70h] [ebp-240h] BYREF
  int v31; // [esp+74h] [ebp-23Ch]
  HDC v32; // [esp+78h] [ebp-238h]
  unsigned int v33; // [esp+7Ch] [ebp-234h] BYREF
  int v34; // [esp+80h] [ebp-230h]
  HDC v35; // [esp+84h] [ebp-22Ch]
  char v36; // [esp+8Ah] [ebp-226h] BYREF
  char v37; // [esp+8Bh] [ebp-225h] BYREF
  char v38[524]; // [esp+8Ch] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+298h] [ebp-18h]

  v35 = a1;
  v26[6] = a1;
  v27 = a4;
  memset(v25, 0, sizeof(v25));
  v33 = 0;
  v28 = 0;
  v31 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v32 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned int)(2 * a3 + 2) )
    MaximumLength = 2 * a3 + 2;
  v8 = AllocCallbackMessage(1, 48, MaximumLength, v38, 1u, 0x200u, v20, v23);
  v26[7] = v8;
  if ( !v8 )
  {
    if ( CompatiblePublicDC != v35 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v31);
    }
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v26, 0, 12);
  if ( v8 != v25 && v8 != v38 )
    PushW32ThreadLock((int)v8, v26, (int)Win32FreePool);
  v10 = v32;
  *((_DWORD *)v8 + 8) = v32;
  *((_DWORD *)v8 + 9) = a3;
  *((_WORD *)v8 + 12) = DestinationString.Length;
  *((_WORD *)v8 + 13) = DestinationString.MaximumLength;
  if ( CaptureCallbackData(
         DestinationString.Buffer,
         v8,
         (const unsigned __int8 *)(DestinationString.Length + 2),
         v8 + 28,
         v21,
         v24) < 0 )
    goto LABEL_26;
  GreSaveDC(v22);
  RegionSize = v11;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(81);
  *((_DWORD *)v8 + 3) = 0;
  v34 = KeUserModeCallback(81, v8, *(_DWORD *)v8, &v33, &v28);
  EtwTraceEndCallback(81);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36);
  GreRestoreDC(v35, RegionSize);
  if ( v10 != v35 )
  {
    if ( v34 < 0 )
      goto LABEL_26;
    NtGdiBitBltInternal(
      v35,
      0,
      0,
      *(_DWORD *)(_gpDispInfo + 44),
      *(_DWORD *)(_gpDispInfo + 48),
      v10,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v34 >= 0 && v28 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v12 = (int *)v33;
    if ( v33 + 4 < v33 || v33 + 4 > _MmUserProbeAddress )
      v12 = (int *)_MmUserProbeAddress;
    v34 = *v12;
    v26[5] = v34;
    ms_exc.registration.TryLevel = -2;
    v13 = *(_DWORD *)(_gptiCurrent + 276);
    if ( !v13 || (*(_BYTE *)(v13 + 44) & 1) == 0 || *(_DWORD **)(v13 + 52) != v27 )
    {
      ms_exc.registration.TryLevel = 1;
      v14 = *(int **)(v33 + 8);
      if ( v14 + 2 < v14 || (unsigned int)(v14 + 2) > _MmUserProbeAddress )
        v14 = (int *)_MmUserProbeAddress;
      v15 = *v14;
      v16 = v14[1];
      v17 = v27;
      *v27 = v15;
      v17[1] = v16;
      ms_exc.registration.TryLevel = -2;
      goto LABEL_20;
    }
  }
LABEL_26:
  v34 = 0;
LABEL_20:
  if ( v10 != v35 )
  {
    GreDeleteDC(v10);
    GreDeleteObject(v31);
  }
  if ( v8 != v25 && v8 != v38 )
  {
    v19 = (PVOID *)(v8 + 20);
    if ( *v19 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v19, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v26);
  }
  return v34;
}
