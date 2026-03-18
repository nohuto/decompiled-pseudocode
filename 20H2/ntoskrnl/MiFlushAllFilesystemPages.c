/*
 * XREFs of MiFlushAllFilesystemPages @ 0x140533AC8
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTablePte @ 0x14026E0D0 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiInPageSingleKernelStack @ 0x140335B20 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     MiIsWorkingSetTrimThread @ 0x1403240A0 (MiIsWorkingSetTrimThread.c)
 *     CcForEachPartition @ 0x14033B8A0 (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1405396F8 (MiEmptyAllWorkingSets.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_140C4E548);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_140C50F14);
          result = qword_140C529B0;
          if ( qword_140C52940 != qword_140C529B0 )
          {
            v4 = dword_140C50EAC;
            do
            {
              KeSetEvent(&stru_140C50F18, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_140C529B0;
              if ( qword_140C52940 == qword_140C529B0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C50EAC;
              if ( v4 != dword_140C50EAC )
              {
                v4 = dword_140C50EAC;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140C50F14);
        }
      }
    }
  }
  return result;
}
