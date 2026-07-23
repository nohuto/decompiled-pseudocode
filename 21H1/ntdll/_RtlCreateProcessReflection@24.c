/*
 * XREFs of _RtlCreateProcessReflection@24 @ 0x4B335060
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtQuerySystemTime@4 @ 0x4B2F2F20 (_NtQuerySystemTime@4.c)
 *     _NtWaitForMultipleObjects@20 @ 0x4B2F2F30 (_NtWaitForMultipleObjects@20.c)
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 */

NTSTATUS __cdecl RtlCreateProcessReflection(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID StartRoutine,
        PVOID StartContext,
        HANDLE EventHandle,
        PRTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION ReflectionInformation)
{
  HANDLE v7; // edi
  int v8; // esi
  _DWORD *v9; // edx
  PVOID v10; // eax
  NTSTATUS v11; // eax
  ULONG_PTR v12; // [esp-1Ch] [ebp-74h]
  ULONG_PTR v13; // [esp-1Ch] [ebp-74h]
  SIZE_T v14; // [esp-14h] [ebp-6Ch]
  SIZE_T v15; // [esp-14h] [ebp-6Ch]
  ULONG_PTR v16; // [esp-10h] [ebp-68h]
  ULONG_PTR v17; // [esp-10h] [ebp-68h]
  HANDLE v18; // [esp-8h] [ebp-60h]
  ULONG v19; // [esp+0h] [ebp-58h]
  ULONG v20; // [esp+0h] [ebp-58h]
  ULONG v21; // [esp+0h] [ebp-58h]
  ULONG v22; // [esp+0h] [ebp-58h]
  ULONG v23; // [esp+4h] [ebp-54h]
  ULONG v24; // [esp+4h] [ebp-54h]
  PVOID v25; // [esp+Ch] [ebp-4Ch] BYREF
  PVOID v26; // [esp+10h] [ebp-48h] BYREF
  HANDLE v27; // [esp+14h] [ebp-44h] BYREF
  ULONG_PTR RegionSize; // [esp+18h] [ebp-40h] BYREF
  PVOID BaseAddress; // [esp+20h] [ebp-38h] BYREF
  PVOID v30; // [esp+24h] [ebp-34h] BYREF
  HANDLE SectionHandle; // [esp+28h] [ebp-30h] BYREF
  HANDLE SourceHandle; // [esp+2Ch] [ebp-2Ch] BYREF
  HANDLE Handle; // [esp+30h] [ebp-28h] BYREF
  int v34; // [esp+34h] [ebp-24h] BYREF
  LARGE_INTEGER MaximumSize; // [esp+38h] [ebp-20h] BYREF
  HANDLE Handles[2]; // [esp+40h] [ebp-18h] BYREF
  LARGE_INTEGER SystemTime; // [esp+48h] [ebp-10h] BYREF
  LARGE_INTEGER v38; // [esp+50h] [ebp-8h] BYREF

  HIDWORD(RegionSize) = 4096;
  Handle = 0;
  v26 = 0;
  BaseAddress = 0;
  v25 = 0;
  SectionHandle = 0;
  MaximumSize.QuadPart = 0LL;
  v34 = 0;
  v30 = 0;
  SourceHandle = 0;
  v27 = 0;
  NtQuerySystemTime(&SystemTime);
  if ( (Flags & 0xFFFFFFE1) != 0 )
    return -1073741584;
  if ( (Flags & 8) != 0 && StartRoutine )
    return -1073741581;
  if ( ReflectionInformation )
  {
    ReflectionInformation->ReflectionProcessHandle = 0;
    ReflectionInformation->ReflectionThreadHandle = 0;
    ReflectionInformation->ReflectionClientId.UniqueProcess = 0;
    ReflectionInformation->ReflectionClientId.UniqueThread = 0;
  }
  HIDWORD(v16) = (char *)&RegionSize + 4;
  LODWORD(v16) = 0;
  v7 = ProcessHandle;
  v8 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v16, (PSIZE_T)0x3000, 4u, v19);
  if ( v8 < 0 )
  {
    BaseAddress = 0;
    goto LABEL_40;
  }
  ZwQueryInformationProcess(
    (HANDLE)0xFFFFFFFF,
    ProcessImageFileName,
    BaseAddress,
    HIDWORD(RegionSize),
    (PULONG)&RegionSize + 1);
  HIDWORD(RegionSize) = 4096;
  NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, (ULONG_PTR *)((char *)&RegionSize + 4), 0x8000u);
  LODWORD(RegionSize) = 44;
  HIDWORD(v17) = &RegionSize;
  LODWORD(v17) = 0;
  v8 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &v25, v17, (PSIZE_T)0x3000, 4u, v20);
  if ( v8 < 0 )
  {
    v25 = 0;
    goto LABEL_40;
  }
  v9 = v25;
  *(_DWORD *)v25 = RegionSize;
  v9[2] = StartRoutine;
  v9[3] = StartContext;
  v9[1] = Flags;
  v9[6] = EventHandle;
  if ( ProcessHandle == (HANDLE)-1 )
  {
    v9[1] = Flags | 0x10;
    v8 = RtlpProcessReflectionStartup(v25);
    if ( v8 >= 0 && ReflectionInformation )
    {
      ReflectionInformation->ReflectionProcessHandle = (HANDLE)*((_DWORD *)v25 + 7);
      ReflectionInformation->ReflectionThreadHandle = (HANDLE)*((_DWORD *)v25 + 8);
      ReflectionInformation->ReflectionClientId.UniqueProcess = (void *)*((_DWORD *)v25 + 9);
      v10 = v25;
LABEL_39:
      ReflectionInformation->ReflectionClientId.UniqueThread = (void *)*((_DWORD *)v10 + 10);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  MaximumSize.QuadPart = (unsigned int)RegionSize;
  v8 = NtCreateSection(&SectionHandle, 6u, 0, &MaximumSize, 4u, 0x8000000u, 0);
  if ( v8 < 0 )
    goto LABEL_40;
  v34 = RegionSize;
  HIDWORD(v14) = &v34;
  LODWORD(v14) = 0;
  HIDWORD(v12) = RegionSize;
  LODWORD(v12) = 0;
  v8 = ZwMapViewOfSection(
         SectionHandle,
         ProcessHandle,
         &v30,
         v12,
         v14,
         (PLARGE_INTEGER)2,
         0,
         (SECTION_INHERIT)4,
         v21,
         v23);
  if ( v8 >= 0 )
  {
    HIDWORD(v15) = &v34;
    LODWORD(v15) = 0;
    HIDWORD(v13) = RegionSize;
    LODWORD(v13) = 0;
    v8 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFF,
           &v26,
           v13,
           v15,
           (PLARGE_INTEGER)2,
           0,
           (SECTION_INHERIT)4,
           v22,
           v24);
    if ( v8 < 0 )
    {
      v26 = 0;
      goto LABEL_40;
    }
    if ( !ReflectionInformation
      || (v8 = NtCreateEvent(&SourceHandle, 0x1F0003u, 0, NotificationEvent, 0), v8 >= 0)
      && (v8 = NtCreateEvent(&v27, 0x1F0003u, 0, NotificationEvent, 0), v8 >= 0)
      && (v8 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, SourceHandle, ProcessHandle, (PHANDLE)v25 + 4, 0x1F0003u, 0, 2u),
          v8 >= 0)
      && (v8 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v27, ProcessHandle, (PHANDLE)v25 + 5, 0x1F0003u, 0, 2u), v8 >= 0)
      && (!EventHandle
       || (v8 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, EventHandle, ProcessHandle, (PHANDLE)v25 + 6, 0x1F0003u, 0, 2u),
           v8 >= 0)) )
    {
      qmemcpy(v26, v25, 0x2Cu);
      v7 = ProcessHandle;
      v8 = RtlpCreateUserThreadEx(
             ProcessHandle,
             0,
             2,
             0LL,
             0,
             0,
             (NTSTATUS (__cdecl *)(PVOID))RtlpProcessReflectionStartup,
             v30,
             &Handle,
             0);
      if ( v8 >= 0 )
      {
        if ( ReflectionInformation )
        {
          Handles[0] = Handle;
          Handles[1] = SourceHandle;
          if ( NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, 0) == 1 )
          {
            if ( *((_DWORD *)v26 + 7) )
            {
              if ( ZwDuplicateObject(
                     ProcessHandle,
                     *((HANDLE *)v26 + 7),
                     (HANDLE)0xFFFFFFFF,
                     &ReflectionInformation->ReflectionProcessHandle,
                     0x1FFFFFu,
                     0,
                     2u) >= 0 )
              {
                v11 = ZwDuplicateObject(
                        ProcessHandle,
                        *((HANDLE *)v26 + 8),
                        (HANDLE)0xFFFFFFFF,
                        &ReflectionInformation->ReflectionThreadHandle,
                        0x1FFFFFu,
                        0,
                        2u);
                v18 = v27;
                if ( v11 >= 0 )
                {
                  v8 = NtSetEvent(v27, 0);
                  ReflectionInformation->ReflectionClientId.UniqueProcess = (void *)*((_DWORD *)v26 + 9);
                  v10 = v26;
                  goto LABEL_39;
                }
              }
              else
              {
                v18 = v27;
              }
              v8 = NtSetEvent(v18, 0);
              goto LABEL_40;
            }
            ZwWaitForSingleObject(Handle, 0, 0);
          }
          v8 = -1073741823;
        }
      }
    }
LABEL_40:
    if ( v30 )
      NtUnmapViewOfSection(v7, v30);
    goto LABEL_42;
  }
  v30 = 0;
LABEL_42:
  if ( v26 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v26);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( v25 )
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &v25, &RegionSize, 0x8000u);
  if ( SourceHandle )
    NtClose(SourceHandle);
  if ( v27 )
    NtClose(v27);
  if ( Handle )
    NtClose(Handle);
  NtQuerySystemTime(&v38);
  return v8;
}
