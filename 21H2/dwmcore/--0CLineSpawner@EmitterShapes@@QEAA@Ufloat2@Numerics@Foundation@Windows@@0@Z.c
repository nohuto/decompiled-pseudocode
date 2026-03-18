/*
 * XREFs of ??0CLineSpawner@EmitterShapes@@QEAA@Ufloat2@Numerics@Foundation@Windows@@0@Z @ 0x18022D074
 * Callers:
 *     ??$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@@YA?AV?$unique_ptr@VCLineSpawner@EmitterShapes@@U?$default_delete@VCLineSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0@Z @ 0x18022CD6C (--$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@.c)
 *     ??0CRectangleEdgeSpawner@EmitterShapes@@QEAA@MMMM@Z @ 0x18022D2E4 (--0CRectangleEdgeSpawner@EmitterShapes@@QEAA@MMMM@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 */

__int64 __fastcall EmitterShapes::CLineSpawner::CLineSpawner(__int64 a1, __int64 a2, __int64 a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm0_4
  __int64 result; // rax

  v4 = *((float *)&a3 + 1) - *((float *)&a2 + 1);
  v5 = *(float *)&a3 - *(float *)&a2;
  *(_QWORD *)a1 = &EmitterShapes::CLineSpawner::`vftable';
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  v6 = o_sqrtf_0((float)(v4 * v4) + (float)(v5 * v5));
  result = a1;
  *(float *)(a1 + 24) = COERCE_FLOAT(LODWORD(v4) ^ _xmm) * (float)(1.0 / v6);
  *(float *)(a1 + 28) = v5 * (float)(1.0 / v6);
  return result;
}
