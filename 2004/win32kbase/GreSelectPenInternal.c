/*
 * XREFs of GreSelectPenInternal @ 0x1C00CF110
 * Callers:
 *     GreSelectPen @ 0x1C0140520 (GreSelectPen.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C001E2D0 (GreDCSelectPen.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgPentryFromPobj @ 0x1C0089850 (HmgPentryFromPobj.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectPenInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a3 || (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v7[0]) + 8) & 0xFFFFFFFE) != 0 )
      v4 = GreDCSelectPen(v7[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v4;
}
