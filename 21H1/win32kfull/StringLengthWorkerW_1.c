/*
 * XREFs of StringLengthWorkerW_1 @ 0x1DA56C
 * Callers:
 *     _StringCchCatW@12 @ 0x1DA4B1 (_StringCchCatW@12.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW_1(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  _WORD *v3; // ecx
  int v4; // edx
  HRESULT result; // eax

  v4 = 260;
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
      *(_DWORD *)psz = 260 - v4;
    else
      *(_DWORD *)psz = 0;
  }
  return result;
}
