/*
 * XREFs of ?IsMsgLookupTableEntryEmpty@@YGHPBQAXK@Z @ 0xD3000
 * Callers:
 *     ?RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z @ 0xE6A5C (-RemoveMessageFromFilter@@YGHPAPAPAXIPAH@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall IsMsgLookupTableEntryEmpty(int a1, unsigned int a2)
{
  int v2; // eax

  v2 = 0;
  if ( !a2 )
    return 1;
  while ( !*(_DWORD *)(a1 + 4 * v2) )
  {
    if ( ++v2 >= a2 )
      return 1;
  }
  return 0;
}
