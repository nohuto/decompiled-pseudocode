/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x18278
 * Callers:
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 *     _zzzInputFocusReceivedWindowEvent@4 @ 0x177FE (_zzzInputFocusReceivedWindowEvent@4.c)
 *     _xxxFocusSetInputContext@12 @ 0x184BE (_xxxFocusSetInputContext@12.c)
 *     _xxxApplyGlobalInputSettings@4 @ 0x1855E (_xxxApplyGlobalInputSettings@4.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x185FC (-xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 */

int __fastcall anonymous_namespace_::xxxSendFocusMessages(int a1, int a2)
{
  int v2; // edi
  int v4; // ecx
  unsigned int *v5; // esi
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  unsigned int v13; // eax
  struct tagTHREADINFO *v14; // [esp-8h] [ebp-30h]
  _BYTE v15[12]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v16[3]; // [esp+18h] [ebp-10h] BYREF
  int v17; // [esp+24h] [ebp-4h]

  v16[2] = 0;
  v2 = a1;
  v17 = a1;
  *(_DWORD *)(*(_DWORD *)(a1 + 236) + 284) &= ~0x800u;
  if ( !a2 )
  {
    v12 = *(_DWORD *)(a1 + 236);
    if ( *(_DWORD *)(v12 + 64) )
      *(_DWORD *)(v12 + 284) |= 0x800u;
  }
  v4 = *(_DWORD *)(a1 + 236);
  v5 = *(unsigned int **)(v4 + 60);
  v16[0] = *(_DWORD *)(v2 + 228);
  *(_DWORD *)(v2 + 228) = v16;
  v16[1] = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    v4 = *(_DWORD *)(v2 + 236);
  }
  v14 = (struct tagTHREADINFO *)(v4 + 60);
  HMAssignmentLock(v4, a2);
  if ( a2 )
  {
    if ( *(_DWORD *)(v2 + 236) == _gpqForeground )
    {
      v10 = *(_DWORD *)(a2 + 8);
      memset(v15, 0, sizeof(v15));
      v11 = 0;
      if ( v10 != _gptiCurrent )
      {
        LockW32Thread(v10, v15);
        v11 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(v14, (struct tagWND *)a2);
      if ( v11 )
        PopAndFreeW32ThreadLock(v15);
      v2 = v17;
    }
    v6 = *(_DWORD *)(v2 + 236);
    v7 = v6;
    if ( v6 == _gpqForeground )
    {
      v7 = *(_DWORD *)(v2 + 236);
      if ( a2 == *(_DWORD *)(v6 + 60) && *((char *)&_gpdwCPUserPreferencesMask + 4) >= 0 )
      {
        xxxApplyGlobalInputSettings();
        v7 = *(_DWORD *)(v2 + 236);
      }
    }
    if ( v5 )
    {
      if ( v7 == _gpqForeground )
        zzzInputFocusLostWindowEvent((int)v5, 2);
      xxxSendMessage(*(_DWORD *)a2, 0);
      if ( (*_gpsi & 4) != 0 )
        xxxFocusSetInputContext(v5, 0, 0);
    }
    if ( a2 == *(_DWORD *)(*(_DWORD *)(v2 + 236) + 60) )
    {
      if ( (*_gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1, 0);
      xxxWindowEvent(32773, a2, -4, 0, 0);
      if ( (((unsigned int)&loc_3FFFD + 3) & *(_DWORD *)(*(_DWORD *)(a2 + 8) + 688)) != 0
        && (*(_BYTE *)(_gptiCurrent + 264) & 1) != 0 )
      {
        v13 = 0;
        if ( v5 )
          v13 = *v5;
        xxxSendNotifyMessage(a2, 7, v13, 0, 1);
      }
      else
      {
        v8 = 0;
        if ( v5 )
          v8 = *v5;
        xxxSendMessage(v8, 0);
      }
      if ( _gpqForeground && *(_DWORD *)(_gpqForeground + 60) == a2 )
        zzzInputFocusReceivedWindowEvent((void *)2);
    }
  }
  else if ( v5 )
  {
    if ( *(_DWORD *)(v2 + 236) == _gpqForeground )
      zzzInputFocusLostWindowEvent((int)v5, 3);
    xxxWindowEvent(32773, 0, -4, 0, 0);
    xxxSendMessage(0, 0);
    if ( (*_gpsi & 4) != 0 )
      xxxFocusSetInputContext(v5, 0, 0);
  }
  return ThreadUnlock1();
}
