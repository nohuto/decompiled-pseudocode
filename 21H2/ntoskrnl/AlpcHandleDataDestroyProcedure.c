/*
 * XREFs of AlpcHandleDataDestroyProcedure @ 0x140663B20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 */

__int64 __fastcall AlpcHandleDataDestroyProcedure(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  PVOID *v3; // rbx

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = (PVOID *)(a1 + 24);
    do
    {
      if ( !*v3 )
        break;
      ObpDecrementHandleCount((ULONG_PTR)*(v3 - 2));
      ObfDereferenceObjectWithTag(*v3, 0x7544624Fu);
      ObfDereferenceObjectWithTag(*(v3 - 2), 0x7544624Fu);
      *v3 = 0LL;
      ++v2;
      v3 += 6;
    }
    while ( v2 < v1 );
  }
  return 0LL;
}
