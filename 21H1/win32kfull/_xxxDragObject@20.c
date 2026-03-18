/*
 * XREFs of _xxxDragObject@20 @ 0x1A6347
 * Callers:
 *     _NtUserDragObject@20 @ 0x160D60 (_NtUserDragObject@20.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     ?zzzShowCursor@@YGH_N@Z @ 0xAEA1C (-zzzShowCursor@@YGH_N@Z.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     _xxxSetCapture@4 @ 0x18772B (_xxxSetCapture@4.c)
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 */

int __fastcall xxxDragObject(_DWORD *a1, ULONG_PTR a2, unsigned int a3, unsigned int a4, void *a5)
{
  int v5; // ebx
  struct tagEVENTHOOK *v6; // esi
  int result; // eax
  unsigned int *v8; // edi
  unsigned int v9; // eax
  struct tagCURSOR *v10; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagEVENTHOOK *i; // edx
  struct tagEVENTHOOK *v14; // edx
  int v15; // ecx
  int v16; // edx
  _DWORD *v17; // ecx
  struct tagCURSOR *DropObject; // eax
  struct tagCURSOR *v19; // edx
  struct tagCURSOR *v20; // ecx
  int v21; // eax
  struct tagCURSOR *v22; // eax
  ULONG_PTR v23; // eax
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // edi
  struct tagEVENTHOOK *v28; // edx
  struct tagWND *v29; // [esp+0h] [ebp-A8h]
  unsigned int v30; // [esp+4h] [ebp-A4h]
  struct tagCURSOR *v31; // [esp+10h] [ebp-98h]
  ULONG_PTR v32; // [esp+14h] [ebp-94h]
  ULONG_PTR v33; // [esp+14h] [ebp-94h]
  ULONG_PTR v34; // [esp+18h] [ebp-90h]
  int v35; // [esp+1Ch] [ebp-8Ch]
  struct tagCURSOR *v36; // [esp+20h] [ebp-88h]
  int v37; // [esp+28h] [ebp-80h] BYREF
  ULONG_PTR v38; // [esp+2Ch] [ebp-7Ch]
  int v39; // [esp+30h] [ebp-78h]
  int v40; // [esp+34h] [ebp-74h]
  _DWORD *v41; // [esp+38h] [ebp-70h]
  ULONG_PTR BugCheckParameter2; // [esp+3Ch] [ebp-6Ch]
  _DWORD v43[7]; // [esp+40h] [ebp-68h] BYREF
  _DWORD v44[3]; // [esp+5Ch] [ebp-4Ch] BYREF
  int v45; // [esp+68h] [ebp-40h] BYREF
  struct tagEVENTHOOK *v46; // [esp+6Ch] [ebp-3Ch]
  int v47; // [esp+70h] [ebp-38h]
  int v48; // [esp+74h] [ebp-34h] BYREF
  ULONG_PTR v49; // [esp+78h] [ebp-30h]
  int v50; // [esp+7Ch] [ebp-2Ch]
  _DWORD v51[3]; // [esp+80h] [ebp-28h] BYREF
  _DWORD v52[7]; // [esp+8Ch] [ebp-1Ch] BYREF

  v41 = a1;
  v5 = 0;
  memset(v43, 0, sizeof(v43));
  v34 = 0;
  memset(v52, 0, sizeof(v52));
  v31 = 0;
  v35 = 1;
  v39 = 0;
  v48 = 0;
  v6 = (struct tagEVENTHOOK *)a2;
  BugCheckParameter2 = a2;
  v49 = 0;
  v44[2] = 0;
  v50 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  memset(v51, 0, sizeof(v51));
  result = Win32AllocPoolWithQuotaZInit(56, 1935962965);
  v8 = (unsigned int *)result;
  v40 = result;
  if ( !result )
    return result;
  PushW32ThreadLock(result, v51, (int)Win32FreePool);
  v9 = 0;
  if ( v6 )
    v9 = *(_DWORD *)v6;
  *v8 = v9;
  v8[2] = a3;
  v8[3] = a4;
  if ( a5 )
    v10 = zzzSetCursor(a5);
  else
    v10 = *(struct tagCURSOR **)(*(_DWORD *)(_gptiCurrent + 236) + 276);
  v36 = v10;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v44[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v44;
  v44[1] = v36;
  if ( v36 )
    HMLockObject(v36);
  if ( v6 )
  {
    for ( i = v6; (*(_BYTE *)(*((_DWORD *)i + 5) + 23) & 0xC0) == 0x40; i = (struct tagEVENTHOOK *)*((_DWORD *)i + 14) )
      ;
    v45 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v45;
    v46 = i;
    HMLockObject(i);
    xxxInternalUpdateWindow(v29, v30);
    ThreadUnlock1();
  }
  if ( _gpqForeground )
  {
    v14 = *(struct tagEVENTHOOK **)(_gpqForeground + 60);
    if ( v14 )
    {
      if ( _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
      {
        v32 = *((_DWORD *)v14 + 2);
        if ( v32 == _gptiCurrent )
          v14 = v6;
        xxxWindowEvent(0x80000004, v14, 0, (struct tagWND *)3, v32 == _gptiCurrent ? 33 : 49);
      }
    }
  }
  xxxWindowEvent(0xEu, v6, 0, 0, 0);
  xxxSetCapture(v6);
  zzzShowCursor(1);
  v15 = _gptiCurrent;
  v37 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v37;
  v38 = 0;
  while ( *(struct tagEVENTHOOK **)(*(_DWORD *)(v15 + 236) + 56) == v6 )
  {
    while ( !xxxInternalGetMessage(v43, (struct tagMSG *)0x200, 0x20Eu, 1u, 0)
         && !xxxInternalGetMessage(v43, (struct tagMSG *)0x23, 0x23u, 1u, 0)
         && !xxxInternalGetMessage(v43, (struct tagMSG *)0x100, 0x109u, 1u, 0) )
    {
      if ( !xxxSleepThread2(1u, 0, 0) )
      {
        ThreadUnlock1();
        ThreadUnlock1();
        goto LABEL_70;
      }
    }
    while ( xxxInternalGetMessage(v52, (struct tagMSG *)0x100, 0x109u, 1u, 0) )
      ;
    if ( *(struct tagEVENTHOOK **)(*(_DWORD *)(_gptiCurrent + 236) + 56) != v6 || v43[1] == 256 && v43[2] == 27 )
    {
      v22 = *(struct tagCURSOR **)(_gasyscur[0] + 5364);
      v31 = v22;
      if ( v22 )
        zzzSetCursor(v22);
      break;
    }
    qmemcpy(v8 + 7, v8, 0x1Cu);
    v8 = (unsigned int *)v40;
    v16 = v40;
    v17 = v41;
    *(_DWORD *)(v40 + 16) = v43[5];
    *(_DWORD *)(v16 + 20) = v43[6];
    DropObject = xxxQueryDropObject(v17, v16);
    v19 = DropObject;
    v31 = DropObject;
    if ( DropObject )
    {
      if ( DropObject != (struct tagCURSOR *)1 )
        goto LABEL_35;
      v19 = (struct tagCURSOR *)a5;
    }
    else
    {
      v19 = *(struct tagCURSOR **)(_gasyscur[0] + 5364);
      v8[1] = 0;
    }
    v31 = v19;
LABEL_35:
    if ( v19 )
    {
      zzzSetCursor(v19);
      v19 = v31;
    }
    v6 = (struct tagEVENTHOOK *)BugCheckParameter2;
    if ( BugCheckParameter2 )
    {
      v20 = *(struct tagCURSOR **)(_gasyscur[0] + 5364);
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x22Du, v19 != v20, (int)v8, 0, 0, 0, 1u, 1);
    }
    if ( v34 == HMValidateHandleNoSecure(v8[1], 1) )
    {
      if ( v34 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v34, 0x22Fu, 0, (int)v8, 0, 0, 0, 1u, 1);
      }
    }
    else
    {
      if ( v34 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v34, 0x22Eu, 0, (int)(v8 + 7), 0, 0, 0, 1u, 1);
      }
      v34 = HMValidateHandleNoSecure(v8[1], 1);
      ThreadUnlock1();
      v15 = _gptiCurrent;
      v37 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v37;
      v38 = v34;
      if ( !v34 )
        goto LABEL_47;
      HMLockObject(v34);
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v34, 0x22Eu, 1u, (int)v8, 0, 0, 0, 1u, 1);
    }
    v15 = _gptiCurrent;
LABEL_47:
    if ( v43[1] == 162 || v43[1] == 514 )
    {
      v21 = 0;
      v35 = 0;
    }
    else
    {
      v21 = v35;
    }
    if ( !v21 )
      break;
  }
  ThreadUnlock1();
  if ( v35 )
    v31 = *(struct tagCURSOR **)(_gasyscur[0] + 5364);
  xxxReleaseCapture();
  zzzShowCursor(0);
  zzzSetCursor(v36);
  ThreadUnlock1();
  if ( v31 == *(struct tagCURSOR **)(_gasyscur[0] + 5364) || (v23 = ValidateHwnd(v8[1]), (v33 = v23) == 0) )
  {
    v27 = 0;
  }
  else
  {
    v48 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v48;
    v49 = v23;
    HMLockObject(v23);
    v25 = v33;
    *(_DWORD *)(*(_DWORD *)(v33 + 8) + 264) |= 0x20u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_q(v33, v24, 2u, 10, (int)&WPP_d797790c7a3731f04d2687a9272fe752_Traceguids, *(_DWORD *)(v33 + 8));
      v25 = v33;
    }
    v26 = 0;
    if ( v6 )
      v26 = *(_DWORD *)v6;
    _InterlockedIncrement(&glSendMessage);
    v27 = xxxSendTransformableMessageTimeout(v25, 0x22Au, v26, (int)v8, 0, 0, 0, 1u, 1);
    ThreadUnlock1();
  }
  if ( _gpqForeground )
  {
    v28 = *(struct tagEVENTHOOK **)(_gpqForeground + 60);
    if ( v28 )
    {
      if ( _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
        xxxWindowEvent(0x80000005, v28, 0, (struct tagWND *)4, 33);
    }
  }
  xxxWindowEvent(0xFu, v6, 0, 0, 0);
  v5 = v27;
LABEL_70:
  PopAndFreeAlwaysW32ThreadLock((int)v51);
  return v5;
}
