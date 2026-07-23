/*
 * XREFs of PsspHandleStreamSizeCalculator @ 0x1801162B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsspHandleStreamSizeCalculator(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  int v9; // edx
  int v10; // eax

  v9 = *a1 + 16;
  *a1 = v9;
  if ( a5 && *a5 )
  {
    v9 += (unsigned __int16)*a5 + 4;
    *a1 = v9;
  }
  v10 = v9;
  if ( a6 && *((_QWORD *)a6 + 1) )
  {
    v10 = v9 + *a6 + 4;
    *a1 = v10;
  }
  if ( a7 )
  {
    v10 += 56;
    *a1 = v10;
  }
  if ( a8 && a9 )
    *a1 = a9 + v10 + 2;
  return 1;
}
