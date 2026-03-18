/*
 * XREFs of ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C007B5D0
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00295C8 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C0079EA0 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0079EF0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 */

void __fastcall xxxEnsureAllDpiCursors(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct tagCURSOR **v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 i; // rcx
  struct tagCURSOR *v9; // rdi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[2] = 0LL;
  v3 = 0;
  v10[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v10;
  v10[1] = 0LL;
  v4 = 0LL;
  do
  {
    v5 = *(_QWORD *)(v4 + gasyscur[0] + 8);
    if ( v5 )
    {
      ThreadLockExchange(v5, v10);
      xxxEnsureDpiCursorsForSysCur(v3);
    }
    ++v3;
    v4 += 552LL;
  }
  while ( v3 < 0x13 );
  v6 = (struct tagCURSOR **)gpKernelHandleTable;
  v7 = gSharedInfo[1];
  for ( i = v7 + 32LL * giheLast; v7 <= i; i = gSharedInfo[1] + 32LL * giheLast )
  {
    if ( *(_BYTE *)(v7 + 24) == 3 )
    {
      v9 = *v6;
      if ( (*((_DWORD *)*v6 + 20) & 0x5240) == 0x4000 )
      {
        ThreadLockExchange(*v6, v10);
        xxxEnsureDpiCursors(v9, 0LL, 0);
      }
    }
    v7 += 32LL;
    v6 += 3;
  }
  ThreadUnlock1(i, a2, a3);
}
