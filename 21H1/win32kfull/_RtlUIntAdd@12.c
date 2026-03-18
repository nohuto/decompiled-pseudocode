/*
 * XREFs of _RtlUIntAdd@12 @ 0xB39BC
 * Callers:
 *     ?Grow@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@IAEJI@Z @ 0xB392E (-Grow@-$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@IAEJI@Z.c)
 *     ?Grow@?$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@IAEJI@Z @ 0x1A58D9 (-Grow@-$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@IAEJI@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  int v3; // edx
  int v4; // edx
  int v5; // esi
  NTSTATUS result; // eax

  v4 = v3 + 1;
  if ( v4 )
    v5 = v4;
  else
    v5 = -1;
  result = v4 == 0 ? 0xC0000095 : 0;
  *(_DWORD *)uAugend = v5;
  return result;
}
