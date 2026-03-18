/*
 * XREFs of ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x180211518
 * Callers:
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801F2760 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall StretchAlign::Arrange(
        StretchAlign *this,
        struct D2D_RECT_F *__return_ptr retstr,
        const struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5)
{
  int v5; // r10d
  float v6; // xmm0_4
  float width; // xmm2_4
  float height; // xmm3_4
  struct D2D_RECT_F v9; // xmm1
  struct D2D_RECT_F *result; // rax
  struct D2D_RECT_F v11; // [rsp+0h] [rbp-20h]
  __m128 v12; // [rsp+0h] [rbp-20h]
  struct D2D_RECT_F v13; // [rsp+10h] [rbp-10h]
  __int64 v14; // [rsp+30h] [rbp+10h]

  v14 = 0LL;
  v5 = *((_DWORD *)this + 2);
  if ( !v5 )
  {
    v14 = (__int64)*a3;
    goto LABEL_9;
  }
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v6 = a3->width / a3->height;
      width = a4->width;
      height = a4->width / v6;
      if ( height >= a4->height != (v5 == 3) )
      {
        height = a4->height;
        width = height * v6;
      }
      goto LABEL_10;
    }
LABEL_9:
    width = *(float *)&v14;
    height = *((float *)&v14 + 1);
LABEL_10:
    v12.m128_f32[1] = (float)(a4->height - height) * *((float *)this + 1);
    v12.m128_f32[0] = (float)(a4->width - width) * *(float *)this;
    v12.m128_f32[3] = v12.m128_f32[1] + height;
    v12.m128_f32[2] = width + v12.m128_f32[0];
    v13.left = v12.m128_f32[0];
    LODWORD(v13.right) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
    LODWORD(v13.bottom) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    LODWORD(v13.top) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    v12.m128_u64[0] = __PAIR64__(
                        COERCE_UNSIGNED_INT(fmaxf(0.0, v13.top)),
                        COERCE_UNSIGNED_INT(fmaxf(0.0, v12.m128_f32[0])));
    v12.m128_u64[1] = __PAIR64__(
                        COERCE_UNSIGNED_INT(fminf(v13.bottom, a4->height)),
                        COERCE_UNSIGNED_INT(fminf(v13.right, a4->width)));
    v9 = (struct D2D_RECT_F)v12;
    if ( a5 )
      *a5 = v13;
    goto LABEL_12;
  }
  *(_QWORD *)&v11.left = 0LL;
  *(struct D2D_SIZE_F *)&v11.right = *a4;
  v9 = v11;
  if ( a5 )
    *a5 = v11;
LABEL_12:
  result = retstr;
  *retstr = v9;
  return result;
}
