/*
 * XREFs of ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001F100
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019A40 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800027F8 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180021864 (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002220C (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18003C2F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180072DEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampActStart(struct _HAM_ACTIVITY *a1)
{
  __int128 *v1; // r8
  char v3; // r13
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  __int64 v7; // r15
  unsigned int v8; // ecx
  __int64 v9; // rsi
  DWORD v10; // r14d
  _QWORD *Value; // rbx
  _QWORD *v12; // rax
  bool v13; // zf
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  DWORD v17; // esi
  __int64 v18; // r14
  _QWORD *v19; // rbx
  __int16 v20; // si
  int v21; // ebx
  _QWORD *v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  void (__fastcall **v35)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64); // rax
  __int64 v36; // rax
  char v37; // [rsp+48h] [rbp-C0h] BYREF
  char v38[3]; // [rsp+49h] [rbp-BFh] BYREF
  int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v40[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  int v44; // [rsp+80h] [rbp-88h]
  int v45; // [rsp+84h] [rbp-84h]
  int v46; // [rsp+88h] [rbp-80h]
  int v47; // [rsp+8Ch] [rbp-7Ch]
  int v48; // [rsp+90h] [rbp-78h]
  unsigned int v49; // [rsp+94h] [rbp-74h]
  unsigned __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-40h]
  __int128 v56; // [rsp+D8h] [rbp-30h]
  __int128 v57; // [rsp+E8h] [rbp-20h]

  v1 = (__int128 *)*((_QWORD *)a1 + 65);
  v3 = *((_BYTE *)a1 + 548);
  v4 = v1[1];
  v55 = *v1;
  v5 = v1[2];
  *((_BYTE *)a1 + 548) = 3;
  v56 = v4;
  v57 = v5;
  if ( v1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *((_QWORD *)a1 + 65) = 0LL;
  }
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_BYTE *)a1 + 549) = 6;
  HampHostUpdateActivityState(v6);
  v7 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 64) = *(_QWORD *)(v7 + 800);
  v8 = *(_DWORD *)(v7 + 832);
  v9 = *(_QWORD *)(v7 + 688);
  if ( v8 <= *((_DWORD *)a1 + 97) )
    v8 = *((_DWORD *)a1 + 97);
  *(_DWORD *)(v7 + 832) = v8;
  if ( v9 )
  {
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v9);
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v12 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v12 & 8) == 0 )
        __int2c();
      v13 = v12[4]-- == 1LL;
      if ( v13 )
        *v12 &= ~8uLL;
    }
  }
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *(_QWORD *)(v7 + 648) |= 0x800000000000000uLL;
  if ( *((_QWORD *)a1 + 8) )
  {
    v40[0] = *((_QWORD *)a1 + 5);
    v41 = 0LL;
    HIWORD(v49) = 0;
    v40[1] = 0LL;
    if ( *(_DWORD *)(v7 + 560) == 2 )
    {
      v17 = HampLockTrackerId;
      v18 = *(_QWORD *)(v7 + 776);
      if ( HampLockTrackerId != -1 )
      {
        v19 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v19 |= 0x20uLL;
        ++v19[6];
      }
      RtlAcquireSRWLockShared(v18 + 576);
      v20 = *(_WORD *)(v18 + 608);
      v21 = (*(_DWORD *)(v18 + 616) >> 5) & 7;
      if ( HampLockTrackerId != -1 )
      {
        v22 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v22 & 0x20) == 0 )
          __int2c();
        v13 = v22[6]-- == 1LL;
        if ( v13 )
          *v22 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(v18 + 576);
      if ( v21 == 4 )
      {
        v21 = 3;
      }
      else if ( v21 != 3 )
      {
        v23 = v21;
        if ( (*(_QWORD *)(v7 + 648) & 0x2000000000000LL) == 0 )
          v23 = 3;
        v21 = v23;
      }
    }
    else
    {
      v21 = 4;
      v20 = 6912;
    }
    LOWORD(v49) = v20;
    v49 = (v21 << 16) | v49 & 0xFFF8FFFF;
    v42 = *((_QWORD *)a1 + 64);
    RtlQueryPerformanceFrequency(&v50);
    v24 = -1LL;
    v43 = v55;
    v25 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v55 + 1) - v55, 0x3E8uLL) )
      v25 = 1000 * (*((_QWORD *)&v55 + 1) - v55);
    if ( v50 == 10000000 )
      v26 = v25 / 0x989680;
    else
      v26 = v25 / v50;
    if ( v26 > 0xFFFFFFFF )
      LODWORD(v26) = -1;
    v44 = v26;
    v27 = -1LL;
    if ( is_mul_ok(v56 - *((_QWORD *)&v55 + 1), 0x3E8uLL) )
      v27 = 1000 * (v56 - *((_QWORD *)&v55 + 1));
    if ( v50 == 10000000 )
      v28 = v27 / 0x989680;
    else
      v28 = v27 / v50;
    if ( v28 > 0xFFFFFFFF )
      LODWORD(v28) = -1;
    v45 = v28;
    v29 = -1LL;
    if ( is_mul_ok(*((_QWORD *)&v56 + 1) - v56, 0x3E8uLL) )
      v29 = 1000 * (*((_QWORD *)&v56 + 1) - v56);
    if ( v50 == 10000000 )
      v30 = v29 / 0x989680;
    else
      v30 = v29 / v50;
    if ( v30 > 0xFFFFFFFF )
      LODWORD(v30) = -1;
    v46 = v30;
    v31 = -1LL;
    if ( is_mul_ok(v57 - *((_QWORD *)&v56 + 1), 0x3E8uLL) )
      v31 = 1000 * (v57 - *((_QWORD *)&v56 + 1));
    if ( v50 == 10000000 )
      v32 = v31 / 0x989680;
    else
      v32 = v31 / v50;
    if ( v32 > 0xFFFFFFFF )
      LODWORD(v32) = -1;
    v47 = v32;
    if ( is_mul_ok(*((_QWORD *)&v57 + 1) - v57, 0x3E8uLL) )
      v24 = 1000 * (*((_QWORD *)&v57 + 1) - v57);
    if ( v50 == 10000000 )
      v33 = v24 / 0x989680;
    else
      v33 = v24 / v50;
    v34 = *((_QWORD *)a1 + 8);
    if ( v33 > 0xFFFFFFFF )
      LODWORD(v33) = -1;
    v48 = v33;
    v35 = (void (__fastcall **)(_QWORD *, _QWORD, unsigned __int64, unsigned __int64))(v34 + 104);
    if ( (*(_BYTE *)(v34 + 128) & 2) != 0 )
    {
      (*v35)(v40, *(_QWORD *)(v34 + 120), v24, v50);
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName(v35, v40, 64LL, *(_QWORD *)(v34 + 112)) < 0
           && (unsigned int)dword_1800B3218 > 4
           && tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
    {
      v39 = v41;
      v52 = v40[0];
      v51 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800B3218,
        (unsigned int)&unk_18009EB8B,
        v15,
        v16,
        (__int64)&v52,
        (__int64)&v39,
        (__int64)&v51);
    }
    v36 = *(_QWORD *)(v7 + 648);
    v14 = 0;
    if ( (v36 & 0x100000000000LL) != 0 && (v36 & 0x30000) != 0 )
      HampActRequestStopEx((__int64)a1, 2u, 5, 0, (unsigned __int16)v36, 0, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v53 = *((_QWORD *)a1 + 5);
    v37 = v3;
    v38[0] = 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v14,
      (unsigned int)&unk_1800A1BB2,
      v15,
      v16,
      (__int64)&v53,
      (__int64)v38,
      (__int64)&v37);
  }
}
