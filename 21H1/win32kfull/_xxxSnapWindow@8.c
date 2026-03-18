/*
 * XREFs of _xxxSnapWindow@8 @ 0x1A20A2
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     __OpenClipboard@8 @ 0x11832 (__OpenClipboard@8.c)
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _ReferenceWindowStation@20 @ 0x91CE2 (_ReferenceWindowStation@20.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     _xxxEmptyClipboard@4 @ 0xACB3A (_xxxEmptyClipboard@4.c)
 *     __SetClipboardData@16 @ 0x182F88 (__SetClipboardData@16.c)
 *     _ClientNoMemoryPopup@0 @ 0x18A0CE (_ClientNoMemoryPopup@0.c)
 *     _CreateScreenPalette@12 @ 0x1A1F93 (_CreateScreenPalette@12.c)
 *     _GreEnableAppContainerRestriction@4 @ 0x1D12C8 (_GreEnableAppContainerRestriction@4.c)
 *     _DwmAsyncSnapshotWindow@8 @ 0x1D2A24 (_DwmAsyncSnapshotWindow@8.c)
 */

int __fastcall xxxSnapWindow(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  struct _KTHREAD *CurrentThread; // eax
  PVOID v4; // edi
  void *v5; // eax
  int v6; // esi
  PKTHREAD v7; // eax
  int ThreadWin32Thread; // eax
  struct tagWINDOWSTATION *v9; // ebx
  int *v11; // esi
  int v12; // ebx
  int v13; // edi
  _DWORD *v14; // esi
  struct tagWINDOWSTATION *DCEx; // eax
  int Bitmap; // eax
  struct tagWINDOWSTATION *v17; // edi
  char *v18; // edi
  char v19; // [esp+Fh] [ebp-71h]
  HDC CompatibleDC; // [esp+10h] [ebp-70h]
  int v21; // [esp+14h] [ebp-6Ch]
  struct ECLIPOBJ *v22; // [esp+18h] [ebp-68h]
  struct ECLIPOBJ *v23; // [esp+1Ch] [ebp-64h]
  int v24; // [esp+20h] [ebp-60h]
  PVOID Object; // [esp+24h] [ebp-5Ch] BYREF
  _DWORD *v26; // [esp+28h] [ebp-58h] BYREF
  struct tagWINDOWSTATION *v27; // [esp+2Ch] [ebp-54h] BYREF
  _DWORD *v28; // [esp+30h] [ebp-50h]
  _DWORD *v29; // [esp+34h] [ebp-4Ch]
  int v30; // [esp+38h] [ebp-48h]
  int v31; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD *v32; // [esp+40h] [ebp-40h]
  int v33; // [esp+44h] [ebp-3Ch]
  int v34; // [esp+48h] [ebp-38h] BYREF
  struct tagWINDOWSTATION *v35; // [esp+4Ch] [ebp-34h]
  int v36; // [esp+50h] [ebp-30h]
  _DWORD v37[3]; // [esp+54h] [ebp-2Ch] BYREF
  struct ECLIPOBJ *v38; // [esp+60h] [ebp-20h] BYREF
  struct ECLIPOBJ *v39; // [esp+64h] [ebp-1Ch]
  int v40; // [esp+68h] [ebp-18h]
  int v41; // [esp+6Ch] [ebp-14h]
  int v42[4]; // [esp+70h] [ebp-10h] BYREF

  CompatibleDC = 0;
  Object = 0;
  v34 = 0;
  v2 = a1;
  v26 = a1;
  v30 = a2;
  v35 = 0;
  v36 = 0;
  memset(v37, 0, sizeof(v37));
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v27 = (struct tagWINDOWSTATION *)_gptiCurrent;
  if ( (PVOID)_grpdeskRitInput == grpdeskLogon )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( ReferenceWindowStation(CurrentThread, 0, 0x200u, (PETHREAD *)&Object, 1) < 0 )
    return 0;
  v4 = Object;
  if ( (*((_BYTE *)Object + 32) & 4) != 0 || *(PVOID *)(v2[3] + 20) != Object )
    return 0;
  if ( (*(_BYTE *)(v2[5] + 23) & 0x40) != 0 )
  {
    do
      v2 = (_DWORD *)v2[14];
    while ( (*(_BYTE *)(v2[5] + 23) & 0x40) != 0 );
    v26 = v2;
  }
  if ( !IsToplevelWindowDesktopComposed(v2) )
  {
    v7 = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(v7);
    v31 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v31;
    v32 = v2;
    HMLockObject(v2);
    PushW32ThreadLock((int)v4, v37, (int)UserDereferenceObject);
    ObfReferenceObject(v4);
    v9 = *(struct tagWINDOWSTATION **)(*(_DWORD *)(*((_DWORD *)v27 + 62) + 4) + 12);
    v34 = *((_DWORD *)v27 + 57);
    *((_DWORD *)v27 + 57) = &v34;
    v35 = v9;
    if ( v9 )
      HMLockObject(v9);
    LOBYTE(v9) = _OpenClipboard((int)v9, 0) != 0;
    ThreadUnlock1();
    if ( (_BYTE)v9 )
    {
      xxxEmptyClipboard((struct tagWINDOWSTATION *)v4);
      v29 = (_DWORD *)v2[5];
      v28 = v29 + 13;
      v38 = (struct ECLIPOBJ *)v29[13];
      v39 = (struct ECLIPOBJ *)v29[14];
      v40 = v29[15];
      v41 = v29[16];
      v11 = (int *)(*_gpDispInfo + 12);
      v42[0] = *v11++;
      v42[1] = *v11++;
      v42[2] = *v11;
      v42[3] = v11[1];
      if ( IntersectRect(&v38, (int *)&v38, v42) )
      {
        v12 = (int)v38;
        v13 = v40 - (_DWORD)v38;
        v14 = v26;
        v22 = v39;
        v23 = v38;
        v24 = v40 - (_DWORD)v38;
        v21 = v41 - (_DWORD)v39;
        if ( v14 != (_DWORD *)_GetDesktopWindow(v26) )
        {
          v23 = (struct ECLIPOBJ *)(v12 - *v28);
          v22 = (struct ECLIPOBJ *)((char *)v39 - v29[14]);
        }
        DCEx = (struct tagWINDOWSTATION *)_GetDCEx(v14, 0, 65537);
        v9 = DCEx;
        if ( DCEx
          && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0
          && (!*(_DWORD *)(_gpsi + 1820)
            ? (Bitmap = GreCreateBitmap(v13, v21, 1, *(unsigned __int16 *)(_gpDispInfo + 68), 0))
            : (Bitmap = GreCreateCompatibleBitmapInternal((HDC)v9, v13, v21, 0, 0, 0)),
              (v17 = (struct tagWINDOWSTATION *)Bitmap) != 0
           || (v17 = (struct tagWINDOWSTATION *)GreCreateBitmap(v24, v21, 1, 1, 0)) != 0) )
        {
          v29 = (_DWORD *)GreSelectBitmap(CompatibleDC, v17);
          if ( !v30
            && v14 == *(_DWORD **)(*(_DWORD *)(*((_DWORD *)v27 + 62) + 4) + 12)
            && UserIsCurrentProcessImmersiveAppContainer() )
          {
            v19 = 1;
            GreEnableAppContainerRestriction(0);
          }
          else
          {
            v19 = 0;
          }
          if ( IsWindowDesktopComposed(v14) )
          {
            if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
            UserSessionSwitchLeaveCrit();
            v6 = (int)NtGdiBitBltInternal(CompatibleDC, 0, 0, v24, v21, (HDC)v9, v23, v22, 1087111200, 0, 4);
            EnterCrit(0, 1);
          }
          else
          {
            v6 = (int)NtGdiBitBltInternal(CompatibleDC, 0, 0, v24, v21, (HDC)v9, v23, v22, 1087111200, 0, 0);
          }
          if ( v19 )
            GreEnableAppContainerRestriction(1);
          GreSelectBitmap(CompatibleDC, v29);
          if ( v6 )
          {
            _SetClipboardData(v17, 2, (int)v9, 0, (void *)1);
            if ( (*(_BYTE *)(_gpsi + 6248) & 1) != 0 )
            {
              v26 = 0;
              v27 = 0;
              if ( CreateScreenPalette((HDC)v9, &v26, &v27) >= 0 )
              {
                _SetClipboardData(v27, 9, (int)v9, 0, (void *)1);
                Win32FreePool(v26);
              }
            }
            v6 = 1;
          }
          else if ( v17 )
          {
            GreDeleteObject(v17);
          }
        }
        else
        {
          ClientNoMemoryPopup();
          v6 = 0;
        }
        if ( v9 )
          _ReleaseDC(v9);
      }
      else
      {
        v6 = 0;
      }
      v18 = (char *)Object;
      xxxCloseClipboard(v9, Object);
      HMAssignmentUnlock(v18 + 56);
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      PopAndFreeW32ThreadLock((int)v37);
      ThreadUnlock1();
      if ( !v6 )
        return v6;
      goto LABEL_53;
    }
    PopAndFreeW32ThreadLock((int)v37);
    ThreadUnlock1();
    return 0;
  }
  v5 = (void *)ReferenceDwmApiPort();
  v6 = 0;
  if ( DwmAsyncSnapshotWindow(v5) >= 0 )
  {
    v6 = 1;
LABEL_53:
    xxxPlayEventSound(0xDu);
  }
  return v6;
}
