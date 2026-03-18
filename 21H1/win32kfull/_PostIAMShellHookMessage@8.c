/*
 * XREFs of _PostIAMShellHookMessage@8 @ 0x145C2C
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 */

void __fastcall PostIAMShellHookMessage(int a1, int a2)
{
  PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), a1, a2);
}
