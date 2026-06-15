/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18000BCD0
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x18000A350 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 * Callees:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18000A7F0 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18000ACB0 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18000AFA0 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BBD48 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800EF634 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800F0028 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800F023C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int64 *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  volatile signed __int32 **v15; // rax
  _QWORD *v16; // r8
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rcx
  volatile signed __int32 **v21; // rax
  __int64 v22; // r8
  volatile signed __int32 *v23; // rcx
  volatile signed __int32 *v24; // rdx
  std::_Ref_count_base *v25; // rcx
  __int64 *v27; // rax
  _QWORD *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  std::_Ref_count_base *v31; // rcx
  volatile signed __int32 *v32; // rcx
  int ActivationFactory; // eax
  volatile signed __int32 *v34; // rsi
  __int64 v35; // r14
  int v36; // eax
  __int64 v37; // r14
  _QWORD *v38; // rsi
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // [rsp+20h] [rbp-148h]
  __int64 v43; // [rsp+30h] [rbp-138h] BYREF
  volatile signed __int32 *v44; // [rsp+38h] [rbp-130h] BYREF
  std::_Ref_count_base *v45; // [rsp+40h] [rbp-128h]
  int v46; // [rsp+48h] [rbp-120h]
  _QWORD *v47; // [rsp+50h] [rbp-118h]
  __int128 v48; // [rsp+58h] [rbp-110h]
  __int128 v49; // [rsp+70h] [rbp-F8h]
  __int128 v50; // [rsp+80h] [rbp-E8h]
  __int128 v51; // [rsp+90h] [rbp-D8h]
  __int128 v52; // [rsp+A0h] [rbp-C8h]
  __int128 v53; // [rsp+B0h] [rbp-B8h]
  __int128 v54; // [rsp+C0h] [rbp-A8h]
  __int128 v55; // [rsp+D0h] [rbp-98h]
  __int128 v56; // [rsp+E0h] [rbp-88h]
  __int128 v57; // [rsp+F0h] [rbp-78h]
  __int128 v58; // [rsp+100h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+110h] [rbp-58h] BYREF
  __int64 v60; // [rsp+128h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v47 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = 1;
  v46 = 1;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<CPowerReference>::`vftable';
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 7) = 0LL;
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = v8 + 4;
  v9 = (std::_Ref_count_base *)a2[1];
  a2[1] = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v48 = 0LL;
  if ( !g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *(_DWORD *)(a3 + 64) )
  {
    if ( *(_DWORD *)(a3 + 264) || (*(_BYTE *)(a3 + 268) & 1) == 0 )
      v6 = 0;
    if ( !v6 || *(_DWORD *)(a3 + 272) )
    {
      v10 = CPdcActivationClient::AcquirePdcTimerActivation(a1, &v44, a3);
      v11 = (_QWORD *)*a2;
      v12 = *v10;
      v13 = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      *v11 = v12;
      v14 = (std::_Ref_count_base *)v11[1];
      v11[1] = v13;
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( v45 )
        std::_Ref_count_base::_Decref(v45);
    }
  }
  v15 = CSebNotifier::AcquireSebReference(a1 + 112, &v44);
  v16 = (_QWORD *)*a2;
  v17 = *v15;
  v18 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v16[2] = v17;
  v19 = (std::_Ref_count_base *)v16[3];
  v16[3] = v18;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( v45 )
    std::_Ref_count_base::_Decref(v45);
  v20 = *(_QWORD *)(a3 + 192);
  if ( v20 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v20 + 8) + 64LL))(v20 + 8) )
  {
    if ( (*(_DWORD *)(a3 + 268) & 0x20000) == 0 )
    {
      v49 = *(_OWORD *)(a3 + 280);
      v50 = *(_OWORD *)(a3 + 296);
      v51 = *(_OWORD *)(a3 + 312);
      v52 = *(_OWORD *)(a3 + 328);
      v53 = *(_OWORD *)(a3 + 344);
      v54 = *(_OWORD *)(a3 + 360);
      v55 = *(_OWORD *)(a3 + 376);
      v56 = *(_OWORD *)(a3 + 392);
      v57 = *(_OWORD *)(a3 + 408);
      v58 = *(_OWORD *)(a3 + 424);
      v27 = (__int64 *)CCaptureNotifier::AcquireReference((_Mtx_t)(a1 + 312), *((_QWORD *)&v58 + 1) > 0LL);
      v28 = (_QWORD *)*a2;
      v29 = *v27;
      v30 = v27[1];
      *v27 = 0LL;
      v27[1] = 0LL;
      v28[6] = v29;
      v31 = (std::_Ref_count_base *)v28[7];
      v28[7] = v30;
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
      if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&hstringHeader.Reserved.Reserved2[8]);
      v44 = 0LL;
      v60 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.CapabilityAccess.Management.CapabilityUsage",
        0x3Du,
        0x3Cu);
      v32 = v44;
      v44 = 0LL;
      if ( v32 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      ActivationFactory = RoGetActivationFactory(v60, &GUID_42947746_4ea0_48c2_9274_062ed61f8daa, &v44);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x4C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)ActivationFactory,
          v42);
      v34 = v44;
      v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader);
      v43 = 0LL;
      v36 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, __int64 *))(*(_QWORD *)v34 + 48LL))(
              v34,
              *(_QWORD *)(v35 + 24),
              &v43);
      if ( v36 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x50,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)v36,
          v42);
      v37 = v43;
      v38 = (_QWORD *)*a2;
      v39 = *(_QWORD *)(*a2 + 64LL);
      *(_QWORD *)(*a2 + 64LL) = 0LL;
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v37 + 48LL))(
              v37,
              *(unsigned int *)(a3 + 64),
              0LL,
              v38 + 8);
      if ( v40 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)v40,
          v42);
      v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a2 + 64LL) + 48LL))(*(_QWORD *)(*a2 + 64LL));
      if ( v41 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x55,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)v41,
          v42);
      if ( v43 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      if ( v44 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
    }
  }
  else
  {
    v21 = CPlaybackNotifier::AcquireReference(
            (_Mtx_t)(a1 + 216),
            (volatile signed __int32 **)&hstringHeader,
            *(_QWORD *)(a3 + 208));
    v22 = *a2;
    v23 = *v21;
    v24 = v21[1];
    *v21 = 0LL;
    v21[1] = 0LL;
    *(_QWORD *)(v22 + 32) = v23;
    v25 = *(std::_Ref_count_base **)(v22 + 40);
    *(_QWORD *)(v22 + 40) = v24;
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&hstringHeader.Reserved.Reserved2[8]);
  }
  return a2;
}
