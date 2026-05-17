/*
 * XREFs of _RtlEnumerateEntryHashTable@8 @ 0x4B35AF30
 * Callers:
 *     _RtlWeaklyEnumerateEntryHashTable@8 @ 0x4B35B3E0 (_RtlWeaklyEnumerateEntryHashTable@8.c)
 * Callees:
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

_DWORD *__stdcall RtlEnumerateEntryHashTable(int a1, _DWORD *a2)
{
  unsigned int i; // edi
  _DWORD *ChainHead; // edx
  _DWORD **v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *result; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // eax

  for ( i = a2[4]; ; ++i )
  {
    if ( i >= *(_DWORD *)(a1 + 8) )
      return 0;
    if ( i == a2[4] )
    {
      ChainHead = (_DWORD *)a2[3];
      v4 = (_DWORD **)a2;
    }
    else
    {
      ChainHead = (_DWORD *)RtlpGetChainHead(a1, i);
      v4 = (_DWORD **)ChainHead;
    }
    v5 = *v4;
    if ( v5 != ChainHead )
      break;
LABEL_8:
    ;
  }
  while ( !v5[2] )
  {
    v5 = (_DWORD *)*v5;
    if ( v5 == ChainHead )
      goto LABEL_8;
  }
  v7 = (_DWORD *)*a2;
  if ( *(_DWORD **)(*a2 + 4) != a2 )
    goto LABEL_20;
  v8 = (_DWORD *)a2[1];
  if ( (_DWORD *)*v8 != a2 )
    goto LABEL_20;
  *v8 = v7;
  v7[1] = v8;
  v9 = (_DWORD *)a2[3];
  if ( v9 != ChainHead )
  {
    if ( (_DWORD *)*v9 == v9 )
      --*(_DWORD *)(a1 + 24);
    if ( (_DWORD *)*ChainHead == ChainHead )
      ++*(_DWORD *)(a1 + 24);
  }
  a2[4] = i;
  a2[3] = ChainHead;
  v10 = (_DWORD *)*v5;
  if ( *(_DWORD **)(*v5 + 4) != v5 )
LABEL_20:
    __fastfail(3u);
  *a2 = v10;
  a2[1] = v5;
  v10[1] = a2;
  result = v5;
  *v5 = a2;
  return result;
}
