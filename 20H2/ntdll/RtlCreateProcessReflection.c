/*
 * XREFs of RtlCreateProcessReflection @ 0x1800D5E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180056100 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18009D130 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009D270 (ZwSetEvent.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18009D830 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18009D9B0 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x18009DBF0 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x18009DC00 (NtWaitForMultipleObjects.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 */

NTSTATUS __cdecl RtlCreateProcessReflection(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID StartRoutine,
        PVOID StartContext,
        HANDLE EventHandle,
        PRTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION ReflectionInformation)
{
  int v11; // ebx
  _QWORD *v12; // rcx
  ULONG_PTR v13; // rax
  PVOID v14; // rax
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  HANDLE v17; // rcx
  NTSTATUS v18; // eax
  int FileHandle; // [rsp+38h] [rbp-89h]
  PVOID v20; // [rsp+68h] [rbp-59h] BYREF
  PVOID v21; // [rsp+70h] [rbp-51h] BYREF
  ULONG_PTR CommitSize; // [rsp+78h] [rbp-49h] BYREF
  HANDLE v23; // [rsp+80h] [rbp-41h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-39h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-31h] BYREF
  PVOID v26; // [rsp+98h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-21h] BYREF
  HANDLE SourceHandle; // [rsp+A8h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-11h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp-9h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+C0h] [rbp-1h] BYREF
  HANDLE Handles[2]; // [rsp+C8h] [rbp+7h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+D8h] [rbp+17h] BYREF
  LARGE_INTEGER v34; // [rsp+E0h] [rbp+1Fh] BYREF

  RegionSize = 4096LL;
  Handle = 0LL;
  v21 = 0LL;
  BaseAddress = 0LL;
  v20 = 0LL;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  v26 = 0LL;
  SourceHandle = 0LL;
  v23 = 0LL;
  ZwQuerySystemTime(&SystemTime);
  if ( (Flags & 0xFFFFFFE1) != 0 )
    return -1073741584;
  if ( (Flags & 8) != 0 && StartRoutine )
    return -1073741581;
  if ( ReflectionInformation )
  {
    *(_OWORD *)&ReflectionInformation->ReflectionProcessHandle = 0LL;
    ReflectionInformation->ReflectionClientId = 0LL;
  }
  v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v11 < 0 )
  {
    BaseAddress = 0LL;
    goto LABEL_41;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    BaseAddress,
    RegionSize,
    (PULONG)&RegionSize);
  RegionSize = 4096LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  CommitSize = 88LL;
  v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v20, 0LL, &CommitSize, 0x3000u, 4u);
  if ( v11 < 0 )
  {
    v20 = 0LL;
    goto LABEL_41;
  }
  v12 = v20;
  v13 = CommitSize;
  *((_QWORD *)v20 + 3) = StartContext;
  v12[2] = StartRoutine;
  *v12 = v13;
  *((_DWORD *)v12 + 2) = Flags;
  v12[6] = EventHandle;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    *((_DWORD *)v12 + 2) = Flags | 0x10;
    v11 = RtlpProcessReflectionStartup((PSIZE_T)v20);
    if ( v11 >= 0 && ReflectionInformation )
    {
      ReflectionInformation->ReflectionProcessHandle = (HANDLE)*((_QWORD *)v20 + 7);
      ReflectionInformation->ReflectionThreadHandle = (HANDLE)*((_QWORD *)v20 + 8);
      ReflectionInformation->ReflectionClientId.UniqueProcess = (void *)*((_QWORD *)v20 + 9);
      v14 = v20;
LABEL_40:
      ReflectionInformation->ReflectionClientId.UniqueThread = (void *)*((_QWORD *)v14 + 10);
      goto LABEL_41;
    }
    goto LABEL_41;
  }
  MaximumSize.QuadPart = CommitSize;
  v11 = NtCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v11 < 0 )
    goto LABEL_41;
  ViewSize = CommitSize;
  v11 = ZwMapViewOfSection(SectionHandle, ProcessHandle, &v26, 0LL, CommitSize, 0LL, &ViewSize, ViewUnmap, 0, 4u);
  if ( v11 >= 0 )
  {
    v11 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &v21,
            0LL,
            CommitSize,
            0LL,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v11 < 0 )
    {
      v21 = 0LL;
      goto LABEL_41;
    }
    if ( !ReflectionInformation
      || (v11 = ZwCreateEvent(&SourceHandle, 0x1F0003u, 0LL, NotificationEvent, 0), v11 >= 0)
      && (v11 = ZwCreateEvent(&v23, 0x1F0003u, 0LL, NotificationEvent, 0), v11 >= 0)
      && (v11 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  SourceHandle,
                  ProcessHandle,
                  (PHANDLE)v20 + 4,
                  0x1F0003u,
                  0,
                  2u),
          v11 >= 0)
      && (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v23, ProcessHandle, (PHANDLE)v20 + 5, 0x1F0003u, 0, 2u),
          v11 >= 0)
      && (!EventHandle
       || (v11 = ZwDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   EventHandle,
                   ProcessHandle,
                   (PHANDLE)v20 + 6,
                   0x1F0003u,
                   0,
                   2u),
           v11 >= 0)) )
    {
      v15 = v20;
      v16 = v21;
      *(_OWORD *)v21 = *(_OWORD *)v20;
      v16[1] = v15[1];
      v16[2] = v15[2];
      v16[3] = v15[3];
      v16[4] = v15[4];
      *((_QWORD *)v16 + 10) = *((_QWORD *)v15 + 10);
      v11 = RtlpCreateUserThreadEx(
              ProcessHandle,
              0LL,
              2,
              0,
              0LL,
              0LL,
              FileHandle,
              (PUSER_THREAD_START_ROUTINE)RtlpProcessReflectionStartup,
              v26,
              &Handle,
              0LL);
      if ( v11 >= 0 )
      {
        if ( ReflectionInformation )
        {
          Handles[0] = Handle;
          Handles[1] = SourceHandle;
          if ( NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, 0LL) == 1 )
          {
            if ( *((_QWORD *)v21 + 7) )
            {
              if ( ZwDuplicateObject(
                     ProcessHandle,
                     *((HANDLE *)v21 + 7),
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     &ReflectionInformation->ReflectionProcessHandle,
                     0x1FFFFFu,
                     0,
                     2u) >= 0 )
              {
                v18 = ZwDuplicateObject(
                        ProcessHandle,
                        *((HANDLE *)v21 + 8),
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &ReflectionInformation->ReflectionThreadHandle,
                        0x1FFFFFu,
                        0,
                        2u);
                v17 = v23;
                if ( v18 >= 0 )
                {
                  v11 = ZwSetEvent(v23, 0LL);
                  ReflectionInformation->ReflectionClientId.UniqueProcess = (void *)*((_QWORD *)v21 + 9);
                  v14 = v21;
                  goto LABEL_40;
                }
              }
              else
              {
                v17 = v23;
              }
              v11 = ZwSetEvent(v17, 0LL);
              goto LABEL_41;
            }
            NtWaitForSingleObject(Handle, 0, 0LL);
          }
          v11 = -1073741823;
        }
      }
    }
LABEL_41:
    if ( v26 )
      NtUnmapViewOfSection(ProcessHandle, v26);
    goto LABEL_43;
  }
  v26 = 0LL;
LABEL_43:
  if ( v21 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v21);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( v20 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v20, &CommitSize, 0x8000u);
  if ( SourceHandle )
    NtClose(SourceHandle);
  if ( v23 )
    NtClose(v23);
  if ( Handle )
    NtClose(Handle);
  ZwQuerySystemTime(&v34);
  return v11;
}
