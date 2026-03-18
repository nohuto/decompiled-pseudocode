/*
 * XREFs of ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18023642C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801149AC (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180235B10 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x180237064 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180237684 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall CProjectedShadowScene::FindReceiverEntry(
        CProjectedShadowScene *this,
        const struct CProjectedShadowReceiver *a2)
{
  __int64 ***v2; // r8
  __int64 **i; // rax

  v2 = (__int64 ***)*((_QWORD *)this + 10);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
      return i + 2;
  }
  return 0LL;
}
