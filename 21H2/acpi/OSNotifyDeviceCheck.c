/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C0059804
 * Callers:
 *     NotifyHandler @ 0x1C0031890 (NotifyHandler.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C00083A0 (AMLIIterateParentNext.c)
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     ACPIDockIsDockDevice @ 0x1C000A480 (ACPIDockIsDockDevice.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BBB4 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C004B76C (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C005998C (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 a1)
{
  KIRQL v3; // si
  __int64 v4; // rdx
  __int64 v5; // rbx
  volatile signed __int32 *i; // rax
  __int64 v7; // rdx
  __int64 v8; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C00819A0 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_1C00819A4 = 0;
    WPP_RECORDER_SF_qs(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      8u,
      0x16u,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1,
      (const char *)&dword_1C00819A0);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x17u,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids);
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v4 && _bittest64((const signed __int64 *)(v4 + 8), 0x25u) && (unsigned int)(*(_DWORD *)(v4 + 368) - 2) > 1 )
      *(_BYTE *)(v4 + 185) = 0;
    v5 = 0LL;
    for ( i = (volatile signed __int32 *)AMLIGetParent(a1);
          i;
          i = (volatile signed __int32 *)AMLIIterateParentNext((__int64)i) )
    {
      if ( v5 )
      {
        AMLIDereferenceHandleEx(i);
        break;
      }
      v7 = *(_QWORD *)(*(_QWORD *)i + 104LL);
      if ( v7 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)i + 104LL);
        if ( *(_DWORD *)(v7 + 16) != 1599293264 )
          v5 = 0LL;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
    if ( v5 )
      ACPIBuildSynchronizationRequestInternal(v5, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v5, v8, 1);
    return 0LL;
  }
}
