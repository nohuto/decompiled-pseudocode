/*
 * XREFs of ?GetCoordFromRect@@YGXPAUtagMONITOR_MARGIN@@PAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0xA56A0
 * Callers:
 *     ?UpdateDesktopThresholdsWorker@@YGXPAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0xA55E2 (-UpdateDesktopThresholdsWorker@@YGXPAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GetCoordFromRect(int *a1, int *a2, int a3)
{
  int v3; // eax
  int result; // eax

  switch ( a3 )
  {
    case 0:
      *a1 = *a2;
      a1[1] = a2[2];
      result = a2[1];
      goto LABEL_6;
    case 1:
      *a1 = a2[1];
      a1[1] = a2[3];
      result = *a2;
      goto LABEL_6;
    case 2:
      *a1 = a2[1];
      a1[1] = a2[3];
      v3 = a2[2];
LABEL_5:
      result = -v3;
LABEL_6:
      a1[2] = result;
      return result;
  }
  result = a3 - 3;
  if ( a3 == 3 )
  {
    *a1 = *a2;
    a1[1] = a2[2];
    v3 = a2[3];
    goto LABEL_5;
  }
  return result;
}
