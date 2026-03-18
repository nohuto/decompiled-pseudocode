/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0036F50
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0036E10 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00370C8 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C003732C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInput @ 0x1C0037390 (RIMRegisterForInput.c)
 *     ApiSetEditionHidAutoRepeatTimeout @ 0x1C0038004 (ApiSetEditionHidAutoRepeatTimeout.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C003FF4C (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // edx
  int DispatcherHandles; // r14d
  __int64 v12; // rcx
  __int64 DispatcherHandleByName; // r14
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rbp
  int v17; // esi
  int v18; // esi
  __int64 v19; // rcx
  __int64 v21; // rcx

  if ( a3 > 0x11 )
    return 3221225485LL;
  v8 = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v9 >= 0x11 )
        return 3221225485LL;
      if ( dword_1C020FF60[3 * v9] != (_DWORD)v9 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(dword_1C020FF60);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v9 + 152),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C020FF60[3 * v9]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v10,
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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  v15 = CRIMBase::GetDispatcherHandleByName(this, 2LL, 0LL);
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  LODWORD(v16) = 0;
  *((_QWORD *)this + 8) = (char *)this + 80;
  v17 = 0;
  *((_QWORD *)this + 9) = (char *)this + 80;
  if ( (*((_BYTE *)this + 144) & 0x1C) == 0x1C )
  {
    v17 = ApiSetEditionHidAutoRepeatTimeout();
    if ( v17 )
    {
      if ( CRIMBase::IsDispatcherObjectValid(this, 3u) )
      {
        v16 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL);
        if ( !v16 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      }
    }
  }
  v18 = RIMRegisterForInput(
          *((_DWORD *)this + 36),
          DispatcherHandleByName,
          v15,
          v16,
          v17,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v18 >= 0 )
  {
    v18 = RawInputManagerObjectResolveHandle(*((_QWORD *)this + 1), 3LL, 1LL, (char *)this + 16);
    if ( v18 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
  }
  return (unsigned int)v18;
}
