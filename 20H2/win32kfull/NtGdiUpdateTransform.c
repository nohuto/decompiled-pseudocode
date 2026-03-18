/*
 * XREFs of NtGdiUpdateTransform @ 0x1C02B6130
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiUpdateTransform(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v4 = 0;
  v5 = 0;
  v1 = 1;
  XDCOBJ::vLock((XDCOBJ *)&v3, a1);
  if ( v3 )
  {
    DC::vUpdateWtoDXform(v3);
    if ( v3 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v3);
  }
  else
  {
    return 0;
  }
  return v1;
}
