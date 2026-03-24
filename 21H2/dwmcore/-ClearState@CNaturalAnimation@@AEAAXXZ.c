/*
 * XREFs of ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801D79A8
 * Callers:
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18016AFD8 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801D7EDC (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800E110C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 */

void __fastcall CNaturalAnimation::ClearState(CNaturalAnimation *this)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  __int128 v4; // xmm3
  __int64 v5; // r9
  struct _D3DMATRIX *v6; // rcx
  struct _D3DMATRIX *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int64 v12; // r9
  struct _D3DMATRIX v13; // [rsp+20h] [rbp-48h] BYREF

  *((_BYTE *)this + 564) &= ~1u;
  *((_BYTE *)this + 564) |= 0x44u;
  D3DMatrix = CMILMatrix::GetD3DMatrix(&CMILMatrix::Identity, &v13);
  v2 = *(_OWORD *)&D3DMatrix->_21;
  v3 = *(_OWORD *)&D3DMatrix->_31;
  v4 = *(_OWORD *)&D3DMatrix->_41;
  *(_OWORD *)(v5 + 500) = *(_OWORD *)&D3DMatrix->_11;
  *(_OWORD *)(v5 + 516) = v2;
  *(_OWORD *)(v5 + 532) = v3;
  *(_OWORD *)(v5 + 548) = v4;
  v7 = CMILMatrix::GetD3DMatrix(v6, &v13);
  v8 = *(_OWORD *)&v7->_11;
  v9 = *(_OWORD *)&v7->_21;
  v10 = *(_OWORD *)&v7->_31;
  v11 = *(_OWORD *)&v7->_41;
  *(_QWORD *)(v12 + 400) = 0LL;
  *(_BYTE *)(v12 + 564) &= ~2u;
  *(_OWORD *)(v12 + 436) = v8;
  *(_OWORD *)(v12 + 452) = v9;
  *(_OWORD *)(v12 + 468) = v10;
  *(_OWORD *)(v12 + 484) = v11;
}
