/*
 * XREFs of GreSelectBrushInternal @ 0x1C00CE850
 * Callers:
 *     GreSelectBrush @ 0x1C013E1B0 (GreSelectBrush.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgPentryFromPobj @ 0x1C00442F0 (HmgPentryFromPobj.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDCSelectBrush @ 0x1C0082190 (GreDCSelectBrush.c)
 */

__int64 __fastcall GreSelectBrushInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a3 || (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v7[0]) + 8) & 0xFFFFFFFE) != 0 )
      v4 = GreDCSelectBrush(v7[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v4;
}
