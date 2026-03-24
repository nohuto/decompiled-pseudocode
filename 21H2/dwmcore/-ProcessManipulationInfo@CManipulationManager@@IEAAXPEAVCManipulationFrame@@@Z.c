/*
 * XREFs of ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1802262F8
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1802257E4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@43@Z @ 0x180224018 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180224830 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225FC4 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180226E9C (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18022775C (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::ProcessManipulationInfo(CManipulationManager *this, LARGE_INTEGER *a2)
{
  DWORD LowPart; // eax
  DWORD v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  DWORD v12; // [rsp+50h] [rbp-19h] BYREF
  DWORD v13; // [rsp+54h] [rbp-15h] BYREF
  DWORD v14; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER v15; // [rsp+60h] [rbp-9h] BYREF
  __int128 v16; // [rsp+68h] [rbp-1h] BYREF
  __int128 v17[4]; // [rsp+78h] [rbp+Fh] BYREF

  LowPart = a2[21].LowPart;
  v5 = *((_DWORD *)this + 73);
  if ( *((_DWORD *)this + 72) != LowPart )
  {
    ++v5;
    *((_DWORD *)this + 72) = LowPart;
    *((_DWORD *)this + 73) = v5;
  }
  v17[0] = *(_OWORD *)&a2[4].LowPart;
  v16 = *(_OWORD *)&a2[6].LowPart;
  v15 = a2[8];
  QueryPerformanceCounter(a2 + 17);
  v9 = v17[0];
  a2[10].LowPart = a2[20].LowPart;
  v10 = v16;
  a2[10].HighPart = a2[21].LowPart;
  *(_OWORD *)&a2[12].LowPart = v9;
  a2[11].LowPart = v5;
  *(LARGE_INTEGER *)&v9 = v15;
  *(_OWORD *)&a2[14].LowPart = v10;
  a2[16].QuadPart = v9;
  a2[19].LowPart = a2[28].HighPart - 1;
  if ( (unsigned int)dword_180344EF0 > 4 && (qword_180344F00 & 2) != 0 && (qword_180344F08 & 2) == qword_180344F08 )
  {
    v11 = *(_OWORD *)&a2[4].LowPart;
    v12 = a2[20].LowPart;
    *(LARGE_INTEGER *)&v17[0] = a2[30];
    v13 = a2[2].LowPart;
    v15.LowPart = a2[3].LowPart;
    *(_QWORD *)&v16 = v11;
    v14 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v6,
      byte_1802EA8EF,
      v7,
      v8,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)v17,
      (__int64)&v16,
      (__int64)&v12);
  }
  CManipulationManager::ProcessFrameInputPreTargeting(this, (struct CManipulationFrame *)a2);
  CManipulationManager::CalculateFrameTargets(this, (struct CManipulationFrame *)a2);
  CManipulationManager::TargetFrameInput(this, (struct CManipulationFrame *)a2);
  CManipulationManager::RouteAllFrames(this, (struct CManipulationFrame *)a2);
  CManipulationManager::ProcessFrameInputPostTargeting(this, (struct CManipulationFrame *)a2);
}
