/*
 * XREFs of ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     _zzzInputFocusReceivedWindowEvent@4 @ 0x177FE (_zzzInputFocusReceivedWindowEvent@4.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _DisassociateShellFrameAppThreads@4 @ 0x8AFA4 (_DisassociateShellFrameAppThreads@4.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     _FindShellFrameThreadFromAssociation@4 @ 0x141D67 (_FindShellFrameThreadFromAssociation@4.c)
 */

void __thiscall TryAttachShellFrame(int *this)
{
  struct _LIST_ENTRY *v1; // esi
  struct _LIST_ENTRY *Blink; // ebx
  struct _LIST_ENTRY *ShellFrameThreadFromAssociation; // eax
  struct _LIST_ENTRY *Flink; // eax
  int v5; // edx
  int v6; // ecx
  struct _LIST_ENTRY **p_Blink; // edi
  struct _LIST_ENTRY *v8; // eax
  struct _LIST_ENTRY *v9; // edx
  int v10; // ecx
  struct _LIST_ENTRY *v11; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  LONG_PTR v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // edi
  struct _LIST_ENTRY *v18; // ecx
  int v19; // edi
  unsigned int v20; // eax
  int v21; // edx
  int v22; // eax
  LONG_PTR v24; // [esp+14h] [ebp-44h]
  int v25; // [esp+20h] [ebp-38h]
  struct _LIST_ENTRY *v26; // [esp+24h] [ebp-34h]
  _DWORD v27[3]; // [esp+28h] [ebp-30h] BYREF
  LONG_PTR v28[3]; // [esp+34h] [ebp-24h] BYREF
  int v29[3]; // [esp+40h] [ebp-18h] BYREF
  int v30[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v1 = (struct _LIST_ENTRY *)this;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v29, this[59]);
  Blink = v1[29].Blink;
  if ( Blink[2].Blink < (struct _LIST_ENTRY *)0x14 )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(v1);
    v24 = (LONG_PTR)ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( ((int)ShellFrameThreadFromAssociation[33].Flink & 1) == 0 )
      {
        Flink = ShellFrameThreadFromAssociation[46].Flink;
        if ( !Flink || ((int)Flink[23].Flink & 0x100000) == 0 )
        {
          v26 = v1[86].Flink;
          v27[2] = 0;
          v28[0] = 0;
          v1[86].Flink = (struct _LIST_ENTRY *)((unsigned int)v26 & 0xFFE7FFFF | 0x100000);
          v28[1] = 0;
          v28[2] = 0;
          DisassociateShellFrameAppThreads();
          CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v30, (int)Blink);
          p_Blink = &Blink[1].Blink;
          v8 = Blink[1].Blink;
          if ( v8 )
          {
            do
            {
              if ( !IsMiPMouseMessage(v8[1].Blink) )
                break;
              v9 = *p_Blink;
              if ( *p_Blink == Blink[5].Flink )
                Blink[5].Flink = 0;
              v10 = (int)Blink[5].Blink;
              if ( v9 == (struct _LIST_ENTRY *)v10 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
                {
                  LOBYTE(v9) = 5;
                  WPP_RECORDER_SF_qq(
                    v10,
                    (int)v9,
                    0x12u,
                    13,
                    (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                    (char)Blink,
                    (char)Blink[5].Blink);
                  v9 = Blink[1].Blink;
                }
                Blink[5].Blink = 0;
              }
              DelQEntry(&Blink[1].Blink, v9, 1);
              v8 = *p_Blink;
            }
            while ( *p_Blink );
            v1 = (struct _LIST_ENTRY *)this;
          }
          if ( Blink[4].Blink == v1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v5) = 4;
              WPP_RECORDER_SF_qqq(
                v6,
                v5,
                0x12u,
                14,
                (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                (char)Blink,
                (char)v1,
                (char)Blink[4].Blink);
            }
            Blink[4].Blink = 0;
          }
          v11 = Blink[7].Blink;
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v27[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v27;
          v27[1] = v11;
          if ( v11 )
            HMLockObject(v11);
          v14 = v24;
          LockW32Thread(v24, v28);
          v15 = zzzAttachThreadInput((int)v1, v24, 32769);
          v16 = MEMORY[0xFFDF0004];
          v17 = v15;
          v25 = v15;
          if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
          {
            v19 = MEMORY[0xFFDF0324];
            if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
            {
              v20 = MEMORY[0xFFDF0320];
            }
            else
            {
              do
              {
                _mm_pause();
                v19 = MEMORY[0xFFDF0324];
                v20 = MEMORY[0xFFDF0320];
              }
              while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
              v1 = (struct _LIST_ENTRY *)this;
              v14 = v24;
              v16 = MEMORY[0xFFDF0004];
            }
            v18 = (struct _LIST_ENTRY *)(MEMORY[0xFFDF0004] * (v19 << 8)
                                       + (((unsigned int)v16 * (unsigned __int64)v20) >> 24));
            v17 = v25;
          }
          else
          {
            v18 = (struct _LIST_ENTRY *)(((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24);
          }
          v1[29].Blink[43].Blink = v18;
          ThreadUnlock1();
          HMAssignmentLock(&v1[29].Blink[7].Blink, v21);
          v22 = *(_DWORD *)(v14 + 796);
          if ( v22 )
            _PostMessage(v22, 840, 2, v17);
          if ( (struct _LIST_ENTRY *)_gpqForeground == v1[29].Blink )
          {
            if ( *(_DWORD *)(_gpqForeground + 60) )
              zzzInputFocusReceivedWindowEvent((void *)2);
          }
          PopAndFreeW32ThreadLock((int)v28);
          v1[86].Flink = (struct _LIST_ENTRY *)((int)v1[86].Flink ^ ((unsigned int)v26 ^ (unsigned int)v1[86].Flink) & 0x100000);
        }
      }
    }
  }
}
