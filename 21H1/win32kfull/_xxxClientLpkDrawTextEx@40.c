/*
 * XREFs of _xxxClientLpkDrawTextEx@40 @ 0x1945DA
 * Callers:
 *     ?DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7CFE (-DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B (-DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z.c)
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

int __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        int a2,
        int a3,
        PCWSTR SourceString,
        int a5,
        int a6,
        int a7,
        const void *a8,
        int a9,
        int a10)
{
  HDC v11; // edi
  ULONG_PTR MaximumLength; // eax
  PKTHREAD CurrentThread; // eax
  char *v15; // edx
  char *v16; // esi
  HDC v17; // edi
  int v18; // eax
  HDC v19; // edi
  int *v20; // ecx
  PVOID *v21; // esi
  int v22; // [esp+0h] [ebp-2F8h]
  unsigned int v23; // [esp+0h] [ebp-2F8h]
  int v24; // [esp+0h] [ebp-2F8h]
  unsigned int v25; // [esp+4h] [ebp-2F4h]
  void **v26; // [esp+4h] [ebp-2F4h]
  _DWORD v27[5]; // [esp+10h] [ebp-2E8h] BYREF
  int v28; // [esp+24h] [ebp-2D4h]
  unsigned int v29; // [esp+28h] [ebp-2D0h] BYREF
  int v30; // [esp+2Ch] [ebp-2CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+30h] [ebp-2C8h] BYREF
  ULONG_PTR RegionSize; // [esp+38h] [ebp-2C0h] BYREF
  int v33; // [esp+3Ch] [ebp-2BCh] BYREF
  HDC v34; // [esp+40h] [ebp-2B8h]
  char *v35; // [esp+44h] [ebp-2B4h]
  HDC v36; // [esp+48h] [ebp-2B0h]
  int v37; // [esp+4Ch] [ebp-2ACh]
  char v38; // [esp+52h] [ebp-2A6h] BYREF
  char v39; // [esp+53h] [ebp-2A5h] BYREF
  _BYTE v40[124]; // [esp+54h] [ebp-2A4h] BYREF
  char v41[524]; // [esp+D4h] [ebp-224h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2E0h] [ebp-18h]

  v37 = a2;
  v36 = a1;
  RegionSize = (ULONG_PTR)a1;
  memset(v40, 0, sizeof(v40));
  v29 = 0;
  v30 = 0;
  v33 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = CreateCompatiblePublicDC(a1, &v33);
  v34 = v11;
  if ( !v11 )
    return 0;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned int)(2 * a5 + 2) )
    MaximumLength = 2 * a5 + 2;
  v35 = AllocCallbackMessage(1, 124, MaximumLength, v41, 1u, 0x200u, v22, v25);
  if ( !v35 )
  {
    if ( v11 != v36 )
    {
      GreDeleteDC(v11);
      GreDeleteObject(v33);
    }
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  memset(v27, 0, 12);
  v15 = v35;
  if ( v35 != v40 && v35 != v41 )
  {
    PushW32ThreadLock((int)v35, v27, (int)Win32FreePool);
    v15 = v35;
  }
  *((_DWORD *)v15 + 8) = v34;
  *((_DWORD *)v15 + 9) = v37;
  *((_DWORD *)v15 + 10) = a3;
  *((_DWORD *)v15 + 11) = a5;
  *((_DWORD *)v15 + 12) = a6;
  *((_DWORD *)v15 + 13) = a7;
  qmemcpy(v15 + 56, a8, 0x3Cu);
  *((_DWORD *)v15 + 29) = a9;
  *((_DWORD *)v15 + 30) = a10;
  *((_WORD *)v15 + 12) = DestinationString.Length;
  *((_WORD *)v15 + 13) = DestinationString.MaximumLength;
  v16 = v35;
  if ( CaptureCallbackData(
         DestinationString.Buffer,
         v35,
         (const unsigned __int8 *)(DestinationString.Length + 2),
         v15 + 28,
         v23,
         v26) < 0 )
  {
    v19 = v34;
    goto LABEL_25;
  }
  v17 = v36;
  GreSaveDC(v24);
  v28 = v18;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(79);
  *((_DWORD *)v16 + 3) = 0;
  v37 = KeUserModeCallback(79, v16, *(_DWORD *)v16, &v29, &v30);
  EtwTraceEndCallback(79);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38);
  GreRestoreDC(v17, v28);
  v19 = v34;
  if ( v34 != v36 )
  {
    if ( v37 < 0 )
      goto LABEL_25;
    NtGdiBitBltInternal(
      v36,
      0,
      0,
      *(_DWORD *)(_gpDispInfo + 44),
      *(_DWORD *)(_gpDispInfo + 48),
      v34,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v37 >= 0 && v30 == 12 )
  {
    ms_exc.registration.TryLevel = 0;
    v20 = (int *)v29;
    if ( v29 + 4 < v29 || v29 + 4 > _MmUserProbeAddress )
      v20 = (int *)_MmUserProbeAddress;
    v37 = *v20;
    v27[4] = v37;
    ms_exc.registration.TryLevel = -2;
    goto LABEL_26;
  }
LABEL_25:
  v37 = 0;
LABEL_26:
  if ( v19 != v36 )
  {
    GreDeleteDC(v19);
    GreDeleteObject(v33);
  }
  if ( v16 != v40 && v16 != v41 )
  {
    v21 = (PVOID *)(v16 + 20);
    if ( *v21 )
    {
      RegionSize = 0;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, v21, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((int)v27);
  }
  return v37;
}
