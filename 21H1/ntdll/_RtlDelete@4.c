/*
 * XREFs of _RtlDelete@4 @ 0x4B2A7FC0
 * Callers:
 *     _RtlDeleteElementGenericTable@8 @ 0x4B2A7E60 (_RtlDeleteElementGenericTable@8.c)
 *     _PfxRemovePrefix@8 @ 0x4B345310 (_PfxRemovePrefix@8.c)
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 * Callees:
 *     _SwapSplayLinks@8 @ 0x4B2E7836 (_SwapSplayLinks@8.c)
 *     _RtlSubtreePredecessor@4 @ 0x4B2E7900 (_RtlSubtreePredecessor@4.c)
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 */

_DWORD *__stdcall RtlDelete(_DWORD *a1)
{
  _DWORD *v1; // ecx
  int v2; // ecx
  _DWORD *result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp-4h] [ebp-8h]

  v1 = (_DWORD *)a1[1];
  if ( v1 )
  {
    if ( a1[2] )
    {
      v4 = RtlSubtreePredecessor(a1);
      SwapSplayLinks(v4, a1);
      v1 = (_DWORD *)a1[1];
    }
    if ( v1 )
      goto LABEL_8;
  }
  v1 = (_DWORD *)a1[2];
  if ( v1 )
  {
LABEL_8:
    if ( (_DWORD *)*a1 == a1 )
    {
      *v1 = v1;
      return v1;
    }
    else
    {
      *(_DWORD *)(4 * (*(_DWORD *)(*a1 + 4) != (_DWORD)a1) + 4 + *a1) = v1;
      v5 = *a1;
      *v1 = *a1;
      return (_DWORD *)RtlSplay(v5);
    }
  }
  else
  {
    v2 = *a1;
    result = 0;
    if ( (_DWORD *)*a1 != a1 )
    {
      v6 = *a1;
      LOBYTE(result) = *(_DWORD *)(v2 + 4) != (_DWORD)a1;
      *(_DWORD *)(4 * (_DWORD)result + 4 + v2) = 0;
      return (_DWORD *)RtlSplay(v6);
    }
  }
  return result;
}
