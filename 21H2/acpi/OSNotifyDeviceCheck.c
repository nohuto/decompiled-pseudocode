/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C0058AC4
 * Callers:
 *     NotifyHandler @ 0x1C002EE50 (NotifyHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C001B348 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C8F0 (ACPIBuildSynchronizationRequestInternal.c)
 *     AMLIIterateParentNext @ 0x1C002F1F4 (AMLIIterateParentNext.c)
 *     WPP_RECORDER_SF_qs @ 0x1C002F228 (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C0058C58 (OSNotifyDeviceEject.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 *a1)
{
  KIRQL v3; // si
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C0082780 = *(_DWORD *)(*a1 + 40);
    byte_1C0082784 = 0;
    WPP_RECORDER_SF_qs(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      8u,
      0x16u,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      (char)a1,
      (const char *)&dword_1C0082780);
  }
  if ( ACPIDockIsDockDevice(a1) )
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
    v4 = *(_QWORD *)(*a1 + 104);
    if ( v4 && (*(_QWORD *)(v4 + 8) & 0x2000000000LL) != 0 && (unsigned int)(*(_DWORD *)(v4 + 328) - 2) > 1 )
      *(_BYTE *)(v4 + 185) = 0;
    v5 = 0LL;
    v6 = AMLIGetParent((__int64)a1);
    if ( v6 )
    {
      do
      {
        if ( v5 )
          break;
        v7 = *(_QWORD *)(*(_QWORD *)v6 + 104LL);
        if ( v7 )
        {
          v5 = *(_QWORD *)(*(_QWORD *)v6 + 104LL);
          if ( *(_DWORD *)(v7 + 16) != 1599293264 )
            v5 = 0LL;
        }
        v6 = AMLIIterateParentNext(v6);
      }
      while ( v6 );
      if ( v6 )
        AMLIDereferenceHandleEx(v6);
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
    if ( v5 )
      ACPIBuildSynchronizationRequestInternal(v5, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v5, v8, 1);
    return 0LL;
  }
}
