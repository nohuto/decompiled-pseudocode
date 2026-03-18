/*
 * XREFs of EngDeleteClip @ 0x1C014D370
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0142D70 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C014D2B0 (EngCreateClip.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngFreeMem @ 0x1C0085900 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  REGION *v2; // rcx

  v2 = *(REGION **)&pco[2].rclBounds.top;
  if ( v2 )
    REGION::vDeleteREGION(v2);
  EngFreeMem(pco);
}
