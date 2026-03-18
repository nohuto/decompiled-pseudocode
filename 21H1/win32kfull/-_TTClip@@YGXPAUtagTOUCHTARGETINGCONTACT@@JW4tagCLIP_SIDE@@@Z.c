/*
 * XREFs of ?_TTClip@@YGXPAUtagTOUCHTARGETINGCONTACT@@JW4tagCLIP_SIDE@@@Z @ 0x1B85B8
 * Callers:
 *     _TouchTargetingClipContact@28 @ 0x1B8A8D (_TouchTargetingClipContact@28.c)
 * Callees:
 *     <none>
 */

int __fastcall _TTClip(int *a1, int a2, int a3)
{
  int result; // eax

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        a1[2] = a2;
        break;
      case 2:
        a1[1] = a2;
        break;
      case 3:
        a1[3] = a2;
        break;
    }
  }
  else
  {
    *a1 = a2;
  }
  result = *a1;
  if ( *a1 >= a1[2] || (result = a1[1], result >= a1[3]) )
    a1[45] = 0;
  return result;
}
