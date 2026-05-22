/*
 * XREFs of std::_Push_heap_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB628
 * Callers:
 *     std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB42C (std--_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155.c)
 * Callees:
 *     _lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator() @ 0x1800CBB98 (_lambda_cc7dd983a7a4322fbd155d916a9399c1_--operator().c)
 */

__int64 __fastcall std::_Push_heap_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 result; // rax

  v5 = a2;
  if ( a3 < a2 )
  {
    do
    {
      if ( !(unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(a1, a1 + 72 * ((v5 - 1) >> 1), a4) )
        break;
      v8 = 9 * v5;
      v5 = v7;
      *(_OWORD *)(a1 + 8 * v8) = *(_OWORD *)v6;
      *(_OWORD *)(a1 + 8 * v8 + 16) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(a1 + 8 * v8 + 32) = *(_OWORD *)(v6 + 32);
      *(_OWORD *)(a1 + 8 * v8 + 48) = *(_OWORD *)(v6 + 48);
      *(_QWORD *)(a1 + 8 * v8 + 64) = *(_QWORD *)(v6 + 64);
    }
    while ( a3 < v7 );
  }
  result = 9 * v5;
  *(_OWORD *)(a1 + 8 * result) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 8 * result + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 8 * result + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 8 * result + 48) = *(_OWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 8 * result + 64) = *(_QWORD *)(a4 + 64);
  return result;
}
