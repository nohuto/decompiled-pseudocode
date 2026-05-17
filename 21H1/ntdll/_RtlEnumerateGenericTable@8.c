/*
 * XREFs of _RtlEnumerateGenericTable@8 @ 0x4B35E0A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _RtlRealSuccessor@4 @ 0x4B35E030 (_RtlRealSuccessor@4.c)
 */

int __stdcall RtlEnumerateGenericTable(_DWORD **a1, char a2)
{
  _DWORD *v2; // esi

  v2 = *a1;
  if ( !*a1 )
    return 0;
  if ( a2 )
  {
    while ( v2[1] )
      v2 = (_DWORD *)v2[1];
    goto LABEL_5;
  }
  v2 = RtlRealSuccessor(v2);
  if ( v2 )
LABEL_5:
    *a1 = RtlSplay(v2);
  return v2 != 0 ? (unsigned int)(v2 + 6) : 0;
}
