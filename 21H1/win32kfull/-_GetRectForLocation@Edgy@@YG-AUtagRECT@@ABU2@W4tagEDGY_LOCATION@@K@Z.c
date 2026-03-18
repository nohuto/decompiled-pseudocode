/*
 * XREFs of ?_GetRectForLocation@Edgy@@YG?AUtagRECT@@ABU2@W4tagEDGY_LOCATION@@K@Z @ 0x16E905
 * Callers:
 *     ?_HitTestEdgyRegion@Edgy@@YG?AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x16E9D7 (-_HitTestEdgyRegion@Edgy@@YG-AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Edgy::_GetRectForLocation(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx

  v5 = 0;
  *a3 = *a1++;
  a3[1] = *a1++;
  a3[2] = *a1;
  a3[3] = a1[1];
  if ( !a2 )
  {
    v5 = a4 + *a3;
    goto LABEL_11;
  }
  if ( a2 == 1 )
  {
    v7 = a4 + a3[1];
LABEL_9:
    a3[3] = v7;
    return a3;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
    {
      *a3 = 0;
      a3[1] = 0;
      a3[3] = 0;
LABEL_11:
      a3[2] = v5;
      return a3;
    }
    v6 = a3[3];
    a3[1] = v6 - a4;
    v7 = v6 + 1;
    goto LABEL_9;
  }
  v8 = a3[2];
  *a3 = v8 - a4;
  a3[2] = v8 + 1;
  return a3;
}
