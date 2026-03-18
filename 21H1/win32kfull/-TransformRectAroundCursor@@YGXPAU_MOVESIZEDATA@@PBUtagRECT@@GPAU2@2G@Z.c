/*
 * XREFs of ?TransformRectAroundCursor@@YGXPAU_MOVESIZEDATA@@PBUtagRECT@@GPAU2@2G@Z @ 0x1500CD
 * Callers:
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _DetectNewMonitor@8 @ 0x150BE3 (_DetectNewMonitor@8.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _TransformRectAroundPoint@28 @ 0x151AD1 (_TransformRectAroundPoint@28.c)
 */

void __userpurge TransformRectAroundCursor(
        int a1@<edx>,
        INT *a2@<ecx>,
        struct _MOVESIZEDATA *a3,
        const struct tagRECT *a4,
        int a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        unsigned __int16 a8)
{
  INT v9; // eax
  int v10; // ecx

  TransformRectAroundPoint(a4, a5, (__int16)a6, a2[69], a2[70]);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    if ( a4 )
      v9 = EngMulDiv(a2[40], a4->bottom - a4->top, *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4));
    else
      v9 = EngMulDiv(a2[40], (unsigned __int16)a6, (unsigned __int16)a3);
    v10 = a2[40] - v9;
    *(_DWORD *)(a5 + 12) += v10;
    *(_DWORD *)(a5 + 4) += v10;
  }
}
