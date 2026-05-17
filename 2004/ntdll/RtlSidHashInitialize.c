/*
 * XREFs of RtlSidHashInitialize @ 0x18007BF00
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall RtlSidHashInitialize(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // r9d
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r8

  v3 = 0;
  if ( !a3 )
    return 3221225485LL;
  memset(a3, 0, 0x110uLL);
  if ( a1 && a2 )
  {
    v7 = 64;
    a3[1] = a1;
    *(_DWORD *)a3 = a2;
    if ( a2 <= 0x40 )
      v7 = a2;
    do
    {
      v8 = *a1;
      a1 += 2;
      v9 = *(unsigned __int8 *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 1) + 4);
      v10 = 1LL << v3++;
      a3[(v9 & 0xF) + 2] |= v10;
      a3[((unsigned __int64)v9 >> 4) + 18] |= v10;
    }
    while ( v3 < v7 );
  }
  return 0LL;
}
