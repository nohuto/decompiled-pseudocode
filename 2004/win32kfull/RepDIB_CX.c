/*
 * XREFs of RepDIB_CX @ 0x1C00E5E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RepDIB_CX(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  char v6; // r10
  unsigned __int16 *v7; // r11
  unsigned __int64 v8; // rdi
  int v9; // ecx

  result = 0LL;
  v6 = 0;
  if ( a2 )
  {
    v7 = *(unsigned __int16 **)(a1 + 88);
    v8 = *(_QWORD *)(a1 + 96);
    v9 = 1;
    do
    {
      if ( !--v9 )
      {
        v9 = *v7;
        result = *a2;
        v6 = *((_BYTE *)a2 + 2);
        if ( (unsigned __int64)v7 < v8 )
        {
          ++v7;
          a2 = (unsigned __int16 *)((char *)a2 + 3);
        }
      }
      *(_WORD *)a3 = result;
      *(_BYTE *)(a3 + 2) = v6;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
  return result;
}
