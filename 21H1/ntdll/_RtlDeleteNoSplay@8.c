/*
 * XREFs of _RtlDeleteNoSplay@8 @ 0x4B2E77B0
 * Callers:
 *     <none>
 * Callees:
 *     _SwapSplayLinks@8 @ 0x4B2E7836 (_SwapSplayLinks@8.c)
 *     _RtlSubtreePredecessor@4 @ 0x4B2E7900 (_RtlSubtreePredecessor@4.c)
 */

void __stdcall RtlDeleteNoSplay(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int v3; // eax

  if ( a1[1] && a1[2] )
  {
    v3 = RtlSubtreePredecessor(a1);
    if ( (_DWORD *)*a1 == a1 )
      *a2 = v3;
    SwapSplayLinks(v3, a1);
  }
  v2 = (_DWORD *)a1[1];
  if ( v2 || (v2 = (_DWORD *)a1[2]) != 0 )
  {
    if ( (_DWORD *)*a1 == a1 )
    {
      *v2 = v2;
      *a2 = v2;
    }
    else
    {
      *(_DWORD *)(4 * (*(_DWORD *)(*a1 + 4) != (_DWORD)a1) + 4 + *a1) = v2;
      *v2 = *a1;
    }
  }
  else if ( (_DWORD *)*a1 == a1 )
  {
    *a2 = 0;
  }
  else
  {
    *(_DWORD *)(4 * (*(_DWORD *)(*a1 + 4) != (_DWORD)a1) + 4 + *a1) = 0;
  }
}
