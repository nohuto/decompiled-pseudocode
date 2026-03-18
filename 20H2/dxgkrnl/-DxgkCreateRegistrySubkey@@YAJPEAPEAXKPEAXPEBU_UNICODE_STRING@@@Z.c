/*
 * XREFs of ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C02F40C0
 * Callers:
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C01847A8 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0184940 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkCreateRegistrySubkey(void **a1, ACCESS_MASK a2, void *a3, struct _UNICODE_STRING *a4)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+8h] BYREF

  if ( !a1 )
    return -1073741811;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.ObjectName = a4;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Disposition = 0;
  return ZwCreateKey(a1, a2, &ObjectAttributes, 0, 0LL, 0, &Disposition);
}
