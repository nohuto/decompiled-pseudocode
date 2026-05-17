/*
 * XREFs of StringLengthWorkerW @ 0x4B2DAA90
 * Callers:
 *     _StringCbLengthW@12 @ 0x4B2DAA52 (_StringCbLengthW@12.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  _WORD *v3; // ecx
  int v4; // edx
  HRESULT result; // eax

  v4 = 16;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 != 0 ? 0 : -2147024809;
  if ( psz )
  {
    if ( v4 )
      *(_DWORD *)psz = 16 - v4;
    else
      *(_DWORD *)psz = 0;
  }
  return result;
}
