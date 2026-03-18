/*
 * XREFs of UnlinkWindow @ 0x1C00CEAA8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ImeSetTopmost @ 0x1C00C5328 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C00C8B50 (SetWindowGroupBand.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00D204C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00CAD84 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildUnlink @ 0x1C00CC010 (DwmAsyncChildUnlink.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0222B2C (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

__int64 __fastcall UnlinkWindow(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  void *v18; // rax
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  if ( !v4 || !(unsigned int)IsWindowDesktopComposed(a1) || a1 == GetDesktopWindow(a1) )
    goto LABEL_11;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 104);
  if ( a1 == v6 || a2 == (__int64 *)gTermIO[1] )
  {
LABEL_11:
    v7 = 0;
  }
  else
  {
    v7 = 1;
    DirtyVisRgnTrackers((struct tagWND *)a1);
  }
  if ( a2[14] == a1 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 48);
    else
      v10 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v10;
    *(_QWORD *)&v19 = a2 + 14;
    *((_QWORD *)&v19 + 1) = v9;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 96);
    if ( !v8 )
      goto LABEL_19;
    v19 = *(_OWORD *)LockPointer(v20, v8 + 88, *(_QWORD *)(a1 + 88));
  }
  HMAssignmentLock(&v19);
LABEL_19:
  v11 = *(_QWORD *)(a1 + 88);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 96);
    v13 = v11 + 96;
    v14 = *(_QWORD *)(v11 + 40);
    if ( v12 )
      v15 = *(_QWORD *)(v12 + 48);
    else
      v15 = 0LL;
    *(_QWORD *)(v14 + 80) = v15;
    *((_QWORD *)&v19 + 1) = v12;
    *(_QWORD *)&v19 = v13;
    HMAssignmentLock(&v19);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) = 0LL;
    HMAssignmentUnlock(a1 + 88);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL) = 0LL;
  HMAssignmentUnlock(a1 + 96);
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) &= ~8u;
  result = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 232) &= ~0x10u;
  if ( v7 )
  {
    v18 = (void *)ReferenceDwmApiPort(v16);
    return DwmAsyncChildUnlink(v18, *(_QWORD *)a1, *a2);
  }
  return result;
}
