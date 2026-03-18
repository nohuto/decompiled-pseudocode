/*
 * XREFs of _EditionHandleAltTab@32 @ 0xF3338
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _SetNewForegroundQueue@4 @ 0x18960 (_SetNewForegroundQueue@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 *     _PtiKbdFromQ@4 @ 0xA98F4 (_PtiKbdFromQ@4.c)
 *     ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$06@@QAE@AAUtagObjLock@@000000@Z @ 0xAB276 (--$-0UtagObjLock@@U0@U0@U0@U0@U0@U0@@-$CMultiPerObjectLockExclusive@$06@@QAE@AAUtagObjLock@@0000.c)
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 */

void __stdcall EditionHandleAltTab(
        unsigned __int8 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        struct tagINPUT_MESSAGE_SOURCE *a7,
        unsigned __int16 a8)
{
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edi
  int v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // esi
  int v20; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char v23; // [esp+13h] [ebp-1Dh] BYREF
  int v24; // [esp+14h] [ebp-1Ch] BYREF
  int v25; // [esp+18h] [ebp-18h] BYREF
  int v26; // [esp+1Ch] [ebp-14h] BYREF
  int v27; // [esp+20h] [ebp-10h] BYREF
  _DWORD v28[3]; // [esp+24h] [ebp-Ch] BYREF

  v28[2] = 0;
  if ( gspwndAltTab )
  {
    if ( _gpqForeground )
    {
      v8 = PtiKbdFromQ(_gpqForeground);
      if ( !HasHidTable(v8)
        || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(PtiKbdFromQ(_gpqForeground) + 232) + 472) + 52) & 0x20) == 0 )
      {
        *(_DWORD *)(_gpqForeground + 284) |= 0x80u;
        v24 = _gpqForeground;
        v26 = 0;
        v25 = 0;
        v27 = 0;
        if ( AdjustPwndPtiPqForDelegation(&v24, &v26, &v25, a8, a6, &v27) )
        {
          v9 = v24;
          v10 = *(_DWORD *)(v24 + 64);
          if ( v10 )
            v11 = *(_DWORD *)(v10 + 8);
          else
            v11 = 0;
          if ( v11 )
            v24 = v11 + 216;
          else
            v24 = gObjDummyLock;
          v12 = *(_DWORD *)(v9 + 48);
          v13 = gObjDummyLock;
          if ( v12 )
            v13 = v12 + 216;
          v14 = *(_DWORD *)(v9 + 52);
          v15 = gObjDummyLock;
          if ( v14 )
            v15 = v14 + 216;
          v16 = v25;
          v17 = gObjDummyLock;
          if ( v25 )
            v17 = v25 + 216;
          if ( v26 )
            v18 = v26 + 28;
          else
            v18 = gObjDummyLock;
          CMultiPerObjectLockExclusive<7>::CMultiPerObjectLockExclusive<7>(&v23, gpsiLock, v18, v17, v9, v15, v13, v24);
          PostInputMessage(
            _gpqForeground,
            0,
            (struct tagQMSG *)a8,
            (struct tagWND *)a1,
            ((a3 | a2) << 16) | 1,
            a4,
            0,
            0,
            a5,
            0,
            a6,
            a7,
            0,
            v27,
            v16);
        }
      }
    }
    xxxCancelCoolSwitch();
    v19 = gspwndActivate;
    if ( gspwndActivate )
    {
      v20 = *(_DWORD *)(gspwndActivate + 8);
      if ( _gpqForeground == *(_DWORD *)(v20 + 236) )
      {
        SetNewForegroundQueue(0);
        v20 = *(_DWORD *)(v19 + 8);
      }
      CInputGlobals::SetPtiLastWoken(_gpInputGlobals, (struct tagTHREADINFO *)v20, 0);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v28[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v28;
      v28[1] = v19;
      HMLockObject(v19);
      xxxSetForegroundWindow2(v19, 0, 0x12u);
      if ( (*(_BYTE *)(*(_DWORD *)(v19 + 20) + 23) & 0x40) != 0 )
        xxxSetWindowPos(v19, 0, 0, 0, 0, 0, 16387);
      ThreadUnlock1();
      HMAssignmentUnlock(&gspwndActivate);
    }
  }
}
