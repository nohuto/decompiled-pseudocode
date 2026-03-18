/*
 * XREFs of ??$_Make_heap_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0P6A_NAEBU123@1@Z@Z @ 0x1802050B0
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x18020584C (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ??$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@_J1$$QEAU123@P6A_NAEBU123@3@Z@Z @ 0x180205544 (--$_Pop_heap_hole_by_index@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@U123@P6A_NAEBU123@0@.c)
 */

__int64 __fastcall std::_Make_heap_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int128 *v9; // rbx
  __int128 v10; // xmm0
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]

  v3 = (unsigned __int128)((a2 - a1) * (__int128)0x4924924924924925LL) >> 64;
  v5 = a1;
  result = (unsigned __int64)v3 >> 63;
  v7 = ((unsigned __int64)v3 >> 63) + (v3 >> 3);
  v8 = v7 >> 1;
  if ( v7 >> 1 > 0 )
  {
    v9 = (__int128 *)(a1 + 28 * v8);
    do
    {
      v9 = (__int128 *)((char *)v9 - 28);
      v10 = *v9;
      v11 = *((_DWORD *)v9 + 6);
      --v8;
      v13 = *((_QWORD *)v9 + 2);
      v14 = v11;
      v12 = v10;
      result = std::_Pop_heap_hole_by_index<EmitterShapes::CPathEmitterArea::AreaTriangle *,EmitterShapes::CPathEmitterArea::AreaTriangle,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
                 v5,
                 v8,
                 v7,
                 (unsigned int)&v12,
                 a3);
    }
    while ( v8 > 0 );
  }
  return result;
}
