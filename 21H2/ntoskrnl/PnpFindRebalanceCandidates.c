/*
 * XREFs of PnpFindRebalanceCandidates @ 0x1408B8508
 * Callers:
 *     PnpRebalance @ 0x1408B8904 (PnpRebalance.c)
 * Callees:
 *     PnpQueryRebalance @ 0x1408B8620 (PnpQueryRebalance.c)
 */

__int64 __fastcall PnpFindRebalanceCandidates(
        unsigned int a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        char a5,
        __int64 a6)
{
  __int64 v8; // rbx
  _DWORD *v9; // rdi
  int v10; // ecx
  int Rebalance; // eax
  __int64 result; // rax

  v8 = a2;
  if ( a1 || !a2 )
  {
    v9 = (_DWORD *)a6;
    PnpQueryRebalance((_DWORD)IopRootDeviceNode, a3, (_DWORD)a4, a6 + 64 + 8 * a1, a6 + 80 + 4LL * a1, a5);
    *(_QWORD *)(a6 + 24) = IopRootDeviceNode;
    *(_BYTE *)(a6 + 32) = 1;
  }
  else
  {
    v9 = (_DWORD *)a6;
    *(_QWORD *)(a6 + 40) = a2;
    v10 = *(_DWORD *)(a2 + 300);
    if ( v10 != 776 )
      v8 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a6 + 8) = (v10 != 776) + 1;
    if ( v8 )
    {
      do
      {
        Rebalance = PnpQueryRebalance(v8, a3, (_DWORD)a4, (int)a6 + 64, a6 + 80, a5);
        if ( Rebalance != 281 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( v8 );
      if ( v8 )
      {
        *(_BYTE *)(a6 + 32) = Rebalance >= 0;
        *(_QWORD *)(a6 + 24) = v8;
      }
    }
  }
  result = *a4;
  *v9 = result;
  return result;
}
