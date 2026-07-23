/*
 * XREFs of _RtlAllocateHandle@8 @ 0x4B2E0600
 * Callers:
 *     _RtlpInsertStringAtom@8 @ 0x4B2E0590 (_RtlpInsertStringAtom@8.c)
 * Callees:
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

PRTL_HANDLE_TABLE_ENTRY __cdecl RtlAllocateHandle(PRTL_HANDLE_TABLE HandleTable, PULONG HandleIndex)
{
  PRTL_HANDLE_TABLE_ENTRY *p_FreeHandles; // edi
  _DWORD *v3; // ecx
  ULONG v5; // ecx
  ULONG v6; // ebx
  struct _PEB *v7; // eax
  _RTL_HANDLE_TABLE_ENTRY *v8; // eax
  _RTL_HANDLE_TABLE_ENTRY *v9; // ecx
  _RTL_HANDLE_TABLE_ENTRY *v10; // eax
  _DWORD *v11; // eax
  PRTL_HANDLE_TABLE_ENTRY UnCommittedHandles; // eax
  ULONG v13; // eax
  _RTL_HANDLE_TABLE_ENTRY *v14; // ecx
  _RTL_HANDLE_TABLE_ENTRY *v15; // eax
  ULONG_PTR v16; // [esp-10h] [ebp-30h]
  ULONG_PTR v17; // [esp-10h] [ebp-30h]
  SIZE_T v18; // [esp-4h] [ebp-24h]
  ULONG v19; // [esp+Ch] [ebp-14h]
  int v20; // [esp+10h] [ebp-10h] BYREF
  ULONG v21; // [esp+14h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+18h] [ebp-8h] BYREF
  PVOID v23; // [esp+1Ch] [ebp-4h] BYREF

  p_FreeHandles = &HandleTable->FreeHandles;
  if ( !HandleTable->FreeHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      v5 = HandleTable->Reserved[1];
      if ( v5 <= HandleTable->MaximumNumberOfHandles )
      {
        v6 = v5 * HandleTable->SizeOfHandleTableEntry;
        v19 = v6 + 8 * HandleTable->SizeOfHandleTableEntry;
        LODWORD(v18) = v19;
        v7 = NtCurrentPeb();
        v8 = (_RTL_HANDLE_TABLE_ENTRY *)(HandleTable->CommittedHandles
                                       ? RtlReAllocateHeap(v7->ProcessHeap, 8u, HandleTable->CommittedHandles, v18)
                                       : RtlAllocateHeap(v7->ProcessHeap, 8u, v18));
        BaseAddress = v8;
        if ( v8 )
        {
          HandleTable->Reserved[1] += 8;
          v9 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v8 + v6);
          HandleTable->CommittedHandles = v8;
          v10 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v8 + v19);
          v23 = v9;
          goto LABEL_11;
        }
      }
    }
    else
    {
      UnCommittedHandles = HandleTable->UnCommittedHandles;
      if ( !UnCommittedHandles )
      {
        v13 = HandleTable->MaximumNumberOfHandles * HandleTable->SizeOfHandleTableEntry;
        BaseAddress = 0;
        v21 = v13;
        HIDWORD(v16) = &v21;
        LODWORD(v16) = 0;
        if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v16, (PSIZE_T)0x2000, 4u, HIDWORD(v18)) < 0 )
          return 0;
        v14 = (_RTL_HANDLE_TABLE_ENTRY *)BaseAddress;
        v15 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)BaseAddress + v21);
        HandleTable->CommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)BaseAddress;
        HandleTable->MaxReservedHandles = v15;
        UnCommittedHandles = v14;
        HandleTable->UnCommittedHandles = v14;
      }
      v23 = UnCommittedHandles;
      if ( UnCommittedHandles < HandleTable->MaxReservedHandles )
      {
        v20 = 4096;
        HIDWORD(v17) = &v20;
        LODWORD(v17) = 0;
        if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &v23, v17, (PSIZE_T)0x1000, 4u, HIDWORD(v18)) >= 0 )
        {
          v9 = (_RTL_HANDLE_TABLE_ENTRY *)v23;
          v10 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v23 + v20);
LABEL_11:
          HandleTable->UnCommittedHandles = v10;
          v11 = &HandleTable->FreeHandles;
          while ( v9 < HandleTable->UnCommittedHandles )
          {
            *v11 = v9;
            v11 = v23;
            v9 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v23 + HandleTable->SizeOfHandleTableEntry);
            v23 = v9;
          }
          goto LABEL_2;
        }
      }
    }
    return 0;
  }
LABEL_2:
  v3 = *p_FreeHandles;
  v23 = v3;
  *p_FreeHandles = (PRTL_HANDLE_TABLE_ENTRY)*v3;
  *v3 = 0;
  if ( HandleIndex )
    *HandleIndex = ((unsigned int)v23 - (unsigned int)HandleTable->CommittedHandles)
                 / HandleTable->SizeOfHandleTableEntry;
  return (PRTL_HANDLE_TABLE_ENTRY)v23;
}
