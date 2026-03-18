/*
 * XREFs of ?vIntersectVertical@@YGXPAVDDA_CLIPLINE@@JPAU_POINTL@@1PAJ@Z @ 0x2383C7
 * Callers:
 *     ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88 (-bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z @ 0x23838E (-vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z.c)
 * Callees:
 *     ?vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z @ 0x238459 (-vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z.c)
 *     ?yCompute@DDA_CLIPLINE@@QAEJJ@Z @ 0x2387D6 (-yCompute@DDA_CLIPLINE@@QAEJJ@Z.c)
 */

void __userpurge vIntersectVertical(
        int a1@<edx>,
        DDA_CLIPLINE *a2@<ecx>,
        struct DDA_CLIPLINE *a3,
        int *a4,
        struct _POINTL *a5,
        struct _POINTL *a6,
        int *a7)
{
  int v7; // eax
  int v8; // edi

  v7 = a1;
  v8 = a1 - 1;
  if ( a3 )
  {
    *(_DWORD *)a3 = v8;
    *((_DWORD *)a3 + 1) = DDA_CLIPLINE::yCompute(a2, a1 - 1);
    DDA_CLIPLINE::vUnflip(a2, (int *)a3, (int *)a3 + 1);
    v7 = a1;
  }
  if ( a4 )
  {
    *a4 = v7;
    a4[1] = DDA_CLIPLINE::yCompute(a2, v7);
    DDA_CLIPLINE::vUnflip(a2, a4, a4 + 1);
  }
  a5->x = v8 - *((_DWORD *)a2 + 8);
}
