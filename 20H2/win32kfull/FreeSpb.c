/*
 * XREFs of FreeSpb @ 0x1C0219E94
 * Callers:
 *     FreeAllSpbs @ 0x1C002A9A0 (FreeAllSpbs.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0219C50 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     RestoreSpb @ 0x1C021A0A0 (RestoreSpb.c)
 *     SpbCheckPwnd @ 0x1C021A354 (SpbCheckPwnd.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C0219B44 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C029E150 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(__int64 a1)
{
  char v1; // bp
  char v2; // si
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *i; // rdx
  struct tagWND **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  struct tagWND *v12; // rdx
  _QWORD *j; // rbx

  if ( !a1 )
    return;
  v1 = 0;
  v2 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(gpDispInfo + 40LL)) )
      v1 = 1;
    else
      GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 2LL, *(_QWORD *)(a1 + 56), 0LL);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      GreDeleteObject(v4);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
    GreDeleteObject(v5);
  v6 = (_QWORD *)(gpDispInfo + 32LL);
  for ( i = *(_QWORD **)(gpDispInfo + 32LL); i != (_QWORD *)a1; i = (_QWORD *)*i )
    v6 = i;
  v8 = (struct tagWND **)(a1 + 8);
  *v6 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 )
  {
    SetOrClrWF(0, v9, 0x80u, 1);
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
      HMAssignmentUnlock(a1 + 8);
    else
      v2 = 1;
  }
  if ( v1 )
  {
    v10 = *(_QWORD *)(a1 + 56);
  }
  else
  {
    if ( !v2 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
        Win32FreePool(v11);
      goto LABEL_29;
    }
    v10 = 0LL;
  }
  if ( v2 )
    v12 = *v8;
  else
    v12 = 0LL;
  PostSpbApc(*(struct _KAPC **)(a1 + 64), v12, v10);
  if ( v2 )
    *v8 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
LABEL_29:
  Win32FreePool(a1);
  if ( !*(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( j = *(_QWORD **)(gpDispInfo + 24LL); j; j = (_QWORD *)*j )
      GreGetBounds(j[1], 0LL, 2LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
