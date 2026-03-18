/*
 * XREFs of DrvSetMonitorsDimState @ 0x1C0071574
 * Callers:
 *     PowerUnDimMonitor @ 0x1C0071190 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0071310 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C011EA60 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C00137F0 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00139BC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetMonitorsDimState(char a1, __int128 *a2)
{
  wchar_t *i; // rdi
  unsigned int j; // esi
  __int64 v6; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rax
  __int128 v8; // xmm0
  struct _DEVICE_OBJECT *v9; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v12; // [rsp+60h] [rbp-9h] BYREF
  char InputBuffer; // [rsp+68h] [rbp-1h] BYREF
  __int16 v14; // [rsp+69h] [rbp+0h]
  char v15; // [rsp+6Bh] [rbp+2h]
  __int128 v16; // [rsp+6Ch] [rbp+3h]

  UpdateMonitorDevices();
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    for ( j = 0; j < *((_DWORD *)i + 54); ++j )
    {
      v6 = *((_QWORD *)i + 28);
      DeviceObject = 0LL;
      Object = 0LL;
      if ( (int)((__int64 (__fastcall *)(wchar_t *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C024A9E8)(
                  i + 124,
                  *(unsigned int *)(v6 + 20LL * j + 4),
                  &Object,
                  &DeviceObject) >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        v8 = *a2;
        v9 = AttachedDeviceReference;
        v14 = 0;
        v15 = 0;
        InputBuffer = a1;
        v16 = v8;
        GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324D7u, &InputBuffer, 0x14u, 0LL, 0, &v12, 1u, 0);
        ObfDereferenceObject(v9);
        ObfDereferenceObject(Object);
      }
    }
  }
}
