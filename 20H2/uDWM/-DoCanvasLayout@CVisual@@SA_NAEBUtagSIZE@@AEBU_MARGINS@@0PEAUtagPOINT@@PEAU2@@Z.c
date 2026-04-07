/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180012980
 * Callers:
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x1800126E0 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180012860 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z @ 0x1800BA900 (-UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::DoCanvasLayout(
        const struct tagSIZE *a1,
        const struct _MARGINS *a2,
        const struct tagSIZE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5)
{
  int cxLeftWidth; // r10d
  int cyTopHeight; // eax
  struct tagSIZE v8; // r8
  LONG cx; // ecx
  LONG cy; // ecx
  bool result; // al
  int v12; // ecx
  struct tagPOINT v13; // [rsp+0h] [rbp-18h]
  struct tagSIZE v14; // [rsp+28h] [rbp+10h]

  cxLeftWidth = a2->cxLeftWidth;
  cyTopHeight = a2->cyTopHeight;
  if ( *(_QWORD *)&a2->cxLeftWidth == 0x7FFFFFFF7FFFFFFFLL
    && cyTopHeight == 0x7FFFFFFF
    && a2->cyBottomHeight == 0x7FFFFFFF )
  {
    return 0;
  }
  v8 = *a3;
  v14 = v8;
  v13.y = 0;
  if ( a2->cxRightWidth == 0x7FFFFFFF )
  {
    v12 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v12 = a2->cxLeftWidth;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth != 0x7FFFFFFF )
    {
      v13.x = a2->cxLeftWidth;
      v14.cx = cx - a2->cxRightWidth - cxLeftWidth;
      goto LABEL_5;
    }
    v12 = cx - v8.cx - a2->cxRightWidth;
  }
  v13.x = v12;
LABEL_5:
  if ( a2->cyBottomHeight == 0x7FFFFFFF )
  {
    if ( cyTopHeight == 0x7FFFFFFF )
      goto LABEL_9;
  }
  else
  {
    cy = a1->cy;
    if ( cyTopHeight == 0x7FFFFFFF )
    {
      v13.y = cy - v8.cy - a2->cyBottomHeight;
      goto LABEL_9;
    }
    v14.cy = cy - cyTopHeight - a2->cyBottomHeight;
  }
  v13.y = a2->cyTopHeight;
LABEL_9:
  if ( v14.cx <= 0 )
    v14.cx = 0;
  if ( v14.cy <= 0 )
    v14.cy = 0;
  result = 1;
  *a5 = v14;
  *a4 = v13;
  return result;
}
