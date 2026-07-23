/*
 * XREFs of _RtlpValidOwnerSubjectContext@16 @ 0x4B2D94CA
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwOpenProcessToken@12 @ 0x4B2F3C00 (_ZwOpenProcessToken@12.c)
 *     _ZwPrivilegeCheck@12 @ 0x4B2F3CF0 (_ZwPrivilegeCheck@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, void *a2, char a3, NTSTATUS *a4)
{
  NTSTATUS v5; // eax
  char v6; // bl
  NTSTATUS v8; // eax
  PSID *Heap; // edi
  unsigned int v10; // ebx
  PSID *v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  SIZE_T v14; // [esp-4h] [ebp-98h]
  _DWORD *v17; // [esp+14h] [ebp-80h]
  PVOID HeapHandle; // [esp+18h] [ebp-7Ch]
  ULONG ReturnLength; // [esp+1Ch] [ebp-78h] BYREF
  HANDLE TokenHandle; // [esp+20h] [ebp-74h] BYREF
  BOOLEAN Result; // [esp+27h] [ebp-6Dh] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [esp+28h] [ebp-6Ch] BYREF
  PSID TokenInformation[21]; // [esp+3Ch] [ebp-58h] BYREF

  if ( !a2 )
  {
LABEL_31:
    *a4 = -1073741734;
    return 0;
  }
  if ( !a3 )
  {
    TokenHandle = a1;
LABEL_4:
    HeapHandle = NtCurrentPeb()->ProcessHeap;
    v5 = ZwQueryInformationToken(TokenHandle, 1u, TokenInformation, 0x4Cu, &ReturnLength);
    *a4 = v5;
    if ( v5 >= 0 )
    {
      if ( RtlEqualSid(a2, TokenInformation[0]) )
      {
        if ( a3 )
          NtClose(TokenHandle);
        return 1;
      }
      v8 = ZwQueryInformationToken(TokenHandle, 2u, 0, 0, &ReturnLength);
      *a4 = v8;
      if ( v8 >= 0 || v8 == -1073741789 )
      {
        LODWORD(v14) = ReturnLength;
        Heap = (PSID *)RtlAllocateHeap(HeapHandle, 0, v14);
        if ( Heap )
        {
          *a4 = ZwQueryInformationToken(TokenHandle, 2u, Heap, ReturnLength, &ReturnLength);
          if ( a3 )
            NtClose(TokenHandle);
          if ( *a4 < 0 )
          {
            v6 = 0;
            goto LABEL_23;
          }
          v10 = 0;
          if ( *Heap )
          {
            v11 = Heap + 1;
            v17 = Heap + 1;
            while ( !RtlEqualSid(a2, *v11) )
            {
              ++v10;
              v11 = (PSID *)(v17 + 2);
              v17 += 2;
              if ( v10 >= (unsigned int)*Heap )
                goto LABEL_30;
            }
            if ( ((unsigned __int8)Heap[2 * v10 + 2] & 0x18) == 8 )
            {
              v6 = 1;
LABEL_23:
              RtlFreeHeap(HeapHandle, 0, Heap);
              return v6;
            }
          }
LABEL_30:
          RtlFreeHeap(HeapHandle, 0, Heap);
          RequiredPrivileges.Privilege[0].Luid.HighPart = 0;
          RequiredPrivileges.Privilege[0].Attributes = 0;
          RequiredPrivileges.Privilege[0].Luid.LowPart = 18;
          v6 = 1;
          RequiredPrivileges.PrivilegeCount = 1;
          RequiredPrivileges.Control = 1;
          v13 = ZwPrivilegeCheck(a1, &RequiredPrivileges, &Result);
          Result &= (v13 < 0) - 1;
          if ( Result )
            return v6;
          goto LABEL_31;
        }
        *a4 = -1073741801;
      }
    }
    if ( a3 )
      NtClose(TokenHandle);
    return 0;
  }
  v12 = ZwOpenProcessToken((HANDLE)0xFFFFFFFF, 8u, &TokenHandle);
  *a4 = v12;
  if ( v12 >= 0 )
    goto LABEL_4;
  return 0;
}
