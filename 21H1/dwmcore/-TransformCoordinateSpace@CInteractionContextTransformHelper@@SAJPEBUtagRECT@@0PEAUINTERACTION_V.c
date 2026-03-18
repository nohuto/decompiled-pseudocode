/*
 * XREFs of ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_VELOCITY@@1@Z @ 0x18026BFBC
 * Callers:
 *     ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z @ 0x18026BD30 (-HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionContextTransformHelper::TransformCoordinateSpace(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct INTERACTION_VELOCITY *a3,
        struct INTERACTION_VELOCITY *a4)
{
  LONG left; // esi
  unsigned int v5; // r10d
  LONG right; // ebx
  LONG v7; // edi
  LONG v8; // r11d
  float v9; // xmm2_4

  left = a1->left;
  v5 = 0;
  right = a1->right;
  if ( a1->left == right )
    return (unsigned int)-2147024809;
  if ( a1->top == a1->bottom )
    return (unsigned int)-2147024809;
  v7 = a2->left;
  v8 = a2->right;
  if ( a2->left == v8 || a2->top == a2->bottom )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    if ( a3 != a4 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a3;
      *((_DWORD *)a4 + 4) = *((_DWORD *)a3 + 4);
      v8 = a2->right;
      v7 = a2->left;
      right = a1->right;
      left = a1->left;
    }
    v9 = *((float *)a3 + 1);
    *(float *)a4 = (float)((float)(v8 - v7) * *(float *)a3) / (float)(right - left);
    *((float *)a4 + 1) = (float)((float)(a2->bottom - a2->top) * v9) / (float)(a1->bottom - a1->top);
    *((float *)a4 + 3) = (float)((float)((float)((float)(a2->bottom - a2->top) * *((float *)a3 + 3))
                                       / (float)(a1->bottom - a1->top))
                               + (float)((float)((float)(a2->right - a2->left) * *((float *)a3 + 3))
                                       / (float)(a1->right - a1->left)))
                       * 0.5;
  }
  return v5;
}
