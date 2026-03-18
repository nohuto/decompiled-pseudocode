/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0005E10 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00060C8 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C000632C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInput @ 0x1C0006390 (RIMRegisterForInput.c)
 *     ApiSetEditionHidAutoRepeatTimeout @ 0x1C0007004 (ApiSetEditionHidAutoRepeatTimeout.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00ADA1C (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  const enum CRIMBase::DispatcherHandleName *v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rsi
  int DispatcherHandles; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 DispatcherHandleByName; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rbp
  int v22; // esi
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9

  v6 = a2;
  if ( a3 > 0x11 )
    return 3221225485LL;
  v8 = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = *((unsigned int *)v6 + v8);
      if ( (unsigned int)v9 >= 0x11 )
        return 3221225485LL;
      if ( dword_1C02066E0[3 * v9] != (_DWORD)v9 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(dword_1C02066E0, a2, a3, a4);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v9 + 152),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C02066E0[3 * v9]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            (_DWORD)a2,
            3,
            10,
            (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
            v9);
        }
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL, 0LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  v20 = CRIMBase::GetDispatcherHandleByName(this, 2LL, 0LL);
  if ( !v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
  LODWORD(v21) = 0;
  *((_QWORD *)this + 8) = (char *)this + 80;
  v22 = 0;
  *((_QWORD *)this + 9) = (char *)this + 80;
  if ( (*((_BYTE *)this + 144) & 0x1C) == 0x1C )
  {
    v22 = ApiSetEditionHidAutoRepeatTimeout();
    if ( v22 )
    {
      if ( CRIMBase::IsDispatcherObjectValid(this, 3u) )
      {
        v21 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL);
        if ( !v21 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
      }
    }
  }
  v23 = RIMRegisterForInput(
          *((_DWORD *)this + 36),
          DispatcherHandleByName,
          v20,
          v21,
          v22,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v23 >= 0 )
  {
    v23 = RawInputManagerObjectResolveHandle(*((_QWORD *)this + 1), 3LL, 1LL, (char *)this + 16);
    if ( v23 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
  }
  return (unsigned int)v23;
}
