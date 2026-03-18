/*
 * XREFs of GreDeleteSprite @ 0x1C004ECD8
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000F13C (GreTransferDwmStateToSpriteState.c)
 *     vCleanupUMWindowlessSprite @ 0x1C002F0B0 (vCleanupUMWindowlessSprite.c)
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C004C04C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 *     DeleteFadeSprite @ 0x1C01E81C0 (DeleteFadeSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026EF9C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     bSetDevPreviewRect @ 0x1C0286B4C (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C004ED50 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 */

__int64 __fastcall GreDeleteSprite(HDEV a1, HWND a2, HSPRITE a3, int a4)
{
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v8 = GreDeleteSpriteInternal(a1, a2, a3, a4);
  SEMOBJ::vUnlock((SEMOBJ *)v10);
  return v8;
}
