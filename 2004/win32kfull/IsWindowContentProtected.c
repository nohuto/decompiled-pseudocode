/*
 * XREFs of IsWindowContentProtected @ 0x1C0022F38
 * Callers:
 *     ProtectedContentAccessCheck @ 0x1C0022DAC (ProtectedContentAccessCheck.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     CreateSprite @ 0x1C0028D80 (CreateSprite.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     _VisrgnFromWindow @ 0x1C0113708 (_VisrgnFromWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
