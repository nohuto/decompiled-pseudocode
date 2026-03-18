/*
 * XREFs of AcpiHandleInternalNotify @ 0x1C005B058
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C005B2B0 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x1C002EF94 (AMLIIterateParentNext.c)
 *     WPP_RECORDER_SF_qs @ 0x1C002EFC8 (WPP_RECORDER_SF_qs.c)
 */

void __fastcall AcpiHandleInternalNotify(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdi
  KIRQL v3; // si
  __int64 v4; // rcx

  v1 = a1;
  v2 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C0082780 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_1C0082784 = 0;
    WPP_RECORDER_SF_qs(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      8u,
      0xAu,
      (__int64)&WPP_4ea83bc4352b3df9b35783bbf858603c_Traceguids,
      (char)a1,
      (const char *)&dword_1C0082780);
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v1 + 2);
  if ( v1 )
  {
    do
    {
      if ( v2 )
        break;
      v4 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v4 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v4 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = (volatile signed __int32 *)AMLIIterateParentNext((__int64)v1);
    }
    while ( v1 );
    if ( v1 )
      AMLIDereferenceHandleEx((__int64)v1);
  }
  _InterlockedOr64((volatile signed __int64 *)(v2 + 8), 0x20000000000uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
}
