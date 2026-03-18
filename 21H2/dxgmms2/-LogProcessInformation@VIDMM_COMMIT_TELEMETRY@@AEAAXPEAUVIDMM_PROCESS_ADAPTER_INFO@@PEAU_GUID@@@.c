/*
 * XREFs of ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00E5F30
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00AAD54 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00E5878 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00E59A4 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00E5DEC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00E6150 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@455555AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C003065C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U3@U.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C009DD54 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2,
        struct _GUID *a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // r10
  VIDMM_PROCESS_BUDGET_STATE *v9; // r8
  _QWORD *v10; // r8
  bool v11; // zf
  const char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // [rsp+90h] [rbp-19h] BYREF
  __int64 v20; // [rsp+98h] [rbp-11h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+1Fh] BYREF
  const char *v27; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 ProcessImageFileName; // [rsp+E0h] [rbp+37h] BYREF
  unsigned __int16 *v30; // [rsp+E8h] [rbp+3Fh] BYREF
  BOOL v31; // [rsp+110h] [rbp+67h] BYREF
  __int64 v32; // [rsp+128h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      v6 = *(_QWORD *)this;
      v7 = 0;
      if ( *(_DWORD *)(*(_QWORD *)this + 7016LL) )
      {
        do
        {
          v8 = v6;
          if ( (unsigned int)dword_1C006E048 <= 5 || !tlgKeywordOn((__int64)&dword_1C006E048, 0x10000LL) )
            goto LABEL_15;
          v32 = *((_QWORD *)v9 + 4);
          v19 = *((_QWORD *)v9 + 18);
          v20 = *((_QWORD *)v9 + 10);
          v21 = *((_QWORD *)v9 + 26);
          v31 = *(_QWORD *)v9 != 0LL;
          v22 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v9);
          v23 = v10[3];
          v24 = v10[17];
          v25 = v10[9];
          v11 = *((_BYTE *)this + 24) == 0;
          v26 = v10[25];
          if ( v11 )
          {
            v12 = 0LL;
          }
          else
          {
            v13 = *((_QWORD *)a2 + 5);
            if ( !v13 || (v14 = *(_QWORD *)(v13 + 32)) == 0 )
            {
LABEL_13:
              v12 = "Occluded";
              goto LABEL_14;
            }
            v15 = *(_DWORD *)(v14 + 432);
            if ( (v15 & 1) != 0 )
            {
              v12 = "Focus";
            }
            else
            {
              v11 = (v15 & 2) == 0;
              v12 = "Visible";
              if ( v11 )
                goto LABEL_13;
            }
          }
LABEL_14:
          v16 = (_QWORD *)*((_QWORD *)a2 + 5);
          v27 = v12;
          v28 = *v16;
          ProcessImageFileName = PsGetProcessImageFileName(*v16);
          v17 = *(_QWORD *)(*(_QWORD *)this + 24LL);
          v30 = *(unsigned __int16 **)(v17 + 1616);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v17,
            byte_1C0051736,
            a3,
            v18,
            &v30,
            (void **)&ProcessImageFileName,
            (__int64)&v28,
            (void **)&v27,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v31,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v32);
          v8 = *(_QWORD *)this;
LABEL_15:
          ++v7;
          v6 = v8;
        }
        while ( v7 < *(_DWORD *)(v8 + 7016) );
      }
    }
  }
}
