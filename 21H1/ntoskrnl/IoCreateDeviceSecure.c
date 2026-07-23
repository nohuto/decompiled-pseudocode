/*
 * XREFs of IoCreateDeviceSecure @ 0x140721BA0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039B0F0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObSetSecurityObjectByPointer @ 0x1406155C0 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x140702940 (IoCreateDevice.c)
 *     IopGetSecurityDescriptorInformation @ 0x140721DEC (IopGetSecurityDescriptorInformation.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140758064 (IopCreateSecureDeviceClassSettings.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407A8604 (IopUpdateSecureDeviceClassState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        ULONG a2,
        UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        const void **a7,
        PGUID Guid,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r12
  ULONG DeviceCharacteristics; // r13d
  struct _DEVICE_OBJECT *v11; // rdi
  _WORD *v12; // r14
  int SecureDeviceClassSettings; // ebx
  char v14; // si
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONG v18; // r9d
  NTSTATUS v20; // eax
  _WORD *PoolWithTag; // rax
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  ULONG DeviceType[4]; // [rsp+50h] [rbp-30h]
  ULONG v25[2]; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]

  v9 = DeviceObject;
  DeviceCharacteristics = a5;
  v23 = 0LL;
  *(_QWORD *)&DeviceObject->Type = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  DeviceObject = 0LL;
  *(_QWORD *)v25 = 0LL;
  *(_OWORD *)DeviceType = 0LL;
  if ( !a3 && (a5 & 0x80u) == 0 )
  {
    SecureDeviceClassSettings = -1073741811;
LABEL_32:
    v14 = DeviceType[0];
    goto LABEL_21;
  }
  if ( Guid )
  {
    SecureDeviceClassSettings = IopCreateSecureDeviceClassSettings(Guid);
    if ( SecureDeviceClassSettings < 0 )
      goto LABEL_32;
  }
  v14 = DeviceType[0];
  if ( (DeviceType[0] & 2) != 0 )
    goto LABEL_10;
  v15 = *(unsigned __int16 *)a7;
  if ( *((unsigned __int16 *)a7 + 1) != v15 + 2 || (v16 = (__int64)a7[1], *(_WORD *)(v16 + 2 * (v15 >> 1))) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15 + 2, 0x63466F49u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SecureDeviceClassSettings = -1073741670;
      goto LABEL_21;
    }
    memmove(PoolWithTag, a7[1], *(unsigned __int16 *)a7);
    v12[(unsigned __int64)*(unsigned __int16 *)a7 >> 1] = 0;
    v16 = (__int64)v12;
  }
  SecureDeviceClassSettings = SeConvertStringSecurityDescriptorToSecurityDescriptor(v16, 1, (__int64)&v23, 0LL);
  if ( SecureDeviceClassSettings >= 0 )
  {
    v17 = v23;
    v14 = 2;
    DeviceType[0] = 2;
    *(_QWORD *)&DeviceType[2] = v23;
    *(_WORD *)(v23 + 2) |= 8u;
    if ( !Guid
      || (v26 = 2LL,
          v28 = 0LL,
          v27 = v17,
          SecureDeviceClassSettings = IopUpdateSecureDeviceClassState(Guid),
          SecureDeviceClassSettings >= 0) )
    {
LABEL_10:
      v18 = a4;
      if ( (DeviceType[0] & 1) != 0 )
        v18 = DeviceType[1];
      if ( (DeviceType[0] & 4) != 0 )
        DeviceCharacteristics = v25[0];
      if ( (DeviceType[0] & 8) != 0 )
        a6 = v25[1];
      v20 = IoCreateDevice(a1, a2, a3, v18, DeviceCharacteristics, a6, &DeviceObject);
      v11 = DeviceObject;
      SecureDeviceClassSettings = v20;
      if ( v20 >= 0 )
      {
        if ( (v14 & 2) == 0
          || (SecureDeviceClassSettings = IopGetSecurityDescriptorInformation(*(PSECURITY_DESCRIPTOR *)&DeviceType[2]),
              SecureDeviceClassSettings >= 0)
          && (SecureDeviceClassSettings = ObSetSecurityObjectByPointer((__int64)v11, 0, *(__int64 *)&DeviceType[2]),
              SecureDeviceClassSettings >= 0) )
        {
          *(_QWORD *)&v9->Type = v11;
          v11 = 0LL;
        }
      }
    }
  }
LABEL_21:
  if ( (v14 & 2) != 0 )
    ExFreePoolWithTag(*(PVOID *)&DeviceType[2], 0);
  if ( v11 )
    IoDeleteDevice(v11);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)SecureDeviceClassSettings;
}
