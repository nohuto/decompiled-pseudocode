/*
 * XREFs of IsWindowContentProtected @ 0x1C00C9FF8
 * Callers:
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0090950 (CreateOrGetRedirectionBitmap.c)
 *     CreateSprite @ 0x1C00C685C (CreateSprite.c)
 *     ProtectedContentAccessCheck @ 0x1C00C9EC4 (ProtectedContentAccessCheck.c)
 *     _VisrgnFromWindow @ 0x1C0114638 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
