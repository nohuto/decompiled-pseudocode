/*
 * XREFs of ?DrawRegionalShadow@@YGXPAXJJ@Z @ 0x19CBA0
 * Callers:
 *     ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18 (-GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge DrawRegionalShadow(int a1@<edx>, int a2@<ecx>, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // ebx
  int i; // ecx
  int v10; // [esp+8h] [ebp-4h]
  unsigned int v11; // [esp+14h] [ebp+8h]

  v5 = a3;
  if ( a3 > 0 )
  {
    v6 = -4 * a1;
    v7 = (_DWORD *)(a2 + a1 * (4 * a3 - 4));
    do
    {
      if ( a1 > 0 )
      {
        v8 = v7;
        v10 = a1;
        do
        {
          for ( i = 0; i < 5; ++i )
          {
            v11 = (unsigned __int8)byte_25893C[i];
            if ( *v8 == (v11 | ((v11 | (v11 << 8)) << 8)) )
              *v8 = (255 - v11) << 24;
          }
          ++v8;
          --v10;
        }
        while ( v10 );
        v6 = -4 * a1;
      }
      v7 = (_DWORD *)((char *)v7 + v6);
      --v5;
    }
    while ( v5 );
  }
}
