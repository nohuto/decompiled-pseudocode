/*
 * XREFs of ?vIntersectHorizontal@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x238330
 * Callers:
 *     ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88 (-bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z @ 0x23838E (-vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z.c)
 * Callees:
 *     ?vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z @ 0x238459 (-vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z.c)
 *     ?xCompute@DDA_CLIPLINE@@QAEJJ@Z @ 0x23878E (-xCompute@DDA_CLIPLINE@@QAEJJ@Z.c)
 */

void __userpurge vIntersectHorizontal(
        int a1@<edx>,
        DDA_CLIPLINE *a2@<ecx>,
        struct DDA_CLIPLINE *a3,
        int *a4,
        struct _POINTL *a5,
        struct _POINTL *a6,
        int *a7)
{
  int v8; // ebx
  int v9; // esi

  v8 = a1 - 1;
  v9 = DDA_CLIPLINE::xCompute(a2, a1 - 1);
  if ( a3 )
  {
    *(_DWORD *)a3 = v9;
    *((_DWORD *)a3 + 1) = v8;
    DDA_CLIPLINE::vUnflip(a2, (int *)a3, (int *)a3 + 1);
  }
  if ( a4 )
  {
    *a4 = v9 + 1;
    a4[1] = a1;
    DDA_CLIPLINE::vUnflip(a2, a4, a4 + 1);
  }
  a5->x = v9 - *((_DWORD *)a2 + 8);
}
