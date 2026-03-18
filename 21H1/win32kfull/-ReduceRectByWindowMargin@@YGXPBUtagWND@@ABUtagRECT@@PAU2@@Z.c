/*
 * XREFs of ?ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E459
 * Callers:
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     ?GetWindowFrameBounds@@YG?AUtagRECT@@PBUtagWND@@@Z @ 0x19E3CD (-GetWindowFrameBounds@@YG-AUtagRECT@@PBUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 */

void __userpurge ReduceRectByWindowMargin(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        const struct tagWND *a3,
        const struct tagRECT *a4,
        struct tagRECT *a5)
{
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  *(_DWORD *)a3 = *a1;
  *((_DWORD *)a3 + 1) = a1[1];
  *((_DWORD *)a3 + 2) = a1[2];
  *((_DWORD *)a3 + 3) = a1[3];
  if ( GetWindowExtendedMargin(a2, (int)&v5) )
  {
    *((_DWORD *)a3 + 1) += (__int16)v6;
    *(_DWORD *)a3 += (__int16)v5;
    *((_DWORD *)a3 + 2) -= SHIWORD(v5);
    *((_DWORD *)a3 + 3) -= SHIWORD(v6);
  }
}
