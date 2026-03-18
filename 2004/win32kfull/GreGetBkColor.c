/*
 * XREFs of GreGetBkColor @ 0x1C014A7AC
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014A314 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetBkColor(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v4 = 0;
  v5 = 0;
  v1 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v3, a1);
  if ( v3 )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 180LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)&v3);
  }
  return v1;
}
