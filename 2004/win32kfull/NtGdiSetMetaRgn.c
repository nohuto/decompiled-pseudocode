/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C00FC210
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078350 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C00FC270 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edi
  DC *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v4[0] = 0LL;
  v4[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    v2 = DC::iSetMetaRgn(v4[0]);
    if ( v4[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
  }
  return v1;
}
