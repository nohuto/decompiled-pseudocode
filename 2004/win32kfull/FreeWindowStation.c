/*
 * XREFs of FreeWindowStation @ 0x1C00568C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0056A98 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0056AE0 (xxxEmptyClipboard.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // eax
  struct _RTL_ATOM_TABLE *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v17 = 0LL;
  *(_DWORD *)(v1 + 64) |= 0x10u;
  v2 = *(_QWORD *)(v1 + 208);
  v3 = *(_DWORD *)(v1 + 64);
  if ( v2 )
  {
    Win32FreePool(v2);
    v3 = *(_DWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = 0LL;
    *(_DWORD *)(v1 + 200) = 0;
  }
  if ( (v3 & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent(gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  v4 = *(struct _RTL_ATOM_TABLE **)(v1 + 168);
  if ( v4 )
    RtlDestroyAtomTable(v4);
  *(_QWORD *)(v1 + 80) = W32GetThreadWin32Thread(KeGetCurrentThread());
  HMAssignmentUnlock(v1 + 112);
  HMAssignmentUnlock(v1 + 104);
  HMAssignmentUnlock(v1 + 96);
  xxxEmptyClipboard((PVOID)v1);
  if ( (*(_DWORD *)(v1 + 64) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 152) )
  {
    v17 = *(_QWORD *)(v1 + 152);
    *(_QWORD *)(v1 + 152) = *(_QWORD *)(v17 + 240);
    *(_QWORD *)(v17 + 240) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v17 + 40) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v17);
  }
  if ( (*(_DWORD *)(v1 + 64) & 4) == 0 )
  {
    v10 = (_QWORD *)(v1 + 72);
    v11 = *(_QWORD *)(v1 + 72);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      while ( v11 != v12 )
      {
        v13 = *v10;
        v14 = *(_QWORD *)(*v10 + 16LL);
        HMMarkObjectDestroy(*v10);
        *(_DWORD *)(v13 + 32) |= 0x20000000u;
        v15[0] = v1 + 72;
        v15[1] = v14;
        HMAssignmentLock(v15);
        v11 = *v10;
      }
      HMMarkObjectDestroy(v11);
      *(_DWORD *)(v11 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 72);
      gdwHydraHint |= 0x10000u;
    }
  }
  v5 = *(_QWORD *)(v1 + 192);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v7, v6, v8);
  return 0LL;
}
