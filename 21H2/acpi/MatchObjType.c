/*
 * XREFs of MatchObjType @ 0x1C00178E0
 * Callers:
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     Store @ 0x1C0016F00 (Store.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     CopyObject @ 0x1C0069E40 (CopyObject.c)
 * Callees:
 *     <none>
 */

char __fastcall MatchObjType(unsigned int a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 == a2 )
    return 1;
  if ( a1 == 14 )
  {
    if ( a2 == 1 )
      return 1;
    goto LABEL_6;
  }
  if ( a1 )
  {
    if ( a1 <= 4 )
    {
      a1 = 133;
LABEL_7:
      if ( a1 == a2 )
        return 1;
      goto LABEL_8;
    }
    if ( a1 == 5 )
    {
LABEL_6:
      a1 = 134;
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( a2 != 135 || a1 - 133 > 1 )
  {
    if ( a1 )
    {
      if ( a2 )
        return v2;
    }
    else if ( a2 == 134 )
    {
      return v2;
    }
  }
  return 1;
}
