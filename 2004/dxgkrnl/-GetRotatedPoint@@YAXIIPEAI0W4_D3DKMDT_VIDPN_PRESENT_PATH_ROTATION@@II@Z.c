/*
 * XREFs of ?GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z @ 0x1C027D4B4
 * Callers:
 *     ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C027D7DC (-RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GetRotatedPoint(
        unsigned int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebx
  __int64 v11; // rax

  v7 = a1;
  switch ( a5 )
  {
    case D3DKMDT_VPPR_ROTATE90:
      v7 = a2;
      a1 = a6 - a1 - 1;
      break;
    case D3DKMDT_VPPR_ROTATE180:
      a1 = a7 - a2 - 1;
      v7 = a6 - v7 - 1;
      break;
    case D3DKMDT_VPPR_ROTATE270:
      v7 = a7 - a2 - 1;
      break;
    default:
      if ( a5 != D3DKMDT_VPPR_IDENTITY )
      {
        v11 = WdLogNewEntry5_WdAssertion((unsigned int)(a5 - 3), (unsigned int)a5);
        *(_QWORD *)(v11 + 24) = 387LL;
        WdLogEvent5_WdAssertion(v11);
      }
      a1 = a2;
      break;
  }
  *a3 = v7;
  *a4 = a1;
}
