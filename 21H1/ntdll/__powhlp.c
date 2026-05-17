/*
 * XREFs of __powhlp @ 0x4B2FB3BE
 * Callers:
 *     sub_4B2F5C94 @ 0x4B2F5C94 (sub_4B2F5C94.c)
 *     sub_4B2FB324 @ 0x4B2FB324 (sub_4B2FB324.c)
 * Callees:
 *     __d_inttype @ 0x4B2FB356 (__d_inttype.c)
 */

int __cdecl _powhlp(long double a1, double a2, double *a3)
{
  int v3; // esi
  long double v4; // st7
  double v5; // st7
  bool v6; // c3
  double *v7; // eax
  int v8; // eax

  v3 = 0;
  v4 = fabs(a1);
  if ( HIDWORD(a2) == 2146435072 )
  {
    if ( !LODWORD(a2) )
    {
      if ( v4 <= 1.0 )
      {
        v6 = 1.0 == v4;
        v5 = 1.0;
        v7 = a3;
        if ( !v6 )
          v5 = 0.0;
        goto LABEL_26;
      }
      goto LABEL_4;
    }
  }
  else if ( a2 == -INFINITY )
  {
    if ( v4 > 1.0 )
    {
      v5 = 0.0;
      goto LABEL_25;
    }
    v7 = a3;
    if ( v4 < 1.0 )
    {
      v5 = INFINITY;
LABEL_26:
      *v7 = v5;
      return v3;
    }
    *a3 = NAN;
    return 1;
  }
  if ( HIDWORD(a1) == 2146435072 )
  {
    if ( !LODWORD(a1) )
    {
      v5 = 0.0;
      if ( a2 <= 0.0 )
      {
        v7 = a3;
        if ( a2 >= 0.0 )
          v5 = 1.0;
        goto LABEL_26;
      }
LABEL_4:
      v5 = INFINITY;
LABEL_25:
      v7 = a3;
      goto LABEL_26;
    }
  }
  else if ( a1 == -INFINITY )
  {
    v8 = _d_inttype(a2);
    v5 = 0.0;
    if ( a2 <= 0.0 )
    {
      if ( a2 >= 0.0 )
      {
        *a3 = 1.0;
        return v3;
      }
      if ( v8 == 1 )
        v5 = -0.0;
    }
    else
    {
      v5 = INFINITY;
      if ( v8 == 1 )
        v5 = -INFINITY;
    }
    goto LABEL_25;
  }
  return v3;
}
