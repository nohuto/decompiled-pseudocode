/*
 * XREFs of _ULongAdd@12 @ 0x4B2E454E
 * Callers:
 *     _EtwpCreateRegGuidsContext@20 @ 0x4B2E4478 (_EtwpCreateRegGuidsContext@20.c)
 *     _EtwpQueryRegString@16 @ 0x4B2F1160 (_EtwpQueryRegString@16.c)
 *     _EtwpTrackDebugIdForSession@12 @ 0x4B2F1EA8 (_EtwpTrackDebugIdForSession@12.c)
 *     _ARRAY_FITS@16 @ 0x4B33DB3F (_ARRAY_FITS@16.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // edx
  HRESULT result; // eax

  v5 = v4 + v3;
  if ( v4 + v3 < v4 )
    v6 = -1;
  else
    v6 = v4 + v3;
  result = v5 < v4 ? 0x80070216 : 0;
  *(_DWORD *)ulAugend = v6;
  return result;
}
