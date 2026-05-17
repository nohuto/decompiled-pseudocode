/*
 * XREFs of _RtlContractHashTable@4 @ 0x4B35ACD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

char __stdcall RtlContractHashTable(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // edx
  int v3; // eax
  int v4; // eax
  _DWORD *ChainHead; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *i; // edx
  _DWORD *v10; // ecx
  int v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  unsigned int v14; // eax
  int v15; // edi
  _DWORD *v16; // ebx
  _DWORD *v18; // [esp+4h] [ebp-8h]

  v1 = a1;
  v2 = a1[2];
  if ( v2 == 128 || a1[7] )
    return 0;
  v3 = a1[3];
  if ( v3 )
  {
    v4 = v3 - 1;
  }
  else
  {
    a1[4] >>= 1;
    v4 = a1[4];
  }
  a1[3] = v4;
  ChainHead = (_DWORD *)RtlpGetChainHead(a1, v2 - 1);
  v18 = ChainHead;
  v7 = (_DWORD *)RtlpGetChainHead(v6, a1[3]);
  --a1[2];
  v8 = v7;
  if ( (_DWORD *)*ChainHead != ChainHead && (_DWORD *)*v7 != v7 )
    --a1[6];
  for ( i = v7; ; *i = v10 )
  {
    v10 = (_DWORD *)*ChainHead;
    if ( (_DWORD *)*ChainHead == ChainHead )
      break;
    if ( (_DWORD *)v10[1] != ChainHead )
      goto LABEL_20;
    v11 = *v10;
    if ( *(_DWORD **)(*v10 + 4) != v10 )
      goto LABEL_20;
    *ChainHead = v11;
    *(_DWORD *)(v11 + 4) = ChainHead;
    if ( (_DWORD *)*i != v8 )
    {
      v12 = (_DWORD *)*i;
      do
      {
        if ( v12[2] >= v10[2] )
          break;
        i = v12;
        v12 = (_DWORD *)*v12;
      }
      while ( v12 != v8 );
      v1 = a1;
      ChainHead = v18;
    }
    v13 = (_DWORD *)*i;
    if ( *(_DWORD **)(*i + 4) != i )
LABEL_20:
      __fastfail(3u);
    *v10 = v13;
    v10[1] = i;
    v13[1] = v10;
  }
  v14 = v1[2] + 128;
  _BitScanReverse((unsigned int *)&v15, v14);
  if ( v14 == 1 << v15 )
  {
    v16 = (_DWORD *)v1[8];
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v16[v15 - 7]);
    v16[v15 - 7] = 0;
    if ( v1[2] == 128 )
    {
      v1[8] = *v16;
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v16);
    }
  }
  return 1;
}
