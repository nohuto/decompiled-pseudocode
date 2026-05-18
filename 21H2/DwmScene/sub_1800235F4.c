/*
 * XREFs of sub_1800235F4 @ 0x1800235F4
 * Callers:
 *     sub_180026D08 @ 0x180026D08 (sub_180026D08.c)
 * Callees:
 *     sub_180043C20 @ 0x180043C20 (sub_180043C20.c)
 */

__int64 __fastcall sub_1800235F4(__int64 a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic>::`vftable';
  v5 = a4[1];
  v11 = 0LL;
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    v5 = a4[1];
  }
  *(_QWORD *)&v11 = *a4;
  v6 = *a3;
  *a3 = 0LL;
  v12[0] = v6;
  v7 = a3[1];
  a3[1] = 0LL;
  v8 = *a2;
  *((_QWORD *)&v11 + 1) = v5;
  v9 = a2[1];
  v12[1] = v7;
  v13[0] = v8;
  v13[1] = v9;
  ((void (__fastcall *)(__int64, _OWORD *, _QWORD *, __int128 *))sub_180043C20)(a1 + 16, v13, v12, &v11);
  return a1;
}
