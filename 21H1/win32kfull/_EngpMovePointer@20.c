/*
 * XREFs of _EngpMovePointer@20 @ 0x1CDDEA
 * Callers:
 *     ?vMovePointer@@YGXPAUHDEV__@@HHJ@Z @ 0x7BC92 (-vMovePointer@@YGXPAUHDEV__@@HHJ@Z.c)
 *     _EngMovePointer@16 @ 0x1CDDD0 (_EngMovePointer@16.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2 (-DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 */

void __fastcall EngpMovePointer(int a1, int a2, struct _SURFOBJ *a3, int a4, char a5)
{
  int v7; // ecx
  int v8; // ecx
  struct _RECTL *v9; // [esp+0h] [ebp-10h]
  unsigned int v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-4h] BYREF

  v7 = *(_DWORD *)(a1 + 12);
  if ( g_pDwmState )
  {
    v11 = *(_DWORD *)(v7 + 40);
    GreAcquireSemaphore(v11);
    GreAcquireSemaphoreSharedStarveExclusiveInternal(_ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"hsem", _ghsemSprite);
    DwmMovePointer(a2, a1, a3, v8, a5, v9, v10);
    EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemSprite);
    GreReleaseSemaphoreInternal(_ghsemSprite);
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
  }
  else
  {
    GdiMovePointer(a3, v7, 0, v9, v10);
  }
}
