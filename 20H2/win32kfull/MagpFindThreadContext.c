/*
 * XREFs of MagpFindThreadContext @ 0x1C00D39A4
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01CC340 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01CC58C (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01CC690 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01CCDE4 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01CDB84 (MagSlicerControl.c)
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
