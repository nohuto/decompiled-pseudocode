/*
 * XREFs of ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0084D58
 * Callers:
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C00849A0 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C002DA34 (RtlUnicodeStringPrintf.c)
 */

__int64 __fastcall FxPkgPnp::SleepStudyRegisterBlockingComponents(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rdi
  _DEVICE_OBJECT *v4; // rbx
  signed int _a2; // ebx
  const void *_a1; // rax
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  const void *ObjectHandleUnchecked; // rax
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  SS_LIBRARY__ *SleepStudyLibContext; // rcx
  __int64 v12; // rdx
  unsigned __int8 irql[8]; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING pdoFriendlyName; // [rsp+48h] [rbp-B8h] BYREF
  SS_COMPONENT__ *componentPowerRef; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING friendlyName; // [rsp+60h] [rbp-A0h] BYREF
  _GUID v18; // [rsp+70h] [rbp-90h] BYREF
  _GUID v19; // [rsp+80h] [rbp-80h] BYREF
  _GUID thisGuid; // [rsp+90h] [rbp-70h] BYREF
  _GUID parentGuid; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t powerRefFriendlyName[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pdoFriendlyName_buffer[256]; // [rsp+100h] [rbp+0h] BYREF

  *(_QWORD *)&pdoFriendlyName.Length = 0x2000000LL;
  thisGuid = 0LL;
  wcscpy(powerRefFriendlyName, L"WDF Power References for %wZ, Driver:%S");
  parentGuid = 0LL;
  pdoFriendlyName.Buffer = pdoFriendlyName_buffer;
  m_DeviceBase = this->m_DeviceBase;
  friendlyName = 0LL;
  componentPowerRef = 0LL;
  irql[0] = 0;
  m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
  v4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  SleepstudyHelper_GenerateGuid(0LL, m_DeviceObject, &parentGuid);
  SleepstudyHelper_GenerateGuid(2LL, v4, &thisGuid);
  _a2 = SleepstudyHelper_GetPdoFriendlyName(m_DeviceObject, &pdoFriendlyName);
  if ( _a2 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v7 = 22;
LABEL_3:
    v8 = 2;
LABEL_4:
    WPP_IFR_SF_qL(this->m_Globals, v8, 0xCu, v7, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
    goto $Done_65;
  }
  friendlyName.MaximumLength = pdoFriendlyName.Length + 144;
  friendlyName.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                     ExDefaultNonPagedPoolType,
                                     (unsigned __int16)(pdoFriendlyName.Length + 144),
                                     0x53535554u);
  if ( friendlyName.Buffer )
  {
    _a2 = RtlUnicodeStringPrintf(
            &friendlyName,
            powerRefFriendlyName,
            &pdoFriendlyName,
            this->m_Globals->Public.DriverName);
    if ( _a2 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v7 = 24;
      goto LABEL_3;
    }
    m_SleepStudy = this->m_SleepStudy;
    v18 = thisGuid;
    SleepStudyLibContext = m_SleepStudy->SleepStudyLibContext;
    v19 = parentGuid;
    _a2 = SleepstudyHelper_RegisterComponentEx(SleepStudyLibContext, &v19, &v18, &friendlyName, &componentPowerRef);
    if ( _a2 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v7 = 25;
      v8 = 3;
      goto LABEL_4;
    }
    this->m_SleepStudy->ComponentPowerRef = componentPowerRef;
    SleepstudyHelper_AcquireComponentLock(this->m_SleepStudy->ComponentPowerRef, irql);
    if ( this->m_SleepStudyPowerRefIoCount )
      SleepstudyHelper_ComponentActiveLocked(this->m_SleepStudy->ComponentPowerRef);
    LOBYTE(v12) = irql[0];
    SleepstudyHelper_ReleaseComponentLock(this->m_SleepStudy->ComponentPowerRef, v12);
  }
  else
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x17u, WPP_FxPkgPnpKM_cpp_Traceguids, ObjectHandleUnchecked);
    _a2 = -1073741664;
  }
$Done_65:
  if ( friendlyName.Buffer )
    ExFreePoolWithTag(friendlyName.Buffer, 0);
  return (unsigned int)_a2;
}
