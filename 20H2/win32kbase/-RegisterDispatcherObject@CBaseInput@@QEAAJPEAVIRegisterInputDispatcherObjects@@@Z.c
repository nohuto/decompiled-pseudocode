/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00AD910
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01AC6B8 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0033790 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00ADA1C (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C00ADA60 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rsi
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD v18[4]; // [rsp+30h] [rbp-648h] BYREF
  _QWORD v19[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = 0LL;
  v3 = (CBaseInput *)((char *)this + 152);
  for ( i = 0; i < 0x11; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v7 = 3 * v2;
      v19[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v19[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v3) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      v2 = (unsigned int)(v2 + 1);
      v19[v7 + 1] = *((_QWORD *)v3 + 5);
    }
    v3 = (CRIMBase::SensorDispatcherObject *)((char *)v3 + 64);
  }
  v12 = 0;
  if ( (_DWORD)v2 )
  {
    v12 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
            a2,
            this,
            (unsigned int)v2,
            v19);
    if ( v12 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v18);
      RIMOnPnpNotification(*((_QWORD *)this + 1));
      if ( !v18[0] )
        UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
    }
  }
  return (unsigned int)v12;
}
