/*
 * XREFs of ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01439C8
 * Callers:
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0143538 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C014369C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C0248EF8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z @ 0x1C02764E4 (-OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OpenRegistrySubkey(
        PHANDLE KeyHandle,
        __int64 DesiredAccess,
        void *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *Disposition)
{
  ACCESS_MASK v7; // edi
  __int64 v10; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  v7 = DesiredAccess;
  if ( !KeyHandle )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL, DesiredAccess);
    *(_QWORD *)(v10 + 24) = 717LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  if ( Disposition )
    return ZwCreateKey(KeyHandle, v7, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(KeyHandle, v7, &ObjectAttributes);
}
