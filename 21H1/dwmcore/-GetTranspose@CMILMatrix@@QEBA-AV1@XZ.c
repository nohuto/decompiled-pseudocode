/*
 * XREFs of ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x180212BCC
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801FA29C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x1801AB6A0 (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

__m128 *__fastcall CMILMatrix::GetTranspose(__m128 *a1)
{
  __m128 *v1; // rax
  __m128 *v2; // r8
  __m128 v3; // xmm1
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 *result; // rax
  __m128 v7[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = Windows::Foundation::Numerics::transpose(v7, a1);
  v2[4].m128_i32[0] = 0;
  v3 = v1[1];
  *v2 = *v1;
  v4 = v1[2];
  v2[1] = v3;
  v5 = v1[3];
  result = v2;
  v2[2] = v4;
  v2[3] = v5;
  return result;
}
