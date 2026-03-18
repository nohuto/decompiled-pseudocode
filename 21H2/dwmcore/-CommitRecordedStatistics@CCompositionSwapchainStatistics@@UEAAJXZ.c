/*
 * XREFs of ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJXZ @ 0x18025DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@QEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x18025DACC (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::CommitRecordedStatistics(CCompositionSwapchainStatistics *this)
{
  __int64 v1; // rax
  unsigned int v2; // r14d
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // rsi
  void *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-29h] BYREF
  __int64 v17; // [rsp+40h] [rbp-19h]
  int v18; // [rsp+48h] [rbp-11h] BYREF
  GUID v19; // [rsp+50h] [rbp-9h] BYREF
  __int128 v20; // [rsp+60h] [rbp+7h]
  _QWORD v21[3]; // [rsp+70h] [rbp+17h] BYREF
  int v22; // [rsp+88h] [rbp+2Fh]

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  if ( v1 == *((_QWORD *)this + 4) )
  {
LABEL_15:
    *((_QWORD *)this + 4) = v1;
    return v2;
  }
  v17 = 0LL;
  v18 = 2;
  v16 = 0LL;
  LODWORD(v20) = 4;
  *((_QWORD *)&v20 + 1) = &v18;
  v19 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>((const void **)&v16, 0LL, &v19);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
  v5 = *((_QWORD *)&v16 + 1);
  v6 = v17;
  v21[0] = v4;
  v21[1] = *((_QWORD *)this + 9);
  v21[2] = *((_QWORD *)this + 6);
  v7 = -286331153 * ((__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 2);
  v19 = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
  LODWORD(v20) = 32;
  v22 = v7;
  *((_QWORD *)&v20 + 1) = v21;
  if ( *((_QWORD *)&v16 + 1) == v17 )
  {
    std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
      (const void **)&v16,
      *((_BYTE **)&v16 + 1),
      &v19);
    v8 = *((_QWORD *)&v16 + 1);
    v6 = v17;
  }
  else
  {
    **((_OWORD **)&v16 + 1) = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
    *(_OWORD *)(v5 + 16) = v20;
    v8 = v5 + 32;
    *((_QWORD *)&v16 + 1) = v8;
  }
  v9 = *((_QWORD *)this + 4);
  for ( i = *((_QWORD *)this + 3); i != v9; i += 60LL )
  {
    LODWORD(v20) = 60;
    *((_QWORD *)&v20 + 1) = i;
    v19 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
    if ( v8 == v6 )
    {
      std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
        (const void **)&v16,
        (_BYTE *)v8,
        &v19);
      v8 = *((_QWORD *)&v16 + 1);
      v6 = v17;
    }
    else
    {
      *(GUID *)v8 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
      *(_OWORD *)(v8 + 16) = v20;
      v8 += 32LL;
      *((_QWORD *)&v16 + 1) = v8;
    }
  }
  v11 = (void *)v16;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 8) + 56LL))(
          *((_QWORD *)this + 8),
          (v8 - (__int64)v16) >> 5,
          v16);
  v2 = v12;
  if ( v12 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = v14;
    if ( v11 )
      std::_Deallocate<16,0>(v11, (v6 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFE0uLL);
    v1 = *((_QWORD *)this + 3);
    goto LABEL_15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xCDu);
  if ( v11 )
    std::_Deallocate<16,0>(v11, (v6 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFE0uLL);
  return v2;
}
