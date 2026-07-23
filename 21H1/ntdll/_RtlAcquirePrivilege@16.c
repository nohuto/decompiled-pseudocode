/*
 * XREFs of _RtlAcquirePrivilege@16 @ 0x4B345D20
 * Callers:
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     AcquireDebugPrivilege @ 0x4B3898C0 (AcquireDebugPrivilege.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlImpersonateSelfEx@12 @ 0x4B2EBF70 (_RtlImpersonateSelfEx@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 *     _RtlpOpenThreadToken@8 @ 0x4B349188 (_RtlpOpenThreadToken@8.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  char v4; // bl
  char *Heap; // esi
  struct _TEB *v7; // eax
  int v8; // edi
  ULONG v9; // edi
  int v10; // edx
  int v11; // ecx
  _TOKEN_PRIVILEGES *v12; // eax
  char *v13; // eax
  SIZE_T v14; // [esp-4h] [ebp-1Ch]
  SIZE_T v15; // [esp-4h] [ebp-1Ch]
  int ThreadInformation; // [esp+10h] [ebp-8h] BYREF
  ULONG ReturnLength; // [esp+14h] [ebp-4h] BYREF

  v4 = Flags;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( (Flags & 2) != 0 )
    v4 = Flags | 1;
  LODWORD(v14) = 12 * (NumPriv - 1) + 1060;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v14);
  if ( !Heap )
    return -1073741801;
  v7 = NtCurrentTeb();
  *(_DWORD *)Heap = 0;
  *((_DWORD *)Heap + 1) = 0;
  *((_DWORD *)Heap + 4) = 0;
  if ( !v7->IsImpersonating )
    goto LABEL_14;
  if ( (v4 & 1) != 0 )
  {
    v8 = RtlpOpenThreadToken(4u, (PHANDLE)Heap + 1);
    if ( v8 < 0 )
    {
LABEL_10:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v8;
    }
    *((_DWORD *)Heap + 4) |= 1u;
    ThreadInformation = 0;
    ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &ThreadInformation, 4u);
  }
  else
  {
    v8 = RtlpOpenThreadToken(0x28u, (PHANDLE)Heap);
    if ( v8 < 0 )
      goto LABEL_10;
  }
  if ( !*(_DWORD *)Heap )
  {
LABEL_14:
    if ( (v4 & 2) == 0 )
    {
      v8 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)Heap);
      if ( v8 >= 0 )
      {
        *((_DWORD *)Heap + 4) |= 1u;
        goto LABEL_19;
      }
LABEL_34:
      if ( (Heap[16] & 1) != 0 )
      {
        ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, Heap + 4, 4u);
        if ( *((_DWORD *)Heap + 1) )
          NtClose(*((HANDLE *)Heap + 1));
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v8;
    }
    v8 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 0x28u, 0x200u, (PHANDLE)Heap);
    if ( v8 < 0 )
      goto LABEL_34;
    *((_DWORD *)Heap + 4) |= 2u;
  }
LABEL_19:
  *((_DWORD *)Heap + 3) = Heap + 1044;
  v9 = 0;
  *((_DWORD *)Heap + 2) = Heap + 20;
  *((_DWORD *)Heap + 261) = NumPriv;
  if ( NumPriv )
  {
    v10 = 0;
    do
    {
      v11 = *((_DWORD *)Heap + 3);
      v10 += 12;
      *(_DWORD *)(v10 + v11 - 8) = Privilege[v9];
      *(_DWORD *)(v10 + v11 - 4) = 0;
      ++v9;
      *(_DWORD *)(v10 + *((_DWORD *)Heap + 3)) = 2;
    }
    while ( v9 < NumPriv );
  }
  ReturnLength = 1024;
  v8 = ZwAdjustPrivilegesToken(
         *(HANDLE *)Heap,
         0,
         *((PTOKEN_PRIVILEGES *)Heap + 3),
         0x400u,
         *((PTOKEN_PRIVILEGES *)Heap + 2),
         &ReturnLength);
  if ( v8 == -1073741789 )
  {
    while ( 1 )
    {
      LODWORD(v15) = ReturnLength;
      v12 = (_TOKEN_PRIVILEGES *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v15);
      *((_DWORD *)Heap + 2) = v12;
      if ( !v12 )
        break;
      v8 = ZwAdjustPrivilegesToken(
             *(HANDLE *)Heap,
             0,
             *((PTOKEN_PRIVILEGES *)Heap + 3),
             ReturnLength,
             v12,
             &ReturnLength);
      if ( v8 != -1073741789 )
        goto LABEL_27;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)Heap + 2));
    }
    v8 = -1073741801;
  }
LABEL_27:
  if ( v8 == 262 )
  {
    if ( NumPriv == 1 )
    {
      v8 = -1073741727;
      goto LABEL_30;
    }
    v8 = 0;
  }
  if ( v8 < 0 )
  {
LABEL_30:
    v13 = (char *)*((_DWORD *)Heap + 2);
    if ( v13 && v13 != Heap + 20 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)Heap + 2));
    NtClose(*(HANDLE *)Heap);
    goto LABEL_34;
  }
  *ReturnedState = Heap;
  return 0;
}
