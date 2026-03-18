/*
 * XREFs of VidSchiResetHwEngine @ 0x1C0043770
 * Callers:
 *     VidSchiResetEngines @ 0x1C00F35F0 (VidSchiResetEngines.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@66@Z @ 0x1C0033514 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0033960 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0033A58 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
 */

bool __fastcall VidSchiResetHwEngine(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _DWORD *v5; // r12
  int v6; // eax
  int v7; // ecx
  struct _TDR_RECOVERY_CONTEXT *v8; // rbx
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r15d
  bool v22; // r14
  _QWORD *i; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  _BYTE *v29; // r15
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  _BYTE *v34; // rdx
  _BYTE *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rax
  bool v39; // cf
  int v40; // eax
  bool result; // al
  int v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h] BYREF
  int v46; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+84h] [rbp-7Ch] BYREF
  int v48; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v49[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v50[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  struct _TDR_RECOVERY_CONTEXT *v54; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 *v58; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-20h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v60; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v61; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v62; // [rsp+F8h] [rbp-8h] BYREF
  void *v63; // [rsp+100h] [rbp+0h] BYREF
  __int64 v64; // [rsp+108h] [rbp+8h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v65; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v66; // [rsp+118h] [rbp+18h] BYREF
  __int64 v67; // [rsp+120h] [rbp+20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v69[4]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v70; // [rsp+160h] [rbp+60h]
  char v71; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v72; // [rsp+1C0h] [rbp+C0h] BYREF
  int v73; // [rsp+1C8h] [rbp+C8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1728), &LockHandle);
  v5 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v5, 0, 0x70uLL);
  v6 = *(_DWORD *)(a1 + 196);
  v7 = *(_DWORD *)(a1 + 192) - 1;
  v51 = a1;
  v52 = 0LL;
  *(_DWORD *)(a1 + 196) = (v6 + 1) & v7;
  v53 = 0LL;
  v71 = 0;
  DpSynchronizeExecution(
    *(_QWORD *)(v2 + 24),
    VidSchiSetHwNodeResettingStateAtISR,
    &v51,
    *(unsigned int *)(v2 + 32),
    &v71);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v5 = 10;
  v8 = 0LL;
  *((_QWORD *)v5 + 1) = v52;
  *(_QWORD *)(v5 + 9) = v53;
  if ( *(_QWORD *)(v2 + 3024) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v2 + 3016) = RecoveryContext;
    v8 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v2 + 3012;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v10 = *(_QWORD *)(v2 + 16);
      *((_QWORD *)v8 + 4) = v10;
      _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24));
      v11 = *((_QWORD *)v8 + 4);
      *((_QWORD *)v8 + 5) = -1LL;
      *((_DWORD *)v8 + 36) = 61443;
      *((_DWORD *)v8 + 37) = DpiGetDriverVersion(*(_QWORD *)(v11 + 216));
      *((_DWORD *)v8 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 3024) + 4LL);
      v12 = *((_QWORD *)v8 + 4);
      v13 = *(_QWORD *)(v12 + 592);
      if ( !v13 )
        v13 = *(_QWORD *)(v12 + 448);
      *((_QWORD *)v8 + 13) = v13;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 3016), 1);
    }
  }
  v14 = *(unsigned __int16 *)(a1 + 4);
  ++*(_DWORD *)(a1 + 492);
  v15 = *(_QWORD *)(v2 + 632);
  if ( (unsigned int)v14 < *(_DWORD *)(v2 + 704) )
    v15 += 8 * v14;
  v49[1] = *(unsigned __int16 *)(*(_QWORD *)v15 + 6LL);
  v16 = *(_QWORD *)(v2 + 632);
  if ( (unsigned int)v14 < *(_DWORD *)(v2 + 704) )
    v16 += 8 * v14;
  v49[0] = *(unsigned __int16 *)(*(_QWORD *)v16 + 8LL);
  if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
  {
    v19 = *(_QWORD *)(v2 + 16);
    v42 = *((_DWORD *)v8 + 14);
    v55 = *(_QWORD *)(a1 + 96);
    v56 = *(_QWORD *)(a1 + 64);
    v57 = *(_QWORD *)(a1 + 168);
    v73 = v17;
    v54 = v8;
    v58 = *(unsigned __int16 **)(v19 + 1616);
    v59 = *(_QWORD *)(v19 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_1C0051D74,
      v17,
      v18,
      (__int64)&v59,
      &v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v42,
      (__int64)&v73);
  }
  *(_QWORD *)(a1 + 1760) = v8;
  *(_QWORD *)(a1 + 1752) = v5 + 4;
  v20 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[39])(*(_QWORD *)(v2 + 8), v49);
  *(_QWORD *)(a1 + 1752) = 0LL;
  v21 = v20;
  *(_QWORD *)(a1 + 1760) = 0LL;
  if ( !v20 )
  {
    KeFlushQueuedDpcs();
    v69[0] = v2 + 1728;
    v70 = 0;
    AcquireSpinLock::Acquire((Acquire *)v69);
    v22 = 1;
    for ( i = *(_QWORD **)(a1 + 1696); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(a1 + 1696) )
      {
        *(_DWORD *)(a1 + 16) = 2;
        AcquireSpinLock::Release((AcquireSpinLock *)v69);
        goto LABEL_21;
      }
      v24 = *(i - 5);
      v25 = *(i - 6);
      if ( v24 != v25 )
        break;
    }
    WdLogSingleEntry5(0LL, 281LL, 40960LL, *(_QWORD *)(v2 + 16), v24, v25);
    __debugbreak();
  }
  v22 = 0;
  KeFlushQueuedDpcs();
LABEL_21:
  *((_BYTE *)v5 + 53) = 1;
  v5[11] = v21;
  if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
  {
    v28 = *(_QWORD *)(v2 + 16);
    v43 = *(_DWORD *)(a1 + 492);
    v44 = v21;
    v45 = 0;
    v60 = v8;
    v61 = *(unsigned __int16 **)(v28 + 1616);
    v62 = *(_QWORD *)(v28 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      byte_1C0051CFA,
      v26,
      v27,
      (__int64)&v62,
      &v61,
      (__int64)&v60,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43);
  }
  if ( v8 )
  {
    *((_DWORD *)v8 + 704) = v21;
    TdrUpdateDbgReport(v8, 1);
    TdrCollectDbgInfoStage2(v8);
    v29 = (_BYTE *)(a1 + 2036);
    if ( !*(_BYTE *)(a1 + 2036) )
      v29 = (char *)v8 + 2821;
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
    {
      v46 = *((unsigned __int8 *)v8 + 2820);
      v32 = *(_QWORD *)(v2 + 16);
      v47 = *(_DWORD *)(a1 + 2028);
      v64 = *((_QWORD *)v8 + 351);
      v48 = *(_DWORD *)(a1 + 492);
      v65 = v8;
      v66 = *(unsigned __int16 **)(v32 + 1616);
      v67 = *(_QWORD *)(v32 + 404);
      v72 = 3;
      v63 = v29;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v32,
        byte_1C0051C49,
        v30,
        v31,
        (__int64)&v72,
        (__int64)&v67,
        &v66,
        (__int64)&v65,
        (__int64)&v48,
        (__int64)&v64,
        &v63,
        (__int64)&v47,
        (__int64)&v46);
    }
    if ( !v22 )
    {
      if ( !v29 )
        goto LABEL_39;
      v33 = 15LL;
      v34 = (_BYTE *)(v2 + 3037);
      do
      {
        if ( v33 == -2147483631 )
          break;
        if ( !*v29 )
          break;
        *v34++ = *v29++;
        --v33;
      }
      while ( v33 );
      v35 = v34 - 1;
      if ( v33 )
        v35 = v34;
      *v35 = 0;
      if ( !v33 )
LABEL_39:
        *(_BYTE *)(v2 + 3037) = 0;
    }
    TdrCompleteRecoveryContext(v8, 1, 1);
    *(_QWORD *)(v2 + 3016) = 0LL;
  }
  if ( v22 )
  {
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_DWORD *)(a1 + 480) = 0;
  }
  RtlClearBitEx(v2 + 584, *(unsigned __int16 *)(a1 + 4), v26);
  *(_DWORD *)(a1 + 16) = 0;
  if ( v22 )
  {
    v36 = *(unsigned __int16 *)(a1 + 4);
    v37 = *(_QWORD *)(v2 + 632);
    v38 = v37 + 8 * v36;
    v39 = (unsigned int)v36 < *(_DWORD *)(v2 + 704);
    if ( (unsigned int)v36 >= *(_DWORD *)(v2 + 704) )
      v38 = *(_QWORD *)(v2 + 632);
    v50[1] = *(unsigned __int16 *)(*(_QWORD *)v38 + 6LL);
    if ( v39 )
      v37 += 8 * v36;
    v50[0] = *(unsigned __int16 *)(*(_QWORD *)v37 + 8LL);
    v40 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[40])(*(_QWORD *)(v2 + 8), v50);
    *((_BYTE *)v5 + 54) = 1;
    v5[12] = v40;
    v22 = v40 == 0;
  }
  result = v22;
  *((_BYTE *)v5 + 52) = v22;
  return result;
}
