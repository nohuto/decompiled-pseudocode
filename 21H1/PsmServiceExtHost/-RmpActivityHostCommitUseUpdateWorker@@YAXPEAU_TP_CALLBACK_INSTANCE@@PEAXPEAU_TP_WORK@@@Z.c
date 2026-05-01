/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001F680
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800177A0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800187F0 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180021990 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180021A54 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180021AE0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180021B98 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002214C (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006A72C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  unsigned __int64 v5; // rdi
  unsigned int v6; // r15d
  DWORD v7; // ebp
  _QWORD *Value; // rsi
  __int128 v9; // xmm1
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  ULONGLONG v14; // rbp
  unsigned __int64 v15; // r14
  DWORD v16; // r14d
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  bool v19; // zf
  int v20; // r8d
  int v21; // r9d
  _QWORD *v22; // rax
  DWORD v23; // ebx
  unsigned __int64 v24; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-48h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v5 = 0LL;
  v24 = 0LL;
  v6 = 2;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009C252, 0, 0, 2u, &v27);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v7) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4218 = GetCurrentThreadId();
  *((_DWORD *)a2 + 368) &= ~1u;
  if ( RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a2, 2u) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 6) + 2712LL) & 1) == 0 )
    {
      v9 = *((_OWORD *)a2 + 74);
      v10 = *((_QWORD *)a2 + 148);
      v27 = (struct _EVENT_DATA_DESCRIPTOR)*((_OWORD *)a2 + 73);
      v28 = v9;
      if ( v10 )
      {
        v11 = RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a2, 0LL, &v24, &v25);
        v5 = v24;
        if ( v11 >= 0 )
        {
          v12 = *((_QWORD *)a2 + 166);
          v13 = *((_QWORD *)a2 + 169);
          if ( v24 < v12 )
          {
            v14 = 0LL;
          }
          else if ( v24 < *((_QWORD *)a2 + 167) )
          {
            v14 = *((_QWORD *)a2 + 166);
            v12 = *((_QWORD *)a2 + 167);
          }
          else if ( v24 < *((_QWORD *)a2 + 168) )
          {
            v12 = *((_QWORD *)a2 + 168);
            v14 = *((_QWORD *)a2 + 167);
          }
          else
          {
            v14 = *((_QWORD *)a2 + 168);
            v12 = -1LL;
          }
          RmpActivityHostComputeCommitEstimate(v24, *((_QWORD *)a2 + 169), &v24, &v25);
          v15 = v25;
          if ( v14 <= v24 )
            v14 = v24;
          if ( v5 <= v13 && v12 >= v25 )
            v12 = v25;
          v27.Ptr = v14;
          *(_QWORD *)&v27.Size = v12;
          if ( v5 < *((_QWORD *)a2 + 166) )
          {
            v6 = 1;
          }
          else if ( v5 >= *((_QWORD *)a2 + 167) )
          {
            v6 = 4 - (v5 < *((_QWORD *)a2 + 168));
          }
          RmpActivityHostUpdateCommitUseState(a2, v5, v6);
          RmpActivityHostEnsureCommitHeadroom((struct _RM_ACTIVITY_HOST *)a2, v5, v15);
          RmpActivityHostApplyEnforcementSettings(a2, (struct _RM_ENFORCEMENT_SETTINGS *)&v27, 1);
        }
      }
    }
  }
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v17 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v17 |= 2uLL;
    ++v17[2];
  }
  RtlAcquireSRWLockExclusive(a2 + 64);
  *((_DWORD *)a2 + 18) = GetCurrentThreadId();
  if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 1);
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v18 & 2) == 0 )
      __int2c();
    v19 = v18[2]-- == 1LL;
    if ( v19 )
      *v18 &= ~2uLL;
  }
  *((_DWORD *)a2 + 18) = 0;
  RtlReleaseSRWLockExclusive(a2 + 64);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v22 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v22 & 1) == 0 )
      __int2c();
    v19 = v22[1]-- == 1LL;
    if ( v19 )
      *v22 &= ~1uLL;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v24 = *((_QWORD *)a2 + 4);
    v25 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009C443,
      v20,
      v21,
      (__int64)&v24,
      (__int64)&v25);
  }
  RmpObjectRelease(a2);
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v23, 0LL);
  }
}
