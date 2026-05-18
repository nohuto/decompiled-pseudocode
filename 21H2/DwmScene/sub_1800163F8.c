/*
 * XREFs of sub_1800163F8 @ 0x1800163F8
 * Callers:
 *     sub_1800189EC @ 0x1800189EC (sub_1800189EC.c)
 * Callees:
 *     sub_18000FE60 @ 0x18000FE60 (sub_18000FE60.c)
 */

__int64 __fastcall sub_1800163F8(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        float *a8)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v15[4]; // [rsp+40h] [rbp-40h] BYREF
  int v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18[4]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v19; // [rsp+70h] [rbp-10h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<RenderOutputDwm>::`vftable';
  v9 = *a4;
  *a4 = 0LL;
  *(_QWORD *)v16 = v9;
  v10 = a4[1];
  a4[1] = 0LL;
  v11 = a3[1];
  v17 = v10;
  *(_OWORD *)v15 = 0LL;
  if ( v11 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    v11 = a3[1];
  }
  v12 = *a2;
  v13 = a2[1];
  *(_QWORD *)v15 = *a3;
  *(_OWORD *)v18 = v12;
  *(_QWORD *)&v15[2] = v11;
  v19 = v13;
  sub_18000FE60(a1 + 16, v18, v15, v16, *a5, *a6, *a7, *a8);
  return a1;
}
