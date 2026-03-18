/*
 * XREFs of EngDeleteClip @ 0x1C014F800
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0145200 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C014F740 (EngCreateClip.c)
 * Callees:
 *     EngFreeMem @ 0x1C0022210 (EngFreeMem.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  REGION *v2; // rcx

  v2 = *(REGION **)&pco[2].rclBounds.top;
  if ( v2 )
    REGION::vDeleteREGION(v2);
  EngFreeMem(pco);
}
