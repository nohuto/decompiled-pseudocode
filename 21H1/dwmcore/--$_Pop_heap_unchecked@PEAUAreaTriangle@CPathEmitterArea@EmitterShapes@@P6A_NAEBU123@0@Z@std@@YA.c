/*
 * XREFs of ??$_Pop_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x180209E4C
 * Callers:
 *     ??$_Sort_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x180209FC8 (--$_Sort_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@Y.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_J1$$QEAU123@P6A_NAEBU123@3@Z@Z @ 0x180209D44 (--$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@.c)
 */

unsigned __int64 __fastcall std::_Pop_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // xmm1_8
  __int128 v8; // xmm0
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  v4 = a2 - a1;
  result = (unsigned __int64)((unsigned __int128)(v4 * (__int128)0x4924924924924925LL) >> 64) >> 63;
  if ( v4 / 28 >= 2 )
  {
    v6 = a2 - 28;
    v11 = *(_DWORD *)(a2 - 4);
    v7 = *(_QWORD *)(a2 - 28 + 16);
    v9 = *(_OWORD *)(a2 - 28);
    v8 = *(_OWORD *)a1;
    v10 = v7;
    *(_OWORD *)v6 = v8;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v6 + 24) = *(_DWORD *)(a1 + 24);
    return std::_Pop_heap_hole_by_index<EmitterShapes::CPathEmitterArea::AreaTriangle *,EmitterShapes::CPathEmitterArea::AreaTriangle,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
             a1,
             0LL,
             (a2 - 28 - a1) / 28,
             (int)&v9,
             a3);
  }
  return result;
}
