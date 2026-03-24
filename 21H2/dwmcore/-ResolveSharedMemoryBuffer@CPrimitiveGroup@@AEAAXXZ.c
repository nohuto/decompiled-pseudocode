/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180059F14
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180059D14 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180017840 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180059E10 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x1800F03C4 (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801E325C (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  CSharedSectionBase *v4; // rcx
  __m128i *v5; // rax
  __m128i v6; // xmm1
  __int32 v7; // ebp
  __int64 v8; // xmm4_8
  __m128 v9; // xmm2
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  __int64 v12; // r13
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  bool v19; // zf

  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 11);
  v2 = *((unsigned int *)this + 110);
  v3 = *((unsigned int *)this + 111);
  v4 = (CSharedSectionBase *)*((_QWORD *)this + 54);
  *((_BYTE *)this + 96) = 0;
  v5 = (__m128i *)CSharedSectionBase::ResolveAllocation(v4, v3, v2);
  if ( !v5 )
    goto LABEL_10;
  v6 = v5[1];
  v7 = v5[3].m128i_i32[2];
  v8 = v5[3].m128i_i64[0];
  v9 = (__m128)v5[2];
  v10 = HIDWORD(v6.m128i_i64[0]);
  v11 = HIDWORD(_mm_srli_si128(*v5, 8).m128i_u64[0]);
  v12 = (unsigned int)_mm_cvtsi128_si32(v6);
  v13 = HIDWORD(_mm_srli_si128(v6, 8).m128i_u64[0]);
  v14 = v12 + 60;
  v15 = v11 + v12 + 60;
  v16 = v11;
  if ( v11 + v14 < v14 )
    goto LABEL_10;
  if ( v10 + v15 >= v15
    && v2 >= v10 + v15
    && (v17 = (unsigned int)v11 / 0x94, v18 = v17 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 8)), v18 >= v17)
    && ((_DWORD)v13 == -1 || (unsigned int)v11 >= 0x94 && (unsigned int)v13 <= (int)v11 - 148) )
  {
    *((__m128i *)this + 28) = *v5;
    *((_QWORD *)this + 65) = v12;
    *((__m128i *)this + 29) = v6;
    *((_QWORD *)this + 64) = (char *)v5 + 60;
    *((_QWORD *)this + 66) = (char *)v5 + v14;
    *((__m128 *)this + 30) = v9;
    *((_QWORD *)this + 67) = v11;
    *((_QWORD *)this + 68) = (char *)v5 + v15;
    *((_DWORD *)this + 145) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v9, 4));
    *((_DWORD *)this + 142) = v8;
    *((_QWORD *)this + 62) = v8;
    *((_BYTE *)this + 584) = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v9, 8)) != 0;
    *((_DWORD *)this + 141) = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
    *((_DWORD *)this + 143) = HIDWORD(v8);
    *((_DWORD *)this + 144) = v7;
    *((_DWORD *)this + 126) = v7;
    *((_QWORD *)this + 69) = v10;
    *((_DWORD *)this + 140) = v18;
  }
  else
  {
LABEL_10:
    CPrimitiveGroup::ClearPrimitiveContent(this);
    v16 = *((_QWORD *)this + 67);
  }
  v19 = *((_BYTE *)this + 585) == 0;
  *((_BYTE *)this + 586) = (unsigned int)(v16 / 0x94) < 0x15E;
  if ( !v19 )
    CPrimitiveGroup::BuildHeatMap(this);
}
