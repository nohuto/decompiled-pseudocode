/*
 * XREFs of ?bConcurrent@@YGHPAU_SPRITESTATE@@@Z @ 0x1DCDEA
 * Callers:
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3184 (-vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239 (-vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __thiscall bConcurrent(int *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int v8; // [esp+8h] [ebp-4h] BYREF

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = *this;
  v5 = ThreadWin32Thread;
  v6 = 0;
  v8 = v4;
  if ( ThreadWin32Thread && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) && (*(_DWORD *)(v5 + 52) || *(_DWORD *)(v5 + 56)) )
    return 1;
  return v6;
}
