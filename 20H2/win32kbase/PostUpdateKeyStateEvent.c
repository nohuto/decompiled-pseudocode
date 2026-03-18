/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C0076CF0
 * Callers:
 *     UpdateAsyncKeyState @ 0x1C002D190 (UpdateAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x1C00764D0 (NtUserGetKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01AE620 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0076DF4 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0076E20 (ProcessUpdateKeyStateEvent.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x1C0077944 (ApiSetEditionPostUpdateKeyStateEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PostUpdateKeyStateEvent(__int64 a1)
{
  _OWORD *v2; // rdi
  __int64 v3; // rax
  _OWORD *v4; // rsi
  _OWORD *v5; // rax
  unsigned int v6; // edx
  _DWORD *v7; // r8
  _DWORD *v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 388) & 1) != 0 && *(struct tagTHREADINFO **)(a1 + 96) != gptiRit )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v9);
      v2 = (_OWORD *)(a1 + 196);
      ProcessUpdateKeyStateEvent(a1, &gafAsyncKeyState, a1 + 196);
LABEL_5:
      *v2 = 0LL;
      v2[1] = 0LL;
      *(_DWORD *)(a1 + 388) &= ~1u;
      return;
    }
    v3 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v3 + 96) == 4 )
    {
      v5 = *(_OWORD **)(v3 + 32);
      v2 = (_OWORD *)(a1 + 196);
      v6 = 0;
      v7 = (_DWORD *)(a1 + 196);
      *v5 = gafAsyncKeyState;
      v8 = v5 + 4;
      v5[1] = xmmword_1C02498B0;
      v5[2] = unk_1C02498C0;
      v5[3] = xmmword_1C02498D0;
      do
      {
        ++v6;
        *v8++ |= *v7++;
      }
      while ( v6 < 8 );
      if ( qword_1C0250018 )
        qword_1C0250018(*(_QWORD *)(a1 + 96), 8256LL);
      goto LABEL_5;
    }
    v4 = (_OWORD *)Win32AllocPool(96LL, 0x736B7355u);
    if ( v4 )
    {
      CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v9);
      v2 = (_OWORD *)(a1 + 196);
      *v4 = gafAsyncKeyState;
      v4[1] = xmmword_1C02498B0;
      v4[2] = unk_1C02498C0;
      v4[3] = xmmword_1C02498D0;
      v4[4] = *(_OWORD *)(a1 + 196);
      v4[5] = *(_OWORD *)(a1 + 212);
      if ( !(unsigned int)ApiSetEditionPostUpdateKeyStateEvent(a1, v4) )
      {
        Win32FreePool((__int64)v4);
        return;
      }
      goto LABEL_5;
    }
  }
}
