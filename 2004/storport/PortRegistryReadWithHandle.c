/*
 * XREFs of PortRegistryReadWithHandle @ 0x1C0073F78
 * Callers:
 *     PortRegistryReadDeviceKey @ 0x1C0072804 (PortRegistryReadDeviceKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DA00 (memset.c)
 */

__int64 __fastcall PortRegistryReadWithHandle(
        void *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // r12
  void *v9; // r14
  NTSTATUS v10; // eax
  int v11; // esi
  _QWORD *v12; // rdi
  _DWORD *v13; // rbx
  PVOID SystemRoutineAddress; // rax
  __int64 v16; // [rsp+48h] [rbp-99h] BYREF
  _QWORD DestinationString[3]; // [rsp+50h] [rbp-91h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-79h] BYREF
  _QWORD v19[14]; // [rsp+98h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+140h] [rbp+5Fh] BYREF

  v6 = a4;
  KeyHandle = 0LL;
  HIDWORD(DestinationString[0]) = 0;
  v9 = a1;
  if ( a2 )
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    v10 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v9 = KeyHandle;
    v11 = v10;
  }
  else
  {
    KeyHandle = a1;
    v11 = 0;
  }
  if ( v11 >= 0 )
  {
    v12 = a5;
    v13 = a6;
    v16 = *a5;
    LODWORD(DestinationString[0]) = *a6;
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[1]) = 20;
    v19[0] = PortpRegQueryRoutine;
    v19[2] = *(_QWORD *)(a3 + 8);
    LODWORD(v19[4]) = 0;
    v19[3] = &v16;
    v19[5] = 0LL;
    LODWORD(v19[6]) = 0;
    *(_OWORD *)&DestinationString[1] = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress((PUNICODE_STRING)&DestinationString[1]);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v11 = ((__int64 (__fastcall *)(__int64, void *, _QWORD *, __int64, _QWORD))SystemRoutineAddress)(
            0x40000000LL,
            v9,
            v19,
            v6,
            0LL);
    *v12 = v16;
    *v13 = DestinationString[0];
    if ( a2 )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v11;
}
