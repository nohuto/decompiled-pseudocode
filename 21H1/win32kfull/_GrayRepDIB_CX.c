/*
 * XREFs of _GrayRepDIB_CX @ 0x1CA571
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl GrayRepDIB_CX(int a1, unsigned __int8 *a2, __int16 *a3, __int16 *a4, int a5)
{
  unsigned __int8 *v5; // ecx
  __int16 v6; // bx
  unsigned __int16 *v8; // esi
  int v9; // edi
  unsigned int v10; // [esp+10h] [ebp+Ch]

  v5 = a2;
  v6 = 0;
  if ( a2 )
  {
    v8 = *(unsigned __int16 **)(a1 + 72);
    v9 = 1;
    v10 = *(_DWORD *)(a1 + 76);
    do
    {
      if ( !--v9 )
      {
        v9 = *v8;
        v6 = GrayIdxWORD[*v5];
        if ( (unsigned int)v8 < v10 )
        {
          ++v8;
          ++v5;
        }
      }
      *a3 = v6;
      a3 = (__int16 *)((char *)a3 + a5);
    }
    while ( a3 != a4 );
  }
}
