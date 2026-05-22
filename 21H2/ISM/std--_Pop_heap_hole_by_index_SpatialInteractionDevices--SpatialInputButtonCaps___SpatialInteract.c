/*
 * XREFs of std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps___SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8CCC
 * Callers:
 *     std::_Make_heap_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C891C (std--_Make_heap_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca863.c)
 *     std::_Sort_heap_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8DE8 (std--_Sort_heap_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca863.c)
 * Callees:
 *     _lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator() @ 0x1800C92B8 (_lambda_7cb88ca86370cec64ac2ea824bd2a3de_--operator().c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps___SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // r11
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 result; // rax

  v5 = (a3 - 1) >> 1;
  v7 = a1;
  v8 = a2;
  while ( 1 )
  {
    v12 = a2;
    if ( a2 >= v5 )
      break;
    v9 = lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(a1, v7 + 12 * (2 * a2 + 2), v7 + 12 * (2 * a2 + 2) - 12);
    a1 = 3 * v10;
    a2 = v11 + (v9 ^ 1LL) + 1;
    *(_QWORD *)(v7 + 4 * a1) = *(_QWORD *)(v7 + 12 * a2);
    *(_DWORD *)(v7 + 4 * a1 + 8) = *(_DWORD *)(v7 + 12 * a2 + 8);
  }
  if ( a2 == v5 && (a3 & 1) == 0 )
  {
    a1 = 3 * a2;
    *(_QWORD *)(v7 + 4 * a1) = *(_QWORD *)(v7 + 12 * a3 - 12);
    v12 = a3 - 1;
    *(_DWORD *)(v7 + 4 * a1 + 8) = *(_DWORD *)(v7 + 12 * a3 - 4);
  }
  if ( v8 < v12 )
  {
    do
    {
      if ( !(unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(a1, v7 + 12 * ((v12 - 1) >> 1), a4) )
        break;
      a1 = 3 * v12;
      *(_QWORD *)(v7 + 4 * a1) = *(_QWORD *)v13;
      v12 = v14;
      *(_DWORD *)(v7 + 4 * a1 + 8) = *(_DWORD *)(v13 + 8);
    }
    while ( v8 < v14 );
  }
  v15 = 3 * v12;
  *(_QWORD *)(v7 + 4 * v15) = *(_QWORD *)a4;
  result = *(unsigned int *)(a4 + 8);
  *(_DWORD *)(v7 + 4 * v15 + 8) = result;
  return result;
}
