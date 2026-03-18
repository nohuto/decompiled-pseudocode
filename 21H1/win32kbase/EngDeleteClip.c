/*
 * XREFs of EngDeleteClip @ 0x1C0155B50
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C014B550 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C0155A90 (EngCreateClip.c)
 * Callees:
 *     EngFreeMem @ 0x1C000D2D0 (EngFreeMem.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  REGION *v2; // rcx

  v2 = *(REGION **)&pco[2].rclBounds.top;
  if ( v2 )
    REGION::vDeleteREGION(v2);
  EngFreeMem(pco);
}
