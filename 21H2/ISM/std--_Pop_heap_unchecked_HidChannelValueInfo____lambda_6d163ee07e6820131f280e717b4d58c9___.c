/*
 * XREFs of std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5BF8
 * Callers:
 *     std::_Sort_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5D5C (std--_Sort_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5A5C (std--_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131.c)
 */

__int64 __fastcall std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  __int128 v5; // xmm1
  __int64 v6; // r10
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v9[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  v3 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v3 >> 63;
  if ( (__int64)((v3 >> 63) + v3) >= 2 )
  {
    v5 = *(_OWORD *)(a2 - 56);
    v6 = a2 - 72;
    v9[1] = v5;
    v7 = *(_OWORD *)(v6 + 48);
    v9[0] = *(_OWORD *)v6;
    v8 = *(_OWORD *)(v6 + 32);
    v9[3] = v7;
    v9[2] = v8;
    v10 = *(_QWORD *)(v6 + 64);
    *(_OWORD *)v6 = *(_OWORD *)a1;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v6 + 48) = *(_OWORD *)(a1 + 48);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)(a1 + 64);
    return std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___(
             a1,
             0LL,
             (v6 - a1) / 72,
             (__int64)v9);
  }
  return result;
}
