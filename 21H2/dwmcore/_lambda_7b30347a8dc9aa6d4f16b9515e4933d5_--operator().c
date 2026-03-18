/*
 * XREFs of _lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator() @ 0x180218C90
 * Callers:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18021DE88 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator()(__int64 a1, int a2)
{
  int v2; // r9d

  v2 = *(_DWORD *)(**(_QWORD **)a1 + 8LL * **(int **)(a1 + 8) + 464);
  if ( v2 )
  {
    if ( v2 == 1 && a2 )
      return 1;
  }
  else if ( (a2 & 3) != 0 )
  {
    return 1;
  }
  return 0;
}
