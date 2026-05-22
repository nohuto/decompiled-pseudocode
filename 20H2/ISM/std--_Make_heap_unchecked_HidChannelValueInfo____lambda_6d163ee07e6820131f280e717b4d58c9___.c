/*
 * XREFs of std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A4DFC
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5A94 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A55FC (std--_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131.c)
 */

__int64 __fastcall std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // [rsp+20h] [rbp-68h]
  _OWORD v14[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h]

  v3 = (unsigned __int128)((a2 - a1) * (__int128)0xE38E38E38E38E39LL) >> 64;
  result = (unsigned __int64)v3 >> 63;
  v7 = ((unsigned __int64)v3 >> 63) + (v3 >> 2);
  v8 = v7 >> 1;
  if ( v7 >> 1 > 0 )
  {
    v9 = a1 + 72 * v8;
    do
    {
      v9 -= 72LL;
      LOBYTE(v13) = a3;
      --v8;
      v10 = *(_OWORD *)(v9 + 16);
      v14[0] = *(_OWORD *)v9;
      v11 = *(_OWORD *)(v9 + 32);
      v14[1] = v10;
      v12 = *(_OWORD *)(v9 + 48);
      v14[2] = v11;
      v15 = *(_QWORD *)(v9 + 64);
      v14[3] = v12;
      result = std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___(
                 a1,
                 v8,
                 v7,
                 v14,
                 v13);
    }
    while ( v8 > 0 );
  }
  return result;
}
