/*
 * XREFs of ?xxxEnsureAllDpiCursors@@YGXXZ @ 0xD8C20
 * Callers:
 *     ?HandlePointerCursorSideOp@@YGXXZ @ 0xB0048 (-HandlePointerCursorSideOp@@YGXXZ.c)
 * Callees:
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YGXI@Z @ 0xD9106 (-xxxEnsureDpiCursorsForSysCur@@YGXI@Z.c)
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 */

void __stdcall xxxEnsureAllDpiCursors()
{
  int v0; // edi
  unsigned int i; // esi
  int v2; // ecx
  int *v3; // ebx
  unsigned int v4; // esi
  unsigned int j; // eax
  struct _UNICODE_STRING *v6; // [esp+0h] [ebp-18h]
  unsigned int v7; // [esp+4h] [ebp-14h]
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v8[2] = 0;
  v0 = 0;
  v8[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v8;
  v8[1] = 0;
  for ( i = 0; i < 0x27C8; i += 536 )
  {
    v2 = *(_DWORD *)(i + _gasyscur[0] + 4);
    if ( v2 )
    {
      ThreadLockExchange(v2, (int)v8);
      xxxEnsureDpiCursorsForSysCur((unsigned int)v6);
    }
    ++v0;
  }
  v3 = (int *)_gpKernelHandleTable;
  v4 = _gSharedInfo[1];
  for ( j = v4 + 16 * _giheLast; v4 <= j; j = _gSharedInfo[1] + 16 * _giheLast )
  {
    if ( *(_BYTE *)(v4 + 12) == 3 && (*(_DWORD *)(*v3 + 44) & 0x5240) == 0x4000 )
    {
      ThreadLockExchange(*v3, (int)v8);
      xxxEnsureDpiCursors(0, v6, v7);
    }
    v4 += 16;
    v3 += 3;
  }
  ThreadUnlock1();
}
