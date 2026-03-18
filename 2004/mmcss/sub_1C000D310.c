/*
 * XREFs of sub_1C000D310 @ 0x1C000D310
 * Callers:
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 * Callees:
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 *     sub_1C000D080 @ 0x1C000D080 (sub_1C000D080.c)
 *     sub_1C000D7E0 @ 0x1C000D7E0 (sub_1C000D7E0.c)
 */

__int64 sub_1C000D310()
{
  NTSTATUS v0; // ebx
  unsigned int v1; // edx
  int v2; // r9d
  NTSTATUS v3; // ebx
  int v4; // eax
  int v5; // r9d
  bool v6; // dl
  int v7; // r9d
  int DpcData_high; // r9d
  ULONG ActiveThreadCount; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C000F110LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  if ( v0 < 0 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x1Cu, (__int64)&unk_1C0005230, v0);
    return (unsigned int)v0;
  }
  else
  {
    v1 = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F090LL, 0x64u);
    if ( v1 - 10 > 0x5A )
      v2 = 20;
    else
      v2 = 10 * (v1 / 0xA);
    dword_1C0007280 = v2;
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
      sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x12u, (__int64)&unk_1C0005230, v2);
    if ( dword_1C0007280 == 100 )
    {
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
        sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0x13u, (__int64)&unk_1C0005230);
      v3 = -1073741696;
    }
    else
    {
      v4 = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0A0LL, 0xAu);
      LODWORD(DeviceObject.Dpc.DpcData) = v4;
      v5 = v4;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 71) <= 0xFFFFFFB7 )
        {
          v5 = 70;
          LODWORD(DeviceObject.Dpc.DpcData) = 70;
        }
      }
      else
      {
        v5 = 1;
        LODWORD(DeviceObject.Dpc.DpcData) = 1;
      }
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x14u, (__int64)&unk_1C0005230, v5);
      v6 = (unsigned __int8)sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F080LL, 0) != 0;
      byte_1C000725D = v6;
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x15u, (__int64)&unk_1C0005230, v6);
      v7 = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0B0LL, 2u);
      dword_1C0007224 = v7;
      if ( (unsigned int)(v7 - 1) > 0x1E )
      {
        v7 = 2;
        dword_1C0007224 = 2;
      }
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x16u, (__int64)&unk_1C0005230, v7);
      dword_1C0007228 = (1 << dword_1C0007224) - 1;
      HIDWORD(DeviceObject.Dpc.DpcData) = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0C0LL, 0xF4240u);
      DpcData_high = HIDWORD(DeviceObject.Dpc.DpcData);
      if ( !HIDWORD(DeviceObject.Dpc.DpcData) )
      {
        DpcData_high = 1000000;
        HIDWORD(DeviceObject.Dpc.DpcData) = 1000000;
      }
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x17u, (__int64)&unk_1C0005230, DpcData_high);
      DeviceObject.ActiveThreadCount = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0D0LL, 0x2710u);
      ActiveThreadCount = DeviceObject.ActiveThreadCount;
      if ( DeviceObject.ActiveThreadCount > 0x2710 )
      {
        ActiveThreadCount = 10000;
        DeviceObject.ActiveThreadCount = 10000;
      }
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x18u, (__int64)&unk_1C0005230, ActiveThreadCount);
      v10 = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0E0LL, 0x186A0u);
      *(&DeviceObject.ActiveThreadCount + 1) = v10;
      if ( (unsigned int)(v10 - 50000) > 0xE7EF0 )
      {
        v10 = 100000;
        *(&DeviceObject.ActiveThreadCount + 1) = 100000;
      }
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x19u, (__int64)&unk_1C0005230, v10);
      v11 = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0F0LL, 0x20u);
      dword_1C0007024 = v11;
      if ( (unsigned int)(v11 - 8) > 0x78 )
      {
        v11 = 32;
        dword_1C0007024 = 32;
      }
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x1Au, (__int64)&unk_1C0005230, v11);
      v12 = sub_1C000D080(KeyHandle, (struct _UNICODE_STRING *)0x1C000F100LL, 0x100u);
      dword_1C0007020 = v12;
      if ( (unsigned int)(v12 - 64) > 0xFFBF )
      {
        v12 = 256;
        dword_1C0007020 = 256;
      }
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
        sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x1Bu, (__int64)&unk_1C0005230, v12);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C000F120LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwOpenKey(&Handle, 0x80000100, &ObjectAttributes);
      if ( v3 >= 0 )
      {
        v3 = sub_1C000D7E0(Handle);
        ZwClose(Handle);
      }
    }
    ZwClose(KeyHandle);
    return (unsigned int)v3;
  }
}
