/*
 * XREFs of ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180020860
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180020030 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006A72C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

unsigned __int64 __fastcall HampWakeContextComputeNextState(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // r9
  unsigned __int64 v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  _BYTE JobInformation[24]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+68h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+90h] [rbp-9h] BYREF
  __int64 *v19; // [rsp+B0h] [rbp+17h]
  __int64 v20; // [rsp+B8h] [rbp+1Fh]

  RtlQueryUnbiasedInterruptTime(&v13);
  if ( (a2 & 0x20) != 0 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_BYTE *)(a3 + 32) = 1;
    goto LABEL_9;
  }
  v6 = *(_BYTE *)(a1 + 160);
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 144);
  *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 160);
  if ( ((unsigned __int8)~(v6 >> 1) & ((a2 & 0x19) == 0)) == 0 )
  {
    NtQueryInformationJobObject(*(HANDLE *)(a1 + 112), (JOBOBJECTINFOCLASS)20, JobInformation, 0x40u, 0LL);
    v7 = v17;
    if ( (a2 & 8) != 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 128);
      if ( v17 && !v8 && (*(_BYTE *)(a1 + 184) & 0x70) == 0x10 )
      {
        if ( (unsigned int)dword_1800B3218 > 5 )
        {
          v14 = *(_QWORD *)(a1 + 168);
          v20 = 8LL;
          v19 = &v14;
          tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1FB9, 0, 0, 3u, &v18);
        }
        goto LABEL_9;
      }
    }
    *(_QWORD *)a3 = v17;
    if ( v7 )
    {
      if ( v8 )
      {
        if ( (a2 & 1) != 0 )
        {
          *(_BYTE *)(a3 + 32) |= 2u;
          *(_QWORD *)(a3 + 24) = v13 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        }
        else if ( v13 >= *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_BYTE *)(a1 + 160) & 2) != 0
            && (unsigned int)dword_1800B3218 > 4
            && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
          {
            v15 = *(_QWORD *)(a1 + 168);
            v14 = v12;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1800B3218,
              (unsigned int)&unk_1800A1FE7,
              v11,
              v12,
              (__int64)&v15,
              (__int64)&v14);
          }
          *(_BYTE *)(a3 + 32) &= ~2u;
        }
        else
        {
          *(_BYTE *)(a3 + 32) |= 2u;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 32) |= 2u;
        v10 = v13;
        *(_QWORD *)(a3 + 24) = v13 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
          *(_QWORD *)(a3 + 16) = v10 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 96LL);
      }
    }
    else
    {
      if ( v13 >= *(_QWORD *)(a1 + 144) )
      {
        if ( (*(_BYTE *)(a1 + 160) & 2) != 0
          && (unsigned int)dword_1800B3218 > 4
          && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
        {
          v14 = *(_QWORD *)(a1 + 168);
          v20 = 8LL;
          v19 = &v14;
          tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A2022, 0, 0, 3u, &v18);
        }
        *(_BYTE *)(a3 + 32) &= ~2u;
      }
      else
      {
        *(_BYTE *)(a3 + 32) |= 2u;
      }
      *(_QWORD *)(a3 + 24) = 0LL;
    }
  }
LABEL_9:
  result = v13;
  *(_QWORD *)(a3 + 8) = v13;
  return result;
}
