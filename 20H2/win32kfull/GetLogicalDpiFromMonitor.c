/*
 * XREFs of GetLogicalDpiFromMonitor @ 0x1C01F6888
 * Callers:
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F6604 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserGetAltTabInfo @ 0x1C01F89A0 (NtUserGetAltTabInfo.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall GetLogicalDpiFromMonitor(__int64 a1, unsigned int a2)
{
  __int16 result; // ax

  result = (a2 >> 8) & 0x1FF;
  if ( !result )
  {
    if ( (a2 & 0xF) == 2 && (a2 & 0x20000000) != 0 )
      return *(_WORD *)(*(_QWORD *)(a1 + 40) + 68LL);
    else
      return *(_WORD *)(*(_QWORD *)(a1 + 40) + 64LL);
  }
  return result;
}
