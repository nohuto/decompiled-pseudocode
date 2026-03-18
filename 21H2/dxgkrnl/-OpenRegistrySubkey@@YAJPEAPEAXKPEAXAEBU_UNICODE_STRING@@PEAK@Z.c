/*
 * XREFs of ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01D6784
 * Callers:
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C01D62B8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01D642C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03788C4 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z @ 0x1C03B1954 (-OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor@@CAJIKAEAPEAXPEAK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall OpenRegistrySubkey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        void *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *Disposition)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF

  if ( !KeyHandle )
  {
    WdLogSingleEntry1(1LL, 245LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_pSubkeyHandle != NULL", 245LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  if ( Disposition )
    return ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
