/*
 * XREFs of NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C0278CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0276F2C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryUnLockNotification(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LUID *v4; // rdx

  v4 = (struct _LUID *)a1;
  if ( gbDisableLddmSpriteTearDown )
    return 0LL;
  if ( a1 >= MmUserProbeAddress )
    v4 = (struct _LUID *)MmUserProbeAddress;
  return DxLddmSharedPrimaryUnLockNotification(*v4, v4[1].LowPart, a3, a4);
}
