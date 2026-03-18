/*
 * XREFs of _TryDetachShellFrame@16 @ 0x14E7E3
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 * Callees:
 *     _IsDebuggerAttached@4 @ 0x197BE (_IsDebuggerAttached@4.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     _AssociateShellFrameAppThreads@8 @ 0x141C0E (_AssociateShellFrameAppThreads@8.c)
 *     _FindShellFrameThreadFromAssociation@4 @ 0x141D67 (_FindShellFrameThreadFromAssociation@4.c)
 */

struct _LIST_ENTRY *__fastcall TryDetachShellFrame(int a1, struct _LIST_ENTRY *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  struct _LIST_ENTRY *result; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // eax
  int v11; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // esi
  int v15; // edi
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  signed int v19; // [esp+10h] [ebp-38h]
  unsigned int v22; // [esp+20h] [ebp-28h] BYREF
  _DWORD v23[3]; // [esp+24h] [ebp-24h] BYREF
  LONG_PTR v24[3]; // [esp+30h] [ebp-18h] BYREF
  _DWORD v25[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v23[2] = 0;
  v4 = (int)a2;
  v19 = _gdwMDAQThreshold;
  v5 = a1;
  result = 0;
  memset(v24, 0, sizeof(v24));
  if ( ((int)a2[86].Flink & 0x100000) == 0 )
  {
    result = FindShellFrameThreadFromAssociation(a2);
    if ( !result )
    {
      result = (struct _LIST_ENTRY *)IsDebuggerAttached(*(_DWORD **)(v5 + 232));
      if ( !result )
      {
        result = (struct _LIST_ENTRY *)IsDebuggerAttached(*(_DWORD **)(v4 + 232));
        if ( !result )
        {
          if ( !a3 )
            v19 = _gdwMDAQThreshold / 0xAu;
          if ( a4 )
            goto LABEL_28;
          v7 = MEMORY[0xFFDF0004];
          if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
          {
            v9 = MEMORY[0xFFDF0324];
            v22 = MEMORY[0xFFDF0320];
            if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
            {
              v10 = v22;
            }
            else
            {
              do
              {
                _mm_pause();
                v9 = MEMORY[0xFFDF0324];
                v10 = MEMORY[0xFFDF0320];
              }
              while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
              v4 = (int)a2;
              v5 = a1;
              v7 = MEMORY[0xFFDF0004];
            }
            v8 = MEMORY[0xFFDF0004] * (v9 << 8) + (((unsigned int)v7 * (unsigned __int64)v10) >> 24);
          }
          else
          {
            v8 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
          }
          result = *(struct _LIST_ENTRY **)(v5 + 236);
          if ( (signed int)(v8 - (unsigned int)result[43].Blink) >= v19 )
          {
LABEL_28:
            result = (struct _LIST_ENTRY *)AssociateShellFrameAppThreads(v5, v4);
            if ( result )
            {
              v11 = *(_DWORD *)(*(_DWORD *)(v5 + 236) + 60);
              CurrentThread = KeGetCurrentThread();
              ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
              v23[0] = *(_DWORD *)(ThreadWin32Thread + 228);
              *(_DWORD *)(ThreadWin32Thread + 228) = v23;
              v23[1] = v11;
              if ( v11 )
                HMLockObject(v11);
              LockW32Thread(v4, v24);
              CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
                v25,
                *(_DWORD *)(v5 + 236));
              v14 = zzzAttachThreadInput(v5, v4, 0x4000);
              v15 = ThreadUnlock1();
              if ( v14 >= 0 )
              {
                *(_DWORD *)(v4 + 688) |= (unsigned int)&loc_80000;
                HMAssignmentLock(*(_DWORD *)(*(_DWORD *)(a1 + 236) + 64), *(_DWORD *)(a1 + 236) + 60);
                if ( v15 )
                {
                  v17 = *(_DWORD *)(v4 + 236);
                  if ( *(_DWORD *)(*(_DWORD *)(v15 + 8) + 236) == v17 )
                    HMAssignmentLock(v17, v16);
                }
                v18 = *(_DWORD *)(a1 + 796);
                if ( v18 )
                  _PostMessage(v18, 840, 1, 0);
              }
              return (struct _LIST_ENTRY *)PopAndFreeW32ThreadLock((int)&v22);
            }
          }
        }
      }
    }
  }
  return result;
}
