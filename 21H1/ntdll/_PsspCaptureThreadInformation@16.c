/*
 * XREFs of _PsspCaptureThreadInformation@16 @ 0x4B388568
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _ZwGetNextThread@24 @ 0x4B2F3900 (_ZwGetNextThread@24.c)
 *     _RtlGetExtendedContextLength@8 @ 0x4B35B830 (_RtlGetExtendedContextLength@8.c)
 *     PsspDumpThread @ 0x4B38883C (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x4B388A00 (PsspFreeLinkedHandleList.c)
 */

NTSTATUS __fastcall PsspCaptureThreadInformation(_DWORD *a1, void *a2, unsigned int a3, ULONG ContextFlags)
{
  PVOID v4; // edi
  _WORD *v5; // ebx
  NTSTATUS NextThread; // eax
  HANDLE v7; // ecx
  unsigned __int16 v8; // dx
  ULONG v9; // ebx
  ULONG v10; // eax
  int v11; // edx
  bool v12; // sf
  int v13; // ebx
  PVOID v15; // ecx
  ULONG v16; // eax
  HANDLE *v17; // ecx
  int v18; // eax
  ACCESS_MASK v19; // eax
  _DWORD *v20; // edx
  HANDLE v21; // eax
  int v22; // ecx
  _DWORD *v23; // edx
  SIZE_T v24; // [esp-14h] [ebp-6Ch]
  ULONG_PTR v25; // [esp-10h] [ebp-68h]
  unsigned __int64 v26; // [esp-8h] [ebp-60h]
  ULONG v27; // [esp+0h] [ebp-58h]
  ULONG v28; // [esp+4h] [ebp-54h]
  LARGE_INTEGER MaximumSize; // [esp+20h] [ebp-38h] BYREF
  unsigned int v30; // [esp+28h] [ebp-30h] BYREF
  NTSTATUS v31; // [esp+2Ch] [ebp-2Ch]
  ACCESS_MASK DesiredAccess; // [esp+30h] [ebp-28h]
  HANDLE ThreadHandle; // [esp+34h] [ebp-24h]
  _DWORD *v34; // [esp+38h] [ebp-20h]
  HANDLE SectionHandle; // [esp+3Ch] [ebp-1Ch] BYREF
  PVOID v36; // [esp+40h] [ebp-18h] BYREF
  ULONG ContextLength; // [esp+44h] [ebp-14h] BYREF
  HANDLE ProcessHandle; // [esp+48h] [ebp-10h]
  HANDLE NewThreadHandle; // [esp+4Ch] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+50h] [ebp-8h] BYREF
  int v41; // [esp+54h] [ebp-4h] BYREF

  v34 = a1;
  ProcessHandle = a2;
  v30 = a3 & 0x100;
  v4 = 0;
  v5 = 0;
  ContextLength = 0;
  DesiredAccess = (a3 >> 7) & 8 | (8 * (v30 != 0) + 64);
  NextThread = ZwGetNextThread(a2, 0, DesiredAccess, 0, 0, &NewThreadHandle);
  v31 = NextThread;
  if ( NextThread != -2147483622 )
  {
    do
    {
      v7 = NewThreadHandle;
      ThreadHandle = NewThreadHandle;
      if ( NextThread < 0 )
      {
LABEL_38:
        PsspFreeLinkedHandleList(v4);
        return v31;
      }
      if ( !v5 || (v8 = v5[3], v8 >= v5[2]) )
      {
        v41 = 1;
        HIDWORD(v25) = &v41;
        LODWORD(v25) = 0;
        BaseAddress = 0;
        v31 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v25, (PSIZE_T)0x1000, 4u, v27);
        if ( v31 < 0 )
          goto LABEL_38;
        if ( v4 )
        {
          *(_DWORD *)v5 = BaseAddress;
          v5 = BaseAddress;
        }
        else
        {
          v5 = BaseAddress;
          v4 = BaseAddress;
        }
        v8 = 0;
        v5[2] = (unsigned int)(v41 - 8) >> 2;
        v5[3] = 0;
        v7 = NewThreadHandle;
      }
      *(_DWORD *)&v5[2 * v8 + 4] = v7;
      ++v5[3];
      ++ContextLength;
      NextThread = ZwGetNextThread(ProcessHandle, ThreadHandle, DesiredAccess, 0, 0, &NewThreadHandle);
      v31 = NextThread;
    }
    while ( NextThread != -2147483622 );
    v9 = ContextLength;
    if ( !ContextLength )
      return 0;
    v10 = 0;
    ThreadHandle = 0;
    v11 = 0;
    ProcessHandle = 0;
    ContextLength = 0;
    if ( v30 )
    {
      if ( (a3 & 0x200) == 0
        || (v12 = RtlGetExtendedContextLength(ContextFlags, &ContextLength) < 0, v10 = ContextLength, v12) )
      {
        v10 = 716;
      }
      v11 = 8;
      ProcessHandle = (HANDLE)v10;
      ThreadHandle = (HANDLE)8;
    }
    v34[216] = v10;
    v26 = v9 * (unsigned __int64)(v11 + 104 + ((v10 + 15) & 0xFFFFFFF0));
    v13 = RtlULongLongToUInt((int *)&v30, v26, SHIDWORD(v26));
    if ( v13 < 0 )
      goto LABEL_18;
    MaximumSize.QuadPart = v30;
    v13 = NtCreateSection(&SectionHandle, 0xF0007u, (POBJECT_ATTRIBUTES)&stru_4B2A5984, &MaximumSize, 4u, 0x8000000u, 0);
    if ( v13 < 0 )
      goto LABEL_18;
    v36 = 0;
    HIDWORD(v24) = &v41;
    LODWORD(v24) = 0;
    v41 = 0;
    v13 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFF,
            &v36,
            0LL,
            v24,
            (PLARGE_INTEGER)1,
            0,
            (SECTION_INHERIT)4,
            v27,
            v28);
    if ( v13 < 0 )
      goto LABEL_21;
    v15 = v36;
    v16 = (ULONG)v4;
    ContextLength = (ULONG)v4;
    if ( v4 )
    {
      while ( 1 )
      {
        DesiredAccess = 0;
        if ( *(_WORD *)(v16 + 6) )
          break;
LABEL_29:
        if ( v13 >= 0 )
        {
          v16 = *(_DWORD *)v16;
          ContextLength = v16;
          if ( v16 )
            continue;
        }
        v15 = v36;
        goto LABEL_32;
      }
      v17 = (HANDLE *)(v16 + 8);
      v31 = v16 + 8;
      while ( 1 )
      {
        NewThreadHandle = *v17;
        v18 = PsspDumpThread(ContextFlags, (int)ProcessHandle, (int)ThreadHandle, NewThreadHandle);
        v13 = v18;
        if ( v18 == -1073741789 )
        {
LABEL_28:
          v16 = ContextLength;
          goto LABEL_29;
        }
        if ( v18 < 0 )
          break;
        v17 = (HANDLE *)(v31 + 4);
        ++DesiredAccess;
        v19 = *(unsigned __int16 *)(ContextLength + 6);
        v31 += 4;
        if ( DesiredAccess >= v19 )
          goto LABEL_28;
      }
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v36);
LABEL_21:
      NtClose(SectionHandle);
LABEL_18:
      PsspFreeLinkedHandleList(v4);
      return v13;
    }
LABEL_32:
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v15);
    PsspFreeLinkedHandleList(v4);
    v20 = v34;
    v34[210] = 0;
    v21 = SectionHandle;
    v20[211] = 0;
    v20[212] = v21;
    while ( 1 )
    {
      v22 = MEMORY[0x7FFE0018];
      if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
        break;
      _mm_pause();
    }
    v23 = v34;
    v34[214] = MEMORY[0x7FFE0014];
    v23[215] = v22;
  }
  return 0;
}
