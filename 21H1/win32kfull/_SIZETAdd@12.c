/*
 * XREFs of _SIZETAdd@12 @ 0x192B76
 * Callers:
 *     _xxxClientCopyDDEIn1@12 @ 0x193B53 (_xxxClientCopyDDEIn1@12.c)
 *     _NtGdiStartDoc@16 @ 0x1D998C (_NtGdiStartDoc@16.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AAEHPAU_UMPDHEAP@@K@Z @ 0x1F3C92 (-GrowUMPDHeap@UMPDOBJ@@AAEHPAU_UMPDHEAP@@K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall SIZETAdd(SIZE_T Augend, SIZE_T Addend, SIZE_T *pResult)
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
  *(_DWORD *)Augend = v6;
  return result;
}
