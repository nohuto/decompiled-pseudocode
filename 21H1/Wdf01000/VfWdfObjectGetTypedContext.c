/*
 * XREFs of VfWdfObjectGetTypedContext @ 0x1C00C4514
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C45E0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00C4700 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C47A0 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C48C0 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C4960 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00C4A80 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00C4B10 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00C4BA0 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C4C30 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00C4D50 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00C4DE0 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00C4E70 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00C4F00 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00C4F90 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00C5020 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00C50B0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00C5150 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00C51F0 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00C5280 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C5430 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C55F0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C57B0 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00C5960 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00C59F0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00C5AD0 (VfEvtIoWrite.c)
 * Callees:
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E638 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     WPP_IFR_SF_sq @ 0x1C0038BE4 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall VfWdfObjectGetTypedContext(void *Handle, const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  FxObject *ObjectFromHandle; // rax
  __int64 v4; // r11
  FxObject *v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int64 v7; // rcx
  __int64 m_ObjectSize; // rax
  char *v9; // rax
  const char *_a1; // rcx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 offset; // [rsp+50h] [rbp+8h] BYREF

  offset = 0;
  ObjectFromHandle = FxObject::_GetObjectFromHandle((unsigned __int64)Handle, &offset);
  v5 = ObjectFromHandle;
  m_Globals = ObjectFromHandle->m_Globals;
  if ( !v7 )
    FxVerifierNullBugCheck(ObjectFromHandle->m_Globals, retaddr);
  if ( !v4 )
    FxVerifierNullBugCheck(ObjectFromHandle->m_Globals, retaddr);
  m_ObjectSize = ObjectFromHandle->m_ObjectSize;
  if ( (_WORD)m_ObjectSize && (v9 = (char *)v5 + m_ObjectSize) != 0LL )
  {
    while ( *((_QWORD *)v9 + 4) != v4 )
    {
      v9 = (char *)*((_QWORD *)v9 + 1);
      if ( !v9 )
        goto LABEL_9;
    }
    return v9 + 48;
  }
  else
  {
LABEL_9:
    _a1 = "<no typename given>";
    if ( *(_QWORD *)(v4 + 8) )
      _a1 = *(const char **)(v4 + 8);
    WPP_IFR_SF_sq(m_Globals, 3u, 0x12u, 0xAu, WPP_Verifier_cpp_Traceguids, _a1, Handle);
    return 0LL;
  }
}
