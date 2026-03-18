/*
 * XREFs of ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1800F18AC
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SAFE_DELETE<CShape>(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (**v2)(v2, 1LL);
    *a1 = 0LL;
  }
  return result;
}
