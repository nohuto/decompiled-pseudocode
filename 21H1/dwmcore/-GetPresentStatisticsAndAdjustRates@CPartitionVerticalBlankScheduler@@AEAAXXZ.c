/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003DF50
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18003C3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXAEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x18003C1F0 (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXAEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 *     ?SetNominalRefreshRate@CRateInfo@@QEAAXAEBU_UNSIGNED_RATIO@@@Z @ 0x18003C2AC (-SetNominalRefreshRate@CRateInfo@@QEAAXAEBU_UNSIGNED_RATIO@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@8777@Z @ 0x18015F878 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_18015F878.c)
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x1801674AC (McTemplateU0qNR0_EventWriteTransfer.c)
 *     McTemplateU0xxf_EventWriteTransfer @ 0x180167528 (McTemplateU0xxf_EventWriteTransfer.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021850C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rcx
  volatile signed __int32 **v8; // rdi
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rax
  int v11; // r14d
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rax
  __int128 v19; // xmm1
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdi
  char *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned int v30; // edx
  int v31; // eax
  int v32; // esi
  BOOL v33; // eax
  CHAR v34; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  int v37; // edx
  __m128d v38; // xmm1
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  bool v41; // cf
  _QWORD *v42; // rax
  char *v43; // rax
  CHAR Response[4]; // [rsp+C0h] [rbp-B8h] BYREF
  char v45; // [rsp+C4h] [rbp-B4h] BYREF
  char v46; // [rsp+C5h] [rbp-B3h] BYREF
  char v47; // [rsp+C6h] [rbp-B2h] BYREF
  char v48; // [rsp+C7h] [rbp-B1h] BYREF
  char v49; // [rsp+C8h] [rbp-B0h] BYREF
  char v50; // [rsp+C9h] [rbp-AFh] BYREF
  char v51[2]; // [rsp+CAh] [rbp-AEh] BYREF
  __int16 v52; // [rsp+CCh] [rbp-ACh] BYREF
  __int16 v53; // [rsp+CEh] [rbp-AAh] BYREF
  volatile signed __int32 *v54; // [rsp+D0h] [rbp-A8h] BYREF
  int v55; // [rsp+D8h] [rbp-A0h] BYREF
  int v56; // [rsp+DCh] [rbp-9Ch] BYREF
  int v57; // [rsp+E0h] [rbp-98h] BYREF
  int v58; // [rsp+E4h] [rbp-94h] BYREF
  _UNSIGNED_RATIO v59; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v62; // [rsp+100h] [rbp-78h] BYREF
  __int64 v63; // [rsp+108h] [rbp-70h] BYREF
  char *v64; // [rsp+110h] [rbp-68h] BYREF
  _QWORD *v65; // [rsp+118h] [rbp-60h] BYREF
  char *v66; // [rsp+120h] [rbp-58h] BYREF
  __int128 v67; // [rsp+128h] [rbp-50h] BYREF
  __int128 v68; // [rsp+138h] [rbp-40h]
  char v69[16]; // [rsp+148h] [rbp-30h] BYREF
  char v70[16]; // [rsp+158h] [rbp-20h] BYREF

  v67 = 0LL;
  v68 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start,
      a3,
      1LL,
      v69);
  v4 = *((_QWORD *)this + 630);
  v5 = *((_QWORD *)this + 629);
  *(_OWORD *)(v5 + 104) = *(_OWORD *)(v4 + 104);
  v6 = *(_OWORD *)(v4 + 120);
  *(_BYTE *)(v5 + 140) = 0;
  *(_OWORD *)(v5 + 120) = v6;
  v7 = *(_QWORD *)(*((_QWORD *)this + 8) + 88LL);
  v8 = *(volatile signed __int32 ***)(v7 + 8);
  if ( v8 == *(volatile signed __int32 ***)(v7 + 16) )
    goto LABEL_34;
  v9 = *v8;
  v54 = 0LL;
  v10 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
      - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v10 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
        - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v9 + 40LL))(
            v9,
            &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
            &v54);
    if ( v11 < 0 )
    {
      v12 = 0LL;
      v54 = 0LL;
      goto LABEL_10;
    }
  }
  else
  {
    v54 = v9;
    v11 = 0;
  }
  if ( *((int *)v9 + 2) >= 0 )
    goto LABEL_9;
  while ( 1 )
  {
    while ( 1 )
    {
      v31 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v32 = v31;
      if ( !v31 )
      {
        v33 = IsDebuggerPresent();
        v34 = Response[0];
        if ( v33 )
          v34 = 103;
        Response[0] = v34;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_1802CE738,
        word_1802CE738,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        25);
      if ( v32 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        __debugbreak();
      }
      if ( Response[0] <= 98 )
        break;
      if ( Response[0] == 103 )
        goto LABEL_9;
      if ( Response[0] == 105 )
        goto LABEL_64;
      if ( Response[0] != 112 )
      {
        if ( Response[0] != 116 )
          goto LABEL_63;
        goto LABEL_61;
      }
LABEL_62:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_63:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    if ( Response[0] == 71 )
      goto LABEL_9;
    if ( Response[0] != 73 )
    {
      if ( Response[0] != 80 )
      {
        if ( Response[0] != 84 )
          goto LABEL_63;
LABEL_61:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_63;
      }
      goto LABEL_62;
    }
LABEL_64:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_9:
  _InterlockedIncrement(v9 + 2);
  v12 = v54;
LABEL_10:
  v13 = 0LL;
  if ( v11 >= 0 )
    v13 = v12;
  if ( v12 )
  {
    v14 = (__int64)v12 + *(int *)(*((_QWORD *)v12 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( !v13 )
  {
LABEL_34:
    v17 = -2003304442;
    goto LABEL_35;
  }
  v15 = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int128 *, _UNSIGNED_RATIO *))(*(_QWORD *)v13 + 112LL))(
          v13,
          &v67,
          &v59);
  v17 = v15;
  if ( v15 >= 0 )
  {
LABEL_16:
    if ( v17 != 142213121 )
    {
      v18 = *((_QWORD *)this + 629);
      *(_OWORD *)(v18 + 104) = v67;
      v19 = v68;
      *(_BYTE *)(v18 + 140) = 1;
      *(_OWORD *)(v18 + 120) = v19;
      CRateInfo::SetNominalRefreshRate((CRateInfo *)(*((_QWORD *)this + 629) + 272LL), &v59);
      v21 = *((_QWORD *)this + 629);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qNR0_EventWriteTransfer(v20, (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1, 0, 32, v21 + 104);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          v38 = 0LL;
          v39 = *(_QWORD *)(v21 + 128) - *(_QWORD *)(v21 + 112);
          if ( v39 < 0 )
          {
            v40 = *(_QWORD *)(v21 + 128) - *(_QWORD *)(v21 + 112);
            LODWORD(v39) = v39 & 1;
            v38.m128d_f64[0] = (double)(int)(v39 | (v40 >> 1)) + (double)(int)(v39 | (v40 >> 1));
          }
          else
          {
            v38.m128d_f64[0] = (double)(int)v39;
          }
          v38.m128d_f64[0] = v38.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
          McTemplateU0xxf_EventWriteTransfer(
            v39,
            v37,
            a3,
            *(_DWORD *)(v21 + 120) - *(_DWORD *)(v21 + 108),
            _mm_cvtpd_ps(v38).m128_i8[0]);
        }
      }
      v22 = *((_QWORD *)this + 630);
      if ( *(_BYTE *)(v22 + 140) && !*((_BYTE *)this + 5372) )
        CRateInfo::CalculateEffectiveRefreshRate(
          (CRateInfo *)(*((_QWORD *)this + 629) + 272LL),
          (const struct DXGI_FRAME_STATISTICS_DWM *)(v22 + 104),
          (const struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)this + 629) + 104LL));
      v23 = *((_QWORD *)this + 629);
      v24 = *((unsigned int *)this + 1350);
      v25 = *(unsigned int *)(v23 + 120);
      if ( (_DWORD)v24 )
      {
        a3 = 0LL;
        do
        {
          v29 = *(_QWORD *)(*((_QWORD *)this + 672) + 8 * a3);
          if ( *(_QWORD *)(v29 + 56) )
          {
            if ( !*(_DWORD *)(v29 + 24) )
              *(_DWORD *)(v29 + 24) = v25;
            *(_DWORD *)(v29 + 28) = v25;
          }
          a3 = (unsigned int)(a3 + 1);
        }
        while ( (unsigned int)a3 < *((_DWORD *)this + 1350) );
        v23 = *((_QWORD *)this + 629);
      }
      v26 = *(unsigned int *)(v23 + 120);
      v27 = (char *)this + 6000;
      v28 = 10LL;
      do
      {
        if ( *((_DWORD *)v27 + 28) )
        {
          v30 = *((_DWORD *)v27 + 80);
          if ( !v30 )
          {
            *((_DWORD *)v27 + 80) = v26;
            v30 = v26;
          }
          *((_DWORD *)v27 + 81) = v26;
          if ( (unsigned int)dword_180346E48 > 5
            && (qword_180346E58 & 8) != 0
            && (qword_180346E60 & 8) == qword_180346E60 )
          {
            v41 = *((_QWORD *)v27 + 4) < 8uLL;
            v61 = v30;
            v62 = *((_QWORD *)v27 - 4);
            v52 = *((_WORD *)v27 + 45);
            v53 = *((_WORD *)v27 + 44);
            v45 = v27[152];
            v63 = *((_QWORD *)v27 + 10);
            v46 = v27[56];
            v47 = v27[52];
            v48 = v27[48];
            v49 = v27[44];
            v64 = v27 + 60;
            v50 = v27[40];
            v42 = v27 + 8;
            v60 = v26;
            if ( !v41 )
              v42 = (_QWORD *)*v42;
            v41 = *(_QWORD *)v27 < 8uLL;
            v65 = v42;
            v43 = v27 - 24;
            if ( !v41 )
              v43 = *(char **)v43;
            v66 = v43;
            v55 = *((_DWORD *)v27 + 27);
            v51[0] = v27[104];
            v56 = *((_DWORD *)v27 + 25);
            v57 = *((_DWORD *)v27 + 24);
            v58 = *((_DWORD *)v27 + 23);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v24,
              &unk_1802E4F76,
              a3,
              v25,
              &v58,
              &v57,
              &v56,
              v51,
              &v55,
              &v66,
              &v65,
              &v50,
              &v64,
              &v49,
              &v48,
              &v47,
              &v46,
              &v63,
              &v45,
              &v53,
              &v52,
              &v62,
              &v61,
              &v60);
          }
        }
        v27 += 408;
        --v28;
      }
      while ( v28 );
    }
    goto LABEL_25;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802DC1C0, 3u, v15, 0x2F8u, 0LL);
LABEL_35:
  if ( v17 >= 0 )
    goto LABEL_16;
LABEL_25:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop,
      a3,
      1LL,
      v70);
}
