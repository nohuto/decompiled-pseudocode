/*
 * XREFs of _GreDeleteSprite@16 @ 0x1BB86
 * Callers:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _vCleanupUMWindowlessSprite@4 @ 0x1ECE2 (_vCleanupUMWindowlessSprite@4.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     ?bCleanupSpriteStateRects@@YGHPAUHDEV__@@PAU_SPRITESTATE@@@Z @ 0xB0A32 (-bCleanupSpriteStateRects@@YGHPAUHDEV__@@PAU_SPRITESTATE@@@Z.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     _DeleteFadeSprite@0 @ 0x153705 (_DeleteFadeSprite@0.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z @ 0x1CD2E0 (-SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z.c)
 *     _bSetDevPreviewRect@24 @ 0x1E3D0B (_bSetDevPreviewRect@24.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6 (-GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __stdcall GreDeleteSprite(HDEV a1, HWND a2)
{
  int v2; // esi
  void *v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  v2 = GreDeleteSpriteInternal(a1, a2, v4, v5);
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return v2;
}
