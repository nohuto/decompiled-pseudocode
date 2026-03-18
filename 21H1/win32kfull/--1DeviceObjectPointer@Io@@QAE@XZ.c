/*
 * XREFs of ??1DeviceObjectPointer@Io@@QAE@XZ @ 0x1A1445
 * Callers:
 *     ?GetByObjectName@DeviceObjectPointer@Io@@SGJPBU_UNICODE_STRING@@KKPAV12@@Z @ 0x1A14B4 (-GetByObjectName@DeviceObjectPointer@Io@@SGJPBU_UNICODE_STRING@@KKPAV12@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z @ 0x1A16B5 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall Io::DeviceObjectPointer::~DeviceObjectPointer(Io::DeviceObjectPointer *this)
{
  void *v2; // ecx
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_DWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *(_DWORD *)this )
    ZwClose(*(HANDLE *)this);
}
