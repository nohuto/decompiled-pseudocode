/*
 * XREFs of ?FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748E2
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z @ 0x77D78 (-zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C (-AcquireLockShared@CPushLock@@QBEJXZ.c)
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 */

struct tagCURSOR *__thiscall FixupCursorForMonitor(_DWORD *this)
{
  _DWORD *v1; // ebx
  CCursorSizes *v2; // edi
  CPushLock *v3; // esi
  int v4; // edi
  int v5; // ecx
  struct tagCURSOR *v6; // ebx
  int v7; // esi
  signed int v8; // eax
  bool v9; // zf
  struct tagCURSOR *result; // eax
  struct tagCURSOR *v12; // [esp+10h] [ebp-4h]

  v1 = this;
  if ( !this )
    return (struct tagCURSOR *)v1;
  v2 = gpCursorSizes;
  v3 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  v4 = *(_DWORD *)v2;
  CPushLock::ReleaseLock(v3);
  v5 = v1[6];
  if ( !v5 )
    return (struct tagCURSOR *)v1;
  v6 = 0;
  v7 = 0x7FFFFFFF;
  do
  {
    v8 = abs32(*(_DWORD *)(v5 + 40) - v4);
    if ( v8 < v7 )
    {
      v6 = (struct tagCURSOR *)v5;
      v7 = v8;
    }
    v5 = *(_DWORD *)(v5 + 20);
  }
  while ( v5 );
  v12 = v6;
  v9 = v6 == 0;
  v1 = this;
  result = v12;
  if ( v9 )
    return (struct tagCURSOR *)v1;
  return result;
}
