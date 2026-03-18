/*
 * XREFs of _NtGdiCloseFigure@4 @ 0x2115FD
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 */

int __stdcall NtGdiCloseFigure(HDC a1)
{
  int v1; // esi
  _BYTE v3[8]; // [esp+4h] [ebp-50h] BYREF
  int v4; // [esp+Ch] [ebp-48h]
  DC *v5[3]; // [esp+48h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( (*((_BYTE *)v5[0] + 172) & 1) != 0 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v3, v5);
      if ( v4 && EPATHOBJ::bCloseFigure((EPATHOBJ *)v3) )
        v1 = 1;
      else
        EngSetLastError(8u);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v3);
    }
    else
    {
      EngSetLastError(0x3EBu);
    }
  }
  else
  {
    EngSetLastError(0x57u);
  }
  if ( v5[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v1;
}
