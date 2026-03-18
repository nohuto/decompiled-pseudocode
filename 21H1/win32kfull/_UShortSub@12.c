/*
 * XREFs of _UShortSub@12 @ 0x229551
 * Callers:
 *     ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6 (-bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortSub(USHORT usMinuend, USHORT usSubtrahend, USHORT *pusResult)
{
  __int16 v3; // cx
  __int16 v4; // dx
  HRESULT result; // eax

  if ( v3 )
    v4 = v3 - 1;
  else
    v4 = -1;
  result = v3 == 0 ? 0x80070216 : 0;
  *(_WORD *)usMinuend = v4;
  return result;
}
