/*
 * XREFs of ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00C1988
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00C10C8 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C12D0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C13FC (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1844 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1BB0 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@455555AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C0026668 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U3@U.c)
 *     _tlgKeywordOn @ 0x1C0026C84 (_tlgKeywordOn.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0082F10 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2,
        struct _GUID *a3)
{
  int v3; // r12d
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // r8
  VIDMM_PROCESS_BUDGET_STATE *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r11
  __int64 *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r10
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // [rsp+90h] [rbp-39h] BYREF
  __int64 v27; // [rsp+98h] [rbp-31h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-1h] BYREF
  const char *v34; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 ProcessImageFileName; // [rsp+E0h] [rbp+17h] BYREF
  unsigned __int16 *v37; // [rsp+E8h] [rbp+1Fh] BYREF
  BOOL v38; // [rsp+130h] [rbp+67h] BYREF
  __int64 v39; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = (int)a3;
  if ( *((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      v6 = *(_QWORD *)this;
      v7 = 0;
      if ( *(_DWORD *)(*(_QWORD *)this + 7000LL) )
      {
        do
        {
          v8 = v6;
          if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x10000LL) )
          {
            v9 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a2 + 6) + 296LL * v7);
            v10 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v9);
            v11 = *((_QWORD *)v9 + 3);
            v12 = *((_QWORD *)v9 + 25);
            v13 = (__int64 *)*((_QWORD *)a2 + 5);
            v14 = *v13;
            v26 = *((_QWORD *)v9 + 18);
            v27 = *((_QWORD *)v9 + 10);
            v29 = v10;
            v31 = *((_QWORD *)v9 + 17);
            v16 = *((_BYTE *)this + 24) == 0;
            v17 = *((_QWORD *)v9 + 9);
            v38 = v15 != 0;
            v39 = v18;
            v28 = v19;
            v30 = v11;
            v32 = v17;
            v33 = v12;
            if ( v16 )
            {
              v20 = 0LL;
            }
            else
            {
              LOBYTE(v21) = 0;
              if ( v13 )
              {
                v22 = v13[4];
                if ( v22 )
                {
                  v21 = *(_DWORD *)(v22 + 352);
                  v13 = (__int64 *)*((_QWORD *)a2 + 5);
                }
              }
              if ( (v21 & 1) != 0 )
              {
                v20 = "Focus";
              }
              else
              {
                v16 = (v21 & 2) == 0;
                v20 = "Visible";
                if ( v16 )
                  v20 = "Occluded";
              }
            }
            v35 = v14;
            v23 = *v13;
            v34 = v20;
            ProcessImageFileName = PsGetProcessImageFileName(v23);
            v24 = *(_QWORD *)(*(_QWORD *)this + 24LL);
            v37 = *(unsigned __int16 **)(v24 + 1496);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v24,
              (int)&unk_1C0043C31,
              v3,
              v25,
              &v37,
              (void **)&ProcessImageFileName,
              (__int64)&v35,
              (void **)&v34,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&v31,
              (__int64)&v30,
              (__int64)&v29,
              (__int64)&v38,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v39);
            v8 = *(_QWORD *)this;
          }
          ++v7;
          v6 = v8;
        }
        while ( v7 < *(_DWORD *)(v8 + 7000) );
      }
    }
  }
}
