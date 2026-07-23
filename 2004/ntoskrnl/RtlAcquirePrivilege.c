/*
 * XREFs of RtlAcquirePrivilege @ 0x1406FFFBC
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     ZwSetInformationThread @ 0x1403F3760 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x1403F3BC0 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x1403F3DE0 (ZwAdjustPrivilegesToken.c)
 *     RtlImpersonateSelfEx @ 0x1407001F8 (RtlImpersonateSelfEx.c)
 *     RtlpOpenThreadToken @ 0x14070032C (RtlpOpenThreadToken.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v5; // r14
  char v7; // si
  char *PoolWithQuotaTag; // rax
  char *v9; // rbx
  HANDLE *v10; // r12
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG v14; // eax
  __int64 v15; // rcx
  char *v17; // rcx
  struct _TOKEN_PRIVILEGES *PreviousState; // rax
  __int64 ThreadInformation; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+40h] BYREF

  BufferLength = 0;
  v5 = NumPriv;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  v7 = Flags | 1;
  if ( (Flags & 2) == 0 )
    v7 = Flags;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 12 * (NumPriv - 1 + 90LL), 0x62507452u);
  v9 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *(_QWORD *)PoolWithQuotaTag = 0LL;
    v10 = (HANDLE *)(PoolWithQuotaTag + 8);
    *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 8) = 0;
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) == 0 )
      goto LABEL_9;
    if ( (v7 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4u, v10);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 1u;
        ThreadInformation = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
        goto LABEL_9;
      }
    }
    else
    {
      v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)PoolWithQuotaTag);
      if ( v11 >= 0 )
      {
LABEL_9:
        if ( *(_QWORD *)v9 )
          goto LABEL_13;
        if ( (v7 & 2) != 0 )
        {
          v11 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 2u;
LABEL_13:
            *((_QWORD *)v9 + 3) = v9 + 1064;
            *((_QWORD *)v9 + 2) = v9 + 36;
            *((_DWORD *)v9 + 266) = v5;
            if ( (_DWORD)v5 )
            {
              v12 = 0LL;
              v13 = v5;
              do
              {
                v14 = *Privilege;
                v12 += 12LL;
                v15 = *((_QWORD *)v9 + 3);
                ++Privilege;
                ThreadInformation = v14;
                *(_QWORD *)(v12 + v15 - 8) = v14;
                *(_DWORD *)(v12 + *((_QWORD *)v9 + 3)) = 2;
                --v13;
              }
              while ( v13 );
            }
            BufferLength = 1024;
            v11 = ZwAdjustPrivilegesToken(
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
                PreviousState = (struct _TOKEN_PRIVILEGES *)ExAllocatePoolWithQuotaTag(
                                                              (POOL_TYPE)520,
                                                              BufferLength,
                                                              0x62507452u);
                *((_QWORD *)v9 + 2) = PreviousState;
                if ( !PreviousState )
                  break;
                v11 = ZwAdjustPrivilegesToken(
                        *(HANDLE *)v9,
                        0,
                        *((PTOKEN_PRIVILEGES *)v9 + 3),
                        BufferLength,
                        PreviousState,
                        &BufferLength);
                if ( v11 != -1073741789 )
                  goto LABEL_17;
                ExFreePoolWithTag(*((PVOID *)v9 + 2), 0);
              }
              v11 = -1073741801;
            }
LABEL_17:
            if ( v11 == 262 )
            {
              if ( (_DWORD)v5 == 1 )
              {
                v11 = -1073741727;
LABEL_22:
                v17 = (char *)*((_QWORD *)v9 + 2);
                if ( v17 && v17 != v9 + 36 )
                  ExFreePoolWithTag(v17, 0);
                ZwClose(*(HANDLE *)v9);
                goto LABEL_26;
              }
              v11 = 0;
            }
            if ( v11 >= 0 )
            {
              *ReturnedState = v9;
              return 0;
            }
            goto LABEL_22;
          }
        }
        else
        {
          v11 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 1u;
            goto LABEL_13;
          }
        }
LABEL_26:
        if ( (*((_DWORD *)v9 + 8) & 1) != 0 )
        {
          ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
          if ( *v10 )
            ZwClose(*v10);
        }
      }
    }
    ExFreePoolWithTag(v9, 0);
    return v11;
  }
  return -1073741801;
}
