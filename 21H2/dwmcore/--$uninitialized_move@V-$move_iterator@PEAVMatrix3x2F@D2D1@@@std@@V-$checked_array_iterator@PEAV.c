/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1802AD838
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180096A60 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x1800AD718 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r11
  signed __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a1;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 3);
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v6 = a4[2] < (unsigned __int64)(0x5555555555555555LL * ((a3 - a2) >> 3));
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v7 = *a4;
  v8 = *a4 + 24 * a4[2];
  while ( a2 != a3 )
  {
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(a2 + 16);
    v8 += 24LL;
    a2 += 24LL;
  }
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * ((v8 - v7) >> 3);
  result = v4;
  v10 = a4[2];
  *(_OWORD *)v4 = *(_OWORD *)a4;
  *(_QWORD *)(v4 + 16) = v10;
  return result;
}
