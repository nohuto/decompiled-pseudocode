/*
 * XREFs of UnlinkWindow @ 0x1C008A2D8
 * Callers:
 *     SetWindowGroupBand @ 0x1C0024248 (SetWindowGroupBand.c)
 *     ImeSetTopmost @ 0x1C0033178 (ImeSetTopmost.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C008CD2C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     DwmAsyncChildUnlink @ 0x1C000E824 (DwmAsyncChildUnlink.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C010242C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C02239BC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

__int64 __fastcall UnlinkWindow(__int64 *a1, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 *v6; // rax
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
  char v20[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = -__CFSHR__(*(_DWORD *)(a1[5] + 232), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  if ( !v4 || !(unsigned int)IsWindowDesktopComposed(a1) || a1 == (__int64 *)GetDesktopWindow((__int64)a1) )
    goto LABEL_11;
  v5 = a1[3];
  v6 = 0LL;
  if ( v5 )
    v6 = *(__int64 **)(v5 + 104);
  if ( a1 == v6 || a2 == (__int64 *)gTermIO[1] )
  {
LABEL_11:
    v7 = 0;
  }
  else
  {
    v7 = 1;
    DirtyVisRgnTrackers(a1);
  }
  if ( (__int64 *)a2[14] == a1 )
  {
    v9 = a1[11];
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
    v8 = a1[12];
    if ( !v8 )
      goto LABEL_19;
    v19 = *(_OWORD *)LockPointer(v20, v8 + 88, a1[11]);
  }
  HMAssignmentLock(&v19);
LABEL_19:
  v11 = a1[11];
  if ( v11 )
  {
    v12 = a1[12];
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
    *(_QWORD *)(a1[5] + 72) = 0LL;
    HMAssignmentUnlock(a1 + 11);
  }
  *(_QWORD *)(a1[5] + 80) = 0LL;
  HMAssignmentUnlock(a1 + 12);
  *(_DWORD *)(a1[5] + 232) &= ~8u;
  result = a1[5];
  *(_DWORD *)(result + 232) &= ~0x10u;
  if ( v7 )
  {
    v18 = (void *)ReferenceDwmApiPort(v16);
    return DwmAsyncChildUnlink(v18, *a1, *a2);
  }
  return result;
}
