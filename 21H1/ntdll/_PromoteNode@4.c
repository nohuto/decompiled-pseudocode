/*
 * XREFs of _PromoteNode@4 @ 0x4B2A7176
 * Callers:
 *     _RebalanceNode@4 @ 0x4B2A70E5 (_RebalanceNode@4.c)
 * Callees:
 *     <none>
 */

int *__thiscall PromoteNode(int **this)
{
  int *result; // eax
  int *v2; // edx
  int **v3; // esi
  int **v4; // esi

  result = *this;
  v2 = (int *)**this;
  if ( (int **)(*this)[1] == this )
  {
    v3 = (int **)this[2];
    result[1] = (int)v3;
    if ( v3 )
      *v3 = result;
    this[2] = result;
  }
  else
  {
    v4 = (int **)this[1];
    result[2] = (int)v4;
    if ( v4 )
      *v4 = result;
    this[1] = result;
  }
  *result = (int)this;
  if ( (int *)v2[1] == result )
    v2[1] = (int)this;
  else
    v2[2] = (int)this;
  *this = v2;
  return result;
}
