/*
 * XREFs of _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365
 * Callers:
 *     _PssNtDuplicateSnapshot@20 @ 0x4B3868E0 (_PssNtDuplicateSnapshot@20.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _PssNtFreeRemoteSnapshot@8 @ 0x4B386950 (_PssNtFreeRemoteSnapshot@8.c)
 */

int __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        _DWORD *BaseAddress,
        HANDLE SourceProcessHandle,
        _DWORD *a4,
        char a5)
{
  int VirtualMemory; // esi
  unsigned int v8; // edi
  unsigned int i; // edi
  unsigned int v11; // ecx
  ULONG_PTR v12; // [esp-10h] [ebp-7F4h]
  ULONG_PTR v13; // [esp-10h] [ebp-7F4h]
  SIZE_T v14; // [esp-8h] [ebp-7ECh]
  size_t v15; // [esp-4h] [ebp-7E8h]
  PSIZE_T v16; // [esp+0h] [ebp-7E4h]
  ULONG v17; // [esp+0h] [ebp-7E4h]
  ULONG_PTR *v18; // [esp+0h] [ebp-7E4h]
  ULONG v19; // [esp+0h] [ebp-7E4h]
  ULONG_PTR *v20; // [esp+0h] [ebp-7E4h]
  ULONG_PTR *v21; // [esp+0h] [ebp-7E4h]
  int v23; // [esp+14h] [ebp-7D0h] BYREF
  unsigned int v24; // [esp+18h] [ebp-7CCh]
  HANDLE ProcessHandlea; // [esp+1Ch] [ebp-7C8h]
  unsigned int v26; // [esp+20h] [ebp-7C4h] BYREF
  unsigned int BufferSize; // [esp+24h] [ebp-7C0h] BYREF
  char *BufferSize_4; // [esp+28h] [ebp-7BCh] BYREF
  PVOID BaseAddressa; // [esp+2Ch] [ebp-7B8h] BYREF
  ULONG_PTR RegionSize; // [esp+30h] [ebp-7B4h] BYREF
  _DWORD Buffer[244]; // [esp+38h] [ebp-7ACh] BYREF
  _DWORD v32[245]; // [esp+408h] [ebp-3DCh] BYREF

  ProcessHandlea = ProcessHandle;
  LODWORD(v15) = 976;
  *a4 = 0;
  BufferSize_4 = 0;
  HIDWORD(RegionSize) = 0;
  BaseAddressa = 0;
  memset(v32, 0, v15);
  HIDWORD(v14) = &BufferSize;
  LODWORD(v14) = 976;
  VirtualMemory = NtReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, v14, v16);
  if ( VirtualMemory >= 0 )
  {
    if ( BufferSize == 976 )
    {
      if ( Buffer[0] == 1146311504 )
      {
        VirtualMemory = RtlULongLongToUInt((int *)&v26, 40 * Buffer[192], (40 * (unsigned __int64)Buffer[192]) >> 32);
        if ( VirtualMemory >= 0 )
        {
          VirtualMemory = RtlULongPtrAdd(0x3D0u, v26, (int *)&RegionSize + 1);
          if ( VirtualMemory >= 0 )
          {
            qmemcpy(v32, Buffer, 0x3D0u);
            v32[188] = 0;
            v32[193] = 0;
            v32[197] = 0;
            v32[201] = 0;
            v32[206] = 0;
            v32[212] = 0;
            v32[242] = 0;
            if ( !Buffer[188]
              || (VirtualMemory = ZwDuplicateObject(
                                    ProcessHandlea,
                                    (HANDLE)Buffer[188],
                                    SourceProcessHandle,
                                    (PHANDLE)&v32[188],
                                    0,
                                    0,
                                    2u),
                  VirtualMemory >= 0) )
            {
              if ( !Buffer[193]
                || (VirtualMemory = ZwDuplicateObject(
                                      ProcessHandlea,
                                      (HANDLE)Buffer[193],
                                      SourceProcessHandle,
                                      (PHANDLE)&v32[193],
                                      0,
                                      0,
                                      2u),
                    VirtualMemory >= 0) )
              {
                if ( !Buffer[197]
                  || (VirtualMemory = ZwDuplicateObject(
                                        ProcessHandlea,
                                        (HANDLE)Buffer[197],
                                        SourceProcessHandle,
                                        (PHANDLE)&v32[197],
                                        0,
                                        0,
                                        2u),
                      VirtualMemory >= 0) )
                {
                  if ( !Buffer[201]
                    || (VirtualMemory = ZwDuplicateObject(
                                          ProcessHandlea,
                                          (HANDLE)Buffer[201],
                                          SourceProcessHandle,
                                          (PHANDLE)&v32[201],
                                          0,
                                          0,
                                          2u),
                        VirtualMemory >= 0) )
                  {
                    if ( !Buffer[206]
                      || (VirtualMemory = ZwDuplicateObject(
                                            ProcessHandlea,
                                            (HANDLE)Buffer[206],
                                            SourceProcessHandle,
                                            (PHANDLE)&v32[206],
                                            0,
                                            0,
                                            2u),
                          VirtualMemory >= 0) )
                    {
                      if ( !Buffer[212]
                        || (VirtualMemory = ZwDuplicateObject(
                                              ProcessHandlea,
                                              (HANDLE)Buffer[212],
                                              SourceProcessHandle,
                                              (PHANDLE)&v32[212],
                                              0,
                                              0,
                                              2u),
                            VirtualMemory >= 0) )
                      {
                        if ( !Buffer[242]
                          || (VirtualMemory = ZwDuplicateObject(
                                                ProcessHandlea,
                                                (HANDLE)Buffer[242],
                                                SourceProcessHandle,
                                                (PHANDLE)&v32[242],
                                                0,
                                                0,
                                                2u),
                              VirtualMemory >= 0) )
                        {
                          v8 = HIDWORD(RegionSize);
                          HIDWORD(v12) = &RegionSize;
                          LODWORD(v12) = 0;
                          LODWORD(RegionSize) = HIDWORD(RegionSize);
                          VirtualMemory = NtAllocateVirtualMemory(
                                            SourceProcessHandle,
                                            (PVOID *)&BufferSize_4,
                                            v12,
                                            (PSIZE_T)0x1000,
                                            4u,
                                            v17);
                          if ( VirtualMemory < 0 )
                            goto LABEL_5;
                          v32[1] = v32[1] & 0xFFFFFFF8 | 1;
                          if ( v32[194] )
                            v32[194] = BufferSize_4 + 976;
                          if ( LOWORD(v32[50]) )
                            v32[51] = BufferSize_4 + 208;
                          VirtualMemory = NtWriteVirtualMemory(SourceProcessHandle, BufferSize_4, v32, v8, v18);
                          if ( VirtualMemory < 0 )
                            goto LABEL_5;
                          if ( Buffer[194] )
                          {
                            LODWORD(RegionSize) = 1;
                            HIDWORD(v13) = &RegionSize;
                            LODWORD(v13) = 0;
                            VirtualMemory = NtAllocateVirtualMemory(
                                              (HANDLE)0xFFFFFFFF,
                                              &BaseAddressa,
                                              v13,
                                              (PSIZE_T)0x1000,
                                              4u,
                                              v19);
                            if ( VirtualMemory < 0 )
                              goto LABEL_5;
                            for ( i = 0; i < v26; i += v23 )
                            {
                              v11 = RegionSize;
                              v24 = RegionSize;
                              if ( (unsigned int)RegionSize > v26 - i )
                              {
                                v11 = v26 - i;
                                v24 = v26 - i;
                              }
                              VirtualMemory = NtReadVirtualMemory(
                                                ProcessHandlea,
                                                (PVOID)(i + Buffer[194]),
                                                BaseAddressa,
                                                __PAIR64__(&BufferSize, v11),
                                                v20);
                              if ( VirtualMemory < 0 )
                                goto LABEL_4;
                              if ( BufferSize != v24 )
                                goto LABEL_3;
                              VirtualMemory = NtWriteVirtualMemory(
                                                SourceProcessHandle,
                                                &BufferSize_4[i + 976],
                                                BaseAddressa,
                                                __PAIR64__(&v23, BufferSize),
                                                v21);
                              if ( VirtualMemory < 0 )
                                goto LABEL_4;
                              if ( v23 != BufferSize )
                                goto LABEL_3;
                            }
                            NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, &RegionSize, 0x8000u);
                            BaseAddressa = 0;
                          }
                          VirtualMemory = 0;
                          *a4 = BufferSize_4;
                          goto LABEL_23;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        VirtualMemory = -1073741816;
      }
    }
    else
    {
LABEL_3:
      VirtualMemory = -2147483635;
    }
  }
LABEL_4:
  v8 = HIDWORD(RegionSize);
LABEL_5:
  if ( BaseAddressa )
  {
    LODWORD(RegionSize) = 0;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( BufferSize_4 )
  {
    LODWORD(RegionSize) = v8;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&BufferSize_4, &RegionSize, 0x8000u);
  }
  if ( v32[212] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v32[212], 0, 0, 0, 0, 1u);
  if ( v32[206] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v32[206], 0, 0, 0, 0, 1u);
  if ( v32[197] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v32[197], 0, 0, 0, 0, 1u);
  if ( v32[201] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v32[201], 0, 0, 0, 0, 1u);
  if ( v32[193] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v32[193], 0, 0, 0, 0, 1u);
  if ( v32[188] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v32[188], 0, 0, 0, 0, 1u);
  if ( v32[242] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v32[242], 0, 0, 0, 0, 1u);
LABEL_23:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandlea, BaseAddress);
  return VirtualMemory;
}
