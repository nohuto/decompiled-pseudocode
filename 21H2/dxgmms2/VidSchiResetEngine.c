/*
 * XREFs of VidSchiResetEngine @ 0x1C003987C
 * Callers:
 *     VidSchiResetEngines @ 0x1C00F35F0 (VidSchiResetEngines.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@66@Z @ 0x1C0033514 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0033960 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0033A58 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 *     McTemplateK0dp_EtwWriteTransfer @ 0x1C00365D8 (McTemplateK0dp_EtwWriteTransfer.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C00447E8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C009A910 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C00F3294 (VidSchiMarkDevicesInError.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  _DWORD *v5; // r12
  int v6; // ecx
  int v7; // eax
  struct _TDR_RECOVERY_CONTEXT *v8; // rsi
  __int64 v9; // rax
  char v10; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  bool v19; // cf
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r10d
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r13
  __int64 v36; // r9
  __int64 v37; // rax
  _BYTE *v38; // r10
  __int64 v39; // r9
  __int64 v40; // rdx
  _BYTE *v41; // rcx
  __int64 v42; // r9
  char v43; // al
  _BYTE *v44; // rax
  int v45; // eax
  const struct _TDR_HISTORY *v46; // rbx
  bool IsLimitExhausted; // al
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  _BYTE *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  _BYTE *v55; // rcx
  _BYTE *v56; // rax
  char v57; // bl
  __int64 v58; // rdx
  __int64 v59; // rax
  char result; // al
  char v61; // [rsp+70h] [rbp-90h] BYREF
  char v62; // [rsp+71h] [rbp-8Fh] BYREF
  char v63; // [rsp+72h] [rbp-8Eh]
  __int16 v64; // [rsp+74h] [rbp-8Ch] BYREF
  int v65; // [rsp+78h] [rbp-88h] BYREF
  int v66; // [rsp+7Ch] [rbp-84h] BYREF
  int v67; // [rsp+80h] [rbp-80h] BYREF
  int v68; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v69; // [rsp+88h] [rbp-78h] BYREF
  int v70; // [rsp+8Ch] [rbp-74h] BYREF
  int v71; // [rsp+90h] [rbp-70h] BYREF
  int v72; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v73; // [rsp+98h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-60h]
  __int64 v75; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int128 v77; // [rsp+B8h] [rbp-48h]
  __int128 v78; // [rsp+C8h] [rbp-38h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  struct _TDR_RECOVERY_CONTEXT *v80; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v83; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v84; // [rsp+100h] [rbp+0h] BYREF
  __int64 v85; // [rsp+108h] [rbp+8h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v86; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v87; // [rsp+118h] [rbp+18h] BYREF
  __int64 v88; // [rsp+120h] [rbp+20h] BYREF
  void *v89; // [rsp+128h] [rbp+28h] BYREF
  __int64 v90; // [rsp+130h] [rbp+30h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v91; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int16 *v92; // [rsp+140h] [rbp+40h] BYREF
  __int64 v93; // [rsp+148h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v95[2]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v96; // [rsp+170h] [rbp+70h]

  WdLogSingleEntry3(4LL, *(_QWORD *)(a1 + 168), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2900) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 732));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2904)) == 1 )
    {
      *(_QWORD *)(a1 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2904));
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 732));
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
  v5 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v5, 0, 0x70uLL);
  v6 = *(_DWORD *)(a1 + 192);
  v7 = *(_DWORD *)(a1 + 196) + 1;
  v62 = 0;
  v79 = 0LL;
  v76 = 0LL;
  *(_DWORD *)(a1 + 196) = v7 & (v6 - 1);
  v77 = 0LL;
  v75 = a1;
  v78 = 0LL;
  DpSynchronizeExecution(
    *(_QWORD *)(v4 + 24),
    VidSchiSetNodeResettingStateAtISR,
    &v75,
    *(unsigned int *)(v4 + 32),
    &v62);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v5 = 6;
  v8 = 0LL;
  *((_QWORD *)v5 + 1) = v76;
  *((_OWORD *)v5 + 1) = v77;
  *((_QWORD *)v5 + 4) = v78;
  *((_QWORD *)v5 + 6) = v79;
  if ( (_DWORD)v79 == HIDWORD(v79) && !*(_DWORD *)(a1 + 2028) )
  {
    v9 = *(unsigned int *)(a1 + 2900);
    if ( (_DWORD)v9 )
    {
      WdLogSingleEntry5(0LL, 281LL, 2048LL, HIDWORD(v79), v9, 0LL);
      __debugbreak();
    }
    WdLogSingleEntry2(4LL, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
    v10 = 1;
    *((_QWORD *)&v78 + 1) = v77;
    *((_BYTE *)v5 + 61) = 0;
    goto LABEL_36;
  }
  if ( *(_QWORD *)(v4 + 3024) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v4 + 3016) = RecoveryContext;
    v8 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v4 + 3012;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v12 = *(_QWORD *)(v4 + 16);
      *((_QWORD *)v8 + 4) = v12;
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v13 = *((_QWORD *)v8 + 4);
      *((_QWORD *)v8 + 5) = -1LL;
      *((_DWORD *)v8 + 36) = 61443;
      *((_DWORD *)v8 + 37) = DpiGetDriverVersion(*(_QWORD *)(v13 + 216));
      *((_DWORD *)v8 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 3024) + 4LL);
      v14 = *((_QWORD *)v8 + 4);
      v15 = *(_QWORD *)(v14 + 592);
      if ( !v15 )
        v15 = *(_QWORD *)(v14 + 448);
      *((_QWORD *)v8 + 13) = v15;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v4 + 3016), 1);
    }
  }
  v16 = *(unsigned __int16 *)(a1 + 4);
  ++*(_DWORD *)(a1 + 492);
  v17 = *(_QWORD *)(v4 + 632);
  v96 = 0;
  v18 = v17 + 8 * v16;
  v19 = (unsigned int)v16 < *(_DWORD *)(v4 + 704);
  if ( (unsigned int)v16 >= *(_DWORD *)(v4 + 704) )
    v18 = v17;
  v95[1] = *(unsigned __int16 *)(*(_QWORD *)v18 + 6LL);
  if ( v19 )
    v17 += 8 * v16;
  v95[0] = *(unsigned __int16 *)(*(_QWORD *)v17 + 8LL);
  if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
  {
    v23 = *(_QWORD *)(v4 + 16);
    v66 = *((_DWORD *)v8 + 14);
    v81 = *(_QWORD *)(a1 + 96);
    v82 = *(_QWORD *)(a1 + 64);
    v83 = *(_QWORD *)(a1 + 168);
    v65 = v22;
    v80 = v8;
    v84 = *(unsigned __int16 **)(v23 + 1616);
    v85 = *(_QWORD *)(v23 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      byte_1C0051D74,
      v20,
      v21,
      (__int64)&v85,
      &v84,
      (__int64)&v83,
      (__int64)&v82,
      (__int64)&v81,
      (__int64)&v80,
      (__int64)&v66,
      (__int64)&v65);
  }
  v24 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[38])(*(_QWORD *)(v4 + 8), v95);
  if ( v24 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    *(_DWORD *)(a1 + 16) = 2;
  }
  *((_BYTE *)v5 + 61) = 1;
  v5[14] = v24;
  if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
  {
    v27 = *(_QWORD *)(v4 + 16);
    v67 = *(_DWORD *)(a1 + 492);
    v69 = v96;
    v68 = v24;
    v86 = v8;
    v87 = *(unsigned __int16 **)(v27 + 1616);
    v88 = *(_QWORD *)(v27 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v27,
      byte_1C0051CFA,
      v25,
      v26,
      (__int64)&v88,
      &v87,
      (__int64)&v86,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67);
  }
  v28 = v96;
  *((_QWORD *)v5 + 5) = v96;
  *((_BYTE *)v5 + 60) = v10;
  if ( v10 )
  {
    if ( v28 >= (unsigned __int64)v77 && v28 <= (unsigned __int64)v78 )
    {
      *((_QWORD *)&v78 + 1) = v28;
      goto LABEL_34;
    }
    WdLogSingleEntry5(0LL, 281LL, 10LL, v28, v77, *(_QWORD *)(v4 + 16));
    __debugbreak();
  }
  *((_QWORD *)&v78 + 1) = v78;
LABEL_34:
  if ( v8 )
    *((_DWORD *)v8 + 704) = v24;
LABEL_36:
  v61 = 0;
  v73 = 0LL;
  if ( *(_QWORD *)(v4 + 3024) == a1 )
  {
    v29 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1560) + 1568);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 104);
      v31 = *(_QWORD *)(v30 + 40);
      if ( v31 )
      {
        v32 = 0LL;
        if ( *(_QWORD *)(v31 + 8) )
          v32 = v30;
        v73 = v32;
      }
    }
  }
  VidSchiMarkDevicesInError(&v75, &v61, &v73);
  if ( v8 )
  {
    v34 = v73;
    v35 = 15LL;
    if ( v73 )
    {
      v36 = *(_QWORD *)(v73 + 40);
      v74 = v36;
      v37 = *(_QWORD *)(v36 + 8);
      if ( v37 )
      {
        v38 = (char *)v8 + 2821;
        *((_QWORD *)v8 + 351) = *(_QWORD *)(*(_QWORD *)(v37 + 64) + 80LL);
        v39 = *(_QWORD *)(v36 + 2648);
        if ( !v39 )
          goto LABEL_53;
        v40 = 15LL;
        v41 = (char *)v8 + 2821;
        v42 = v39 - (_QWORD)v38;
        do
        {
          if ( v40 == -2147483631 )
            break;
          v43 = v41[v42];
          if ( !v43 )
            break;
          *v41++ = v43;
          --v40;
        }
        while ( v40 );
        v44 = v41 - 1;
        if ( v40 )
          v44 = v41;
        *v44 = 0;
        if ( !v40 )
LABEL_53:
          *v38 = 0;
        v36 = v74;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v34 + 40) + 2632LL) )
      {
        v45 = *(_DWORD *)(v34 + 48);
        if ( (v45 & 8) == 0 && (v45 & 1) == 0 )
        {
          v46 = (const struct _TDR_HISTORY *)(v36 + 40);
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v36 + 40), v8);
          IsLimitExhausted = TdrHistoryIsLimitExhausted(v46, v8, 1);
          *((_BYTE *)v8 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v48 = (unsigned __int64)*(unsigned int *)(v4 + 4) >> 5;
            v49 = *(_DWORD *)(v4 + 4) & 0x1F;
            v50 = *(_QWORD *)(v74 + 2624);
            *(_DWORD *)(v50 + 4 * v48) |= 1 << (*(_BYTE *)(v4 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (byte_1C006E941 & 1) != 0 )
                McTemplateK0dp_EtwWriteTransfer(v49, v50, v48, *(_DWORD *)(v4 + 4), *((_QWORD *)v8 + 351));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v8, 1);
    TdrCollectDbgInfoStage2(v8);
    v51 = (_BYTE *)(a1 + 2036);
    if ( !*(_BYTE *)(a1 + 2036) )
      v51 = (char *)v8 + 2821;
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
    {
      v70 = *((unsigned __int8 *)v8 + 2820);
      v54 = *(_QWORD *)(v4 + 16);
      v71 = *(_DWORD *)(a1 + 2028);
      v90 = *((_QWORD *)v8 + 351);
      v72 = *(_DWORD *)(a1 + 492);
      v91 = v8;
      v92 = *(unsigned __int16 **)(v54 + 1616);
      v93 = *(_QWORD *)(v54 + 404);
      v64 = 3;
      v89 = v51;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v54,
        byte_1C0051C49,
        v52,
        v53,
        (__int64)&v64,
        (__int64)&v93,
        &v92,
        (__int64)&v91,
        (__int64)&v72,
        (__int64)&v90,
        &v89,
        (__int64)&v71,
        (__int64)&v70);
    }
    v63 = v61;
    if ( !v10 || v61 )
    {
      if ( !v51 )
        goto LABEL_77;
      v55 = (_BYTE *)(v4 + 3037);
      do
      {
        if ( v35 == -2147483631 )
          break;
        if ( !*v51 )
          break;
        *v55++ = *v51++;
        --v35;
      }
      while ( v35 );
      v56 = v55 - 1;
      if ( v35 )
        v56 = v55;
      *v56 = 0;
      if ( !v35 )
LABEL_77:
        *(_BYTE *)(v4 + 3037) = 0;
    }
    TdrCompleteRecoveryContext(v8, 1, 1);
    v57 = v63;
    *(_QWORD *)(v4 + 3016) = 0LL;
  }
  else
  {
    v57 = v61;
  }
  if ( v10 )
  {
    v58 = *((_QWORD *)&v78 + 1);
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_DWORD *)(a1 + 480) = 0;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v58, 0LL);
    v59 = *((_QWORD *)&v78 + 1);
    *(_QWORD *)(a1 + 64) = *((_QWORD *)&v78 + 1);
    *(_QWORD *)(a1 + 72) = v59;
    if ( v57 )
      v10 = 0;
    else
      *(_BYTE *)(a1 + 2036) = 0;
  }
  RtlClearBitEx(v4 + 584, *(unsigned __int16 *)(a1 + 4), v33);
  *(_DWORD *)(a1 + 16) = 0;
  result = v10;
  *((_BYTE *)v5 + 60) = v10;
  *((_BYTE *)v5 + 62) = v57;
  *((_QWORD *)v5 + 5) = *((_QWORD *)&v78 + 1);
  return result;
}
