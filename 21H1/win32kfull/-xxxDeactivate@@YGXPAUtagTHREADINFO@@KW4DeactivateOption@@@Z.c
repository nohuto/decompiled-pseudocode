/*
 * XREFs of ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 *     _xxxFocusSetInputContext@12 @ 0x184BE (_xxxFocusSetInputContext@12.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394 (-xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 */

int __fastcall xxxDeactivate(int a1, int a2, char a3)
{
  int v4; // ebx
  int result; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int DLT; // eax
  int v15; // ebx
  int v16; // ebx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  const struct tagAAS *v20; // [esp-Ch] [ebp-68h]
  int v21; // [esp-8h] [ebp-64h]
  int v22; // [esp-4h] [ebp-60h]
  _BYTE v23[12]; // [esp+Ch] [ebp-50h] BYREF
  _BYTE v24[12]; // [esp+18h] [ebp-44h] BYREF
  int v25; // [esp+24h] [ebp-38h] BYREF
  int v26; // [esp+28h] [ebp-34h]
  int v27; // [esp+2Ch] [ebp-30h]
  int v28; // [esp+30h] [ebp-2Ch]
  int v29; // [esp+34h] [ebp-28h]
  int v30; // [esp+38h] [ebp-24h]
  int v31; // [esp+3Ch] [ebp-20h] BYREF
  int v32; // [esp+40h] [ebp-1Ch]
  int v33; // [esp+44h] [ebp-18h]
  int v34; // [esp+48h] [ebp-14h]
  unsigned int v35; // [esp+4Ch] [ebp-10h]
  int v36; // [esp+50h] [ebp-Ch]
  int v37; // [esp+54h] [ebp-8h]
  int v38; // [esp+58h] [ebp-4h]

  v36 = 0;
  v34 = a2;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  memset(v23, 0, sizeof(v23));
  memset(v24, 0, sizeof(v24));
  v4 = _gptiCurrent;
  result = *(_DWORD *)(a1 + 236);
  v37 = _gptiCurrent;
  if ( !*(_DWORD *)(result + 64) )
    return result;
  if ( a1 != _gptiCurrent )
    LockW32Thread(a1, v23);
  v6 = *(_DWORD *)(a1 + 264);
  if ( (v6 & 0x200) == 0 )
  {
    v36 = 1;
    *(_DWORD *)(a1 + 264) = v6 | 0x200;
  }
  v7 = *(_DWORD *)(a1 + 236);
  v8 = *(_DWORD *)(v7 + 56);
  if ( v8 )
  {
    v25 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v25;
    v26 = v8;
    HMLockObject(v8);
    xxxSendMessage(0, 0);
    ThreadUnlock1();
    SetWakeBit(a1, 2);
    v7 = *(_DWORD *)(a1 + 236);
  }
  v9 = *(_DWORD *)(v7 + 64);
  if ( v9 )
  {
    v38 = *(_DWORD *)(v9 + 8);
    LockW32Thread(v38, v24);
    v31 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v31;
    v32 = v9;
    HMLockObject(v9);
    v10 = (*(_BYTE *)(*(_DWORD *)(v9 + 20) + 23) & 0x20) << 16;
    v35 = v10;
    if ( (a3 & 1) == 0 )
    {
      if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage(v9, 0, 0) )
      {
        ThreadUnlock1();
        result = PopAndFreeW32ThreadLock(v24);
        goto LABEL_25;
      }
      v10 = v35;
    }
    xxxSendMessage(v10, 0);
    v12 = *(_DWORD *)(a1 + 236);
    v13 = *(_DWORD *)(v12 + 64);
    if ( v13 == v9 )
    {
      v22 = *(_DWORD *)(v12 + 64);
      v21 = v12 + 68;
      HMAssignmentLock(v13, v11);
      DLT = DLT_ACTIVE::getDLT(v21, v22);
      GetDomainLockRef(DLT);
      HMAssignmentUnlock(*(_DWORD *)(a1 + 236) + 64);
    }
    SetOrClrWF(64, 1);
    PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 37, *(_DWORD *)v9);
    ThreadUnlock1();
    v15 = *(_DWORD *)(v38 + 264) & 1;
    v28 = v15 == 0 ? v38 : 0;
    PopAndFreeW32ThreadLock(v24);
    v16 = v15 == 0 ? v38 : 0;
  }
  else
  {
    v9 = -1;
    v28 = a1;
    v16 = a1;
  }
  if ( v16 )
  {
    v29 = v34;
    v30 = 0;
    xxxSendActivateAppMessage(v20);
  }
  result = *(_DWORD *)(a1 + 236);
  v4 = v37;
  if ( *(_DWORD *)(result + 64) != v9 )
    goto LABEL_18;
  v31 = *(_DWORD *)(v37 + 228);
  *(_DWORD *)(v37 + 228) = &v31;
  v32 = v9;
  HMLockObject(v9);
  if ( (a3 & 1) != 0 || (unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage(v9, 0, 0) )
  {
    xxxSendMessage(0, 0);
    ThreadUnlock1();
    result = *(_DWORD *)(a1 + 236);
    v19 = *(_DWORD *)(result + 64);
    if ( v19 == v9 )
    {
      HMAssignmentLock(v19, v18);
      HMAssignmentUnlock(*(_DWORD *)(a1 + 236) + 64);
      result = *(_DWORD *)(a1 + 236);
    }
LABEL_18:
    if ( !*(_DWORD *)(result + 60) )
      goto LABEL_25;
    result = HMAssignmentUnlock(result + 60);
    v17 = result;
    if ( !result )
      goto LABEL_25;
    v31 = *(_DWORD *)(v4 + 228);
    *(_DWORD *)(v4 + 228) = &v31;
    v32 = result;
    HMLockObject(result);
    if ( *(_DWORD *)(a1 + 236) == _gpqForeground )
      zzzInputFocusLostWindowEvent(v17, 8);
    xxxSendMessage(0, 0);
    if ( (*_gpsi & 4) != 0 )
      xxxFocusSetInputContext(v17, 0, 0);
  }
  result = ThreadUnlock1();
LABEL_25:
  if ( v36 )
    *(_DWORD *)(a1 + 264) &= ~0x200u;
  if ( a1 != v4 )
    return PopAndFreeW32ThreadLock(v23);
  return result;
}
