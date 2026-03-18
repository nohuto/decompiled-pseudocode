/*
 * XREFs of DlpLoadDxgkrnl @ 0x1C005A0A8
 * Callers:
 *     InitializeGraphicsInfrastructure @ 0x1C0059EF4 (InitializeGraphicsInfrastructure.c)
 * Callees:
 *     DlpGetServiceNameInSystemSpace @ 0x1C005A1A4 (DlpGetServiceNameInSystemSpace.c)
 *     DlpUnloadDxgkrnl @ 0x1C01CDAD0 (DlpUnloadDxgkrnl.c)
 */

__int64 __fastcall DlpLoadDxgkrnl(__int64 a1, union _LARGE_INTEGER a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  const WCHAR *v5; // rax
  WCHAR *v6; // rdi
  unsigned int DeviceObjectPointer; // ebx
  bool v8; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  Interval = a2;
  DestinationString = 0LL;
  v4 = 10;
  ObjectName = 0LL;
  v5 = (const WCHAR *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DlpGetServiceNameInSystemSpace)(
                        a1,
                        (union _LARGE_INTEGER)a2.QuadPart,
                        a3,
                        a4);
  v6 = (WCHAR *)v5;
  if ( v5 )
  {
    RtlInitUnicodeString(&DestinationString, v5);
    DeviceObjectPointer = ZwLoadDriver(&DestinationString);
    ExFreePoolWithTag(v6, 0);
    if ( (int)(DeviceObjectPointer + 0x80000000) < 0 || DeviceObjectPointer == -1073741554 )
    {
      v8 = DeviceObjectPointer != -1073741554;
      RtlInitUnicodeString(&ObjectName, L"\\Device\\DxgKrnl");
      while ( 1 )
      {
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                &ObjectName,
                                0xC0000000,
                                (PFILE_OBJECT *)&gpDxgkFileObject,
                                &gpDxgkDeviceObject);
        if ( (DeviceObjectPointer & 0x80000000) == 0 )
          break;
        if ( v8 )
        {
          DlpUnloadDxgkrnl();
          return DeviceObjectPointer;
        }
        Interval.QuadPart = -50000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        if ( !--v4 )
          return DeviceObjectPointer;
      }
      if ( !v8 )
        return (unsigned int)-1073741554;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return DeviceObjectPointer;
}
