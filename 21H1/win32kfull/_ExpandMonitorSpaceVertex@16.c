/*
 * XREFs of _ExpandMonitorSpaceVertex@16 @ 0x15678
 * Callers:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     _GetMonitorWorkRectForDpi@8 @ 0x71FAA (_GetMonitorWorkRectForDpi@8.c)
 *     ExpandedMonitorSpace @ 0x14FC21 (ExpandedMonitorSpace.c)
 *     ?GetMonitorMenuRectForDpi@@YG?AUtagRECT@@PBUtagMONITOR@@G@Z @ 0x1B7032 (-GetMonitorMenuRectForDpi@@YG-AUtagRECT@@PBUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

INT __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, INT a, INT a4)
{
  INT v4; // ebx
  INT v5; // edi
  INT b; // [esp+8h] [ebp-4h]

  v4 = a2;
  b = a1;
  v5 = EngMulDiv(a, a1, a2);
  EngMulDiv(a4, b, v4);
  return v5;
}
