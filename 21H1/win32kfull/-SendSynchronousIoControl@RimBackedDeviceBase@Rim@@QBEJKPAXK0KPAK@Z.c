/*
 * XREFs of ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z @ 0x1A16B5
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z.c)
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??1DeviceObjectPointer@Io@@QAE@XZ @ 0x1A1445 (--1DeviceObjectPointer@Io@@QAE@XZ.c)
 *     ?GetByObjectName@DeviceObjectPointer@Io@@SGJPBU_UNICODE_STRING@@KKPAV12@@Z @ 0x1A14B4 (-GetByObjectName@DeviceObjectPointer@Io@@SGJPBU_UNICODE_STRING@@KKPAV12@@Z.c)
 *     _SendSynchronousIoControl@32 @ 0x1A1748 (_SendSynchronousIoControl@32.c)
 */

NTSTATUS __thiscall Rim::RimBackedDeviceBase::SendSynchronousIoControl(
        Rim::RimBackedDeviceBase *this,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7)
{
  struct _DEVICE_OBJECT *v7; // eax
  NTSTATUS v8; // esi
  unsigned int v10; // [esp+0h] [ebp-10h]
  unsigned int v11[2]; // [esp+4h] [ebp-Ch] BYREF
  struct _DEVICE_OBJECT *v12; // [esp+Ch] [ebp-4h]

  v11[0] = 0;
  v11[1] = 0;
  v12 = 0;
  if ( *((_BYTE *)this + 8) )
  {
    v7 = (struct _DEVICE_OBJECT *)*((_DWORD *)this + 4);
LABEL_5:
    v8 = SendSynchronousIoControl(
           IoControlCode,
           v7,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           (int)a7);
    goto LABEL_6;
  }
  v8 = Io::DeviceObjectPointer::GetByObjectName(
         *((_DWORD *)this + 3) != 0 ? (struct _UNICODE_STRING *)(*((_DWORD *)this + 3) + 184) : 0,
         *((const struct _UNICODE_STRING **)this + 3),
         (void **)v11,
         v10,
         (struct Io::DeviceObjectPointer *)v11[0]);
  if ( v8 >= 0 )
  {
    v7 = v12;
    goto LABEL_5;
  }
LABEL_6:
  Io::DeviceObjectPointer::~DeviceObjectPointer((Io::DeviceObjectPointer *)v11);
  return v8;
}
