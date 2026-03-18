/*
 * XREFs of EngpMovePointer @ 0x1C0107610
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00C2748 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     EngMovePointer @ 0x1C026E7E0 (EngMovePointer.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0107C04 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027DD58 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 */

void __fastcall EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  HDEV hdev; // rcx
  struct _RECTL *v9; // r9
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  struct _RECTL *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  hdev = a1->hdev;
  if ( g_pDwmState )
  {
    v10 = *((_QWORD *)hdev + 8);
    GreAcquireSemaphore(v10);
    v11 = (struct _RECTL *)ghsemSprite;
    GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"hsem", ghsemSprite);
    DwmMovePointer(a1, a2, a3, v9, a5);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v11);
    SEMOBJ::vUnlock((SEMOBJ *)&v10);
  }
  else
  {
    GdiMovePointer(a1, a2, a3, a4, 0);
  }
}
