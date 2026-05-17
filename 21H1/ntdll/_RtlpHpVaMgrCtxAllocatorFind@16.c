/*
 * XREFs of _RtlpHpVaMgrCtxAllocatorFind@16 @ 0x4B37AB17
 * Callers:
 *     _RtlpHpVaMgrCtxAlloc@16 @ 0x4B37AA36 (_RtlpHpVaMgrCtxAlloc@16.c)
 *     _RtlpHpVaMgrCtxAllocatorReference@12 @ 0x4B37AB82 (_RtlpHpVaMgrCtxAllocatorReference@12.c)
 * Callees:
 *     _RtlpHpVaMgrCtxAllocatorCompare@12 @ 0x4B37AA8A (_RtlpHpVaMgrCtxAllocatorCompare@12.c)
 */

int __fastcall RtlpHpVaMgrCtxAllocatorFind(int a1, int a2, int a3, int *a4)
{
  unsigned int v5; // eax
  int v6; // esi
  unsigned int v7; // edi
  int v8; // ecx
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 56);
  v8 = a1 + 60;
  if ( v7 )
  {
    do
    {
      if ( *(_DWORD *)(v8 + 12) )
      {
        v10 = v5 + 1;
        if ( RtlpHpVaMgrCtxAllocatorCompare(v8, a2, a3) )
          return v8;
        v5 = v10;
      }
      else if ( !v6 )
      {
        v6 = v8;
      }
      v8 += 28;
    }
    while ( v5 < v7 );
    if ( v6 )
      goto LABEL_11;
  }
  if ( v7 < 0xFF )
    v6 = 28 * v7 + a1 + 60;
LABEL_11:
  if ( a4 )
    *a4 = v6;
  return 0;
}
