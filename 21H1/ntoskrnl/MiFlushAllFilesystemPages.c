/*
 * XREFs of MiFlushAllFilesystemPages @ 0x14052FAA8
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020C280 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiInPageSingleKernelStack @ 0x140329D10 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140202D30 (CcForEachPartition.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiIsWorkingSetTrimThread @ 0x14033E738 (MiIsWorkingSetTrimThread.c)
 *     MiEmptyAllWorkingSets @ 0x1405356D8 (MiEmptyAllWorkingSets.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_140C4E608);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_140C50F94);
          result = qword_140C52A30;
          if ( qword_140C529C0 != qword_140C52A30 )
          {
            v4 = dword_140C50F2C;
            do
            {
              KeSetEvent(&stru_140C50F98, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_140C52A30;
              if ( qword_140C529C0 == qword_140C52A30 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C50F2C;
              if ( v4 != dword_140C50F2C )
              {
                v4 = dword_140C50F2C;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140C50F94);
        }
      }
    }
  }
  return result;
}
