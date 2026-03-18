/*
 * XREFs of xxxSnapWindow @ 0x1C015294C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     xxxEmptyClipboard @ 0x1C0056AE0 (xxxEmptyClipboard.c)
 *     _SetClipboardData @ 0x1C0059654 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C005A0D8 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C005A690 (ReferenceWindowStation.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     xxxPlayEventSound @ 0x1C0114880 (xxxPlayEventSound.c)
 *     ClientNoMemoryPopup @ 0x1C022950C (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C0244AEC (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C0274620 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C0276530 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(_QWORD *a1, int a2)
{
  HDC CompatibleDC; // r15
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  PVOID v7; // rsi
  __int64 v8; // rbx
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // r13d
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  int v18; // edx
  __int64 DCEx; // rax
  HDC v20; // r14
  __int64 Bitmap; // rax
  char *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  char *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  __int128 v37; // [rsp+68h] [rbp-51h] BYREF
  __int64 v38; // [rsp+78h] [rbp-41h]
  __int128 v39; // [rsp+80h] [rbp-39h] BYREF
  __int64 v40; // [rsp+90h] [rbp-29h]
  __int128 v41; // [rsp+98h] [rbp-21h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-11h]
  __int128 v43; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+7h]
  int v45[18]; // [rsp+C8h] [rbp+Fh] BYREF
  char v47; // [rsp+130h] [rbp+77h]
  int v48; // [rsp+138h] [rbp+7Fh]

  Object = 0LL;
  v42 = 0LL;
  CompatibleDC = 0LL;
  v44 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v39 = 0LL;
  v38 = gptiCurrent;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon )
  {
    v4 = 1;
    if ( ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0
      && (*((_DWORD *)Object + 16) & 4) == 0
      && *(PVOID *)(a1[3] + 40LL) == Object )
    {
      while ( (*(_BYTE *)(a1[5] + 31LL) & 0x40) != 0 )
        a1 = (_QWORD *)a1[13];
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v32 = (void *)ReferenceDwmApiPort(v5);
        if ( (int)DwmAsyncSnapshotWindow(v32) < 0 )
          return 0;
LABEL_33:
        xxxPlayEventSound(13LL, v29, v30);
        return v4;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v39 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v39;
      *((_QWORD *)&v39 + 1) = a1;
      HMLockObject(a1);
      v7 = Object;
      PushW32ThreadLock((__int64)Object, &v43, UserDereferenceObject);
      ObfReferenceObject(v7);
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
      *(_QWORD *)&v41 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v41;
      *((_QWORD *)&v41 + 1) = v8;
      if ( v8 )
        HMLockObject(v8);
      v9 = (unsigned int)OpenClipboard(v8, 0LL) != 0;
      ThreadUnlock1(v11, v10, v12);
      if ( v9 )
      {
        xxxEmptyClipboard((struct tagCLIP **)v7);
        v13 = a1[5];
        v14 = *gpDispInfo;
        v37 = *(_OWORD *)(v13 + 88);
        *(_OWORD *)v45 = *(_OWORD *)(v14 + 24);
        if ( (unsigned int)IntersectRect(&v37, (int *)&v37, v45) )
        {
          v15 = v37;
          v16 = HIDWORD(v37) - DWORD1(v37);
          v17 = DWORD2(v37) - v37;
          v48 = DWORD1(v37);
          if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
          {
            v15 -= *(_DWORD *)(v13 + 88);
            v48 = v18 - *(_DWORD *)(v13 + 92);
          }
          DCEx = _GetDCEx(a1, 0LL, 65537LL);
          v20 = (HDC)DCEx;
          if ( DCEx
            && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
            && (!*(_DWORD *)(gpsi + 2220LL)
              ? (Bitmap = GreCreateBitmap(v17, v16, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
              : (Bitmap = GreCreateCompatibleBitmapInternal(v20, v17, v16, 0, 0LL, 0LL)),
                (v22 = (char *)Bitmap) != 0LL || (v22 = (char *)GreCreateBitmap(v17, v16, 1LL, 1LL, 0LL)) != 0LL) )
          {
            *(_QWORD *)&v37 = GreSelectBitmap(CompatibleDC, v22);
            if ( !a2
              && a1 == *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v38 + 448) + 8LL) + 24LL)
              && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
            {
              v47 = 1;
              GreEnableAppContainerRestriction(0LL);
            }
            else
            {
              v47 = 0;
            }
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              if ( gdwInAtomicOperation )
              {
                v23 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v23, gdwInAtomicOperation, v24);
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v17, v16, v20, v15, v48, 1087111200, 0, 4);
              EnterCrit(0LL, 1LL);
            }
            else
            {
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v17, v16, v20, v15, v48, 1087111200, 0, 0);
            }
            if ( v47 )
              GreEnableAppContainerRestriction(1LL);
            GreSelectBitmap(CompatibleDC, v37);
            if ( v4 )
            {
              SetClipboardData(2u, v22, 0, 1);
              if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && (int)CreateScreenPalette(v20) >= 0 )
              {
                SetClipboardData(9u, 0LL, 0, 1);
                Win32FreePool(0LL);
              }
              v4 = 1;
            }
            else if ( v22 )
            {
              GreDeleteObject(v22);
            }
          }
          else
          {
            ClientNoMemoryPopup();
            v4 = 0;
          }
          if ( v20 )
            _ReleaseDC(v20);
        }
        else
        {
          v4 = 0;
        }
        v25 = (char *)Object;
        xxxCloseClipboard((struct tagWINDOWSTATION *)Object);
        HMAssignmentUnlock(v25 + 112);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)&v43);
        ThreadUnlock1(v27, v26, v28);
        if ( !v4 )
          return v4;
        goto LABEL_33;
      }
      PopAndFreeW32ThreadLock((__int64)&v43);
      ThreadUnlock1(v34, v33, v35);
    }
  }
  return 0LL;
}
