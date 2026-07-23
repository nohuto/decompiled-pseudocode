/*
 * XREFs of _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _RtlGuardCheckImageBase@8 @ 0x4B2BC5F3 (_RtlGuardCheckImageBase@8.c)
 *     _RtlPcToFileHeader@8 @ 0x4B2BC650 (_RtlPcToFileHeader@8.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlIsValidHandler@12 @ 0x4B2E9163 (_RtlIsValidHandler@12.c)
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 *     _RtlGuardCheckLongJumpTarget@12 @ 0x4B3639C0 (_RtlGuardCheckLongJumpTarget@12.c)
 *     _RtlCreateInvertedFunctionTableCacheEntry@8 @ 0x4B36D377 (_RtlCreateInvertedFunctionTableCacheEntry@8.c)
 * Callees:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

unsigned int __usercall RtlpxLookupFunctionTable@<eax>(
        PVOID BaseAddress@<ecx>,
        int a2@<edx>,
        int a3@<ebp>,
        ULONG_PTR *a4@<edi>)
{
  bool v4; // zf
  char *v5; // edi
  PVOID v6; // esi
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int *v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // ecx
  signed __int32 v13; // eax
  signed __int32 v14; // ecx
  unsigned int result; // eax
  void *v16; // ecx
  char *v17; // esi
  PVOID v18; // ecx
  NTSTATUS v19; // eax
  WORD Magic; // ax
  ULONG VirtualAddress; // esi
  unsigned int Size; // edx
  unsigned __int16 Machine; // ax
  unsigned int v24; // edx
  unsigned int v25; // esi
  signed __int32 v26; // eax
  _DWORD *v27; // eax
  int i; // edx
  PIMAGE_NT_HEADERS v29; // edi
  char *p_FileHeader; // eax
  char *v31; // edx
  signed __int32 v32; // eax
  _BYTE *v33; // eax
  _DWORD v35[2]; // [esp-30h] [ebp-3Ch] BYREF
  char v36; // [esp-28h] [ebp-34h]
  PIMAGE_NT_HEADERS v37; // [esp-24h] [ebp-30h] BYREF
  unsigned int v38; // [esp-20h] [ebp-2Ch] BYREF
  int v39; // [esp-1Ch] [ebp-28h] BYREF
  PIMAGE_NT_HEADERS v40; // [esp-18h] [ebp-24h] BYREF
  int v41; // [esp-14h] [ebp-20h]
  int v42; // [esp-10h] [ebp-1Ch] BYREF
  unsigned int v43; // [esp-Ch] [ebp-18h]
  char *v44; // [esp-8h] [ebp-14h] BYREF
  char v45; // [esp-1h] [ebp-Dh]
  int v46; // [esp+0h] [ebp-Ch]
  void *v47; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v46 = a3;
  v47 = retaddr;
  v4 = LdrInitState == 3;
  v5 = (char *)a2;
  v41 = 0;
  v6 = BaseAddress;
  v44 = (char *)a2;
  v43 = (unsigned int)BaseAddress;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  if ( !v4 )
  {
LABEL_15:
    if ( NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, v6, MemoryImageInformation, v35, 0xCuLL, a4) < 0
      || (v16 = (void *)v35[0], (v43 = v35[0]) == 0)
      || (v36 & 3) != 0
      || (unsigned int)v6 < v35[0] )
    {
      v16 = 0;
      v43 = 0;
    }
    else
    {
      *((_DWORD *)v5 + 2) = v35[1];
    }
    *((_DWORD *)v5 + 1) = v16;
    if ( !v16 )
      return v41;
    v42 = 0;
    RtlImageNtHeaderEx(1u, v16, 0LL, (PIMAGE_NT_HEADERS *)&v42);
    if ( (*(_WORD *)(v42 + 94) & 0x400) != 0 )
    {
LABEL_48:
      result = -1;
      *((_DWORD *)v5 + 3) = -1;
      *(_DWORD *)v5 = -1;
      return result;
    }
    RtlImageNtHeaderEx(1u, (PVOID)v43, 0LL, &v37);
    v17 = 0;
    v45 = 1;
    v18 = (PVOID)v43;
    v44 = (char *)v43;
    v40 = 0;
    v39 = 0;
    if ( (v43 & 3) != 0 )
    {
      v18 = (PVOID)(v43 & 0xFFFFFFFC);
      v44 = (char *)(v43 & 0xFFFFFFFC);
      v45 = (v43 & 1) == 0;
    }
    v19 = RtlImageNtHeaderEx(1u, v18, 0LL, &v40);
    if ( v40 )
    {
      Magic = v40->OptionalHeader.Magic;
      if ( Magic == 267 )
      {
        if ( HIDWORD(v40->OptionalHeader.SizeOfHeapReserve) <= 0xA )
          goto LABEL_72;
        VirtualAddress = v40->OptionalHeader.DataDirectory[8].VirtualAddress;
        if ( !VirtualAddress )
          goto LABEL_72;
        Size = v40->OptionalHeader.DataDirectory[8].Size;
        v38 = Size;
        if ( v45 || VirtualAddress < v40->OptionalHeader.SizeOfHeaders )
        {
          v17 = &v44[VirtualAddress];
          goto LABEL_30;
        }
        v17 = (char *)RtlAddressInSectionTable(v40, v44, VirtualAddress);
        if ( !v17 )
          goto LABEL_72;
LABEL_78:
        Size = v38;
LABEL_30:
        if ( v17 && Size && (Size == 64 || Size == *(_DWORD *)v17) )
        {
          Machine = v37->FileHeader.Machine;
          if ( (Machine == 14948 || Machine == 332) && *(_DWORD *)v17 >= 0x48u )
          {
            v24 = *((_DWORD *)v17 + 16);
            if ( v24 )
            {
              v25 = *((_DWORD *)v17 + 17);
              if ( v25 )
              {
                if ( v24 >= v43 + *(_DWORD *)(v42 + 84) && v25 <= (v43 + *(_DWORD *)(v42 + 80) - v24) >> 2 )
                  goto LABEL_41;
                goto LABEL_48;
              }
            }
          }
        }
LABEL_72:
        v33 = RtlImageDirectoryEntryToData((PVOID)v43, 1u, 0xEu, (PULONG)&v44);
        if ( !v33 || (v33[16] & 1) == 0 )
        {
          v24 = 0;
          v25 = 0;
LABEL_41:
          *((_DWORD *)v5 + 3) = v25;
          *(_DWORD *)v5 = v24;
          return v24;
        }
        goto LABEL_48;
      }
      if ( Magic != 523 )
        goto LABEL_72;
      v19 = RtlpImageDirectoryEntryToData64(v44, v45, 0xAu, &v38, v40, &v39);
      v17 = (char *)v39;
    }
    if ( v19 < 0 )
      goto LABEL_72;
    goto LABEL_78;
  }
  RtlAcquireSRWLockShared(&LdrpInvertedFunctionTableSRWLock);
  if ( LdrpInvertedFunctionTable == 1 )
    goto LABEL_12;
  v7 = 1;
  v8 = LdrpInvertedFunctionTable - 1;
  while ( v8 >= v7 )
  {
    v9 = (v7 + v8) >> 1;
    v10 = &dword_4B3A9370[4 * v9];
    v11 = v10[1];
    if ( v43 < v11 )
    {
      v6 = (PVOID)v43;
      if ( !v9 )
        break;
      v8 = v9 - 1;
    }
    else
    {
      v12 = v11 + v10[2];
      v6 = (PVOID)v43;
      if ( v43 < v12 )
      {
        v5 = v44;
        *(_DWORD *)v44 = *v10;
        *((_DWORD *)v5 + 1) = v10[1];
        *((_DWORD *)v5 + 2) = v10[2];
        *((_DWORD *)v5 + 3) = v10[3];
        v41 = MEMORY[0x7FFE0330] ^ __ROR4__(*(_DWORD *)v5, 32 - (MEMORY[0x7FFE0330] & 0x1F));
        *(_DWORD *)v5 = v41;
        goto LABEL_12;
      }
      v7 = v9 + 1;
    }
  }
  v5 = v44;
LABEL_12:
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&LdrpInvertedFunctionTableSRWLock, 0, 17);
  v14 = v13;
  if ( v13 != 17 )
  {
    if ( (v13 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    if ( (v13 & 2) != 0 )
    {
LABEL_55:
      if ( (v14 & 8) != 0 )
      {
        v27 = (_DWORD *)(v14 & 0xFFFFFFF0);
        for ( i = *(_DWORD *)((v14 & 0xFFFFFFF0) + 4); !i; i = v27[1] )
          v27 = (_DWORD *)*v27;
        if ( _InterlockedDecrement((volatile signed __int32 *)(i + 16)) > 0 )
          goto LABEL_13;
        v42 = -9;
      }
      else
      {
        v42 = -1;
      }
      v29 = (PIMAGE_NT_HEADERS)v42;
      while ( 1 )
      {
        v39 = v14 & 6;
        p_FileHeader = (char *)&v29->FileHeader;
        if ( v39 != 2 )
          p_FileHeader = (char *)v29;
        v31 = &p_FileHeader[v14];
        v32 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&LdrpInvertedFunctionTableSRWLock,
                (signed __int32)&p_FileHeader[v14],
                v14);
        v29 = (PIMAGE_NT_HEADERS)v42;
        if ( v32 == v14 )
          break;
        v14 = v32;
      }
      v5 = v44;
      if ( v39 == 2 )
        RtlpWakeSRWLock(v31);
      v6 = (PVOID)v43;
      goto LABEL_13;
    }
    while ( 1 )
    {
      v26 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&LdrpInvertedFunctionTableSRWLock,
              (v14 & 0xFFFFFFF0) != 16 ? v14 - 16 : 0,
              v14);
      v5 = v44;
      if ( v26 == v14 )
        break;
      v14 = v26;
      if ( (v26 & 2) != 0 )
        goto LABEL_55;
    }
  }
LABEL_13:
  result = v41;
  if ( !v41 && (byte_4B3A936C || SLOBYTE(NtCurrentPeb()->CrossProcessFlags) < 0) )
    goto LABEL_15;
  return result;
}
