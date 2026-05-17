/*
 * XREFs of PsspHandleStreamSizeCalculator @ 0x4B388290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall PsspHandleStreamSizeCalculator(
        int *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // eax

  v9 = *a1 + 16;
  *a1 = v9;
  v10 = v9;
  if ( a5 )
  {
    v11 = *a5;
    if ( (_WORD)v11 )
    {
      v10 = v9 + v11 + 4;
      *a1 = v10;
    }
  }
  v12 = v10;
  if ( a6 && *((_DWORD *)a6 + 1) )
  {
    v12 = v10 + *a6 + 4;
    *a1 = v12;
  }
  if ( a7 )
  {
    v12 += 56;
    *a1 = v12;
  }
  if ( a8 && a9 )
    *a1 = a9 + v12 + 2;
  return 1;
}
