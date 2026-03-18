/*
 * XREFs of _xxxInvalidateRect@12 @ 0x1965AB
 * Callers:
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 *     ?xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z @ 0x1A2F8E (-xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 */

int __fastcall xxxInvalidateRect(int a1, _DWORD *a2, int a3)
{
  if ( a1 )
    return xxxRedrawWindow(a1, a2, 0, 4 * (a3 != 0) + 1);
  else
    return xxxRedrawWindow(0, 0, 0, 66181);
}
