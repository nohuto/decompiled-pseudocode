/*
 * XREFs of xxxCreateCaret @ 0x1C005DC34
 * Callers:
 *     NtUserCreateCaret @ 0x1C005DB50 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     zzzInternalDestroyCaret @ 0x1C005FD5C (zzzInternalDestroyCaret.c)
 *     GreExtGetObjectW @ 0x1C0065958 (GreExtGetObjectW.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 a1, HBRUSH a2, int a3, int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int ThreadId; // eax
  int v11; // ecx
  int v12; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != v8 || (unsigned int)IsWindowBeingDestroyed(a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 296) )
  {
    zzzInternalDestroyCaret();
    v8 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v14[1] = a1;
  v14[0] = v8 + 296;
  HMAssignmentLock(v14);
  v9 = *(_DWORD *)(v8 + 304) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 308) = 1;
  *(_DWORD *)(v8 + 304) = v9 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 336) = a2;
  *(_DWORD *)(v8 + 352) = ThreadId;
  v11 = 1;
  v12 = 1;
  if ( a4 )
    v12 = a4;
  if ( a3 )
    v11 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2);
    v12 = DWORD2(v15);
    v11 = DWORD1(v15);
  }
  *(_QWORD *)(v8 + 344) = 0LL;
  *(_DWORD *)(v8 + 324) = v12;
  *(_DWORD *)(v8 + 328) = v11;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, 0);
  return 1LL;
}
