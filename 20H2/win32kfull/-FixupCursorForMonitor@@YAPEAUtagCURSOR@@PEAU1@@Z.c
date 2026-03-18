/*
 * XREFs of ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00CCFE4
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002B0C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00CC630 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010347C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

struct tagCURSOR *__fastcall FixupCursorForMonitor(struct tagCURSOR *a1)
{
  CCursorSizes *v2; // r14
  struct tagCURSOR *v3; // rsi
  int v4; // ebp
  CPushLock *v5; // rbx
  int v6; // r14d
  __int64 v7; // r8
  int v8; // eax
  struct tagCURSOR *v9; // rcx
  signed int v10; // eax
  struct tagCURSOR *result; // rax

  if ( !a1 )
    return a1;
  v2 = gpCursorSizes;
  v3 = 0LL;
  v4 = 0x7FFFFFFF;
  v5 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v5 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v5)(v5) )
      CPushLock::ReleaseLock(v5);
  }
  v6 = *(_DWORD *)v2;
  CPushLock::ReleaseLock(v5);
  v7 = *((_QWORD *)a1 + 6);
  if ( !v7 )
    return a1;
  do
  {
    v8 = *(_DWORD *)(v7 + 76);
    v9 = (struct tagCURSOR *)v7;
    v7 = *(_QWORD *)(v7 + 40);
    v10 = abs32(v8 - v6);
    if ( v10 >= v4 )
    {
      v9 = v3;
      v10 = v4;
    }
    v3 = v9;
    v4 = v10;
  }
  while ( v7 );
  result = v9;
  if ( !v9 )
    return a1;
  return result;
}
