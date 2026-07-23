/*
 * XREFs of LdrCreateEnclave @ 0x1800CCCC0
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x18009E5A0 (ZwCreateEnclave.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD33C (LdrpCreateSoftwareEnclave.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800CFEF0 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG Reserved,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  int SoftwareEnclave; // ebx
  PVOID BaseAddressa; // [rsp+58h] [rbp-10h] BYREF

  BaseAddressa = *BaseAddress;
  SoftwareEnclave = ZwCreateEnclave(
                      ProcessHandle,
                      &BaseAddressa,
                      *(ULONG_PTR *)&Reserved,
                      Size,
                      InitialCommitment,
                      EnclaveType,
                      EnclaveInformation,
                      EnclaveInformationLength,
                      EnclaveError);
  if ( SoftwareEnclave >= 0 )
  {
    if ( EnclaveType - 16 > 1
      || (SoftwareEnclave = LdrpCreateSoftwareEnclave(BaseAddressa, Size, EnclaveType), SoftwareEnclave >= 0) )
    {
      *BaseAddress = BaseAddressa;
    }
    else
    {
      ZwFreeVirtualMemory(ProcessHandle, &BaseAddressa, 0LL, 0x8000u);
    }
  }
  if ( EnclaveType == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16LL, (unsigned int)SoftwareEnclave);
  return SoftwareEnclave;
}
