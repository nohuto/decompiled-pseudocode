/*
 * XREFs of _PssNtCaptureSnapshot@16 @ 0x4B386310
 * Callers:
 *     <none>
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwCreateProcessEx@36 @ 0x4B2F2E50 (_ZwCreateProcessEx@36.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _PssNtFreeSnapshot@4 @ 0x4B386AF0 (_PssNtFreeSnapshot@4.c)
 *     PsspSampleCounters @ 0x4B386FC7 (PsspSampleCounters.c)
 *     _PsspCaptureIptTrace@8 @ 0x4B38717C (_PsspCaptureIptTrace@8.c)
 *     _PsspCaptureProcessInformation@12 @ 0x4B38727C (_PsspCaptureProcessInformation@12.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     _PsspCaptureVaSpaceInformation@12 @ 0x4B387B12 (_PsspCaptureVaSpaceInformation@12.c)
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  ULONG v4; // ebx
  NTSTATUS result; // eax
  ULONG v6; // edi
  ULONG v7; // esi
  HANDLE v8; // ecx
  NTSTATUS v9; // ecx
  int v10; // ecx
  ULONG v11; // eax
  NTSTATUS v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  NTSTATUS v15; // edi
  unsigned int v16; // edi
  ULONG_PTR v17; // [esp-10h] [ebp-70h]
  size_t v18; // [esp-4h] [ebp-64h]
  PVOID BaseAddress; // [esp+Ch] [ebp-54h] BYREF
  __int64 v20; // [esp+10h] [ebp-50h]
  NTSTATUS v21; // [esp+18h] [ebp-48h] BYREF
  int v22; // [esp+1Ch] [ebp-44h] BYREF
  int v23; // [esp+20h] [ebp-40h]
  int v24; // [esp+24h] [ebp-3Ch]
  HANDLE v25; // [esp+28h] [ebp-38h] BYREF
  ULONG v26; // [esp+2Ch] [ebp-34h]
  __int64 v27; // [esp+30h] [ebp-30h]
  LARGE_INTEGER v28; // [esp+38h] [ebp-28h] BYREF
  __int64 v29; // [esp+40h] [ebp-20h]
  LARGE_INTEGER v30; // [esp+48h] [ebp-18h] BYREF
  __int64 v31; // [esp+50h] [ebp-10h]
  LARGE_INTEGER PerformanceCounter; // [esp+58h] [ebp-8h] BYREF

  v4 = CaptureFlags;
  if ( (CaptureFlags & 0x3FF8000) != 0 )
    return -1073741811;
  v6 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v7 = CaptureFlags & 0x40000000;
  v20 = 0LL;
  v30.QuadPart = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v26 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v20 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&PerformanceCounter);
  }
  v21 = 0;
  v8 = *SnapshotHandle;
  BaseAddress = v8;
  if ( !v8 )
  {
    v22 = 976;
    HIDWORD(v17) = &v22;
    LODWORD(v17) = 0;
    result = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v17, (PSIZE_T)0x1000, 4u, HIDWORD(v18));
    if ( result < 0 )
      return result;
    v8 = BaseAddress;
    v21 = 1;
    *SnapshotHandle = BaseAddress;
  }
  LODWORD(v18) = 976;
  memset(v8, 0, v18);
  v9 = v21;
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v9;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v21 = PsspCaptureProcessInformation(BaseAddress, ProcessHandle, CaptureFlags);
  if ( v21 < 0 )
    goto LABEL_11;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v7 )
      PsspSampleCounters(&v30);
    v21 = 2147352576;
    v21 = PsspCaptureAuxiliaryPages(BaseAddress, ProcessHandle, CaptureFlags, &v21, v10);
    if ( v21 < 0 )
      goto LABEL_11;
    if ( v7 )
    {
      PsspSampleCounters(&v28);
      *((_QWORD *)BaseAddress + 115) = v27 - v29;
      *((_QWORD *)BaseAddress + 116) = 1000000 * (v28.QuadPart - v30.QuadPart) / v20;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v7 )
      PsspSampleCounters(&v30);
    v21 = PsspCaptureVaSpaceInformation(BaseAddress, ProcessHandle, CaptureFlags);
    if ( v21 >= 0 )
    {
      if ( v7 )
      {
        PsspSampleCounters(&v28);
        *((_QWORD *)BaseAddress + 113) = v27 - v29;
        *((_QWORD *)BaseAddress + 114) = 1000000 * (v28.QuadPart - v30.QuadPart) / v20;
      }
      goto LABEL_24;
    }
LABEL_11:
    PssNtFreeSnapshot(BaseAddress);
    *SnapshotHandle = 0;
    return v21;
  }
LABEL_24:
  if ( (CaptureFlags & 1) == 0 )
    goto LABEL_45;
  if ( v7 )
    PsspSampleCounters(&v30);
  do
  {
    while ( 1 )
    {
      if ( (CaptureFlags & 0x80000000) == 0 )
        v11 = 0;
      else
        v11 = 4096;
      v23 = v6 & 0x10000000;
      v24 = v6 & 0x8000000;
      if ( (v6 & 0x10000000) != 0 )
      {
        v11 |= 0x400u;
      }
      else if ( (v6 & 0x8000000) != 0 )
      {
        v11 |= 1u;
      }
      v12 = ZwCreateProcessEx(&v25, 0x2000000u, 0, ProcessHandle, v11, 0, 0, 0, 0);
      v21 = v12;
      if ( v12 >= 0 )
        goto LABEL_40;
      if ( (v6 & 0x4000000) == 0 )
        goto LABEL_11;
      if ( !v23 )
        break;
      v6 &= ~0x10000000u;
    }
    if ( !v24 )
      goto LABEL_11;
    v6 &= ~0x8000000u;
    v12 = -1073741267;
LABEL_40:
    ;
  }
  while ( v12 == -1073741267 );
  while ( 1 )
  {
    v13 = MEMORY[0x7FFE0018];
    if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
      break;
    _mm_pause();
  }
  v14 = BaseAddress;
  v7 = v26;
  v4 = CaptureFlags;
  *((_DWORD *)BaseAddress + 190) = MEMORY[0x7FFE0014];
  v14[191] = v13;
  *((_DWORD *)BaseAddress + 188) = v25;
  if ( v7 )
  {
    PsspSampleCounters(&v28);
    *((_QWORD *)BaseAddress + 111) = v27 - v29;
    *((_QWORD *)BaseAddress + 112) = 1000000 * (v28.QuadPart - v30.QuadPart) / v20;
  }
LABEL_45:
  if ( (v4 & 4) != 0 )
  {
    if ( v7 )
      PsspSampleCounters(&v30);
    v15 = PsspCaptureHandleInformation(BaseAddress, ProcessHandle, v4);
    if ( v15 < 0 )
    {
LABEL_49:
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0;
      return v15;
    }
    if ( v7 )
    {
      PsspSampleCounters(&v28);
      *((_QWORD *)BaseAddress + 117) = v27 - v29;
      *((_QWORD *)BaseAddress + 118) = 1000000 * (v28.QuadPart - v30.QuadPart) / v20;
    }
  }
  if ( (v4 & 0x80u) == 0 )
    goto LABEL_58;
  if ( v7 )
    PsspSampleCounters(&v30);
  v15 = PsspCaptureThreadInformation(BaseAddress, ProcessHandle, v4, ThreadContextFlags);
  if ( v15 < 0 )
    goto LABEL_49;
  if ( v7 )
  {
    PsspSampleCounters(&v28);
    *((_QWORD *)BaseAddress + 119) = v27 - v29;
    v16 = v20;
    *((_QWORD *)BaseAddress + 120) = 1000000 * (v28.QuadPart - v30.QuadPart) / v20;
  }
  else
  {
LABEL_58:
    v16 = v20;
  }
  if ( v7 )
  {
    PsspSampleCounters(&v28);
    *((_QWORD *)BaseAddress + 109) = v27 - v31;
    *((_QWORD *)BaseAddress + 110) = 1000000
                                   * (v28.QuadPart - PerformanceCounter.QuadPart)
                                   / __SPAIR64__(HIDWORD(v20), v16);
  }
  if ( (v4 & 0x2000) != 0 )
    PsspCaptureIptTrace(BaseAddress, ProcessHandle);
  return 0;
}
