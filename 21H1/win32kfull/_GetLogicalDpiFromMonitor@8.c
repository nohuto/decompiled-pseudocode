/*
 * XREFs of _GetLogicalDpiFromMonitor@8 @ 0x15FA34
 * Callers:
 *     ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC (-TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z.c)
 *     _NtUserGetAltTabInfo@24 @ 0x16194A (_NtUserGetAltTabInfo@24.c)
 * Callees:
 *     <none>
 */

int __fastcall GetLogicalDpiFromMonitor(int a1, unsigned int a2)
{
  int result; // eax

  result = (a2 >> 8) & 0x1FF;
  if ( !result )
  {
    if ( (a2 & 0xF) == 2 && (a2 & 0x20000000) != 0 )
      return *(unsigned __int16 *)(*(_DWORD *)(a1 + 20) + 56);
    else
      return *(unsigned __int16 *)(*(_DWORD *)(a1 + 20) + 52);
  }
  return result;
}
