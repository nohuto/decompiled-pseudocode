/*
 * XREFs of ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394
 * Callers:
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YGXPAUtagTHREADINFO@@K@Z @ 0x14CC2B (-CancelInputState@@YGXPAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 *     ?Detach@UserAtomicCheck@@QAEXXZ @ 0xAAF2E (-Detach@UserAtomicCheck@@QAEXXZ.c)
 */

void __thiscall xxxSendActivateAppMessage(void *this)
{
  int v2; // eax
  int v3; // edx
  struct tagBWL *v4; // ebx
  _DWORD *i; // edi
  int v6; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v9; // [esp+0h] [ebp-28h]
  int v10; // [esp+4h] [ebp-24h]
  _DWORD v11[3]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v12[8]; // [esp+1Ch] [ebp-Ch] BYREF
  int v13; // [esp+24h] [ebp-4h]

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( (*((_BYTE *)this + 8) & 2) == 0 )
    UserAtomicCheck::Detach((UserAtomicCheck *)v12);
  v2 = BuildHwndList(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 252) + 12) + 60), 2, 0);
  v4 = (struct tagBWL *)v2;
  if ( v2 )
  {
    for ( i = (_DWORD *)(v2 + 16); *i != 1; ++i )
    {
      LOBYTE(v3) = 1;
      v6 = HMValidateHandleNoSecure(*i, v3);
      v13 = v6;
      if ( v6 && *(_DWORD *)(v6 + 8) == *(_DWORD *)this )
      {
        if ( (*((_DWORD *)this + 2) & 2) != 0 )
        {
          QueueNotifyTransformableMessage(
            (struct tagWND *)(*((_DWORD *)this + 2) & 1),
            *((_DWORD *)this + 1),
            0,
            0,
            v9,
            v10);
        }
        else
        {
          v11[2] = 0;
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v11[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v11;
          v11[1] = v13;
          HMLockObject(v13);
          xxxSendMessage(*((_DWORD *)this + 2) & 1, *((_DWORD *)this + 1));
          ThreadUnlock1();
        }
      }
    }
    FreeHwndList(v4);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
}
