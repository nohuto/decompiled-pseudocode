/*
 * XREFs of ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50
 * Callers:
 *     ?_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1718E (-_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _NtUserPostMessage@16 @ 0x6D25E (_NtUserPostMessage@16.c)
 *     __PostMessageExtended@20 @ 0x6DA3C (__PostMessageExtended@20.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IAEJPAUtagWND@@I@Z @ 0x1B2E90 (-GenerateCtrlInputMessages@InteractiveControlInput@@IAEJPAUtagWND@@I@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     _TransformMessageBetweenCoordinateSpaces@24 @ 0x6C458 (_TransformMessageBetweenCoordinateSpaces@24.c)
 *     ??1?$CLockExclusiveInUserCrit@VDLT_POST@@@@QAE@XZ @ 0x6D242 (--1-$CLockExclusiveInUserCrit@VDLT_POST@@@@QAE@XZ.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     _ProcessSuspendedPostMessage@20 @ 0xADCD4 (_ProcessSuspendedPostMessage@20.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     _AllocQEntry@4 @ 0xEFE7A (_AllocQEntry@4.c)
 *     _IsMiPEnabledForWindow@4 @ 0x14E372 (_IsMiPEnabledForWindow@4.c)
 *     _WakeWowTask@4 @ 0x155BA7 (_WakeWowTask@4.c)
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

BOOL __userpurge _PostTransformableMessageExtended@<eax>(
        struct tagQMSG *a1@<edx>,
        int *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        _DWORD *a5,
        int a6,
        struct tagINPUT_MESSAGE_SOURCE *a7,
        int a8)
{
  unsigned int v9; // esi
  struct tagWND *v10; // edi
  BOOL result; // eax
  bool v12; // zf
  int *ThreadWin32Thread; // eax
  _DWORD *v14; // esi
  struct tagQMSG *v15; // edx
  int v16; // esi
  int v17; // esi
  int v18; // edi
  int DLT; // eax
  int v20; // edx
  struct tagQMSG *v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // esi
  int i; // ecx
  int v28; // esi
  int j; // ecx
  int v30; // esi
  int k; // ecx
  int v32; // esi
  int m; // ecx
  PKTHREAD v34; // eax
  int v35; // eax
  struct tagWND *v36; // esi
  bool v37; // zf
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  struct _KEVENT *v41; // eax
  tagObjLock *v42; // esi
  int v43; // eax
  tagDomLock *DomainLockRef; // eax
  int v45; // eax
  void *v46; // [esp+0h] [ebp-38h]
  struct tagUIPI_INFO *v47; // [esp+4h] [ebp-34h]
  struct tagQMSG *v48; // [esp+Ch] [ebp-2Ch] BYREF
  int v49; // [esp+10h] [ebp-28h]
  int v50; // [esp+14h] [ebp-24h]
  int CurrentThread; // [esp+18h] [ebp-20h]
  _DWORD v52[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  tagDomLock *v53[2]; // [esp+24h] [ebp-14h] BYREF
  int v54; // [esp+2Ch] [ebp-Ch] BYREF
  int *v55; // [esp+30h] [ebp-8h]
  int v56; // [esp+34h] [ebp-4h]

  v54 = 0;
  v9 = (unsigned int)a1;
  v55 = 0;
  v48 = a1;
  v56 = 0;
  v52[0] = 0;
  v52[1] = 0;
  if ( !a5 )
  {
    SetUnavailableInputSource(v52);
    v9 = (unsigned int)v48;
    a5 = v52;
  }
  v10 = a3;
  if ( v9 < 0x400 && ((MessageTable[v9] & 0x200) != 0 || v9 == 537 && ((unsigned __int16)a3 & 0x8000) != 0) )
    goto LABEL_9;
  if ( v9 == 536 )
  {
    if ( ((unsigned __int16)a3 & 0x8000) != 0 )
    {
LABEL_9:
      UserSetLastError(1159);
      return 0;
    }
  }
  else if ( v9 - 577 <= 3 )
  {
LABEL_16:
    v12 = (_WORD)a3 == 1;
    goto LABEL_17;
  }
  if ( v9 - 581 <= 0x12 && v9 != 589 )
    goto LABEL_16;
  if ( v9 != 528 || (_WORD)a3 != 582 )
    goto LABEL_21;
  v12 = (unsigned int)a3 >> 16 == 1;
LABEL_17:
  if ( v12 && a2 && !IsMiPEnabledForWindow(a2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    return 0;
  }
LABEL_21:
  if ( a2 == (int *)-1 )
  {
    xxxBroadcastMessageEx(0, v9, v10, a4, 2u, 0, 0, 0);
    return 1;
  }
  CurrentThread = (int)KeGetCurrentThread();
  v50 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v50 = *ThreadWin32Thread;
  }
  if ( !a2 )
    return _PostThreadMessage(v10, a4) != 0;
  v14 = *(_DWORD **)(a2[2] + 232);
  CurrentThread = PsGetCurrentProcessWin32Process();
  if ( v14 == (_DWORD *)CurrentThread )
  {
LABEL_47:
    v15 = v48;
    goto LABEL_48;
  }
  v15 = v48;
  if ( (unsigned int)v48 > 0xD0 )
  {
    if ( (unsigned int)v48 > 0x1A8 )
    {
      if ( v48 == (struct tagQMSG *)563 || v48 == (struct tagQMSG *)648 )
        goto LABEL_42;
    }
    else
    {
      if ( v48 == (struct tagQMSG *)424 )
        goto LABEL_42;
      if ( v48 == (struct tagQMSG *)272 )
      {
LABEL_46:
        UserSetLastError(5);
        return 0;
      }
      if ( v48 == (struct tagQMSG *)353 )
        goto LABEL_42;
    }
LABEL_48:
    v16 = 0;
    v49 = 0;
    if ( (unsigned int)v15 - 992 <= 8 )
    {
      v54 = *(_DWORD *)(v50 + 228);
      *(_DWORD *)(v50 + 228) = &v54;
      v55 = a2;
      HMLockObject(a2);
      v17 = xxxDDETrackPostHook(&v48, a2, v10, &a4, 0);
      if ( v17 != 2 )
      {
        ThreadUnlock1();
        return v17;
      }
      v16 = 1;
      v49 = 1;
    }
    v18 = a2[2];
    DLT = DLT_POST::getDLT();
    v53[0] = (tagDomLock *)GetDomainLockRef(DLT);
    v53[1] = (tagDomLock *)(v18 + 472);
    if ( v18 + 472 == gObjDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    tagDomLock::LockShared(v53[0]);
    tagObjLock::LockExclusive((tagObjLock *)(v18 + 472));
    v21 = v48;
    CurrentThread = *a2;
    if ( (unsigned int)v48 - 912 <= 0xF || v48 == (struct tagQMSG *)30 )
    {
      v20 = *(_DWORD *)(v18 + 452);
      if ( v20 )
      {
        if ( *(struct tagQMSG **)(v20 + 12) == v48 && *(_DWORD *)(v20 + 8) == CurrentThread )
        {
          DelQEntry(1);
          v21 = v48;
        }
      }
    }
    if ( (unsigned int)v21 - 256 > 9 )
    {
      if ( v21 == (struct tagQMSG *)576 )
      {
        LOBYTE(v20) = 20;
      }
      else
      {
        if ( v21 != (struct tagQMSG *)281 )
          goto LABEL_79;
        LOBYTE(v20) = 21;
      }
      if ( !HMValidateHandle(a4, v20) )
      {
        v37 = v16 == 0;
LABEL_83:
        if ( !v37 )
          ThreadUnlock1();
LABEL_119:
        v39 = 0;
LABEL_120:
        CLockExclusiveInUserCrit<DLT_POST>::~CLockExclusiveInUserCrit<DLT_POST>(v53);
        return v39;
      }
    }
    else
    {
      v22 = *(_DWORD *)(v18 + 236);
      v23 = *(_DWORD *)(v22 + 52);
      if ( v23 )
        v50 = v23 + 216;
      else
        v50 = gObjDummyLock;
      v24 = *(_DWORD *)(v22 + 48);
      v25 = gObjDummyLock;
      if ( v24 )
        v25 = v24 + 216;
      v26 = gpsiLock;
      for ( i = 3; i; --i )
        v26 += 4;
      v28 = *(_DWORD *)(v18 + 236);
      for ( j = 3; j; --j )
        v28 += 4;
      v30 = v25;
      for ( k = 3; k; --k )
        v30 += 4;
      v32 = v50;
      for ( m = 3; m; --m )
        v32 += 4;
      PostUpdateKeyStateEvent(*(_DWORD *)(v18 + 236));
    }
LABEL_79:
    if ( (*(_BYTE *)(v18 + 688) & 0x20) != 0 )
    {
      v34 = KeGetCurrentThread();
      v35 = W32GetThreadWin32Thread(v34);
      v36 = a3;
      if ( v18 != v35 && !ProcessSuspendedPostMessage(v18, a2, v48, a3, a4) )
      {
        v37 = v49 == 0;
        goto LABEL_83;
      }
    }
    else
    {
      v36 = a3;
    }
    CurrentThread = 0;
    v50 = AllocQEntry(v18 + 448);
    if ( v50 )
    {
      if ( a6 && IsWindowDesktopComposed(a2) )
        TransformMessageBetweenCoordinateSpaces((unsigned int)v48, 0, (int *)&a3, (__int16 *)&a4, (int)a2, 0);
      v38 = a2[5];
      v39 = v50;
      StoreQMessage(v48, v36, a4, 0, 0, 0, 0LL, 0, (unsigned int)a5, *(_DWORD *)(v38 + 184), 0, 0, v46, v47);
      if ( v48 == (struct tagQMSG *)576 || v48 == (struct tagQMSG *)281 )
      {
        v40 = _HMObjectFromHandle(a4);
        if ( v40 )
          HMChangeOwnerThread(v40, v18);
      }
      if ( (*(_BYTE *)(v18 + 264) & 1) == 0 )
      {
        *(_WORD *)(*(_DWORD *)(v18 + 244) + 6) |= 0x108u;
        *(_WORD *)(*(_DWORD *)(v18 + 244) + 4) |= 0x108u;
        if ( (*(_WORD *)(*(_DWORD *)(v18 + 244) + 10) & 0x108) != 0 )
        {
          if ( (*(_BYTE *)(v18 + 264) & 2) != 0 )
          {
            ++*(_DWORD *)(*(_DWORD *)(v18 + 332) + 4);
            ++*(_DWORD *)(_gpsi + 4440);
            WakeWowTask(v18);
          }
          else
          {
            KeSetEvent(*(PRKEVENT *)(v18 + 400), 2, 0);
          }
        }
      }
      if ( v48 == (struct tagQMSG *)786 )
      {
        if ( (*(_DWORD *)(v18 + 688) & 0x40000) != 0 )
        {
          v41 = *(struct _KEVENT **)(v18 + 792);
          if ( v41 )
            KeSetEvent(v41, 1, 0);
        }
        SetWakeBit(v18, 128);
      }
      CurrentThread = 1;
    }
    else
    {
      v39 = 0;
    }
    v42 = *(tagObjLock **)(v18 + 236);
    v43 = DLT_QUEUE::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(v43);
    v50 = (int)DomainLockRef;
    if ( v42 == (tagObjLock *)gObjDummyLock )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      DomainLockRef = (tagDomLock *)v50;
    }
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive(v42);
    v45 = *(_DWORD *)(v18 + 236);
    if ( v18 == *(_DWORD *)(v45 + 36) )
      *(_DWORD *)(v45 + 40) = v39;
    tagObjLock::UnLockExclusive();
    tagDomLock::UnLockShared();
    if ( v49 )
      ThreadUnlock1();
    if ( CurrentThread )
      goto LABEL_120;
    goto LABEL_119;
  }
  if ( v48 == (struct tagQMSG *)208 )
  {
LABEL_42:
    if ( (!(unsigned __int8)Enforced() || *v14 == _gpepCSRSS)
      && (v14[106] != *(_DWORD *)(CurrentThread + 424) || v14[107] != *(_DWORD *)(CurrentThread + 428)) )
    {
      goto LABEL_46;
    }
    goto LABEL_47;
  }
  switch ( (unsigned int)v48 )
  {
    case 0xCu:
    case 0xBCu:
      goto LABEL_42;
    case 0xDu:
    case 0xC4u:
    case 0xCCu:
      if ( *(_WORD *)(_gpsi + 470) != *(_WORD *)(*(_DWORD *)(a2[19] + 4) + 2) || (*(_BYTE *)(a2[5] + 20) & 0x20) == 0 )
        goto LABEL_48;
      UserSetLastError(5);
      UserSetLastError(5);
      result = 0;
      break;
    case 0x4Eu:
      goto LABEL_46;
    default:
      goto LABEL_48;
  }
  return result;
}
