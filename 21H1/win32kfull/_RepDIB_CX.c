/*
 * XREFs of _RepDIB_CX @ 0x1CAC97
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RepDIB_CX(int a1, __int16 *a2, int a3, int a4, int a5)
{
  __int16 *v5; // ecx
  __int16 v6; // dx
  unsigned __int16 *v8; // edi
  int v9; // ebx
  char v10; // al
  unsigned int v11; // [esp+10h] [ebp+Ch]

  v5 = a2;
  v6 = 0;
  if ( a2 )
  {
    v8 = *(unsigned __int16 **)(a1 + 72);
    v9 = 1;
    v11 = *(_DWORD *)(a1 + 76);
    v10 = 0;
    do
    {
      if ( !--v9 )
      {
        v9 = *v8;
        v6 = *v5;
        v10 = *((_BYTE *)v5 + 2);
        if ( (unsigned int)v8 < v11 )
        {
          ++v8;
          v5 = (__int16 *)((char *)v5 + 3);
        }
      }
      *(_WORD *)a3 = v6;
      *(_BYTE *)(a3 + 2) = v10;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
}
