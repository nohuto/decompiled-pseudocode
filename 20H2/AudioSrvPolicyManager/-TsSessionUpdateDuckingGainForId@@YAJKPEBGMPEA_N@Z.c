/*
 * XREFs of ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18002A1BC
 * Callers:
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180024FC0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180017BB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@@2@@ATL@@QEBA?AV?$shared_ptr@VDuckingDescriptor@@@std@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180024FD8 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$shared_pt.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionUpdateDuckingGainForId(DWORD a1, const unsigned __int16 *a2, float a3, bool *a4)
{
  signed int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // r14
  bool v9; // si
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  struct TSSession *v19; // [rsp+20h] [rbp-50h] BYREF
  void *v20[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v23; // [rsp+50h] [rbp-20h]

  v7 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v20[1] = v8;
  v9 = 1;
  v10 = TsSessionFromSessionId(a1, 1, 0LL, &v19);
  if ( v10 )
  {
    v7 = (unsigned __int16)v10 | 0x80070000;
    if ( v10 <= 0 )
      v7 = v10;
LABEL_17:
    if ( v7 >= 0 )
      goto LABEL_23;
    goto LABEL_18;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v20,
    (__int64)a2);
  v11 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::Lookup(
          (__int64)v19 + 280,
          &v22,
          (__int64 *)v20);
  v12 = *v11;
  v13 = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  *(_QWORD *)&v21 = v12;
  *((_QWORD *)&v21 + 1) = v13;
  v14 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v15 = (char *)v20[0] - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
  if ( !v12 )
  {
    v7 = -2147024809;
LABEL_18:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, v7);
    }
    AudPolicyLogError("TsSessionUpdateDuckingGainForId", 2532, v7);
    goto LABEL_23;
  }
  v16 = v21;
  if ( *(float *)(v21 + 8) == a3 )
    v9 = 0;
  *a4 = v9;
  if ( v9 )
  {
    *(float *)(v16 + 8) = a3;
    goto LABEL_17;
  }
LABEL_23:
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v17 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  return (unsigned int)v7;
}
