/*
 * XREFs of OffsetBaseVertices @ 0x1800BBD6C
 * Callers:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800BB7C4 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedS.c)
 * Callees:
 *     <none>
 */

void __fastcall OffsetBaseVertices(char a1, char a2, __int64 a3, __int64 *a4)
{
  float v7; // xmm2_4
  unsigned __int64 v8; // r9
  unsigned __int64 i; // rcx
  float *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  bool v13; // zf
  float v14; // xmm0_4

  if ( a2 )
    v7 = FLOAT_0_5;
  else
    v7 = FLOAT_N0_5;
  v8 = *(unsigned int *)(a3 + 12);
  for ( i = 0LL; i < v8; *(float *)(v11 + v12 + 8) = v14 )
  {
    v10 = (float *)(*(_QWORD *)a3 + (int)i * *(_DWORD *)(a3 + 8));
    v11 = (int)i * *((_DWORD *)a4 + 2);
    v12 = *a4;
    if ( a1 )
    {
      *v10 = v7 + *(float *)(v11 + v12);
      v13 = v10[1] == *(float *)(v11 + v12 + 4);
    }
    else
    {
      v10[1] = v7 + *(float *)(v11 + v12 + 4);
      v13 = *v10 == *(float *)(v11 + v12);
    }
    if ( v13 )
      v14 = FLOAT_0_5;
    else
      v14 = FLOAT_0_70710677;
    ++i;
  }
}
