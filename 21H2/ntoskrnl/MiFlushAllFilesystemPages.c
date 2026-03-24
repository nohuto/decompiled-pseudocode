/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1405355C8
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020CDB0 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiInPageSingleKernelStack @ 0x1402E4C40 (MiInPageSingleKernelStack.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiIsWorkingSetTrimThread @ 0x1402C4D10 (MiIsWorkingSetTrimThread.c)
 *     CcForEachPartition @ 0x1402F8C10 (CcForEachPartition.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiEmptyAllWorkingSets @ 0x14053B1F8 (MiEmptyAllWorkingSets.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_140C4E6C8);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_140C51094);
          result = qword_140C52B30;
          if ( qword_140C52AC0 != qword_140C52B30 )
          {
            v4 = dword_140C5102C;
            do
            {
              KeSetEvent(&stru_140C51098, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_140C52B30;
              if ( qword_140C52AC0 == qword_140C52B30 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C5102C;
              if ( v4 != dword_140C5102C )
              {
                v4 = dword_140C5102C;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140C51094);
        }
      }
    }
  }
  return result;
}
