/*
 * XREFs of _UShortAdd@12 @ 0xAB166
 * Callers:
 *     _AllocateUnicodeString@8 @ 0xAB0D2 (_AllocateUnicodeString@8.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  unsigned __int16 v3; // cx
  __int16 v4; // dx
  HRESULT result; // eax

  v4 = v3 + 2;
  if ( (unsigned __int16)(v3 + 2) < v3 )
    v4 = -1;
  result = (unsigned __int16)(v3 + 2) < v3 ? 0x80070216 : 0;
  *(_WORD *)usAugend = v4;
  return result;
}
