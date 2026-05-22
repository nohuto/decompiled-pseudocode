/*
 * XREFs of ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1800171D0
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180048DD4 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1800023D0 (-_Reallocate_exactly@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInpu.c)
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180004DD4 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180005510 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180011C50 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180014E58 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ??1?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1800442A4 (--1-$variant@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-N.c)
 *     ?GetProcessId@InputSite@@QEBAKXZ @ 0x1800442B0 (-GetProcessId@InputSite@@QEBAKXZ.c)
 *     ??0LegacyInputSinkData@@QEAA@PEAX_N@Z @ 0x1800443C0 (--0LegacyInputSinkData@@QEAA@PEAX_N@Z.c)
 *     ?CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ @ 0x180044528 (-CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18006E20C (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800C6288 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F136C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800F140C (--$_Emplace_reallocate@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@@WR.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  void **v7; // r14
  unsigned int v8; // esi
  void **v9; // rax
  LegacyInputSinkData *v10; // rax
  LegacyInputSinkData *v11; // rdi
  void *WeakInputSinkHandle; // rax
  bool v13; // zf
  InputSite **v14; // r13
  InputSite **j; // rbx
  __int64 v16; // r13
  InputSite *v17; // r14
  InputSite *v18; // rbx
  int v19; // esi
  LegacyInputSinkData *v20; // rdi
  __m128i *k; // rax
  unsigned __int32 v22; // edi
  __int64 v23; // rbx
  LegacyInputSinkData *v24; // r15
  __int64 v25; // rdx
  bool v26; // cl
  __int64 v27; // r8
  void *v28; // rax
  __int128 v29; // xmm1
  int v30; // ecx
  __int64 v31; // rax
  InputSite **v32; // r13
  InputSite **v33; // rbx
  int v34; // r15d
  __int64 v35; // r12
  InputSite *v36; // rax
  __int64 v37; // rcx
  int v38; // edi
  bool v39; // si
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  bool v43; // al
  InputSite *v44; // rbx
  InputSite *v45; // rdi
  InputSite *v46; // rcx
  char *v47; // rax
  __int64 v48; // rcx
  LegacyInputSinkData *v49; // r15
  __int64 *v50; // rdx
  void **v51; // r14
  int v53; // ebx
  __int64 v54; // [rsp+0h] [rbp-378h] BYREF
  char *v55; // [rsp+20h] [rbp-358h]
  InputSite *v56; // [rsp+28h] [rbp-350h] BYREF
  LegacyInputSinkData *v57; // [rsp+30h] [rbp-348h]
  __int64 v58; // [rsp+38h] [rbp-340h]
  __int64 v59; // [rsp+40h] [rbp-338h] BYREF
  InputSite *v60; // [rsp+48h] [rbp-330h]
  __int64 v61; // [rsp+50h] [rbp-328h]
  __int64 v62; // [rsp+58h] [rbp-320h]
  __m128i *v63; // [rsp+60h] [rbp-318h]
  __int64 v64; // [rsp+68h] [rbp-310h]
  __int64 v65; // [rsp+70h] [rbp-308h] BYREF
  _QWORD *v66; // [rsp+78h] [rbp-300h]
  void **v67; // [rsp+80h] [rbp-2F8h]
  void **v68; // [rsp+88h] [rbp-2F0h]
  __int64 v69; // [rsp+90h] [rbp-2E8h]
  _QWORD *v70; // [rsp+98h] [rbp-2E0h]
  void **i; // [rsp+A0h] [rbp-2D8h]
  __m128i v72; // [rsp+B0h] [rbp-2C8h]
  __int64 v73; // [rsp+C0h] [rbp-2B8h]
  __int128 v74; // [rsp+D0h] [rbp-2A8h]
  __int64 v75; // [rsp+E0h] [rbp-298h]
  __int128 v76; // [rsp+F0h] [rbp-288h]
  __int64 v77; // [rsp+100h] [rbp-278h]
  __int128 pExceptionObject; // [rsp+110h] [rbp-268h] BYREF
  __int64 v79; // [rsp+120h] [rbp-258h]
  __int128 v80; // [rsp+128h] [rbp-250h] BYREF
  __int64 v81; // [rsp+138h] [rbp-240h]
  wil::ResultException *v82; // [rsp+140h] [rbp-238h] BYREF
  _BYTE v83[360]; // [rsp+148h] [rbp-230h] BYREF
  __int128 v84; // [rsp+2B0h] [rbp-C8h] BYREF
  __int128 v85; // [rsp+2C0h] [rbp-B8h]
  __int128 v86; // [rsp+2D0h] [rbp-A8h]
  __int64 v87; // [rsp+2E0h] [rbp-98h]
  _OWORD v88[4]; // [rsp+2F0h] [rbp-88h] BYREF
  __m128i si128; // [rsp+330h] [rbp-48h] BYREF
  __int64 v90; // [rsp+340h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+0h]

  v3 = a2;
  v66 = a2;
  v4 = a1;
  v58 = a1;
  v69 = a1;
  v5 = a1;
  v61 = a1;
  v70 = a2;
  LODWORD(v55) = 0;
  v6 = *(unsigned int *)(a3 + 40);
  v7 = *(void ***)(a3 + 32);
  v67 = v7;
  if ( !v7 && v6 )
  {
    _o_terminate(a1);
    __debugbreak();
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v8 = 1;
  LODWORD(v55) = 1;
  if ( v6 )
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly(v3, v6);
  v9 = &v7[v6];
  for ( i = v9; ; v9 = i )
  {
    v68 = v7;
    HIDWORD(v55) = v8;
    if ( v7 == v9 )
      break;
    try
    {
      v10 = LegacyInputSinkData::LegacyInputSinkData((LegacyInputSinkData *)v83, *v7, a3);
      v11 = v10;
      v57 = v10;
      if ( *((_BYTE *)v10 + 36) )
        goto LABEL_12;
      v59 = 0LL;
      WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(v10);
      NtQueryCompositionInputSinkLuid(WeakInputSinkHandle, &v59);
      v13 = *((_BYTE *)v11 + 36) == 0;
      *(_QWORD *)((char *)v11 + 28) = v59;
      if ( v13 )
      {
        *((_BYTE *)v11 + 36) = 1;
LABEL_12:
        if ( !*((_BYTE *)v11 + 36) )
        {
          pExceptionObject = 0LL;
          v79 = 0LL;
          std::bad_optional_access::bad_optional_access((std::bad_optional_access *)&pExceptionObject);
          throw (std::bad_optional_access *)&pExceptionObject;
        }
      }
      v62 = *(_QWORD *)((char *)v11 + 28);
      si128.m128i_i32[0] = 0;
      si128.m128i_i64[1] = v62;
      LODWORD(v90) = 0;
      v72 = si128;
      v73 = v90;
      v14 = *(InputSite ***)(v5 + 64);
      for ( j = *(InputSite ***)(v4 + 56); j != v14 && (*((_DWORD *)*j + 4) || *((_QWORD *)*j + 3) != v62); ++j )
        ;
      v16 = v61;
      if ( j == *(InputSite ***)(v61 + 64) )
      {
        v17 = 0LL;
        v60 = 0LL;
        v56 = 0LL;
        v18 = 0LL;
      }
      else
      {
        v17 = *j;
        v60 = v17;
        v18 = v17;
        v56 = v17;
        if ( v17 )
          (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v17 + 8LL))(v17);
      }
      v19 = HIDWORD(v55) | 0xC;
      HIDWORD(v55) = v19;
      LODWORD(v55) = v19;
      v20 = v57;
      if ( !v18 )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        for ( k = &si128; ; k = (__m128i *)((char *)v63->m128i_i64 + 4) )
        {
          v63 = k;
          if ( k == (__m128i *)&v90 )
            break;
          v22 = k->m128i_i32[0];
          switch ( k->m128i_i32[0] )
          {
            case 1:
              v23 = 40LL;
              break;
            case 2:
              v23 = 104LL;
              break;
            case 3:
              v23 = 168LL;
              break;
            case 4:
              v23 = 232LL;
              break;
            case 5:
              v23 = 296LL;
              break;
            default:
              wil::details::in1diag3::FailFast_UnexpectedMsg(
                retaddr,
                (void *)0x7F,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
                "Invalid input type provided.",
                v55);
              __debugbreak();
          }
          v24 = v57;
          v25 = *((unsigned __int8 *)v57 + v23 + 56);
          v26 = (_BYTE)v25 == 0;
          v27 = 1LL;
          if ( v22 == 5 )
            v26 = 1;
          if ( v26 )
          {
            v84 = 0LL;
            v85 = 0LL;
            v86 = 0LL;
            v87 = 0LL;
            memset(v88, 0, sizeof(v88));
            v28 = LegacyInputSinkData::GetWeakInputSinkHandle(v57);
            NtQueryCompositionInputQueueAndTransform(v28, v22, &v84, v88);
            v20 = v24;
            v25 = *((unsigned __int8 *)v24 + v23 + 56);
            v29 = v85;
            v27 = 1LL;
            *(_OWORD *)((char *)v24 + v23) = v84;
            *(_OWORD *)((char *)v24 + v23 + 16) = v29;
            *(_QWORD *)&v29 = v87;
            *(_OWORD *)((char *)v24 + v23 + 32) = v86;
            *(_QWORD *)((char *)v24 + v23 + 48) = v29;
            if ( (_BYTE)v25 )
              goto LABEL_42;
            *((_BYTE *)v24 + v23 + 56) = 1;
            v25 = 1LL;
          }
          else
          {
            v20 = v57;
          }
          if ( !(_BYTE)v25 )
          {
            v80 = 0LL;
            v81 = 0LL;
            std::bad_optional_access::bad_optional_access((std::bad_optional_access *)&v80);
            throw (std::bad_optional_access *)&v80;
          }
LABEL_42:
          if ( (unsigned int)(*(_DWORD *)((char *)v20 + v23) - 2) <= 1 )
          {
            v30 = *(_DWORD *)((char *)v20 + v23 + 16);
            v31 = *(unsigned int *)((char *)v20 + v23 + 8);
            LODWORD(v74) = 1;
            *((_QWORD *)&v74 + 1) = v31;
            LODWORD(v75) = v30;
            v76 = v74;
            v77 = v75;
            v32 = *(InputSite ***)(v16 + 64);
            v33 = *(InputSite ***)(v58 + 56);
            v34 = v30;
            v35 = v31;
            while ( v33 != v32 )
            {
              v36 = *v33;
              v37 = *((_QWORD *)*v33 + 3);
              if ( v37 )
              {
                v38 = *((_DWORD *)v36 + 4);
                v39 = v37 == v35;
                v40 = *((_QWORD *)v36 + 50);
                if ( v40 == *((_QWORD *)v36 + 51) )
                {
                  v42 = 0;
                }
                else
                {
                  v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 32LL) + 16LL);
                  v42 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 8LL))(
                                      v41,
                                      v25,
                                      v27)
                                  + 32);
                }
                v43 = v42 == v34 || !v34 || !InputSite::GetProcessId(*v33);
                if ( v38 == 1 && v39 && v43 )
                  break;
              }
              else if ( *((_DWORD *)*v33 + 4) == 1 && *((_QWORD *)*v33 + 3) == v35 )
              {
                break;
              }
              ++v33;
            }
            v16 = v61;
            if ( v33 == *(InputSite ***)(v61 + 64) )
            {
              v44 = 0LL;
              v19 = HIDWORD(v55) | 0x10;
              v45 = 0LL;
            }
            else
            {
              v44 = *v33;
              v45 = v44;
              if ( v44 )
                (*(void (__fastcall **)(InputSite *, __int64, __int64))(*(_QWORD *)v44 + 8LL))(v44, v25, v27);
              v19 = HIDWORD(v55) | 0x10;
            }
            HIDWORD(v55) = v19;
            LODWORD(v55) = v19;
            v46 = v60;
            v17 = v44;
            v60 = v44;
            v56 = v44;
            if ( v46 )
              (*(void (__fastcall **)(InputSite *, __int64, __int64))(*(_QWORD *)v46 + 16LL))(v46, v25, v27);
            LODWORD(v55) = v19;
            if ( v45 )
              goto LABEL_74;
            v20 = v57;
          }
        }
      }
      if ( !v17 )
      {
        v64 = (__int64)*LegacyInputSinkData::GetLuid(v20);
        v47 = (char *)InputSiteManager::CreateInputSiteFromId(v58, &v65, 0, v64, v55);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)&v56, v47);
        v48 = v65;
        if ( v65 )
        {
          v65 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
        }
        v17 = v56;
      }
LABEL_74:
      if ( !*((_BYTE *)v17 + 392) )
      {
        v49 = v57;
        LegacyInputSinkData::CreateOwningRefOfInputSink(v57);
        if ( *((_BYTE *)v17 + 392) )
        {
          std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>((char *)v17 + 32);
          *((_BYTE *)v17 + 392) = 0;
        }
        LegacyInputSinkData::LegacyInputSinkData((__int64)v17 + 32, (__int64)v49);
        *((_BYTE *)v17 + 392) = 1;
      }
      v8 = v19 & 0xFFFFFFF9 | 2;
      LODWORD(v55) = v8;
      std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(v83);
      v3 = v66;
      v50 = (__int64 *)v66[1];
      if ( (__int64 *)v66[2] == v50 )
      {
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite>>(
          v66,
          v50,
          &v56);
        v17 = v56;
      }
      else
      {
        *v50 = 0LL;
        if ( v50 != (__int64 *)&v56 )
        {
          *v50 = (__int64)v17;
          v17 = 0LL;
          v56 = 0LL;
        }
        v3[1] += 8LL;
      }
      if ( v17 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v51 = v67;
      v4 = v58;
    }
    catch ( wil::ResultException *v82 )
    {
      v53 = *((_DWORD *)v82 + 7);
      if ( v53 != (unsigned int)wil::details::NtStatusToHr((wil::details *)0xC0000008LL, (int)&v54) )
        throw;
      v51 = v68;
      v8 = (unsigned int)v55;
      v4 = v69;
      v58 = v69;
      v3 = v70;
      v66 = v70;
    }
    v7 = v51 + 1;
    v67 = v7;
    v5 = v61;
  }
  return v3;
}
