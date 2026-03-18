/*
 * XREFs of ?PtInsideWindowFrameBounds@@YG_NABUtagPOINT@@PBUtagWND@@@Z @ 0x19E3F7
 * Callers:
 *     ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53 (-xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _PhysicalToLogicalPointForWindow@16 @ 0x151670 (_PhysicalToLogicalPointForWindow@16.c)
 *     ?GetWindowFrameBounds@@YG?AUtagRECT@@PBUtagWND@@@Z @ 0x19E3CD (-GetWindowFrameBounds@@YG-AUtagRECT@@PBUtagWND@@@Z.c)
 */

bool __fastcall PtInsideWindowFrameBounds(int *a1, int a2)
{
  const struct tagWND *v4; // [esp+0h] [ebp-34h]
  struct tagRECT v5; // [esp+8h] [ebp-2Ch] BYREF
  struct tagRECT v6; // [esp+18h] [ebp-1Ch] BYREF
  int v7; // [esp+28h] [ebp-Ch] BYREF
  int v8; // [esp+2Ch] [ebp-8h]

  v7 = 0;
  v8 = 0;
  PhysicalToLogicalPointForWindow(a2, &v7, *a1, a1[1]);
  v6 = *GetWindowFrameBounds(a2, &v5, v4);
  return PtInRect(&v6, v7, v8);
}
