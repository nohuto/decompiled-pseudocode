/*
 * XREFs of ?xxxSendClipboardMessage@@YGXPAUtagWINDOWSTATION@@I@Z @ 0x182BFB
 * Callers:
 *     _xxxEmptyClipboard@4 @ 0xACB3A (_xxxEmptyClipboard@4.c)
 *     ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D (-xxxDisownClipboard@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

void __fastcall xxxSendClipboardMessage(int a1, unsigned int a2)
{
  int v2; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // edi
  _DWORD v7[3]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v8[3]; // [esp+18h] [ebp-10h] BYREF
  int v9; // [esp+24h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  memset(v7, 0, sizeof(v7));
  v8[2] = 0;
  v9 = 0;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v8;
    v8[1] = v2;
    HMLockObject(v2);
    if ( a2 != 775 || (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 )
    {
      v6 = PsChargeProcessWakeCounter(**(_DWORD **)(*(_DWORD *)(v2 + 8) + 232), 0, 2, 0);
      if ( v6 )
        PushW32ThreadLock(v6, v7, (int)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout(v2, a2, 0, 0, 0x40u, 0, &v9, 1u, 0);
      if ( v6 )
        PopAndFreeAlwaysW32ThreadLock((int)v7);
    }
    else if ( !xxxSendTransformableMessageTimeout(v2, 0x307u, 0, 0, 2u, (struct tagDDECONV *)0x1388, &v9, 1u, 0) )
    {
      xxxSendNotifyMessage(v2, 0x307u, 0, 0, 1u);
    }
    ThreadUnlock1();
  }
}
