/*
 * XREFs of ?vSolidXorRow24@@YGXPAU_ROW@@KJPAEKJK@Z @ 0x248138
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidXorRow24(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  unsigned __int8 *v7; // edi
  struct _ROW *v8; // ebx
  int v9; // esi
  unsigned __int8 *v10; // eax
  bool v11; // zf

  v7 = &a4[a6 * a3];
  if ( a2 )
  {
    v8 = a1;
    do
    {
      v9 = (*((_DWORD *)v8 + 1) - *(_DWORD *)v8) << a7;
      v10 = &v7[3 * (*(_DWORD *)v8 << a7)];
      if ( v9 )
      {
        do
        {
          *v10 ^= a5;
          v10 += 3;
          *((_WORD *)v10 - 1) ^= *(_WORD *)((char *)&a5 + 1);
          --v9;
        }
        while ( v9 );
        v8 = a1;
      }
      v7 += a6;
      v8 = (struct _ROW *)((char *)v8 + 8);
      v11 = a2-- == 1;
      a1 = v8;
    }
    while ( !v11 );
  }
}
