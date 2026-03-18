/*
 * XREFs of StringLengthWorkerW_0 @ 0xDF3FA
 * Callers:
 *     ?StringCchLengthW@@YGJPBGIPAI@Z @ 0xDF3CE (-StringCchLengthW@@YGJPBGIPAI@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW_0(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  _WORD *v3; // ecx
  int v4; // edx
  HRESULT result; // eax

  v4 = 33;
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
      *(_DWORD *)psz = 33 - v4;
    else
      *(_DWORD *)psz = 0;
  }
  return result;
}
