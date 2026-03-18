/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C004C9B0
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01AEA38 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C004CABC (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C004CB00 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C006E8D0 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00927E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rcx
  _DWORD v15[4]; // [rsp+30h] [rbp-648h] BYREF
  _QWORD v16[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = 0LL;
  v3 = (CBaseInput *)((char *)this + 152);
  for ( i = 0; i < 0x11; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v7 = 3 * v2;
      v16[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v16[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v3) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      v2 = (unsigned int)(v2 + 1);
      v16[v7 + 1] = *((_QWORD *)v3 + 5);
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
            v16);
    if ( v12 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v15);
      RIMOnPnpNotification(*((_QWORD *)this + 1));
      if ( !v15[0] )
        UserSessionSwitchLeaveCrit(v13);
    }
  }
  return (unsigned int)v12;
}
