/*
 * XREFs of VidSchiResetEngine @ 0x1C0030C10
 * Callers:
 *     VidSchiResetEngines @ 0x1C00D02E4 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     _tlgKeywordOn @ 0x1C0026C14 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@66@Z @ 0x1C00298E4 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0029C00 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0029CF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 *     McTemplateK0dp_EtwWriteTransfer @ 0x1C002D12C (McTemplateK0dp_EtwWriteTransfer.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003CAD8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0089ABC (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C00CFEF0 (VidSchiMarkDevicesInError.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // r12
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _TDR_RECOVERY_CONTEXT *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rax
  char v14; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // cf
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r10d
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r13
  __int64 v44; // r9
  __int64 v45; // rax
  _BYTE *v46; // r10
  __int64 v47; // r9
  __int64 v48; // rdx
  _BYTE *v49; // rcx
  __int64 v50; // r9
  char v51; // al
  _BYTE *v52; // rax
  int v53; // eax
  const struct _TDR_HISTORY *v54; // rbx
  bool IsLimitExhausted; // al
  unsigned __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  _BYTE *v59; // rbx
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // r8
  _BYTE *v65; // rcx
  _BYTE *v66; // rax
  char v67; // bl
  __int64 v68; // rdx
  __int64 v69; // rax
  char result; // al
  char v71; // [rsp+70h] [rbp-90h] BYREF
  char v72; // [rsp+71h] [rbp-8Fh] BYREF
  char v73; // [rsp+72h] [rbp-8Eh]
  __int16 v74; // [rsp+74h] [rbp-8Ch] BYREF
  int v75; // [rsp+78h] [rbp-88h] BYREF
  int v76; // [rsp+7Ch] [rbp-84h] BYREF
  int v77; // [rsp+80h] [rbp-80h] BYREF
  int v78; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v79; // [rsp+88h] [rbp-78h] BYREF
  int v80; // [rsp+8Ch] [rbp-74h] BYREF
  int v81; // [rsp+90h] [rbp-70h] BYREF
  int v82; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v83; // [rsp+98h] [rbp-68h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-60h]
  __int64 v85; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v86; // [rsp+B0h] [rbp-50h]
  __int128 v87; // [rsp+B8h] [rbp-48h]
  __int128 v88; // [rsp+C8h] [rbp-38h]
  __int64 v89; // [rsp+D8h] [rbp-28h]
  struct _TDR_RECOVERY_CONTEXT *v90; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v91; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v94; // [rsp+100h] [rbp+0h] BYREF
  __int64 v95; // [rsp+108h] [rbp+8h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v96; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v97; // [rsp+118h] [rbp+18h] BYREF
  __int64 v98; // [rsp+120h] [rbp+20h] BYREF
  void *v99; // [rsp+128h] [rbp+28h] BYREF
  __int64 v100; // [rsp+130h] [rbp+30h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v101; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int16 *v102; // [rsp+140h] [rbp+40h] BYREF
  __int64 v103; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v105[2]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v106; // [rsp+170h] [rbp+70h]

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = *(_QWORD *)(a1 + 168);
  v4[4] = *(_QWORD *)(a1 + 64);
  v4[5] = *(_QWORD *)(a1 + 96);
  WdLogEvent5_WdEvent(v4);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2884) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 724));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2888)) == 1 )
    {
      *(_QWORD *)(a1 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2888));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 724));
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1712), &LockHandle);
  v6 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v6, 0, 0x70uLL);
  v7 = *(_DWORD *)(a1 + 192);
  v8 = *(_DWORD *)(a1 + 196) + 1;
  v72 = 0;
  v89 = 0LL;
  v86 = 0LL;
  *(_DWORD *)(a1 + 196) = v8 & (v7 - 1);
  v87 = 0LL;
  v85 = a1;
  v88 = 0LL;
  DpSynchronizeExecution(
    *(_QWORD *)(v5 + 24),
    VidSchiSetNodeResettingStateAtISR,
    &v85,
    *(unsigned int *)(v5 + 32),
    &v72);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  v11 = 0LL;
  *v6 = 6;
  *((_QWORD *)v6 + 1) = v86;
  *((_OWORD *)v6 + 1) = v87;
  *((_QWORD *)v6 + 4) = v88;
  *((_QWORD *)v6 + 6) = v89;
  if ( (_DWORD)v89 == HIDWORD(v89) && !*(_DWORD *)(a1 + 2020) )
  {
    if ( *(_DWORD *)(a1 + 2884) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
      v12[3] = 281LL;
      v12[4] = 2048LL;
      v12[5] = HIDWORD(v89);
      v12[6] = *(unsigned int *)(a1 + 2884);
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
      __debugbreak();
    }
    v13 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdEvent(v13);
    v14 = 1;
    *((_QWORD *)&v88 + 1) = v87;
    *((_BYTE *)v6 + 61) = 0;
    goto LABEL_35;
  }
  if ( *(_QWORD *)(v5 + 2928) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v5 + 2920) = RecoveryContext;
    v11 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 349) = a2;
      *((_QWORD *)RecoveryContext + 1) = v5 + 2916;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v16 = *(_QWORD *)(v5 + 16);
      *((_QWORD *)v11 + 4) = v16;
      _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
      v17 = *((_QWORD *)v11 + 4);
      *((_QWORD *)v11 + 5) = -1LL;
      *((_DWORD *)v11 + 34) = 49156;
      *((_DWORD *)v11 + 35) = DpiGetDriverVersion(*(_QWORD *)(v17 + 216));
      *((_DWORD *)v11 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 2928) + 4LL);
      v18 = *((_QWORD *)v11 + 4);
      v19 = *(_QWORD *)(v18 + 504);
      if ( !v19 )
        v19 = *(_QWORD *)(v18 + 360);
      *((_QWORD *)v11 + 12) = v19;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v5 + 2920), 1);
    }
  }
  v20 = *(unsigned __int16 *)(a1 + 4);
  ++*(_DWORD *)(a1 + 484);
  v21 = *(_QWORD *)(v5 + 624);
  v106 = 0;
  v22 = v21 + 8 * v20;
  v23 = (unsigned int)v20 < *(_DWORD *)(v5 + 696);
  if ( (unsigned int)v20 >= *(_DWORD *)(v5 + 696) )
    v22 = v21;
  v105[1] = *(unsigned __int16 *)(*(_QWORD *)v22 + 6LL);
  if ( v23 )
    v21 += 8 * v20;
  v105[0] = *(unsigned __int16 *)(*(_QWORD *)v21 + 8LL);
  if ( (unsigned int)dword_1C0050048 > 5 && tlgKeywordOn((__int64)&dword_1C0050048, 0x400000000010LL) )
  {
    v27 = *(_QWORD *)(v5 + 16);
    v28 = *(_QWORD *)(v27 + 316);
    v76 = *((_DWORD *)v11 + 14);
    v91 = *(_QWORD *)(a1 + 96);
    v92 = *(_QWORD *)(a1 + 64);
    v93 = *(_QWORD *)(a1 + 168);
    v75 = v26;
    v90 = v11;
    v94 = *(unsigned __int16 **)(v27 + 1520);
    v95 = v28;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v27,
      byte_1C0044076,
      v24,
      v25,
      (__int64)&v95,
      &v94,
      (__int64)&v93,
      (__int64)&v92,
      (__int64)&v91,
      (__int64)&v90,
      (__int64)&v76,
      (__int64)&v75);
  }
  v31 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[37])(*(_QWORD *)(v5 + 8), v105);
  if ( v31 )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    *(_DWORD *)(a1 + 16) = 2;
  }
  *((_BYTE *)v6 + 61) = 1;
  v6[14] = v31;
  if ( (unsigned int)dword_1C0050048 > 5 && tlgKeywordOn((__int64)&dword_1C0050048, 0x400000000010LL) )
  {
    v34 = *(_QWORD *)(v5 + 16);
    v35 = *(_QWORD *)(v34 + 316);
    v77 = *(_DWORD *)(a1 + 484);
    v79 = v106;
    v78 = v31;
    v96 = v11;
    v97 = *(unsigned __int16 **)(v34 + 1520);
    v98 = v35;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v34,
      byte_1C0043FFC,
      v32,
      v33,
      (__int64)&v98,
      &v97,
      (__int64)&v96,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v77);
  }
  v36 = v106;
  *((_QWORD *)v6 + 5) = v106;
  *((_BYTE *)v6 + 60) = v14;
  if ( !v14 )
    goto LABEL_32;
  if ( v36 < (unsigned __int64)v87 || v36 > (unsigned __int64)v88 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
    v37[3] = 281LL;
    v37[4] = 10LL;
    v37[5] = v106;
    v37[6] = v87;
    v37[7] = *(_QWORD *)(v5 + 16);
    WdLogEvent5_WdCriticalError(v37);
    __debugbreak();
LABEL_32:
    v36 = v88;
  }
  *((_QWORD *)&v88 + 1) = v36;
  if ( v11 )
    *((_DWORD *)v11 + 702) = v31;
LABEL_35:
  v71 = 0;
  v83 = 0LL;
  if ( *(_QWORD *)(v5 + 2928) == a1 )
  {
    v38 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 104);
      v40 = *(_QWORD *)(v39 + 40);
      if ( v40 )
      {
        v41 = 0LL;
        if ( *(_QWORD *)(v40 + 8) )
          v41 = v39;
        v83 = v41;
      }
    }
  }
  VidSchiMarkDevicesInError(&v85, &v71, &v83);
  if ( v11 )
  {
    v42 = v83;
    v43 = 15LL;
    if ( v83 )
    {
      v44 = *(_QWORD *)(v83 + 40);
      v84 = v44;
      v45 = *(_QWORD *)(v44 + 8);
      if ( v45 )
      {
        v46 = (char *)v11 + 2813;
        *((_QWORD *)v11 + 350) = *(_QWORD *)(*(_QWORD *)(v45 + 64) + 72LL);
        v47 = *(_QWORD *)(v44 + 2640);
        if ( !v47 )
          goto LABEL_52;
        v48 = 15LL;
        v49 = (char *)v11 + 2813;
        v50 = v47 - (_QWORD)v46;
        do
        {
          if ( v48 == -2147483631 )
            break;
          v51 = v49[v50];
          if ( !v51 )
            break;
          *v49++ = v51;
          --v48;
        }
        while ( v48 );
        v52 = v49 - 1;
        if ( v48 )
          v52 = v49;
        *v52 = 0;
        if ( !v48 )
LABEL_52:
          *v46 = 0;
        v44 = v84;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v42 + 40) + 2624LL) )
      {
        v53 = *(_DWORD *)(v42 + 48);
        if ( (v53 & 8) == 0 && (v53 & 1) == 0 )
        {
          v54 = (const struct _TDR_HISTORY *)(v44 + 32);
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v44 + 32), v11);
          IsLimitExhausted = TdrHistoryIsLimitExhausted(v54, v11, 1);
          *((_BYTE *)v11 + 2812) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v56 = (unsigned __int64)*(unsigned int *)(v5 + 4) >> 5;
            v57 = *(_DWORD *)(v5 + 4) & 0x1F;
            v58 = *(_QWORD *)(v84 + 2616);
            *(_DWORD *)(v58 + 4 * v56) |= 1 << (*(_BYTE *)(v5 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0dp_EtwWriteTransfer(v57, v58, v56, *(_DWORD *)(v5 + 4), *((_QWORD *)v11 + 350));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v11, 1);
    TdrCollectDbgInfoStage2(v11);
    v59 = (_BYTE *)(a1 + 2028);
    if ( !*(_BYTE *)(a1 + 2028) )
      v59 = (char *)v11 + 2813;
    if ( (unsigned int)dword_1C0050048 > 5 && tlgKeywordOn((__int64)&dword_1C0050048, 0x400000000010LL) )
    {
      v61 = *(unsigned int *)(a1 + 2020);
      v62 = *(_QWORD *)(v5 + 16);
      v63 = *((unsigned __int8 *)v11 + 2812);
      v99 = v59;
      v64 = *(_QWORD *)(v62 + 316);
      v80 = v63;
      v100 = *((_QWORD *)v11 + 350);
      v82 = *(_DWORD *)(a1 + 484);
      v81 = v61;
      v101 = v11;
      v102 = *(unsigned __int16 **)(v62 + 1520);
      v74 = 3;
      v103 = v64;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v61,
        byte_1C0043F4B,
        v64,
        v60,
        (__int64)&v74,
        (__int64)&v103,
        &v102,
        (__int64)&v101,
        (__int64)&v82,
        (__int64)&v100,
        &v99,
        (__int64)&v81,
        (__int64)&v80);
    }
    v73 = v71;
    if ( !v14 || v71 )
    {
      if ( !v59 )
        goto LABEL_76;
      v65 = (_BYTE *)(v5 + 2941);
      do
      {
        if ( v43 == -2147483631 )
          break;
        if ( !*v59 )
          break;
        *v65++ = *v59++;
        --v43;
      }
      while ( v43 );
      v66 = v65 - 1;
      if ( v43 )
        v66 = v65;
      *v66 = 0;
      if ( !v43 )
LABEL_76:
        *(_BYTE *)(v5 + 2941) = 0;
    }
    TdrCompleteRecoveryContext(v11, 1, 1);
    v67 = v73;
    *(_QWORD *)(v5 + 2920) = 0LL;
  }
  else
  {
    v67 = v71;
  }
  if ( v14 )
  {
    v68 = *((_QWORD *)&v88 + 1);
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v68, 0LL);
    v69 = *((_QWORD *)&v88 + 1);
    if ( v67 )
      v14 = 0;
    *(_QWORD *)(a1 + 64) = *((_QWORD *)&v88 + 1);
    *(_QWORD *)(a1 + 72) = v69;
    if ( v14 )
      *(_BYTE *)(a1 + 2028) = 0;
  }
  RtlClearBitEx(v5 + 576, *(unsigned __int16 *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  result = v14;
  *((_BYTE *)v6 + 60) = v14;
  *((_BYTE *)v6 + 62) = v67;
  *((_QWORD *)v6 + 5) = *((_QWORD *)&v88 + 1);
  return result;
}
