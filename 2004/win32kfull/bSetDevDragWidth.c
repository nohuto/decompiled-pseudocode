/*
 * XREFs of bSetDevDragWidth @ 0x1C000DCC4
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C000CFF0 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetDevDragWidth(__int64 a1, int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v5, (struct PDEVOBJ *)&v4);
  *(_DWORD *)(v4 + 1256) = a2;
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v5);
  return 1LL;
}
