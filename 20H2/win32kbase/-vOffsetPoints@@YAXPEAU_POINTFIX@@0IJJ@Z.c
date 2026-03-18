/*
 * XREFs of ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C013F144
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0087814 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vOffsetPoints(struct _POINTFIX *a1, struct _POINTFIX *a2, int a3, int a4, int a5)
{
  signed __int64 v5; // r10
  FIX y; // ecx

  if ( a3 )
  {
    v5 = (char *)a1 - (char *)a2;
    do
    {
      *(FIX *)((char *)&a2->x + v5) = a4 + a2->x;
      y = a2->y;
      *(_DWORD *)((char *)++a2 + v5 - 4) = a5 + y;
      --a3;
    }
    while ( a3 );
  }
}
