/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4
 * Callers:
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0008300 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00309B0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C004308C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C004320C (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     NtUserDestroyCursor @ 0x1C0064850 (NtUserDestroyCursor.c)
 *     DestroyWindowSmIcon @ 0x1C008E61C (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C008EFE0 (DestroyClassSmIcon.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C011C69C (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C0122420 (DestroyUnlockedCursor.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01D4814 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EB8E0 (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00AE114 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00AF918 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0112CE0 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

char __fastcall _DestroyCursor(struct tagCURSOR *a1, unsigned int a2)
{
  int v2; // esi
  int v4; // r14d
  char v5; // bp
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v7; // r8
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct tagCURSOR *v17; // rax
  struct tagCURSOR *v18; // rax
  __int64 v19; // rcx
  struct tagCURSOR *v20; // rax
  struct tagCURSOR *v21; // rcx
  struct tagCURSOR *v23; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v23 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v4 = 0;
  v5 = 1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread((__int64)a1);
  v8 = *((_QWORD *)a1 + 3);
  v9 = 0;
  v10 = 0LL;
  v11 = *((_QWORD *)CurrentLogicalCursorThread + 52);
  while ( *(struct tagCURSOR **)(v10 + gcachedCaptions[0]) != a1 || HMAssignmentUnlock(&gcachedCaptions[2 * v9]) )
  {
    ++v9;
    v10 += 16LL;
    if ( v9 >= 5 )
    {
      switch ( a2 )
      {
        case 0u:
          v13 = _HMPkheFromObject(a1);
          if ( *(_QWORD *)(v13 + 8) == PsGetProcessWin32Process(gpepCSRSS)
            && PsGetCurrentProcess(v15, v14, v16) == gpepCSRSS )
          {
            FixupGlobalCursor(a1, v11);
          }
          goto LABEL_19;
        case 1u:
          v12 = *((_DWORD *)a1 + 20);
          if ( v8 )
          {
            if ( (v12 & 0x84) == 0 )
            {
              if ( v8 != v11 )
              {
                UserSetLastError(1435LL, 1LL, v7);
                goto LABEL_20;
              }
LABEL_8:
              if ( v8 )
                goto LABEL_19;
            }
            v2 = 1;
          }
          else
          {
            v2 = 1;
            v5 = v12 & 1;
          }
          break;
        case 2u:
          goto LABEL_8;
        default:
LABEL_19:
          if ( (unsigned int)HMMarkObjectDestroy(a1) )
          {
            *((_DWORD *)a1 + 20) |= 0x2000u;
          }
          else
          {
LABEL_20:
            v2 = 1;
            v5 = 0;
          }
          break;
      }
      v17 = v23;
      if ( v23 != a1 )
      {
        v17 = v23;
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
          v4 = 1;
      }
      if ( v2 )
      {
        if ( v4 )
        {
          v18 = a1;
          do
          {
            *((_QWORD *)v18 + 6) = a1;
            v18 = (struct tagCURSOR *)*((_QWORD *)v18 + 5);
          }
          while ( v18 );
        }
      }
      else
      {
        v19 = *((_QWORD *)a1 + 6);
        if ( gpcurLogCurrent == (struct tagCURSOR *)v19 )
        {
          gpcurLogCurrent = 0LL;
          gpcurPhysCurrent = 0LL;
        }
        if ( v17 == a1 || v4 )
        {
          v21 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
          if ( v21 )
          {
            *((_QWORD *)a1 + 5) = 0LL;
            _DestroyCursor(v21, a2);
          }
        }
        else
        {
          if ( v19 )
          {
            do
            {
              v20 = *(struct tagCURSOR **)(v19 + 40);
              if ( v20 == a1 )
                break;
              v19 = *(_QWORD *)(v19 + 40);
            }
            while ( v20 );
            if ( v19 )
              *(_QWORD *)(v19 + 40) = *((_QWORD *)a1 + 5);
          }
          *((_QWORD *)a1 + 5) = 0LL;
          *((_QWORD *)a1 + 6) = a1;
        }
        CleanupCursorObject(a1);
        if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 )
          UnlinkCursor(a1);
        HMFreeObject(a1);
      }
      return v5;
    }
  }
  return v5;
}
