/*
 * XREFs of SmpInit @ 0x14000C620
 * Callers:
 *     wmain @ 0x140001840 (wmain.c)
 * Callees:
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 *     InitializeWow64OnBoot @ 0x140009FC0 (InitializeWow64OnBoot.c)
 *     SmpInitializePendingRename @ 0x14000CAAC (SmpInitializePendingRename.c)
 *     SmpCreateSecurityDescriptors @ 0x14000CD90 (SmpCreateSecurityDescriptors.c)
 *     SmpInitializeKnownSubSystems @ 0x14000DDF0 (SmpInitializeKnownSubSystems.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000EE13 (memset_0.c)
 */

NTSTATUS SmpInit()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // eax
  int v2; // ecx
  NTSTATUS (__stdcall *v3)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG); // rcx
  _BYTE *Heap; // rax
  _BYTE *v5; // rbx
  NTSTATUS v6; // edi
  void *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ecx
  ULONG i; // ebx
  NTSTATUS v11; // eax
  void *v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int DataFromRegistry; // ebx
  int v18; // eax
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-98h] BYREF
  int v24; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v25; // [rsp+88h] [rbp-80h]
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v27[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v28; // [rsp+4B8h] [rbp+3B0h]
  __int64 v29; // [rsp+4C8h] [rbp+3C0h]

  LODWORD(v23[0]) = 1441812;
  v23[1] = L"\\SmApiPort";
  v24 = 4456514;
  v25 = L"\\Device\\VolumesSafeForWriteAccess";
  ReturnLength[0] = 0;
  SmpInitSaveGlobals = (__int64)&SmpInitLastCall;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  result = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  if ( result >= 0 )
  {
    v1 = NtQuerySystemInformation(SystemSessionPoolTagInformation|0x80, &SmpSystemWriteConstraintInfo, 8u, 0LL);
    v2 = SmpSystemWriteConstraintInfo;
    ProcessInformation = 1;
    if ( v1 < 0 )
      v2 = 0;
    SmpSystemWriteConstraintInfo = v2;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
    result = SmpInitializeKnownSubSystems();
    if ( result < 0 )
    {
      SmpInitProgressByLine = 1716;
      v3 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))SmpInitializeKnownSubSystems;
LABEL_6:
      SmpInitReturnStatus = result;
      SmpInitLastCall = (__int64)v3;
      return result;
    }
    SmpManufacturingMode = 0;
    result = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, ReturnLength);
    if ( result >= 0 )
    {
      return -1073741823;
    }
    else if ( result == -1073741820 )
    {
      Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, ReturnLength[0]);
      v5 = Heap;
      if ( Heap )
      {
        v6 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ReturnLength[0], ReturnLength);
        v7 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
        if ( v6 >= 0 )
        {
          SmpManufacturingMode = *v5 & 1;
          RtlFreeHeap(v7, 0, v5);
          LOBYTE(v8) = 1;
          result = SmpCreateSecurityDescriptors(v8);
          if ( result < 0 )
          {
            SmpInitProgressByLine = 1780;
            v3 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))SmpCreateSecurityDescriptors;
            goto LABEL_6;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v23;
          ObjectAttributes.Attributes = 0;
          ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          memset_0(v27, 0, 0x48uLL);
          v27[0] = 0x20000;
          v28 = 328LL;
          v29 = 1000000LL;
          result = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v27);
          if ( result < 0 )
          {
            v3 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))NtAlpcCreatePort;
            SmpInitProgressByLine = 1803;
            goto LABEL_6;
          }
          SmpUniqueProcessId = LODWORD(KeGetPcr()->NtTib.Self[1].StackBase);
          SmpActiveProcessorCount = MEMORY[0x7FFE03C0];
          result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
          if ( result < 0 )
          {
            v3 = NtQuerySystemInformation;
            SmpInitProgressByLine = 1821;
            goto LABEL_6;
          }
          SmpMaximumNodeCount = SystemInformation[0] + 1;
          RtlInitializeBitMap(&SmpNodeBitmap, &SmpNodeBitmapBuffer, SystemInformation[0] + 1);
          RtlClearAllBits(&SmpNodeBitmap);
          v9 = SmpMaximumNodeCount;
          for ( i = 0; i < v9; ++i )
          {
            if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
            {
              RtlSetBits(&SmpNodeBitmap, i, 1u);
              v9 = SmpMaximumNodeCount;
            }
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v11 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
          v12 = EventHandle;
          v13 = v11;
          if ( v11 < 0 )
            v12 = 0LL;
          EventHandle = v12;
          result = SmpInitializePendingRename();
          if ( result >= 0 )
          {
            DataFromRegistry = SmpLoadDataFromRegistry(EventHandle, v14, v15, v16);
            if ( v13 >= 0 )
              NtClose(EventHandle);
            if ( DataFromRegistry >= 0 )
            {
              v18 = InitializeWow64OnBoot();
              DataFromRegistry = v18;
              if ( v18 < 0 )
              {
                SmpInitProgressByLine = 1908;
                SmpInitReturnStatus = v18;
                SmpInitLastCall = (__int64)InitializeWow64OnBoot;
              }
            }
            return DataFromRegistry;
          }
        }
        else
        {
          RtlFreeHeap(v7, 0, v5);
          return v6;
        }
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
