/*
 * XREFs of VidSchiResetHwEngine @ 0x1C003BA60
 * Callers:
 *     VidSchiResetEngines @ 0x1C00D1714 (VidSchiResetEngines.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     _tlgKeywordOn @ 0x1C0026C04 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@66@Z @ 0x1C00298C4 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0029BE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C0029CD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U-$_tlgWrapperByVal@$.c)
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
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // r13d
  bool v23; // r15
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  _BYTE *v32; // r14
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  _BYTE *v39; // rdx
  _BYTE *v40; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  bool v44; // cf
  int v45; // eax
  bool result; // al
  _QWORD *v47; // rax
  int v48; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+74h] [rbp-8Ch] BYREF
  int v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+7Ch] [rbp-84h] BYREF
  int v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+84h] [rbp-7Ch] BYREF
  int v54; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v55[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v56[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  struct _TDR_RECOVERY_CONTEXT *v60; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 *v64; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-20h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v66; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v67; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-8h] BYREF
  void *v69; // [rsp+100h] [rbp+0h] BYREF
  __int64 v70; // [rsp+108h] [rbp+8h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v71; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v72; // [rsp+118h] [rbp+18h] BYREF
  __int64 v73; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v74[4]; // [rsp+128h] [rbp+28h] BYREF
  __int16 v75; // [rsp+148h] [rbp+48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp+50h] BYREF
  char v77; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v78; // [rsp+1C0h] [rbp+C0h] BYREF
  int v79; // [rsp+1C8h] [rbp+C8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1712), &LockHandle);
  v5 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v5, 0, 0x70uLL);
  v6 = *(_DWORD *)(a1 + 196);
  v7 = *(_DWORD *)(a1 + 192);
  v58 = 0LL;
  v59 = 0LL;
  v57 = a1;
  *(_DWORD *)(a1 + 196) = (v6 + 1) & (v7 - 1);
  v77 = 0;
  DpSynchronizeExecution(
    *(_QWORD *)(v2 + 24),
    VidSchiSetHwNodeResettingStateAtISR,
    &v57,
    *(unsigned int *)(v2 + 32),
    &v77);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v5 = 10;
  v8 = 0LL;
  *((_QWORD *)v5 + 1) = v58;
  *(_QWORD *)(v5 + 9) = v59;
  if ( *(_QWORD *)(v2 + 2928) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v2 + 2920) = RecoveryContext;
    v8 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 349) = a2;
      *((_QWORD *)RecoveryContext + 1) = v2 + 2916;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v10 = *(_QWORD *)(v2 + 16);
      *((_QWORD *)v8 + 4) = v10;
      _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24));
      v11 = *((_QWORD *)v8 + 4);
      *((_QWORD *)v8 + 5) = -1LL;
      *((_DWORD *)v8 + 34) = 49156;
      *((_DWORD *)v8 + 35) = DpiGetDriverVersion(*(_QWORD *)(v11 + 216));
      *((_DWORD *)v8 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 2928) + 4LL);
      v12 = *((_QWORD *)v8 + 4);
      v13 = *(_QWORD *)(v12 + 504);
      if ( !v13 )
        v13 = *(_QWORD *)(v12 + 360);
      *((_QWORD *)v8 + 12) = v13;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 2920), 1);
    }
  }
  v14 = *(unsigned __int16 *)(a1 + 4);
  ++*(_DWORD *)(a1 + 484);
  v15 = *(_QWORD *)(v2 + 624);
  if ( (unsigned int)v14 < *(_DWORD *)(v2 + 696) )
    v15 += 8 * v14;
  v55[1] = *(unsigned __int16 *)(*(_QWORD *)v15 + 6LL);
  v16 = *(_QWORD *)(v2 + 624);
  if ( (unsigned int)v14 < *(_DWORD *)(v2 + 696) )
    v16 += 8 * v14;
  v55[0] = *(unsigned __int16 *)(*(_QWORD *)v16 + 8LL);
  if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x400000000010LL) )
  {
    v19 = *(_QWORD *)(v2 + 16);
    v20 = *(_QWORD *)(v19 + 316);
    v48 = *((_DWORD *)v8 + 14);
    v61 = *(_QWORD *)(a1 + 96);
    v62 = *(_QWORD *)(a1 + 64);
    v63 = *(_QWORD *)(a1 + 168);
    v79 = v17;
    v60 = v8;
    v64 = *(unsigned __int16 **)(v19 + 1496);
    v65 = v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_1C0044006,
      v17,
      v18,
      (__int64)&v65,
      &v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v48,
      (__int64)&v79);
  }
  *(_QWORD *)(a1 + 1752) = v8;
  *(_QWORD *)(a1 + 1744) = v5 + 4;
  v21 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[38])(*(_QWORD *)(v2 + 8), v55);
  *(_QWORD *)(a1 + 1744) = 0LL;
  v22 = v21;
  *(_QWORD *)(a1 + 1752) = 0LL;
  v23 = v21 == 0;
  KeFlushQueuedDpcs();
  if ( v23 )
  {
    v75 = 0;
    v74[0] = v2 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v74);
    v24 = (_QWORD *)(a1 + 1688);
    v25 = *(_QWORD **)(a1 + 1688);
    if ( v25 != (_QWORD *)(a1 + 1688) )
    {
      do
      {
        v26 = v25 - 26;
        if ( *(v25 - 5) != *(v25 - 6) )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
          v47[3] = 281LL;
          v47[4] = 40960LL;
          v47[5] = v26;
          v47[6] = v26[21];
          v47[7] = v26[20];
          WdLogEvent5_WdCriticalError(v47);
          __debugbreak();
          JUMPOUT(0x1C003C10CLL);
        }
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
    }
    *(_DWORD *)(a1 + 16) = 2;
    AcquireSpinLock::Release((AcquireSpinLock *)v74);
  }
  *((_BYTE *)v5 + 53) = 1;
  v5[11] = v22;
  if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x400000000010LL) )
  {
    v29 = *(_QWORD *)(v2 + 16);
    v30 = *(_DWORD *)(a1 + 484);
    v31 = *(_QWORD *)(v29 + 316);
    v51 = 0;
    v49 = v30;
    v50 = v22;
    v66 = v8;
    v67 = *(unsigned __int16 **)(v29 + 1496);
    v68 = v31;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v29,
      byte_1C0043F8C,
      v27,
      v28,
      (__int64)&v68,
      &v67,
      (__int64)&v66,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49);
  }
  if ( v8 )
  {
    *((_DWORD *)v8 + 702) = v22;
    TdrUpdateDbgReport(v8, 1);
    TdrCollectDbgInfoStage2(v8);
    v32 = (_BYTE *)(a1 + 2028);
    if ( !*(_BYTE *)(a1 + 2028) )
      v32 = (char *)v8 + 2813;
    if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x400000000010LL) )
    {
      v34 = *(unsigned int *)(a1 + 2020);
      v35 = *(_QWORD *)(v2 + 16);
      v36 = *((unsigned __int8 *)v8 + 2812);
      v69 = v32;
      v37 = *(_QWORD *)(v35 + 316);
      v52 = v36;
      v70 = *((_QWORD *)v8 + 350);
      v54 = *(_DWORD *)(a1 + 484);
      v53 = v34;
      v71 = v8;
      v72 = *(unsigned __int16 **)(v35 + 1496);
      v78 = 3;
      v73 = v37;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v34,
        byte_1C0043EDB,
        v37,
        v33,
        (__int64)&v78,
        (__int64)&v73,
        &v72,
        (__int64)&v71,
        (__int64)&v54,
        (__int64)&v70,
        &v69,
        (__int64)&v53,
        (__int64)&v52);
    }
    if ( !v23 )
    {
      if ( !v32 )
        goto LABEL_36;
      v38 = 15LL;
      v39 = (_BYTE *)(v2 + 2941);
      do
      {
        if ( v38 == -2147483631 )
          break;
        if ( !*v32 )
          break;
        *v39++ = *v32++;
        --v38;
      }
      while ( v38 );
      v40 = v39 - 1;
      if ( v38 )
        v40 = v39;
      *v40 = 0;
      if ( !v38 )
LABEL_36:
        *(_BYTE *)(v2 + 2941) = 0;
    }
    TdrCompleteRecoveryContext(v8, 1, 1);
    *(_QWORD *)(v2 + 2920) = 0LL;
  }
  if ( v23 )
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
  RtlClearBitEx(v2 + 576, *(unsigned __int16 *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  if ( v23 )
  {
    v41 = *(unsigned __int16 *)(a1 + 4);
    v42 = *(_QWORD *)(v2 + 624);
    v43 = v42 + 8 * v41;
    v44 = (unsigned int)v41 < *(_DWORD *)(v2 + 696);
    if ( (unsigned int)v41 >= *(_DWORD *)(v2 + 696) )
      v43 = *(_QWORD *)(v2 + 624);
    v56[1] = *(unsigned __int16 *)(*(_QWORD *)v43 + 6LL);
    if ( v44 )
      v42 += 8 * v41;
    v56[0] = *(unsigned __int16 *)(*(_QWORD *)v42 + 8LL);
    v45 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[39])(*(_QWORD *)(v2 + 8), v56);
    *((_BYTE *)v5 + 54) = 1;
    v5[12] = v45;
    v23 = v45 == 0;
  }
  result = v23;
  *((_BYTE *)v5 + 52) = v23;
  return result;
}
