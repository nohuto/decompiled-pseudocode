/*
 * XREFs of ?xxxEnsureDpiCursorsForSysCur@@YGXI@Z @ 0xD9106
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YGXXZ @ 0xD8C20 (-xxxEnsureAllDpiCursors@@YGXXZ.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 * Callees:
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 */

void __fastcall xxxEnsureDpiCursorsForSysCur(int a1)
{
  int v1; // ecx
  int v2; // eax
  struct _UNICODE_STRING *v3; // [esp+0h] [ebp-8h]
  unsigned int v4; // [esp+4h] [ebp-4h]

  v1 = 134 * a1;
  v2 = 33024;
  if ( *(_DWORD *)(v1 * 4 + _gasyscur[0] + 12) && (_gasyscur[v1 + 3] & 0xFFFF0000) != 0 )
    v2 = 33040;
  xxxEnsureDpiCursors((struct tagCURSOR *)v2, v3, v4);
}
