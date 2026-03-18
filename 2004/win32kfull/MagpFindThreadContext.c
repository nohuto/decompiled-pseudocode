/*
 * XREFs of MagpFindThreadContext @ 0x1C008E604
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01CD150 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01CD39C (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01CD4A0 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01CDBF4 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01CE994 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MagpFindThreadContext(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( a2 == result[2] )
      return result;
  }
  return 0LL;
}
