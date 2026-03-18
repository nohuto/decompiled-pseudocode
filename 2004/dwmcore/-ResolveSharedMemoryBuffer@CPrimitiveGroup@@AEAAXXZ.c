/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18009F6C0
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18009E7F0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180019130 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x18009E8EC (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x18009E914 (-ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801E45FC (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  CSharedSectionBase *v4; // rcx
  __m128i *v5; // rax
  CPrimitiveGroup *v6; // rcx
  __m128i *v7; // rdi
  __int64 v8; // xmm9_8
  char *v9; // r15
  __int32 v10; // ebp
  __m128i v11; // xmm6
  __m128i v12; // xmm8
  __m128 v13; // xmm7
  unsigned int v14; // r8d
  __int64 v15; // rsi
  unsigned __int64 v16; // r10
  unsigned int v17; // r9d
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r11
  __int64 v20; // r14
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r12
  unsigned int v23; // ecx

  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 11);
  v2 = *((unsigned int *)this + 110);
  v3 = *((unsigned int *)this + 111);
  v4 = (CSharedSectionBase *)*((_QWORD *)this + 54);
  *((_BYTE *)this + 96) = 0;
  v5 = (__m128i *)CSharedSectionBase::ResolveAllocation(v4, v3, v2);
  v7 = v5;
  if ( !v5 )
    goto LABEL_14;
  v8 = v5[3].m128i_i64[0];
  v9 = &v5[3].m128i_i8[12];
  v10 = v5[3].m128i_i32[2];
  v11 = v5[1];
  v12 = *v5;
  v13 = (__m128)v5[2];
  v14 = _mm_cvtsi128_si32(v11);
  v15 = v14;
  if ( (int)CPrimitiveGroup::ValidateBatches(v6, &v5[3].m128i_i8[12], v14) < 0 )
    goto LABEL_14;
  v16 = v15 + 60;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
  v18 = v17;
  v19 = v17 + v16;
  if ( v19 >= v16
    && (v20 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)), v20 + v19 >= v19)
    && *((unsigned int *)this + 110) >= v20 + v19
    && (v21 = v17 / 0x94, v22 = v21 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)), v22 >= v21)
    && ((v23 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)), v23 == -1) || v17 >= 0x94 && v23 <= v17 - 148) )
  {
    *((__m128i *)this + 28) = v12;
    *((_QWORD *)this + 64) = v9;
    *((_QWORD *)this + 66) = (char *)v7 + v16;
    *((__m128i *)this + 29) = v11;
    *((_QWORD *)this + 65) = v15;
    *((__m128 *)this + 30) = v13;
    *((_QWORD *)this + 68) = (char *)v7 + v19;
    *((_DWORD *)this + 145) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 4));
    *((_DWORD *)this + 142) = v8;
    *((_QWORD *)this + 62) = v8;
    *((_BYTE *)this + 584) = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) != 0;
    *((_DWORD *)this + 141) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
    *((_DWORD *)this + 143) = HIDWORD(v8);
    *((_DWORD *)this + 144) = v10;
    *((_DWORD *)this + 126) = v10;
    *((_QWORD *)this + 67) = v17;
    *((_QWORD *)this + 69) = v20;
    *((_DWORD *)this + 140) = v22;
  }
  else
  {
LABEL_14:
    *((_DWORD *)this + 145) = -1;
    *((_QWORD *)this + 67) = 0LL;
    *(_QWORD *)((char *)this + 572) = 0LL;
    *((_DWORD *)this + 142) = 0;
    v18 = *((_QWORD *)this + 67);
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
    *((_QWORD *)this + 70) = 0LL;
    *((_BYTE *)this + 584) = 0;
  }
  *((_BYTE *)this + 586) = (unsigned int)(v18 / 0x94) < 0x15E;
  if ( *((_BYTE *)this + 585) )
    CPrimitiveGroup::BuildHeatMap(this);
}
