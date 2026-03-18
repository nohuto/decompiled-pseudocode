/*
 * XREFs of _lambda_d726b1e7ec95932be2432bf4c2269415_::operator() @ 0x1800DBB9C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800E1710 (std--_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_uns.c)
 * Callees:
 *     ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800245C0 (--_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@QEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x1800DE018 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
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
  int v7; // r13d
  int v8; // edi
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  _OWORD *v13; // rax
  int v14; // ebx
  bool v15; // zf
  CProcessResourceAttributionReporter::HighResourceUsageReport **v16; // rbx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  CProcessResourceAttributionReporter::HighResourceUsageReport ***v27; // [rsp+30h] [rbp-79h] BYREF
  __int64 v28; // [rsp+38h] [rbp-71h]
  _OWORD v29[4]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v30; // [rsp+88h] [rbp-21h]
  __int128 v31; // [rsp+98h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-1h]

  v28 = a4;
  v27 = a1;
  v7 = a7[17];
  v8 = a7[20];
  v9 = a7[16];
  v10 = a7[19];
  v11 = a7[15];
  v12 = a7[18];
  LOBYTE(v13) = v7 > 5000 || v11 > 500 || v8 > 1000 || v9 > 10000 || v10 > 200 || v12 > 1000;
  v14 = a6 & 0x20;
  if ( (_BYTE)v13 || (a6 & 0x20) != 0 )
  {
    memset_0(v29, 0, 0x68uLL);
    LODWORD(v29[0]) = a3;
    *((_QWORD *)&v29[0] + 1) = v28;
    LODWORD(v32) = v8;
    v15 = v14 == 0;
    LOBYTE(v13) = v14 != 0;
    *(_QWORD *)&v31 = __PAIR64__(v7, v9);
    HIDWORD(v30) = v11;
    v16 = *v27;
    *((_QWORD *)&v31 + 1) = __PAIR64__(v10, v12);
    HIDWORD(v32) = !v15;
    if ( *v16 )
      goto LABEL_15;
    v13 = operator new(0x30uLL);
    if ( v13 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      v13[2] = 0LL;
      *((_QWORD *)v13 + 3) = 0LL;
      *((_QWORD *)v13 + 4) = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v16 == (CProcessResourceAttributionReporter::HighResourceUsageReport **)&v27 )
    {
      if ( !v13 )
      {
LABEL_15:
        v18 = (__int64)*v16 + 16;
        v19 = *((_QWORD *)*v16 + 3);
        if ( v19 == *((_QWORD *)*v16 + 4) )
        {
          LOBYTE(v13) = std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
                          v18,
                          v19,
                          v29);
        }
        else
        {
          v20 = v29[1];
          *(_OWORD *)v19 = v29[0];
          v21 = v29[2];
          *(_OWORD *)(v19 + 16) = v20;
          v22 = v29[3];
          *(_OWORD *)(v19 + 32) = v21;
          v23 = v30;
          *(_OWORD *)(v19 + 48) = v22;
          v24 = v31;
          *(_OWORD *)(v19 + 64) = v23;
          *(_QWORD *)&v23 = v32;
          *(_OWORD *)(v19 + 80) = v24;
          *(_QWORD *)(v19 + 96) = v23;
          *(_QWORD *)(v18 + 8) += 104LL;
        }
        return (char)v13;
      }
      v17 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)v13;
    }
    else
    {
      v17 = *v16;
      *v16 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)v13;
      if ( !v17 )
        goto LABEL_15;
    }
    LOBYTE(v13) = (unsigned __int8)CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(v17);
    goto LABEL_15;
  }
  return (char)v13;
}
