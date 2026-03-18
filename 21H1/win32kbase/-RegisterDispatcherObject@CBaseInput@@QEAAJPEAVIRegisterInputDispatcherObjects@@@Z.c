/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C003FE40
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01B4798 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C003FF4C (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C003FF90 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0063920 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rsi
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  _DWORD v12[4]; // [rsp+30h] [rbp-648h] BYREF
  _QWORD v13[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = 0LL;
  v3 = (CBaseInput *)((char *)this + 152);
  for ( i = 0; i < 0x11; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v7 = 3 * v2;
      v13[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v13[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v3) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      v2 = (unsigned int)(v2 + 1);
      v13[v7 + 1] = *((_QWORD *)v3 + 5);
    }
    v3 = (CRIMBase::SensorDispatcherObject *)((char *)v3 + 64);
  }
  v9 = 0;
  if ( (_DWORD)v2 )
  {
    v9 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
           a2,
           this,
           (unsigned int)v2,
           v13);
    if ( v9 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v12);
      RIMOnPnpNotification(*((_QWORD *)this + 1));
      if ( !v12[0] )
        UserSessionSwitchLeaveCrit(v10);
    }
  }
  return (unsigned int)v9;
}
