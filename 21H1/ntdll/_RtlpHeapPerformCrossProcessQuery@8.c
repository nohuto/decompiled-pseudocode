/*
 * XREFs of _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165
 * Callers:
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     _RtlpHpStackTraceConfig@4 @ 0x4B36E268 (_RtlpHpStackTraceConfig@4.c)
 *     _RtlpHpStackTraceSerializeRemote@4 @ 0x4B36E83D (_RtlpHpStackTraceSerializeRemote@4.c)
 *     _RtlpHpTagQueryHeapsRemote@12 @ 0x4B370210 (_RtlpHpTagQueryHeapsRemote@12.c)
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E (_RtlpCreateExecutionRequiredRequest@8.c)
 *     _RtlpDestroyExecutionRequiredRequest@4 @ 0x4B36FCC4 (_RtlpDestroyExecutionRequiredRequest@4.c)
 */

int __fastcall RtlpHeapPerformCrossProcessQuery(int a1, int *a2)
{
  int v2; // edi
  HANDLE v3; // ebx
  int v4; // ecx
  int VirtualMemory; // esi
  int *v6; // eax
  HANDLE v7; // edi
  int v9; // eax
  void *v10; // [esp+Ch] [ebp-24h] BYREF
  HANDLE Handle; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+14h] [ebp-1Ch]
  int *v13; // [esp+18h] [ebp-18h]
  HANDLE v14; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+20h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp-8h] BYREF

  v2 = a1;
  v13 = a2;
  v12 = a1;
  v10 = 0;
  Handle = 0;
  v3 = 0;
  v16 = 72;
  v14 = 0;
  VirtualMemory = NtAllocateVirtualMemory(a1, (int)&v10, 0, (int)&v16, 12288, 4);
  if ( VirtualMemory >= 0 )
  {
    VirtualMemory = RtlpCreateUserThreadEx(
                      v2,
                      0,
                      3,
                      0,
                      0,
                      0,
                      v4,
                      (int)RtlpExtendedHeapInformationWorkerThread,
                      v10,
                      &Handle,
                      &v17);
    if ( VirtualMemory >= 0 )
    {
      v6 = v13;
      if ( *v13 )
      {
        VirtualMemory = ZwDuplicateObject(-1, *v13, v2, (int)v13, 983071, 0, 0);
        if ( VirtualMemory < 0 )
          goto LABEL_9;
        v6 = v13;
      }
      VirtualMemory = NtWriteVirtualMemory(v2, (int)v10, (int)v6, 72, (int)&v15);
      if ( VirtualMemory >= 0 )
      {
        if ( v15 == 72 )
        {
          v9 = RtlpCreateExecutionRequiredRequest(v2, &v14);
          v7 = Handle;
          VirtualMemory = v9;
          if ( v9 < 0 || (VirtualMemory = ZwResumeThread((int)Handle, 0), VirtualMemory < 0) )
          {
            v3 = v14;
          }
          else
          {
            ZwWaitForSingleObject((int)v7, 0, 0);
            v3 = v14;
            if ( v14 )
            {
              RtlpDestroyExecutionRequiredRequest(v14);
              v3 = 0;
            }
            NtClose(v7);
            v7 = 0;
            VirtualMemory = NtReadVirtualMemory(v12, (int)v10, (int)v13, 72, (int)&v15);
            if ( VirtualMemory < 0 )
              goto LABEL_12;
            if ( v15 != 72 )
            {
              VirtualMemory = -2147483635;
LABEL_12:
              v2 = v12;
              goto LABEL_13;
            }
            VirtualMemory = v13[6];
          }
LABEL_10:
          if ( v7 )
          {
            ZwTerminateThread((int)v7, 0);
            NtClose(v7);
          }
          goto LABEL_12;
        }
        VirtualMemory = -2147483635;
      }
    }
LABEL_9:
    v7 = Handle;
    goto LABEL_10;
  }
LABEL_13:
  if ( v10 )
    NtFreeVirtualMemory(v2, (int)&v10, (int)&v16, 0x8000);
  if ( v3 )
    RtlpDestroyExecutionRequiredRequest(v3);
  return VirtualMemory;
}
