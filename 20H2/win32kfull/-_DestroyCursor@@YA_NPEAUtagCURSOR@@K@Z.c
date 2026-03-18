/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C
 * Callers:
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C00082F0 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0079EF0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C007A070 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     NtUserDestroyCursor @ 0x1C0092A20 (NtUserDestroyCursor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     DestroyWindowSmIcon @ 0x1C00D39BC (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C00D4128 (DestroyClassSmIcon.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C011D70C (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C0123770 (DestroyUnlockedCursor.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01D3A04 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EAC70 (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00935DC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00937A0 (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0093B5C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x1C0093D7C (-RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0094CA4 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall _DestroyCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  struct tagCURSOR *v5; // r12
  int v6; // r14d
  unsigned int v7; // r13d
  char v9; // bp
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagCURSOR *v19; // rax
  __int64 v20; // rcx
  struct tagCURSOR *v21; // rax
  struct tagCURSOR *v22; // rcx

  v4 = 0;
  v5 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v6 = 0;
  v7 = a2;
  v9 = 1;
  if ( gbInDestroyHandleTableObjects )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    DestroyEmptyCursorObject(a1);
    return 1;
  }
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v12 = *((_QWORD *)a1 + 3);
  v13 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  if ( (unsigned int)RemoveCursorFromCaptionIconCache(a1) )
    return 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v14 = *((_DWORD *)a1 + 20);
      if ( !v12 )
      {
        v9 = v14 & 1;
        v4 = 1;
        goto LABEL_22;
      }
      if ( (v14 & 0x84) != 0 )
        goto LABEL_13;
      if ( v12 != v13 )
      {
        UserSetLastError(1435LL);
LABEL_20:
        v4 = 1;
        v9 = 0;
        goto LABEL_22;
      }
    }
    else if ( v7 != 2 )
    {
      goto LABEL_19;
    }
    if ( !v12 )
    {
LABEL_13:
      v4 = 1;
      goto LABEL_22;
    }
  }
  else
  {
    v15 = _HMPkheFromObject(a1);
    if ( *(_QWORD *)(v15 + 8) == PsGetProcessWin32Process(gpepCSRSS) && PsGetCurrentProcess(v17, v16, v18) == gpepCSRSS )
      FixupGlobalCursor(a1, v13);
  }
LABEL_19:
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    goto LABEL_20;
  *((_DWORD *)a1 + 20) |= 0x2000u;
LABEL_22:
  if ( v5 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v6 = 1;
  if ( v4 )
  {
    if ( v6 )
    {
      v19 = a1;
      do
      {
        *((_QWORD *)v19 + 6) = a1;
        v19 = (struct tagCURSOR *)*((_QWORD *)v19 + 5);
      }
      while ( v19 );
    }
  }
  else
  {
    v20 = *((_QWORD *)a1 + 6);
    if ( gpcurLogCurrent == (struct tagCURSOR *)v20 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
    }
    if ( v5 == a1 || v6 )
    {
      v22 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v22 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        _DestroyCursor(v22, v7);
      }
    }
    else
    {
      if ( v20 )
      {
        do
        {
          v21 = *(struct tagCURSOR **)(v20 + 40);
          if ( v21 == a1 )
            break;
          v20 = *(_QWORD *)(v20 + 40);
        }
        while ( v21 );
        if ( v20 )
          *(_QWORD *)(v20 + 40) = *((_QWORD *)a1 + 5);
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    CleanupCursorObject(a1);
    DestroyEmptyCursorObject(a1);
  }
  return v9;
}
