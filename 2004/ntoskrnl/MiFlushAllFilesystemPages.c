/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1405300F8
 * Callers:
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiGetNextPageTablePte @ 0x14029ED90 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiInPageSingleKernelStack @ 0x1402E4BE0 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x140277D88 (MiIsWorkingSetTrimThread.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x140343DA0 (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x140535D28 (MiEmptyAllWorkingSets.c)
 */

__int64 MiFlushAllFilesystemPages()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // rdx
  int v2; // r8d
  unsigned int v3; // ebx
  int v4; // edi

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = MiIsWorkingSetTrimThread();
    v3 = 0;
    if ( !(_DWORD)result )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( (char *)v1 != (char *)MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( v1 != MiMappedPageWriter )
        {
          if ( v2 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_140C4E4C8);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_140C50E94);
          result = qword_140C52930;
          if ( qword_140C528C0 != qword_140C52930 )
          {
            v4 = dword_140C50E2C;
            do
            {
              KeSetEvent(&stru_140C50E98, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_140C52930;
              if ( qword_140C528C0 == qword_140C52930 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C50E2C;
              if ( v4 != dword_140C50E2C )
              {
                v4 = dword_140C50E2C;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140C50E94);
        }
      }
    }
  }
  return result;
}
