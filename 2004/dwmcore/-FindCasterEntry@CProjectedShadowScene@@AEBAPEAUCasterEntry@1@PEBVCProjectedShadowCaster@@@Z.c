/*
 * XREFs of ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z @ 0x18000EA6C
 * Callers:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18000E880 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x18000F638 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall CProjectedShadowScene::FindCasterEntry(
        CProjectedShadowScene *this,
        const struct CProjectedShadowCaster *a2)
{
  __int64 ***v2; // r8
  __int64 **i; // rax

  v2 = (__int64 ***)*((_QWORD *)this + 7);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
      return i + 2;
  }
  return 0LL;
}
