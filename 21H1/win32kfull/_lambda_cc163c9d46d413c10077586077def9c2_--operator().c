/*
 * XREFs of _lambda_cc163c9d46d413c10077586077def9c2_::operator() @ 0x20A1A5
 * Callers:
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall lambda_cc163c9d46d413c10077586077def9c2_::operator()(int a1)
{
  unsigned int v1; // edx
  PVOID result; // eax

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 4);
    if ( v1 )
    {
      result = _MmSystemRangeStart;
      if ( v1 < (unsigned int)_MmSystemRangeStart )
        *(_DWORD *)(a1 + 4) = 0;
    }
  }
  return result;
}
