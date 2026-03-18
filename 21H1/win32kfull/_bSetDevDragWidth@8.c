/*
 * XREFs of _bSetDevDragWidth@8 @ 0xDB5E6
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?SetNCMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z @ 0xDB0A6 (-SetNCMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     <none>
 */

int __fastcall bSetDevDragWidth(int a1, int a2)
{
  _BYTE v4[4]; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  v5 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v4, (struct PDEVOBJ *)&v5);
  *(_DWORD *)(v5 + 796) = a2;
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v4);
  return 1;
}
