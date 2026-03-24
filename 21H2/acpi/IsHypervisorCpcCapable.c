/*
 * XREFs of IsHypervisorCpcCapable @ 0x1C00B54B0
 * Callers:
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     OSOpenUnicodeHandle @ 0x1C008FC50 (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C0094F04 (OSGetRegistryValue.c)
 */

bool IsHypervisorCpcCapable()
{
  int v0; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-40h] BYREF
  PVOID P; // [rsp+28h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  __int128 SystemInformation; // [rsp+40h] [rbp-20h] BYREF

  Handle = 0LL;
  P = 0LL;
  v0 = 1;
  SystemInformation = 0LL;
  DestinationString = 0LL;
  if ( ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, 0x10u, 0LL) >= 0
    && (WORD4(SystemInformation) & 0x400) != 0 )
  {
    v0 = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor");
    if ( (int)OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle) >= 0 )
    {
      if ( OSGetRegistryValue(Handle, L"LegacyHvAlgorithm", &P) >= 0 )
      {
        if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
          v0 = *((_DWORD *)P + 2);
        ExFreePoolWithTag(P, 0);
      }
      ZwClose(Handle);
    }
  }
  return v0 == 0;
}
