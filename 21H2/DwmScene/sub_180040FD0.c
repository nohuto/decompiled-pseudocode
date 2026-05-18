/*
 * XREFs of sub_180040FD0 @ 0x180040FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180040FD0(__int64 a1, _QWORD *a2, int *a3, int *a4)
{
  int v5; // edi
  int v6; // esi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  volatile signed __int32 *v11; // rbx
  signed __int32 v12; // eax
  bool v13; // zf
  size_t v14; // [rsp+40h] [rbp-39h]
  int v15[2]; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-21h]
  int *v17; // [rsp+60h] [rbp-19h]
  __int128 v18; // [rsp+68h] [rbp-11h] BYREF
  __int128 v19; // [rsp+78h] [rbp-1h]
  _QWORD v20[3]; // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+2Fh]

  *(_QWORD *)v15 = *a2;
  v16 = (volatile signed __int32 *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v17 = v15;
  v5 = *a4;
  v6 = *a3;
  v7 = (_QWORD *)sub_180067F58(*(_QWORD *)(a1 + 8), v20);
  v8 = std::string::append(v7, &dword_180143C38, 7uLL);
  v19 = 0uLL;
  v18 = *(_OWORD *)v8;
  v19 = *((_OWORD *)v8 + 1);
  v8[2] = 0LL;
  v8[3] = 15LL;
  *(_BYTE *)v8 = 0;
  sub_180068194(*(_QWORD *)v15, &v18);
  if ( v21 >= 0x10 )
  {
    v9 = v20[0];
    if ( v21 + 1 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v20[0] - 8LL);
      if ( (unsigned __int64)(v20[0] - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v21 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  LODWORD(v14) = 0;
  result = sub_18009FAA4(
             v15[0],
             **(_DWORD **)(a1 + 16),
             **(_DWORD **)(a1 + 24),
             0,
             v6,
             0,
             (unsigned __int8)v5 | **(_BYTE **)(a1 + 32),
             0LL,
             v14,
             **(_QWORD **)(a1 + 40));
  v11 = v16;
  if ( v16 )
  {
    v12 = _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF);
    v13 = v12 == 1;
    result = (unsigned int)(v12 - 1);
    if ( v13 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
