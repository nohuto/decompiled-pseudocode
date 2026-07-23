/*
 * XREFs of RtlAcquirePrivilege @ 0x180077180
 * Callers:
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     AcquireDebugPrivilege @ 0x180118030 (AcquireDebugPrivilege.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpOpenThreadToken @ 0x18007739C (RtlpOpenThreadToken.c)
 *     RtlImpersonateSelfEx @ 0x180077400 (RtlImpersonateSelfEx.c)
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18009D6B0 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x18009D8D0 (NtAdjustPrivilegesToken.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v4; // rbp
  char v7; // si
  char *Heap; // rax
  char *v9; // rbx
  HANDLE *v10; // r14
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  ULONG v14; // eax
  __int64 v15; // rcx
  _TOKEN_PRIVILEGES *PreviousState; // rax
  char *v18; // r8
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  v4 = NumPriv;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  v7 = Flags | 1;
  if ( (Flags & 2) == 0 )
    v7 = Flags;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (NumPriv - 1 + 90LL));
  v9 = Heap;
  if ( !Heap )
    return -1073741801;
  *(_QWORD *)Heap = 0LL;
  v10 = (HANDLE *)(Heap + 8);
  *((_QWORD *)Heap + 1) = 0LL;
  *((_DWORD *)Heap + 8) = 0;
  if ( !NtCurrentTeb()->IsImpersonating )
  {
LABEL_6:
    if ( (v7 & 2) != 0 )
    {
      v11 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 2u;
        goto LABEL_9;
      }
LABEL_38:
      if ( (v9[32] & 1) != 0 )
      {
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
        if ( *v10 )
          NtClose(*v10);
      }
      goto LABEL_41;
    }
    v11 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
    if ( v11 < 0 )
      goto LABEL_38;
    *((_DWORD *)v9 + 8) |= 1u;
LABEL_9:
    *((_QWORD *)v9 + 3) = v9 + 1064;
    *((_QWORD *)v9 + 2) = v9 + 36;
    *((_DWORD *)v9 + 266) = v4;
    if ( (_DWORD)v4 )
    {
      HIDWORD(ThreadInformation) = 0;
      v12 = v4;
      v13 = 0LL;
      do
      {
        v14 = *Privilege;
        v13 += 12LL;
        v15 = *((_QWORD *)v9 + 3);
        ++Privilege;
        LODWORD(ThreadInformation) = v14;
        *(_QWORD *)(v13 + v15 - 8) = ThreadInformation;
        *(_DWORD *)(v13 + *((_QWORD *)v9 + 3)) = 2;
        --v12;
      }
      while ( v12 );
    }
    BufferLength = 1024;
    v11 = NtAdjustPrivilegesToken(
            *(HANDLE *)v9,
            0,
            *((PTOKEN_PRIVILEGES *)v9 + 3),
            0x400u,
            *((PTOKEN_PRIVILEGES *)v9 + 2),
            &BufferLength);
    if ( v11 == -1073741789 )
    {
      while ( 1 )
      {
        PreviousState = (_TOKEN_PRIVILEGES *)RtlAllocateHeap(
                                               NtCurrentPeb()->ProcessHeap,
                                               NtdllBaseTag + 1310720,
                                               BufferLength);
        *((_QWORD *)v9 + 2) = PreviousState;
        if ( !PreviousState )
          break;
        v11 = NtAdjustPrivilegesToken(
                *(HANDLE *)v9,
                0,
                *((PTOKEN_PRIVILEGES *)v9 + 3),
                BufferLength,
                PreviousState,
                &BufferLength);
        if ( v11 != -1073741789 )
          goto LABEL_13;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v9 + 2));
      }
      v11 = -1073741801;
    }
LABEL_13:
    if ( v11 == 262 )
    {
      if ( (_DWORD)v4 == 1 )
      {
        v11 = -1073741727;
LABEL_34:
        v18 = (char *)*((_QWORD *)v9 + 2);
        if ( v18 && v18 != v9 + 36 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        NtClose(*(HANDLE *)v9);
        goto LABEL_38;
      }
      v11 = 0;
    }
    if ( v11 >= 0 )
    {
      *ReturnedState = v9;
      return 0;
    }
    goto LABEL_34;
  }
  if ( (v7 & 1) != 0 )
  {
    v11 = RtlpOpenThreadToken(4u, v10);
    if ( v11 >= 0 )
    {
      *((_DWORD *)v9 + 8) |= 1u;
      ThreadInformation = 0LL;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      goto LABEL_19;
    }
  }
  else
  {
    v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)Heap);
    if ( v11 >= 0 )
    {
LABEL_19:
      if ( *(_QWORD *)v9 )
        goto LABEL_9;
      goto LABEL_6;
    }
  }
LABEL_41:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v11;
}
