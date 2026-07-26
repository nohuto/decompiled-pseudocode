/*
 * XREFs of ?ReferenceWdi@@YA_NXZ @ 0x1C0125B8C
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0125E40 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_Zd @ 0x1C00AB120 (WPP_RECORDER_SF_Zd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C0109BA4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C0117508 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

char ReferenceWdi(void)
{
  bool v0; // di
  char v1; // bl
  unsigned int v2; // eax
  NTSTATUS Driver; // eax
  KLockHolder v5; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)&g_WdiLoadLock;
  v5.m_Region.m_Entered = 0;
  v1 = 1;
  while ( 1 )
  {
    KLockHolder::AcquireExclusive(&v5);
    if ( g_WdiLoadState == 3 )
      goto LABEL_6;
    v2 = g_WdiRefCount + 1;
    g_WdiRefCount = v2;
    if ( v2 == 1 )
      break;
    if ( g_WdiLoadState == 2 )
      goto LABEL_19;
    g_WdiRefCount = v2 - 1;
LABEL_6:
    KLockHolder::ReleaseExclusive(&v5);
    KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&g_WdiLoadInProgress);
  }
  KeClearEvent(&g_WdiLoadInProgress);
  g_WdiLoadState = 1;
  KLockHolder::ReleaseExclusive(&v5);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_6862260e284e3ae1ae68988a51ed4b07_Traceguids,
      &DriverServiceName.Length);
  Driver = ZwLoadDriver((PUNICODE_STRING)&DriverServiceName);
  if ( Driver == -1073741554 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_6862260e284e3ae1ae68988a51ed4b07_Traceguids);
    goto LABEL_18;
  }
  if ( Driver >= 0 )
  {
    v0 = 1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Z(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_6862260e284e3ae1ae68988a51ed4b07_Traceguids,
        &DriverServiceName.Length);
LABEL_18:
    KLockHolder::AcquireExclusive(&v5);
    g_WdiLoadState = 2;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
    g_WdiLoadedByNdis = v0;
    KLockHolder::ReleaseExclusive(&v5);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_6862260e284e3ae1ae68988a51ed4b07_Traceguids,
        &DriverServiceName.Length,
        Driver);
    KLockHolder::AcquireExclusive(&v5);
    --g_WdiRefCount;
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
    KLockHolder::ReleaseExclusive(&v5);
    v1 = 0;
  }
LABEL_19:
  KLockHolder::~KLockHolder(&v5);
  return v1;
}
