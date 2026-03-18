/*
 * XREFs of _xxxDW_SendDestroyMessages@4 @ 0x72C7C
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxDW_SendDestroyMessages@4 @ 0x72C7C (_xxxDW_SendDestroyMessages@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxDW_SendDestroyMessages@4 @ 0x72C7C (_xxxDW_SendDestroyMessages@4.c)
 *     ?xxxMoveFocusAway@@YGXPBUtagWND@@@Z @ 0x72D9A (-xxxMoveFocusAway@@YGXPBUtagWND@@@Z.c)
 *     ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D (-xxxDisownClipboard@@YGXPAUtagWND@@@Z.c)
 */

void __thiscall xxxDW_SendDestroyMessages(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v7; // eax
  int v8; // eax
  const struct tagWND *v9; // [esp+0h] [ebp-28h]
  struct tagWND *v10; // [esp+0h] [ebp-28h]
  int v11; // [esp+10h] [ebp-18h] BYREF
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  xxxMoveFocusAway(v9);
  v2 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 356);
  if ( v2 && this == *(_DWORD **)(v2 + 56) )
  {
    xxxDisownClipboard(v10);
  }
  else if ( _grpWinStaList && this == *(_DWORD **)(_grpWinStaList + 56) )
  {
    HMAssignmentUnlock(_grpWinStaList + 56);
  }
  if ( (*(_BYTE *)(this[5] + 146) & 4) != 0 )
  {
    xxxSendMessage(this, 0, 0);
    SetOrClrWF(0, (int)this, 0x8A04u, 0);
  }
  xxxSendMessage(this, 0, 0);
  v3 = this[15];
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 48);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v14 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v14;
      v15 = v4;
      if ( v4 )
        HMLockObject(v4);
      v7 = KeGetCurrentThread();
      v8 = W32GetThreadWin32Thread(v7);
      v11 = *(_DWORD *)(v8 + 228);
      *(_DWORD *)(v8 + 228) = &v11;
      v12 = v3;
      HMLockObject(v3);
      xxxDW_SendDestroyMessages(v3);
      ThreadUnlock1();
      v3 = v4;
    }
    while ( ThreadUnlock1() && v4 );
  }
  xxxMoveFocusAway(v10);
}
