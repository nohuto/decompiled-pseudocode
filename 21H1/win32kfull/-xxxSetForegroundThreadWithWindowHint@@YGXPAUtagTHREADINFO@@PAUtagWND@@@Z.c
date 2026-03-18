/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x185FC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     _xxxSetForegroundThread@4 @ 0x141AD2 (_xxxSetForegroundThread@4.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSetForegroundThreadWithWindowHint(int a1, int *a2)
{
  int v2; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int DLT; // eax
  int v11; // eax
  int v12; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v15; // edi
  unsigned int v16; // eax
  PriorityBoostCUI *v17; // [esp+0h] [ebp-B0h]
  struct tagTHREADINFO *v18; // [esp+4h] [ebp-ACh]
  struct tagWND *v19; // [esp+8h] [ebp-A8h]
  int v20; // [esp+10h] [ebp-A0h]
  _DWORD v23[3]; // [esp+24h] [ebp-8Ch] BYREF
  _DWORD v24[2]; // [esp+30h] [ebp-80h] BYREF
  _BYTE v25[32]; // [esp+38h] [ebp-78h] BYREF
  int v26; // [esp+58h] [ebp-58h]
  int v27; // [esp+5Ch] [ebp-54h]
  _DWORD v28[8]; // [esp+60h] [ebp-50h] BYREF
  _QWORD v29[5]; // [esp+80h] [ebp-30h] BYREF

  v2 = a1;
  if ( a1 != _gptiForeground )
  {
    if ( !a1 || !_gptiForeground || *(_DWORD *)(a1 + 232) != *(_DWORD *)(_gptiForeground + 232) )
    {
      EtwTraceFocusedProcessChange(a1, _gptiForeground);
      memset(v28, 0, sizeof(v28));
      if ( CitProcessForegroundChange(v2, a2, _gptiForeground, v28) )
      {
        if ( v2 && (v4 = *(_DWORD *)(v2 + 248)) != 0 && *(_DWORD *)(v4 + 176) )
          v28[1] = *(_DWORD *)(*(_DWORD *)(v2 + 232) + 32);
        else
          v28[1] = 0;
        if ( _gptiForeground && (v5 = *(_DWORD *)(_gptiForeground + 248)) != 0 && *(_DWORD *)(v5 + 176) )
          v28[0] = *(_DWORD *)(*(_DWORD *)(_gptiForeground + 232) + 32);
        else
          v28[0] = 0;
        v26 = 0;
        v27 = 0;
        v24[0] = 0;
        v24[1] = 9;
        qmemcpy(v25, v28, sizeof(v25));
        anonymous_namespace_::NotifyIAMWindowManagementEvent(v24);
      }
      if ( v2 )
        *(_DWORD *)(*(_DWORD *)(v2 + 232) + 152) = PsChargeProcessWakeCounter(**(_DWORD **)(v2 + 232), 0, 0, 1);
      if ( _gptiForeground )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(_gptiForeground + 232) + 152);
        if ( v6 )
        {
          PsReleaseProcessWakeCounter(v6, 1);
          *(_DWORD *)(*(_DWORD *)(_gptiForeground + 232) + 152) = 0;
        }
      }
    }
    PriorityBoostCUI::TransitionForegroundPriority(v17, v18, v19);
    if ( _gptiForeground )
    {
      v7 = *(_DWORD *)(_gptiForeground + 240);
      v20 = v7;
    }
    else
    {
      v7 = 0;
      v20 = 0;
    }
    EtwTraceFocusChange(v2);
    if ( _gptiForeground )
    {
      if ( !v2 || *(_DWORD *)(_gptiForeground + 232) != *(_DWORD *)(v2 + 232) )
      {
        v8 = MEMORY[0xFFDF0004];
        if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
        {
          v15 = MEMORY[0xFFDF0324];
          if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
          {
            v16 = MEMORY[0xFFDF0320];
          }
          else
          {
            do
            {
              _mm_pause();
              v15 = MEMORY[0xFFDF0324];
              v16 = MEMORY[0xFFDF0320];
            }
            while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
            v2 = a1;
            v7 = v20;
            v8 = MEMORY[0xFFDF0004];
          }
          v9 = MEMORY[0xFFDF0004] * (v15 << 8) + (((unsigned int)v8 * (unsigned __int64)v16) >> 24);
        }
        else
        {
          v9 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
        }
        *(_DWORD *)(*(_DWORD *)(_gptiForeground + 232) + 664) = v9;
      }
      if ( _gptiForeground )
        DisableDelegation();
    }
    DLT = DLT_FOREGROUND::getDLT();
    GetDomainLockRef(DLT);
    _gptiForeground = v2;
    if ( _gSessionId != _gServiceSessionId && !_gProtocolType )
    {
      memset(v29, 0, sizeof(v29));
      if ( v2 )
      {
        LODWORD(v29[0]) = *(_DWORD *)(*(_DWORD *)(v2 + 232) + 32);
        HIDWORD(v29[0]) = PsGetThreadId(*(PETHREAD *)v2);
        if ( a2 )
          v11 = *a2;
        else
          v11 = 0;
        v29[2] = v11;
      }
      SendMessageTo(3, v29, 40);
    }
    if ( _gptiForeground )
    {
      v12 = *(_DWORD *)(_gptiForeground + 240);
      if ( v12 )
      {
        if ( *((char *)&_gpdwCPUserPreferencesMask + 4) < 0 || !_gspklGlobalActive || _gspklGlobalActive == v12 )
        {
          v23[2] = 0;
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v23[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v23;
          v23[1] = v7;
          if ( v7 )
            HMLockObject(v7);
          xxxChangeForegroundKeyboardTable(v7, *(_DWORD *)(_gptiForeground + 240));
          ThreadUnlock1();
        }
      }
    }
    memset(_gafAsyncKeyStateRecentDown, 0, 0x20u);
    ++*(_DWORD *)(_gpsi + 6232);
  }
}
