/*
 * XREFs of xxxDragObject @ 0x1C02496A4
 * Callers:
 *     NtUserDragObject @ 0x1C01F88E0 (NtUserDragObject.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0035F20 (xxxSetCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C011BCD4 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02494D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, struct tagWND *a2, int a3, __int64 a4, struct tagCURSOR *a5)
{
  unsigned int v5; // ebx
  struct tagCURSOR *v9; // rdi
  __int64 result; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  struct tagCURSOR *v13; // r12
  __int64 ThreadWin32Thread; // rax
  struct tagWND *i; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagWND *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  struct tagCURSOR *DropObject; // rax
  struct tagCURSOR *v35; // rcx
  unsigned __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int64 v44; // rdi
  int v45; // edx
  int v46; // ecx
  unsigned __int64 v47; // r8
  unsigned int v48; // edi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  struct tagWND *v52; // rdx
  int v53; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+60h] [rbp-A8h]
  struct tagCURSOR *v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v57; // [rsp+80h] [rbp-88h]
  __int64 v58; // [rsp+88h] [rbp-80h]
  __int128 v59; // [rsp+90h] [rbp-78h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-68h]
  __int128 v61; // [rsp+B0h] [rbp-58h]
  __int128 v62; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-38h]
  __int128 v64; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-20h]
  _QWORD v66[3]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v67; // [rsp+108h] [rbp+0h] BYREF
  __int64 v68; // [rsp+118h] [rbp+10h]
  _OWORD v69[3]; // [rsp+120h] [rbp+18h] BYREF

  v5 = 0;
  v53 = 1;
  v54 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v68 = 0LL;
  v58 = 0LL;
  v66[2] = 0LL;
  v59 = 0LL;
  v9 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  memset(v69, 0, sizeof(v69));
  v64 = 0LL;
  v62 = 0LL;
  v67 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v11 = result;
  if ( result )
  {
    PushW32ThreadLock(result, &v67, (__int64)Win32FreePool);
    v12 = 0LL;
    if ( a2 )
      v12 = *(_QWORD *)a2;
    *(_QWORD *)v11 = v12;
    *(_DWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 24) = a4;
    if ( a5 )
      v13 = zzzSetCursor(a5);
    else
      v13 = *(struct tagCURSOR **)(*(_QWORD *)(gptiCurrent + 424LL) + 376LL);
    v55 = v13;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v66[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v66;
    v66[1] = v13;
    if ( v13 )
      HMLockObject(v13);
    if ( a2 )
    {
      for ( i = a2; (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) == 0x40; i = (struct tagWND *)*((_QWORD *)i + 13) )
        ;
      *(_QWORD *)&v62 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v62;
      *((_QWORD *)&v62 + 1) = i;
      HMLockObject(i);
      xxxInternalUpdateWindow(i, 1u);
      ThreadUnlock1(v17, v16, v18);
    }
    if ( gpqForeground )
    {
      v19 = *(struct tagWND **)(gpqForeground + 112LL);
      if ( v19 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
        {
          v20 = 33;
          if ( *((_QWORD *)v19 + 2) == gptiCurrent )
            v19 = a2;
          else
            v20 = 49;
          xxxWindowEvent(0x80000004, v19, 0, 3u, v20);
        }
      }
    }
    xxxWindowEvent(0xEu, a2, 0, 0, 0);
    xxxSetCapture((__int64)a2);
    LOBYTE(v21) = 1;
    zzzShowCursor(v21);
    v25 = 1;
    v56 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v56;
    v57 = 0LL;
    while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage(&v59, 0LL, 0x200u, 0x20Eu, 1, 0)
           && !(unsigned int)xxxInternalGetMessage(&v59, 0LL, 0x23u, 0x23u, 1, 0)
           && !(unsigned int)xxxInternalGetMessage(&v59, 0LL, 0x100u, 0x109u, 1, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v27, v26, v28);
          ThreadUnlock1(v30, v29, v31);
          goto LABEL_69;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage(v69, 0LL, 0x100u, 0x109u, 1, 0) )
        ;
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a2
        || DWORD2(v59) == 256 && (_QWORD)v60 == 27LL )
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        if ( v9 )
          zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 5528LL));
        break;
      }
      v32 = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)v11;
      v33 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v11 + 64) = v32;
      *(_OWORD *)(v11 + 80) = v33;
      *(_QWORD *)(v11 + 32) = *(_QWORD *)((char *)&v61 + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v11);
      v9 = DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v35 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (unsigned __int64)a2,
          0x22Du,
          v9 != v35,
          (struct _LARGE_STRING *)v11,
          0,
          0,
          0LL,
          1,
          1);
      }
      if ( v54 == HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1) )
      {
        if ( v54 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v54, 0x22Fu, 0LL, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1, 1);
        }
      }
      else
      {
        if ( v54 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v54, 0x22Eu, 0LL, (struct _LARGE_STRING *)(v11 + 48), 0, 0, 0LL, 1, 1);
        }
        v36 = HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1);
        v54 = v36;
        ThreadUnlock1(v38, v37, v39);
        v56 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v56;
        v57 = v36;
        if ( v36 )
        {
          HMLockObject(v36);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(v36, 0x22Eu, 1uLL, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1, 1);
        }
      }
      if ( DWORD2(v59) == 162 || DWORD2(v59) == 514 )
      {
        v25 = 0;
        v53 = 0;
      }
      else
      {
        v25 = v53;
      }
      if ( !v25 )
        break;
    }
    ThreadUnlock1(v23, v22, v24);
    if ( v25 )
      v9 = *(struct tagCURSOR **)(gasyscur[0] + 5528LL);
    xxxReleaseCapture();
    zzzShowCursor(0LL);
    zzzSetCursor(v55);
    ThreadUnlock1(v41, v40, v42);
    if ( v9 == *(struct tagCURSOR **)(gasyscur[0] + 5528LL)
      || (v43 = ValidateHwnd(*(_QWORD *)(v11 + 8)), (v44 = v43) == 0) )
    {
      v48 = 0;
    }
    else
    {
      *(_QWORD *)&v64 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v64;
      *((_QWORD *)&v64 + 1) = v43;
      HMLockObject(v43);
      *(_DWORD *)(*(_QWORD *)(v44 + 16) + 480LL) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v45) = 4;
        WPP_RECORDER_SF_q(
          v46,
          v45,
          2,
          10,
          (__int64)&WPP_d797790c7a3731f04d2687a9272fe752_Traceguids,
          *(_QWORD *)(v44 + 16));
      }
      v47 = 0LL;
      if ( a2 )
        v47 = *(_QWORD *)a2;
      _InterlockedIncrement(&glSendMessage);
      v48 = xxxSendTransformableMessageTimeout(v44, 0x22Au, v47, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v50, v49, v51);
    }
    if ( gpqForeground )
    {
      v52 = *(struct tagWND **)(gpqForeground + 112LL);
      if ( v52 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
          xxxWindowEvent(0x80000005, v52, 0, 4u, 0x21u);
      }
    }
    xxxWindowEvent(0xFu, a2, 0, 0, 0);
    v5 = v48;
LABEL_69:
    PopAndFreeAlwaysW32ThreadLock((__int64)&v67);
    return v5;
  }
  return result;
}
