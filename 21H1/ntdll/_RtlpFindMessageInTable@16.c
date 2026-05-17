/*
 * XREFs of _RtlpFindMessageInTable@16 @ 0x4B2DFF9D
 * Callers:
 *     _RtlFindMessage@20 @ 0x4B2DFF20 (_RtlFindMessage@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpFindMessageInTable(int *a1, int a2, unsigned int a3, unsigned __int16 **a4)
{
  unsigned __int16 *v5; // ebx
  int v6; // eax
  unsigned int *v7; // ecx
  unsigned int v8; // esi
  unsigned __int16 *v10; // ecx
  unsigned int v11; // edx

  v5 = (unsigned __int16 *)((char *)a1 + a2 - 1);
  v6 = *a1;
  v7 = (unsigned int *)(a1 + 1);
  if ( !v6 )
    return -1073741559;
  while ( 1 )
  {
    v8 = *v7;
    --v6;
    if ( a3 >= *v7 && a3 <= v7[1] )
      break;
    v7 += 3;
    if ( !v6 )
      return -1073741559;
  }
  v10 = (unsigned __int16 *)((char *)a1 + v7[2]);
  v11 = a3 - v8;
  if ( a3 != v8 )
  {
    do
    {
      --v11;
      v10 = (unsigned __int16 *)((char *)v10 + *v10);
      if ( v10 > v5 )
        return -1073741559;
    }
    while ( v11 );
  }
  *a4 = v10;
  return 0;
}
