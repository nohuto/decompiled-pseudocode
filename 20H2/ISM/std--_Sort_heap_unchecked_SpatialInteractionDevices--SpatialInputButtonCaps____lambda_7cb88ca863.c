/*
 * XREFs of std::_Sort_heap_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8988
 * Callers:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8A68 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca86370cec.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps___SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C886C (std--_Pop_heap_hole_by_index_SpatialInteractionDevices--SpatialInputButtonCaps___SpatialInteract.c)
 */

unsigned __int64 __fastcall std::_Sort_heap_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // xmm0_8
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]

  v4 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  result = v4 >> 63;
  if ( (__int64)((v4 >> 63) + v4) >= 2 )
  {
    v6 = (__int64 *)(a2 - 12);
    do
    {
      v7 = *v6;
      v10 = *((_DWORD *)v6 + 2);
      v9 = v7;
      *v6 = *(_QWORD *)a1;
      *((_DWORD *)v6 + 2) = *(_DWORD *)(a1 + 8);
      std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps___SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        a1,
        0LL,
        ((__int64)v6 - a1) / 12,
        (__int64)&v9);
      v6 = (__int64 *)((char *)v6 - 12);
      v8 = (__int64)v6 - a1 + 12;
      result = (unsigned __int64)((unsigned __int128)(v8 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    }
    while ( v8 / 12 >= 2 );
  }
  return result;
}
