/*
 * XREFs of _RtlSidHashInitialize@12 @ 0x4B347390
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlSidHashInitialize(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // [esp+4h] [ebp-4h]

  if ( !a3 )
    return -1073741811;
  v4 = 0;
  v10 = 0;
  memset(a3, 0, 0x88u);
  v5 = a1;
  if ( a1 )
  {
    v6 = a2;
    if ( a2 )
    {
      a3[1] = a1;
      *a3 = a2;
      if ( a2 > 0x20 )
        v6 = 32;
      if ( v6 )
      {
        do
        {
          v7 = *(_DWORD *)(v5 + 8 * v4);
          v8 = *(unsigned __int8 *)(v7 + 4 * *(unsigned __int8 *)(v7 + 1) + 4) >> 4;
          v9 = *(_BYTE *)(v7 + 4 * *(unsigned __int8 *)(v7 + 1) + 4) & 0xF;
          a3[v9 + 2] |= 1 << v10;
          a3[v8 + 18] |= 1 << v10;
          v5 = a1;
          v4 = v10 + 1;
          v10 = v4;
        }
        while ( v4 < v6 );
      }
    }
  }
  return 0;
}
