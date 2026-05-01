/*
 * XREFs of sub_18002FF60 @ 0x18002FF60
 * Callers:
 *     sub_18002DA10 @ 0x18002DA10 (sub_18002DA10.c)
 *     sub_18002E7E0 @ 0x18002E7E0 (sub_18002E7E0.c)
 * Callees:
 *     sub_1800300B8 @ 0x1800300B8 (sub_1800300B8.c)
 *     sub_180032A0C @ 0x180032A0C (sub_180032A0C.c)
 *     sub_180034A64 @ 0x180034A64 (sub_180034A64.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall sub_18002FF60(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rbx
  int v8; // xmm0_4
  int v9; // xmm1_4
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // xmm0_4
  _QWORD v15[3]; // [rsp+20h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-38h]
  int v17; // [rsp+3Ch] [rbp-34h]
  int v18; // [rsp+40h] [rbp-30h]
  int v19; // [rsp+44h] [rbp-2Ch]
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+5Ch] [rbp-14h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+68h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 184) )
  {
    if ( **(int **)(a1 + 176) > 1 )
    {
      v4 = operator new(4uLL, (const struct std::nothrow_t *)&unk_18005AF88);
      v5 = v4;
      if ( v4 )
        *v4 = 1;
      else
        v5 = 0LL;
      if ( v5 )
      {
        v6 = *(volatile signed __int32 **)(a1 + 176);
        if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
          j_j__o_free(v6, 4LL);
        *(_QWORD *)(a1 + 176) = v5;
      }
    }
    v7 = a1 + 72;
    if ( a2 )
    {
      v8 = *(_DWORD *)(a2 + 28);
      v9 = *(_DWORD *)(a2 + 32);
      v15[0] = *(_QWORD *)a2;
      v10 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = 0LL;
      v15[1] = v10;
      v11 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = 0LL;
      v15[2] = v11;
      v16 = *(_DWORD *)(a2 + 24);
      v20 = *(_QWORD *)(a2 + 40);
      v21 = *(_QWORD *)(a2 + 48);
      v22 = *(_DWORD *)(a2 + 56);
      v23 = *(_DWORD *)(a2 + 60);
      v12 = *(_QWORD *)(a2 + 64);
      *(_QWORD *)(a2 + 64) = 0LL;
      v24 = v12;
      v13 = *(_QWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 72) = 0LL;
      v17 = v8;
      v14 = *(_DWORD *)(a2 + 36);
      v25 = v13;
      v18 = v9;
      v19 = v14;
      sub_180034A64(a2, v7);
      sub_180034A64(v7, v15);
      sub_180032A0C(v15);
    }
    else if ( v7 )
    {
      sub_1800300B8(v7);
    }
  }
}
