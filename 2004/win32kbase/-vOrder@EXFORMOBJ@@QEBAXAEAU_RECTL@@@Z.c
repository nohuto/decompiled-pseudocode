/*
 * XREFs of ?vOrder@EXFORMOBJ@@QEBAXAEAU_RECTL@@@Z @ 0x1C007B8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vOrder(float **this, struct _RECTL *a2)
{
  float *v2; // r8
  LONG *p_right; // rax
  float v5; // xmm1_4
  LONG left; // ecx
  LONG v7; // r9d
  float v8; // xmm1_4
  LONG *p_bottom; // rax
  LONG *p_top; // rdx
  LONG v11; // ecx
  LONG v12; // r8d

  v2 = *this;
  p_right = &a2->right;
  v5 = **this;
  if ( v5 < 0.0 )
  {
    left = a2->left;
    v7 = *p_right;
    if ( a2->left < *p_right )
      goto LABEL_10;
    if ( v5 < 0.0 )
      goto LABEL_3;
  }
  left = a2->left;
  v7 = *p_right;
  if ( a2->left > *p_right )
  {
LABEL_10:
    a2->left = v7;
    *p_right = left;
    v2 = *this;
  }
LABEL_3:
  v8 = v2[3];
  p_bottom = &a2->bottom;
  p_top = &a2->top;
  if ( v8 >= 0.0 )
    goto LABEL_4;
  v11 = *p_top;
  v12 = *p_bottom;
  if ( *p_top < *p_bottom )
    goto LABEL_6;
  if ( v8 >= 0.0 )
  {
LABEL_4:
    v11 = *p_top;
    v12 = *p_bottom;
    if ( *p_top <= *p_bottom )
      return;
LABEL_6:
    *p_top = v12;
    *p_bottom = v11;
  }
}
