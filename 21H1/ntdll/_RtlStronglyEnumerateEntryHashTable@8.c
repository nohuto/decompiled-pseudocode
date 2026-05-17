/*
 * XREFs of _RtlStronglyEnumerateEntryHashTable@8 @ 0x4B35B380
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

_DWORD *__stdcall RtlStronglyEnumerateEntryHashTable(int a1, int a2)
{
  unsigned int i; // esi
  _DWORD *v3; // ecx
  int ChainHead; // edx
  _DWORD *v5; // ecx
  _DWORD *result; // eax

  for ( i = *(_DWORD *)(a2 + 16); ; ++i )
  {
    if ( i >= *(_DWORD *)(a1 + 8) )
      return 0;
    if ( i == *(_DWORD *)(a2 + 16) )
    {
      v3 = *(_DWORD **)a2;
      ChainHead = *(_DWORD *)(a2 + 12);
    }
    else
    {
      ChainHead = RtlpGetChainHead(a1, i);
      v3 = (_DWORD *)ChainHead;
    }
    v5 = (_DWORD *)*v3;
    if ( v5 != (_DWORD *)ChainHead )
      break;
LABEL_8:
    ;
  }
  while ( !v5[2] )
  {
    v5 = (_DWORD *)*v5;
    if ( v5 == (_DWORD *)ChainHead )
      goto LABEL_8;
  }
  *(_DWORD *)(a2 + 16) = i;
  result = v5;
  *(_DWORD *)(a2 + 12) = ChainHead;
  *(_DWORD *)a2 = v5;
  return result;
}
