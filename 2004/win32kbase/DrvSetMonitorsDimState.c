/*
 * XREFs of DrvSetMonitorsDimState @ 0x1C0062EE8
 * Callers:
 *     PowerUnDimMonitor @ 0x1C0063A00 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0063B80 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0120DB0 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C00B3A10 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00B3BDC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

LONG_PTR __fastcall DrvSetMonitorsDimState(char a1, __int128 *a2)
{
  LONG_PTR result; // rax
  wchar_t *i; // rdi
  unsigned int j; // esi
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rax
  __int128 v9; // xmm0
  struct _DEVICE_OBJECT *v10; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v13; // [rsp+60h] [rbp-9h] BYREF
  char InputBuffer; // [rsp+68h] [rbp-1h] BYREF
  __int16 v15; // [rsp+69h] [rbp+0h]
  char v16; // [rsp+6Bh] [rbp+2h]
  __int128 v17; // [rsp+6Ch] [rbp+3h]

  result = UpdateMonitorDevices();
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    for ( j = 0; j < *((_DWORD *)i + 54); ++j )
    {
      v7 = *((_QWORD *)i + 28);
      DeviceObject = 0LL;
      Object = 0LL;
      result = ((__int64 (__fastcall *)(wchar_t *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C024C9E8)(
                 i + 124,
                 *(unsigned int *)(v7 + 20LL * j + 4),
                 &Object,
                 &DeviceObject);
      if ( (int)result >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        v9 = *a2;
        v10 = AttachedDeviceReference;
        v15 = 0;
        v16 = 0;
        InputBuffer = a1;
        v17 = v9;
        GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324D7u, &InputBuffer, 0x14u, 0LL, 0, &v13, 1u, 0);
        ObfDereferenceObject(v10);
        result = ObfDereferenceObject(Object);
      }
    }
  }
  return result;
}
