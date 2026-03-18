/*
 * XREFs of ?ArrangeFrameControls@@YGFHHPAUOEMBITMAPSET@@@Z @ 0x912A4
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z @ 0x91206 (-EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge ArrangeFrameControls@<eax>(int a1@<edx>, int a2@<ecx>, int a3, int a4, struct OEMBITMAPSET *a5)
{
  int v5; // ebx
  int v6; // edi
  __int16 v7; // dx
  int v8; // ecx
  _WORD *v9; // esi
  __int16 v10; // ax
  int v14; // [esp+20h] [ebp+8h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 93;
  v9 = (_WORD *)(a3 + 12);
  v14 = 93;
  do
  {
    v10 = v9[2];
    if ( v10 )
    {
      if ( v7 + v10 > a2 )
      {
        v5 += v6;
        v6 = 0;
        v7 = 0;
      }
      if ( a1 )
      {
        *v9 = v7;
        v9[1] = v5;
      }
      if ( (__int16)v6 < (__int16)v9[3] )
        v6 = (unsigned __int16)v9[3];
      v7 += v10;
      v8 = v14;
    }
    v9 += 4;
    v14 = --v8;
  }
  while ( v8 );
  return v5 + v6;
}
