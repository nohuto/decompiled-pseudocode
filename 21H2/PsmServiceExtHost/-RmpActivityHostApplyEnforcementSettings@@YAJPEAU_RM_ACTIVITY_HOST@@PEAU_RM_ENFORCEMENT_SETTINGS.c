/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180017920
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007920 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A290 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001F7C0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001184 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800234AC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002A360 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     memcmp_0 @ 0x180047B16 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U1@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U?$_tlgWrapperByVal@$00@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@33AEBU?$_tlgWrapperByVal@$07@@666AEBU?$_tlgWrapperByVal@$00@@7@Z @ 0x18006AE28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U1@U-$_tlgWrapperB.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444AEBU?$_tlgWrapperByVal@$00@@55@Z @ 0x18006AF84 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180074CC0 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180074E34 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(char *P, struct _RM_ENFORCEMENT_SETTINGS *a2, int a3)
{
  char *v4; // rsi
  char v5; // r13
  unsigned __int8 v7; // dl
  DWORD v8; // r12d
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v11; // ecx
  _QWORD *v12; // rax
  bool v13; // zf
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 *v18; // r10
  __int64 v19; // r11
  int v20; // edi
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 (__fastcall *v24)(__int64 *, char *, char *, __int64, int, __int64, __int64 *, __int64 *, __int64 *, _QWORD); // rax
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // r8
  DWORD v28; // r13d
  _QWORD *v29; // rdi
  DWORD v30; // eax
  DWORD v31; // ecx
  _QWORD *v32; // rax
  int v33; // r13d
  unsigned __int64 v34; // rdx
  char v35; // dl
  unsigned __int8 v37; // al
  int v38; // eax
  unsigned __int8 v39; // cl
  BOOL v40; // ecx
  bool v41; // al
  char v42[4]; // [rsp+80h] [rbp-29h] BYREF
  int v43; // [rsp+84h] [rbp-25h] BYREF
  __int64 v44; // [rsp+88h] [rbp-21h] BYREF
  __int64 v45; // [rsp+90h] [rbp-19h] BYREF
  __int64 v46; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v47[12]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v48; // [rsp+110h] [rbp+67h] BYREF
  int v49; // [rsp+120h] [rbp+77h]
  __int64 v50; // [rsp+128h] [rbp+7Fh] BYREF

  v49 = a3;
  v4 = P + 1168;
  v5 = a3;
  if ( !memcmp_0(a2, P + 1168, 0x20uLL) && (v5 & 3) == 0 )
    return 0LL;
  v7 = *((_BYTE *)a2 + 28);
  if ( (!(v4[28] & 1) & v7) != 0 )
  {
    RmpGpuMonitorEnableForHost((struct _RM_ACTIVITY_HOST *)P);
  }
  else if ( (v4[28] & 1) != 0 && (v7 & 1) == 0 )
  {
    RmpGpuMonitorDisableForHost((struct _RM_ACTIVITY_HOST *)P);
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(P + 64);
  CurrentThreadId = GetCurrentThreadId();
  v11 = HampLockTrackerId;
  *((_DWORD *)P + 18) = CurrentThreadId;
  v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 1;
  if ( v11 != -1 )
  {
    v12 = TlsGetValue(v11);
    if ( (*(_BYTE *)v12 & 2) == 0 )
      __int2c();
    v13 = v12[2]-- == 1LL;
    if ( v13 )
      *v12 &= ~2uLL;
  }
  *((_DWORD *)P + 18) = 0;
  RtlReleaseSRWLockExclusive(P + 64);
  v14 = *((unsigned __int8 *)a2 + 28);
  if ( (((unsigned __int8)v4[28] ^ (unsigned __int8)v14) & 4) != 0 )
  {
    v38 = RmpQoSEnableDisableForHost((struct _RM_ACTIVITY_HOST *)P, (v14 >> 2) & 1);
    v26 = v38;
    if ( v38 == -1073741822 )
    {
      v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 4;
    }
    else if ( v38 < 0 )
    {
      goto LABEL_40;
    }
  }
  v15 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)v4 + 2) != v15
    || (v16 = *((_QWORD *)a2 + 1), *((_QWORD *)v4 + 1) != v16)
    || (v17 = *(_QWORD *)a2, *(_QWORD *)v4 != *(_QWORD *)a2)
    || *((_DWORD *)v4 + 6) != *((_DWORD *)a2 + 6)
    || ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) != 0 )
  {
    v16 = *((_QWORD *)a2 + 1);
    v17 = *(_QWORD *)a2;
    goto LABEL_17;
  }
  if ( (v5 & 1) != 0 )
  {
LABEL_17:
    v18 = &v48;
    v19 = *((_QWORD *)P + 4);
    v20 = *((_DWORD *)P + 156);
    if ( !v15 )
      v18 = 0LL;
    v21 = *(__int64 **)(*((_QWORD *)P + 6) + 40LL);
    v44 = v17;
    v22 = *v21;
    v23 = *((unsigned int *)P + 155);
    v48 = v15;
    v24 = *(__int64 (__fastcall **)(__int64 *, char *, char *, __int64, int, __int64, __int64 *, __int64 *, __int64 *, _QWORD))(v22 + 32);
    v50 = v16;
    v26 = v24(v21, P + 88, P + 552, v23, v20, v19, v18, &v44, &v50, 0LL);
    if ( v26 >= 0 )
    {
      v28 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v29 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v29 |= 2uLL;
        ++v29[2];
      }
      RtlAcquireSRWLockExclusive(P + 64);
      v30 = GetCurrentThreadId();
      v31 = HampLockTrackerId;
      *((_DWORD *)P + 18) = v30;
      *(_QWORD *)v4 = *(_QWORD *)a2;
      *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
      if ( v31 != -1 )
      {
        v32 = TlsGetValue(v31);
        if ( (*(_BYTE *)v32 & 2) == 0 )
          __int2c();
        v13 = v32[2]-- == 1LL;
        if ( v13 )
          *v32 &= ~2uLL;
      }
      *((_DWORD *)P + 18) = 0;
      RtlReleaseSRWLockExclusive(P + 64);
      if ( *((_DWORD *)v4 + 6) == *((_DWORD *)a2 + 6) && ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) == 0
        || (v26 = RmpActivityHostApplyExecutionSpeed((struct _RM_ACTIVITY_HOST *)P, a2), v26 >= 0) )
      {
        v26 = 0;
      }
      v5 = v49;
    }
    if ( v26 < 0 )
      goto LABEL_40;
  }
  v33 = v5 & 2;
  if ( *((int *)a2 + 6) >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0 && v33 )
    RmHamHostActOnProcesses((struct _RM_ACTIVITY_HOST *)P, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)1);
  v34 = *((unsigned __int8 *)a2 + 28);
  v25 = (unsigned __int8)v4[28];
  v27 = *((_QWORD *)P + 6);
  if ( (((unsigned __int8)v25 ^ (unsigned __int8)v34) & 0x70) != 0 || v33 )
  {
    v37 = v4[28];
    if ( (*(_BYTE *)(v27 + 508) & 0x10) != 0 )
    {
      RmHamHostActOnProcesses(
        (struct _RM_ACTIVITY_HOST *)P,
        0x2000u,
        1u,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampSystemSetBamWindowStateProcess,
        (void *)((v34 >> 4) & 7));
      v37 = v4[28];
      LOBYTE(v34) = *((_BYTE *)a2 + 28);
    }
    v25 = v37;
    LOBYTE(v25) = v37 ^ (v34 ^ v37) & 0x70;
    v4[28] = v25;
    LOBYTE(v34) = *((_BYTE *)a2 + 28);
  }
  v35 = (v34 & 8) != 0;
  LOBYTE(v25) = (v25 & 8) != 0;
  if ( (_BYTE)v25 != v35 || v33 )
  {
    if ( v35 )
    {
      v26 = RmHamHostActOnProcesses(
              (struct _RM_ACTIVITY_HOST *)P,
              0x2000u,
              1u,
              (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
              0LL);
      if ( v26 < 0 )
        goto LABEL_40;
    }
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 8;
  }
  v26 = 0;
LABEL_40:
  if ( (P[836] & 1) != 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    {
      v39 = v4[28];
      v43 = v26;
      LOBYTE(v48) = (v39 >> 4) & 7;
      v40 = (v39 & 2) != 0;
      v42[0] = v4[24];
      v44 = *((_QWORD *)v4 + 1);
      v45 = *(_QWORD *)v4;
      v46 = *((_QWORD *)v4 + 2);
      v47[0] = *((_QWORD *)P + 4);
      LOBYTE(v50) = v40;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v40,
        (unsigned int)&unk_18009BEDF,
        v27,
        v17,
        (__int64)&v43,
        (__int64)v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)v42,
        (__int64)&v50,
        (__int64)&v48);
    }
  }
  else if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v41 = (v4[28] & 2) != 0;
    LODWORD(v44) = v26;
    LOBYTE(v48) = v41;
    LOBYTE(v50) = v4[24];
    v47[0] = *((_QWORD *)v4 + 1);
    v46 = *(_QWORD *)v4;
    v47[1] = *((_QWORD *)v4 + 2);
    v47[2] = *((_QWORD *)P + 4);
    v43 = *((_DWORD *)P + 156);
    LODWORD(v45) = *((_DWORD *)P + 155);
    v47[3] = P + 552;
    v47[4] = P + 88;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v25,
      &unk_18009BD8E);
  }
  return (unsigned int)v26;
}
