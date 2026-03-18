/*
 * XREFs of FlattenEventEntryTree @ 0x1B6950
 * Callers:
 *     FlushLookUpTableBucket @ 0x1B698C (FlushLookUpTableBucket.c)
 * Callees:
 *     <none>
 */

int __fastcall FlattenEventEntryTree(int a1)
{
  int result; // eax
  int *v2; // edx
  int v3; // edi
  int *v4; // esi
  int i; // ecx
  int v6; // [esp+0h] [ebp-4h] BYREF

  result = 0;
  v6 = a1;
  v2 = &v6;
  if ( a1 )
  {
    do
    {
      v3 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = 0;
      v2 = (int *)(*v2 + 20);
      v4 = v2;
      for ( i = *v2; i; i = *(_DWORD *)(i + 24) )
        v4 = (int *)(i + 24);
      *v4 = v3;
      ++result;
      a1 = *v2;
    }
    while ( *v2 );
  }
  return result;
}
