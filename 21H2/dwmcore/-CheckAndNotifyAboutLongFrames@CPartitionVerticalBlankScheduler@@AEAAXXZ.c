/*
 * XREFs of ?CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006C690
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18006C910 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@34344@Z @ 0x180153838 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U2@@-$_tlgWriteTemplat.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::CheckAndNotifyAboutLongFrames(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned int v6; // esi
  __int64 v7; // rax
  DWORD CurrentProcessId; // r12d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  signed int LastError; // eax
  int v13; // eax
  DWORD v14; // [rsp+60h] [rbp-9h] BYREF
  __int64 v15; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v18[8]; // [rsp+80h] [rbp+17h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  DWORD pSessionId; // [rsp+D0h] [rbp+67h] BYREF
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v22; // [rsp+E0h] [rbp+77h] BYREF
  DWORD v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *((unsigned int *)this + 1257);
  if ( (_DWORD)v1 != -1 )
  {
    v3 = (unsigned int)CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS;
    v4 = *((_QWORD *)this + 38 * v1 + 22);
    v5 = (*((_QWORD *)this + 38 * v1 + 30) - *((_QWORD *)this + 38 * v1 + 27)) / g_qpcFrequencyPerMillisecond.QuadPart;
    if ( *((_BYTE *)this + 304 * v1 + 293)
      && v5 > (unsigned int)CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS )
    {
      ++*((_DWORD *)this + 3986);
      v6 = CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed;
      if ( !(*((_DWORD *)this + 3986)
           % (unsigned int)CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed) )
      {
        v7 = *((_QWORD *)this + 8);
        if ( v4 > *(_QWORD *)(v7 + 160) )
        {
          *(_QWORD *)(v7 + 160) = v4;
          CurrentProcessId = GetCurrentProcessId();
          if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
          {
            LastError = GetLastError();
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
            if ( LastError >= 0 )
              LastError = -2003304445;
            ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
          }
          if ( (unsigned int)dword_180344E80 > 5
            && (qword_180344E90 & 0x400000000000LL) != 0
            && (qword_180344E98 & 0x400000000000LL) == qword_180344E98 )
          {
            v13 = *((_DWORD *)this + 3986) / v6;
            v15 = 0x1000000LL;
            v21 = v13;
            v23 = pSessionId;
            v16 = v5;
            v17 = v4;
            v22 = v6;
            v18[0] = v3;
            v14 = CurrentProcessId;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v9,
              (unsigned int)&unk_1802E3B7A,
              v10,
              v11,
              (__int64)&v14,
              (__int64)&v23,
              (__int64)v18,
              (__int64)&v22,
              (__int64)&v17,
              (__int64)&v21,
              (__int64)&v16,
              (__int64)&v15);
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 3986) = 0;
    }
  }
}
