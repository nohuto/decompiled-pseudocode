/*
 * XREFs of CheckSpaceAvailable @ 0x1C00428F8
 * Callers:
 *     WerKernelCreateReport @ 0x1C0042A58 (WerKernelCreateReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckSpaceAvailable(HANDLE KeyHandle)
{
  unsigned int v1; // ebx
  NTSTATUS v3; // eax
  _DWORD *Pool2; // rdi
  NTSTATUS v5; // eax
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  Length = 0;
  v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( v3 == -2147483643 || v3 == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (int)Length, 2003137131LL);
    if ( Pool2 )
    {
      v5 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, Length, &Length);
      if ( v5 >= 0 )
      {
        if ( Pool2[5] < 0xAu )
          v1 = 1;
        else
          DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Live kernel queue size exceeded\n", 518);
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n", 512, v5);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 495);
    }
  }
  else
  {
    DbgPrintEx(
      0x96u,
      0,
      "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n",
      487,
      v3);
  }
  return v1;
}
