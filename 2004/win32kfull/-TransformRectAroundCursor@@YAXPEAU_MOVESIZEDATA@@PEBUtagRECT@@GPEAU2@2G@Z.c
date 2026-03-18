/*
 * XREFs of ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E486C
 * Callers:
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E5624 (DetectNewMonitor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectAroundPoint @ 0x1C01E6454 (TransformRectAroundPoint.c)
 */

void __fastcall TransformRectAroundCursor(
        struct _MOVESIZEDATA *a1,
        const struct tagRECT *a2,
        unsigned __int16 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int16 a6)
{
  INT v9; // r14d
  __int64 v10; // rcx
  INT v11; // r8d
  INT v12; // edx
  int v13; // ecx

  v9 = a3;
  TransformRectAroundPoint((_DWORD)a2, a3, (_DWORD)a4, (_DWORD)a5, a6, *(_QWORD *)((char *)a1 + 308));
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10) & 0xF) == 2 )
  {
    if ( a4 )
    {
      v11 = a2->bottom - a2->top;
      v12 = a4->bottom - a4->top;
    }
    else
    {
      v11 = v9;
      v12 = a6;
    }
    v13 = *((_DWORD *)a1 + 43) - EngMulDiv(*((_DWORD *)a1 + 43), v12, v11);
    a5->bottom += v13;
    a5->top += v13;
  }
}
