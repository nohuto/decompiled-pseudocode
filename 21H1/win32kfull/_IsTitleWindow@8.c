/*
 * XREFs of _IsTitleWindow@8 @ 0xA3D1E
 * Callers:
 *     _GetInheritedMonitor@4 @ 0x35826 (_GetInheritedMonitor@4.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 */

BOOL __fastcall IsTitleWindow(int a1, int a2)
{
  _BYTE *v2; // esi

  v2 = *(_BYTE **)(a1 + 20);
  return ((v2[23] & 0x10) != 0 || !a2)
      && ((v2[8] & 8) != 0 || (v2[22] & 3) != 0)
      && !ERECTL::bWrapped((ERECTL *)(v2 + 68))
      && ((v2[18] & 8) == 0 || (v2[19] & 0x20) != 0);
}
