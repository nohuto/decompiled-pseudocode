/*
 * XREFs of ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE
 * Callers:
 *     ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876 (-xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z.c)
 *     _DestroyClassSmIcon@4 @ 0x47A0C (_DestroyClassSmIcon@4.c)
 *     _DestroyWindowSmIcon@4 @ 0x71B5C (_DestroyWindowSmIcon@4.c)
 *     _NtUserDestroyCursor@8 @ 0x7857C (_NtUserDestroyCursor@8.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     _DestroyUnlockedCursor@4 @ 0x7B53C (_DestroyUnlockedCursor@4.c)
 *     ?_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z @ 0xC4B12 (-_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z.c)
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z @ 0xD9236 (-zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z.c)
 *     ?DestroyAniIcon@@YGHPAUtagACON@@@Z @ 0xE6B34 (-DestroyAniIcon@@YGHPAUtagACON@@@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YGXI@Z @ 0x14318C (-_CleanupUnneededSystemCursorSizes@@YGXI@Z.c)
 *     ?_SetCursorContents@@YG_NPAUtagCURSOR@@0@Z @ 0x15635E (-_SetCursorContents@@YG_NPAUtagCURSOR@@0@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     ?CleanupCursorObject@@YGXPAUtagCURSOR@@@Z @ 0x787CC (-CleanupCursorObject@@YGXPAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YGXPAUtagCURSOR@@@Z @ 0x7B7DE (-UnlinkCursor@@YGXPAUtagCURSOR@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

char __fastcall _DestroyCursor(_DWORD *a1, int a2)
{
  int v3; // ebx
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  unsigned int v6; // esi
  int v7; // ecx
  int v9; // eax
  _DWORD *v10; // esi
  BOOL v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  struct tagCURSOR *v15; // [esp+0h] [ebp-28h]
  struct tagCURSOR *v16; // [esp+0h] [ebp-28h]
  unsigned int v17; // [esp+4h] [ebp-24h]
  char v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  _DWORD *v22; // [esp+24h] [ebp-4h]

  v3 = 0;
  v19 = 1;
  v22 = (_DWORD *)a1[6];
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  if ( (ThreadWin32Thread[172] & 0x8000000) != 0 )
    ThreadWin32Thread = (_DWORD *)ThreadWin32Thread[212];
  v6 = 0;
  v21 = ThreadWin32Thread[58];
  v20 = a1[3];
  do
  {
    if ( *(_DWORD **)(v6 + _gcachedCaptions) == a1 && !HMAssignmentUnlock(v6 + _gcachedCaptions) )
      return 1;
    v6 += 8;
  }
  while ( v6 < 0x28 );
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v7 = v20;
      v9 = a1[11];
      if ( !v20 )
      {
        v3 = 1;
        v19 = v9 & 1;
        goto LABEL_26;
      }
      if ( (v9 & 0x84) != 0 )
        goto LABEL_17;
      if ( v20 != v21 )
      {
        UserSetLastError(1435);
LABEL_24:
        v3 = 1;
        v19 = 0;
        goto LABEL_26;
      }
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_23;
      v7 = v20;
    }
    if ( !v7 )
    {
LABEL_17:
      v3 = 1;
      goto LABEL_26;
    }
  }
  else
  {
    v10 = (_DWORD *)(_HMPkheFromObject(a1) + 4);
    if ( *v10 == PsGetProcessWin32Process(_gpepCSRSS) && PsGetCurrentProcess() == _gpepCSRSS )
      FixupGlobalCursor(a1, v21);
  }
LABEL_23:
  if ( !HMMarkObjectDestroy(a1) )
    goto LABEL_24;
  a1[11] |= 0x2000u;
LABEL_26:
  v11 = v22 != a1 && (*(_DWORD *)(a1[6] + 44) & 0x2000) != 0;
  if ( v3 )
  {
    if ( v11 )
    {
      v12 = a1;
      do
      {
        v12[6] = a1;
        v12 = (_DWORD *)v12[5];
      }
      while ( v12 );
    }
  }
  else
  {
    v13 = a1[6];
    if ( gpcurLogCurrent == (struct tagCURSOR *)v13 )
    {
      gpcurLogCurrent = 0;
      gpcurPhysCurrent = 0;
    }
    if ( v22 == a1 || v11 )
    {
      if ( a1[5] )
      {
        a1[5] = 0;
        _DestroyCursor(v15, v17);
      }
    }
    else
    {
      if ( v13 )
      {
        do
        {
          v14 = *(_DWORD **)(v13 + 20);
          if ( v14 == a1 )
            break;
          v13 = *(_DWORD *)(v13 + 20);
        }
        while ( v14 );
        if ( v13 )
          *(_DWORD *)(v13 + 20) = a1[5];
      }
      a1[5] = 0;
      a1[6] = a1;
    }
    CleanupCursorObject(v15);
    if ( (a1[11] & 0x100) != 0 )
      UnlinkCursor(v16);
    HMFreeObject(a1);
  }
  return v19;
}
