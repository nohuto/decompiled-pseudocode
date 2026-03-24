/*
 * XREFs of _lambda_d726b1e7ec95932be2432bf4c2269415_::operator() @ 0x1800EAB64
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800EB370 (std--_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsi_ea_1800EB370.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@QEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x1800EA990 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1800EAB34 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800EAD40 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 */

char __fastcall lambda_d726b1e7ec95932be2432bf4c2269415_::operator()(
        CProcessResourceAttributionReporter::HighResourceUsageReport ***a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        _DWORD *a7)
{
  int v8; // esi
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  CProcessResourceAttributionReporter::HighResourceUsageReport **v13; // rax
  CProcessResourceAttributionReporter::HighResourceUsageReport *v14; // rcx
  _OWORD *v15; // rax
  CProcessResourceAttributionReporter::HighResourceUsageReport **v16; // rdx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  CProcessResourceAttributionReporter::HighResourceUsageReport *v26; // [rsp+28h] [rbp-81h] BYREF
  int v27; // [rsp+30h] [rbp-79h]
  __int64 v28; // [rsp+38h] [rbp-71h]
  _OWORD v29[4]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v30; // [rsp+88h] [rbp-21h]
  __int128 v31; // [rsp+98h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-1h]

  v28 = a4;
  v27 = a3;
  v8 = a7[20];
  v9 = a7[16];
  v10 = a7[19];
  v11 = a7[15];
  v12 = a7[18];
  LODWORD(v26) = a7[17];
  LOBYTE(v13) = (int)v26 > 5000 || v8 > 1000 || v9 > 10000 || v10 > 200 || v11 > 500 || v12 > 1000;
  if ( (_BYTE)v13 || (a6 & 0x20) != 0 )
  {
    memset_0(v29, 0, 0x68uLL);
    LODWORD(v29[0]) = v27;
    *((_QWORD *)&v29[0] + 1) = v28;
    LODWORD(v32) = v8;
    *(_QWORD *)&v31 = __PAIR64__((unsigned int)v26, v9);
    HIDWORD(v30) = v11;
    *((_QWORD *)&v31 + 1) = __PAIR64__(v10, v12);
    HIDWORD(v32) = (a6 & 0x20) != 0;
    v13 = *a1;
    v14 = **a1;
    if ( !v14 )
    {
      v15 = operator new(0x30uLL);
      if ( v15 )
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        *((_QWORD *)v15 + 3) = 0LL;
        *((_QWORD *)v15 + 4) = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      v16 = *a1;
      v26 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)v15;
      if ( v16 != &v26 )
      {
        v17 = *v16;
        v26 = 0LL;
        *v16 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)v15;
        if ( v17 )
          CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
            v17,
            (unsigned int)v16);
      }
      std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(
        &v26,
        (unsigned int)v16);
      v13 = *a1;
      v14 = **a1;
    }
    v18 = *((_QWORD *)v14 + 3);
    v19 = (__int64)v14 + 16;
    if ( *(_QWORD *)(v19 + 16) == v18 )
    {
      LOBYTE(v13) = std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
                      (const void **)v19,
                      (_BYTE *)v18,
                      (__int64)v29);
    }
    else
    {
      v20 = v29[1];
      *(_OWORD *)v18 = v29[0];
      v21 = v29[2];
      *(_OWORD *)(v18 + 16) = v20;
      v22 = v29[3];
      *(_OWORD *)(v18 + 32) = v21;
      v23 = v30;
      *(_OWORD *)(v18 + 48) = v22;
      v24 = v31;
      *(_OWORD *)(v18 + 64) = v23;
      *(_QWORD *)&v23 = v32;
      *(_OWORD *)(v18 + 80) = v24;
      *(_QWORD *)(v18 + 96) = v23;
      *(_QWORD *)(v19 + 8) += 104LL;
    }
  }
  return (char)v13;
}
