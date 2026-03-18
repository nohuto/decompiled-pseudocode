/*
 * XREFs of ?ResolveSharedMemoryBufferOld@CPrimitiveGroup@@AEAAXXZ @ 0x18010476C
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800DF3F0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180011E70 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800469AC (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x1800E8934 (-ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180231ED0 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBufferOld(CPrimitiveGroup *this)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  CSharedSectionBase *v4; // rcx
  __m128i *v5; // rax
  CPrimitiveGroup *v6; // rcx
  __m128i *v7; // rdi
  __int64 v8; // xmm9_8
  char *v9; // r12
  __int32 v10; // r15d
  __m128i v11; // xmm6
  __m128i v12; // xmm8
  __m128 v13; // xmm7
  unsigned int v14; // r8d
  __int64 v15; // rsi
  unsigned __int64 v16; // r9
  unsigned int v17; // r8d
  unsigned __int64 v18; // r10
  __int64 v19; // r14
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  unsigned int v22; // ecx

  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 11);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 12);
  v2 = *((unsigned int *)this + 100);
  v3 = *((unsigned int *)this + 101);
  v4 = (CSharedSectionBase *)*((_QWORD *)this + 49);
  *((_BYTE *)this + 104) = 0;
  v5 = (__m128i *)CSharedSectionBase::ResolveAllocation(v4, v3, v2);
  v7 = v5;
  if ( !v5 )
    goto LABEL_12;
  v8 = v5[3].m128i_i64[0];
  v9 = &v5[3].m128i_i8[12];
  v10 = v5[3].m128i_i32[2];
  v11 = v5[1];
  v12 = *v5;
  v13 = (__m128)v5[2];
  v14 = _mm_cvtsi128_si32(v11);
  v15 = v14;
  if ( (int)CPrimitiveGroup::ValidateBatches(v6, &v5[3].m128i_i8[12], v14) < 0 )
    goto LABEL_12;
  v16 = v15 + 60;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
  v18 = v17 + v16;
  if ( v18 >= v16
    && (v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)), v19 + v18 >= v18)
    && *((unsigned int *)this + 100) >= v19 + v18
    && (v20 = v17 / 0x94, v21 = v20 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)), v21 >= v20)
    && ((v22 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)), v22 == -1) || v17 >= 0x94 && v22 <= v17 - 148) )
  {
    *(__m128i *)((char *)this + 408) = v12;
    *((_QWORD *)this + 59) = v9;
    *((_QWORD *)this + 61) = (char *)v7 + v16;
    *(__m128i *)((char *)this + 424) = v11;
    *((_QWORD *)this + 60) = v15;
    *(__m128 *)((char *)this + 440) = v13;
    *((_QWORD *)this + 63) = (char *)v7 + v18;
    *((_DWORD *)this + 135) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 4));
    *((_DWORD *)this + 132) = v8;
    *((_QWORD *)this + 57) = v8;
    *((_BYTE *)this + 544) = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) != 0;
    *((_DWORD *)this + 131) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
    *((_DWORD *)this + 133) = HIDWORD(v8);
    *((_DWORD *)this + 134) = v10;
    *((_DWORD *)this + 116) = v10;
    *((_QWORD *)this + 62) = v17;
    *((_QWORD *)this + 64) = v19;
    *((_DWORD *)this + 130) = v21;
  }
  else
  {
LABEL_12:
    *((_DWORD *)this + 135) = -1;
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_BYTE *)this + 544) = 0;
    *(_QWORD *)((char *)this + 532) = 0LL;
    *((_DWORD *)this + 132) = 0;
  }
  if ( *((_BYTE *)this + 545) )
    CPrimitiveGroup::BuildHeatMap(this);
}
