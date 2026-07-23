/*
 * XREFs of IopSafebootDriverLoad @ 0x140894964
 * Callers:
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140267DE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140340C70 (RtlAppendUnicodeStringToString.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1407372E4 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140766324 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char __fastcall IopSafebootDriverLoad(PCUNICODE_STRING Source, _BYTE *a2)
{
  char v2; // di
  char result; // al
  const WCHAR *v6; // rdx
  NTSTATUS v7; // ebx
  PVOID v8; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  P = 0LL;
  Destination = 0LL;
  DestinationString = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( InitSafeBootMode == 1 )
  {
    v6 = L"MINIMAL";
  }
  else
  {
    result = InitSafeBootMode - 2;
    if ( InitSafeBootMode != 2 )
    {
      if ( InitSafeBootMode == 3 )
        return result;
      return 0;
    }
    v6 = L"NETWORK";
  }
  RtlInitUnicodeString(&DestinationString, v6);
  Destination.MaximumLength = DestinationString.Length + Source->Length + 8;
  Destination.Buffer = (wchar_t *)IopVerifierExAllocatePool(PagedPool, Destination.MaximumLength);
  if ( !Destination.Buffer )
    return 0;
  RtlCopyUnicodeString(&Destination, &DestinationString);
  if ( RtlAppendUnicodeToString(&Destination, L"\\") < 0 )
  {
    ExFreePoolWithTag(Destination.Buffer, 0);
    return 0;
  }
  if ( RtlAppendUnicodeStringToString(&Destination, Source) >= 0
    && IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlSafeBoot, 0xF003Fu, 0) >= 0 )
  {
    v7 = IopOpenRegistryKey(&KeyHandle, Handle, &Destination, 0xF003Fu, 0);
    ObCloseHandle(Handle, 0);
    if ( v7 >= 0 )
    {
      if ( a2 && IopGetRegistryValue(KeyHandle, L"SafeBootDrivers", 0, &P) >= 0 )
      {
        v8 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        {
          if ( *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            *a2 = 1;
        }
        ExFreePoolWithTag(v8, 0);
      }
      ObCloseHandle(KeyHandle, 0);
      v2 = 1;
    }
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  return v2;
}
