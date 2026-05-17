/*
 * XREFs of RtlCreateProcessReflection @ 0x1800D5A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800560B0 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18009CE90 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009CFD0 (ZwSetEvent.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18009D590 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18009D710 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x18009D750 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x18009D950 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x18009D960 (NtWaitForMultipleObjects.c)
 *     RtlpProcessReflectionStartup @ 0x1800D5FF0 (RtlpProcessReflectionStartup.c)
 */

__int64 __fastcall RtlCreateProcessReflection(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int VirtualMemory; // ebx
  __int64 *v12; // [rsp+38h] [rbp-89h]
  ULONG ProcessInformationLength[2]; // [rsp+88h] [rbp-39h] BYREF
  PVOID ProcessInformation; // [rsp+90h] [rbp-31h]
  __int64 v15; // [rsp+98h] [rbp-29h]
  HANDLE v16; // [rsp+A0h] [rbp-21h]
  HANDLE v17; // [rsp+A8h] [rbp-19h]
  HANDLE Handle; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-1h]
  HANDLE v21; // [rsp+C8h] [rbp+7h]
  HANDLE v22; // [rsp+D0h] [rbp+Fh]
  __int64 v23; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+1Fh] BYREF

  *(_QWORD *)ProcessInformationLength = 4096LL;
  Handle = 0LL;
  ProcessInformation = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  ZwQuerySystemTime(&v23);
  if ( (a2 & 0xFFFFFFE1) != 0 )
    return 3221225712LL;
  if ( (a2 & 8) != 0 && a3 )
    return 3221225715LL;
  if ( a6 )
  {
    *(_OWORD *)a6 = 0LL;
    *(_OWORD *)(a6 + 16) = 0LL;
  }
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
  {
    ProcessInformation = 0LL;
    goto LABEL_37;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    ProcessInformation,
    ProcessInformationLength[0],
    ProcessInformationLength);
  *(_QWORD *)ProcessInformationLength = 4096LL;
  ZwFreeVirtualMemory();
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_37;
  MEMORY[0x18] = a4;
  MEMORY[0x10] = a3;
  MEMORY[0] = 88LL;
  MEMORY[8] = a2;
  MEMORY[0x30] = a5;
  if ( a1 == -1 )
  {
    MEMORY[8] = a2 | 0x10;
    VirtualMemory = RtlpProcessReflectionStartup(0LL);
    if ( VirtualMemory >= 0 && a6 )
    {
      *(_QWORD *)a6 = MEMORY[0x38];
      *(_QWORD *)(a6 + 8) = MEMORY[0x40];
      *(_QWORD *)(a6 + 16) = MEMORY[0x48];
LABEL_36:
      *(_QWORD *)(a6 + 24) = MEMORY[0x50];
      goto LABEL_37;
    }
    goto LABEL_37;
  }
  v20 = 88LL;
  VirtualMemory = NtCreateSection();
  if ( VirtualMemory < 0 )
    goto LABEL_37;
  v19 = 88LL;
  VirtualMemory = ZwMapViewOfSection();
  if ( VirtualMemory >= 0 )
  {
    v12 = &v19;
    VirtualMemory = ZwMapViewOfSection();
    if ( VirtualMemory >= 0 )
    {
      if ( !a6
        || (VirtualMemory = ZwCreateEvent(), VirtualMemory >= 0)
        && (VirtualMemory = ZwCreateEvent(), VirtualMemory >= 0)
        && (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0)
        && (LODWORD(v12) = 2, VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0)
        && (!a5 || (LODWORD(v12) = 2, VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0)) )
      {
        VirtualMemory = RtlpCreateUserThreadEx(
                          a1,
                          0LL,
                          2,
                          0,
                          0LL,
                          0LL,
                          (__int64)v12,
                          (__int64)RtlpProcessReflectionStartup,
                          v15,
                          &Handle,
                          0LL);
        if ( VirtualMemory >= 0 )
        {
          if ( a6 )
          {
            v21 = Handle;
            v22 = v17;
            if ( (unsigned int)NtWaitForMultipleObjects() == 1 )
            {
              if ( MEMORY[0x38] )
              {
                if ( (int)ZwDuplicateObject() < 0 || (int)ZwDuplicateObject() < 0 )
                {
                  VirtualMemory = ZwSetEvent();
                  goto LABEL_37;
                }
                VirtualMemory = ZwSetEvent();
                *(_QWORD *)(a6 + 16) = MEMORY[0x48];
                goto LABEL_36;
              }
              NtWaitForSingleObject(Handle, 0, 0LL);
            }
            VirtualMemory = -1073741823;
          }
        }
      }
    }
LABEL_37:
    if ( v15 )
      NtUnmapViewOfSection();
    goto LABEL_39;
  }
  v15 = 0LL;
LABEL_39:
  if ( v16 )
    NtClose(v16);
  if ( v17 )
    NtClose(v17);
  if ( Handle )
    NtClose(Handle);
  ZwQuerySystemTime(&v24);
  return (unsigned int)VirtualMemory;
}
