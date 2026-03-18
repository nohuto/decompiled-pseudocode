/*
 * XREFs of EngCreateClip @ 0x1C0155A90
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C014BDD0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngAllocMem @ 0x1C0009B50 (EngAllocMem.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C00757F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngDeleteClip @ 0x1C0155B50 (EngDeleteClip.c)
 */

CLIPOBJ *EngCreateClip(void)
{
  CLIPOBJ *v0; // rbx
  REGION *v1; // rdi
  REGION *v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  struct _RECTL v5; // [rsp+30h] [rbp-18h] BYREF

  v0 = (CLIPOBJ *)EngAllocMem(1u, 0x98u, 0x76726447u);
  if ( !v0 )
    return v0;
  v4 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v3, 0x70u);
  v1 = v3;
  if ( v3 )
  {
    *(_WORD *)&v0->iDComplexity = 256;
    v5.top = -134217728;
    v5.left = -134217728;
    v0->iMode = 0;
    v5.bottom = 0x7FFFFFF;
    v5.right = 0x7FFFFFF;
    *(_QWORD *)&v0[2].rclBounds.top = v1;
    RGNOBJ::vSet((struct _RECTL **)&v3, &v5);
    if ( v4 == 1 )
      REGION::vDeleteREGION(v1);
    return v0;
  }
  EngDeleteClip(v0);
  if ( v4 == 1 )
    REGION::vDeleteREGION(0LL);
  return 0LL;
}
