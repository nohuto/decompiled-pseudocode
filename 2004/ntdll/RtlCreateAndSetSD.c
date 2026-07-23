/*
 * XREFs of RtlCreateAndSetSD @ 0x180066880
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800D68B0 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180038020 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180038080 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18003C8E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18003C950 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAce @ 0x180066B60 (RtlAddAce.c)
 *     RtlCopySid @ 0x180067300 (RtlCopySid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x180067340 (RtlSetSaclSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCreateAndSetSD(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  int SecurityDescriptor; // ebx
  unsigned int v6; // r12d
  _DWORD *v7; // r14
  ULONG v8; // r9d
  void *ProcessHeap; // r13
  ULONG v10; // esi
  ULONG v11; // r15d
  PRTL_ACE_DATA v12; // r8
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  ACL *Heap; // rax
  ACL *v17; // rdi
  ACL *v18; // rbp
  ULONG v19; // r15d
  ACCESS_MASK *p_AccessMask; // rsi
  ACL *v21; // r12
  unsigned __int8 *v22; // r8
  ULONG AceListLength; // ebp
  ACCESS_MASK v24; // edx
  char v25; // al
  int v26; // ecx
  ACL *Acl; // [rsp+30h] [rbp-58h]
  ACL *Sacl; // [rsp+38h] [rbp-50h]

  SecurityDescriptor = 0;
  Acl = 0LL;
  v6 = 0;
  Sacl = 0LL;
  v7 = 0LL;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v10 = 8;
  v11 = 8;
  if ( !AceCount )
  {
LABEL_9:
    v15 = 40;
    if ( v10 != 8 )
    {
      if ( v10 + 40 < 0x28 )
        return -1073741801;
      v15 = v10 + 40;
    }
    if ( v11 != 8 )
    {
      if ( v15 + v11 < v15 )
        return -1073741801;
      v15 += v11;
    }
    Heap = (ACL *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v15);
    v17 = Heap;
    if ( Heap )
    {
      v18 = Heap + 5;
      if ( v10 != 8 )
      {
        Acl = Heap + 5;
        v18 = (ACL *)((char *)v18 + v10);
        SecurityDescriptor = RtlCreateAcl(Heap + 5, v10, 2u);
        if ( SecurityDescriptor < 0 )
          goto LABEL_48;
      }
      if ( v11 != 8 )
      {
        Sacl = v18;
        SecurityDescriptor = RtlCreateAcl(v18, v11, 2u);
        if ( SecurityDescriptor < 0 )
          goto LABEL_48;
      }
      v7 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v6);
      if ( v7 )
      {
        v19 = 0;
        if ( AceCount )
        {
          p_AccessMask = &AceData->AccessMask;
          while ( 1 )
          {
            v21 = 0LL;
            v22 = **(unsigned __int8 ***)(p_AccessMask + 1);
            AceListLength = 4 * v22[1] + 8;
            if ( !*((_BYTE *)p_AccessMask - 4) )
              break;
            if ( *((_BYTE *)p_AccessMask - 4) == 1 )
            {
              v24 = *p_AccessMask;
              v25 = *((_BYTE *)p_AccessMask - 2);
              v26 = *((unsigned __int8 *)p_AccessMask - 3);
              *(_BYTE *)v7 = 1;
              goto LABEL_22;
            }
            if ( *((_BYTE *)p_AccessMask - 4) != 2 )
              goto LABEL_24;
            v24 = *p_AccessMask;
            v25 = *((_BYTE *)p_AccessMask - 2);
            LOBYTE(v26) = *((_BYTE *)p_AccessMask - 3);
            v21 = Sacl;
            *(_BYTE *)v7 = 2;
LABEL_23:
            v7[1] = v24;
            *((_BYTE *)v7 + 1) = v25 | v26;
            AceListLength += 12;
            *((_WORD *)v7 + 1) = AceListLength;
            SecurityDescriptor = RtlCopySid(4 * v22[1] + 8, v7 + 2, v22);
LABEL_24:
            if ( SecurityDescriptor < 0 )
              goto LABEL_48;
            SecurityDescriptor = RtlAddAce(v21, 2u, 0xFFFFFFFF, v7, AceListLength);
            if ( SecurityDescriptor < 0 )
              goto LABEL_48;
            ++v19;
            p_AccessMask += 4;
            if ( v19 >= AceCount )
              goto LABEL_27;
          }
          v24 = *p_AccessMask;
          v25 = *((_BYTE *)p_AccessMask - 2);
          LOBYTE(v26) = *((_BYTE *)p_AccessMask - 3);
          *(_BYTE *)v7 = 0;
LABEL_22:
          v21 = Acl;
          goto LABEL_23;
        }
LABEL_27:
        SecurityDescriptor = RtlCreateSecurityDescriptor(v17, 1u);
        if ( SecurityDescriptor >= 0 )
        {
          SecurityDescriptor = RtlSetOwnerSecurityDescriptor(v17, OwnerSid, 0);
          if ( SecurityDescriptor >= 0 )
          {
            SecurityDescriptor = RtlSetGroupSecurityDescriptor(v17, GroupSid, 0);
            if ( SecurityDescriptor >= 0 )
            {
              SecurityDescriptor = RtlSetDaclSecurityDescriptor(v17, 1u, Acl, 0);
              if ( SecurityDescriptor >= 0 )
              {
                SecurityDescriptor = RtlSetSaclSecurityDescriptor(v17, Sacl != 0LL, Sacl, 0);
                if ( SecurityDescriptor >= 0 )
                {
                  SecurityDescriptor = 0;
                  *NewSecurityDescriptor = v17;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
      else
      {
        SecurityDescriptor = -1073741801;
      }
LABEL_48:
      RtlFreeHeap(ProcessHeap, 0, v17);
LABEL_33:
      if ( v7 )
        RtlFreeHeap(ProcessHeap, 0, v7);
      return SecurityDescriptor;
    }
    return -1073741801;
  }
  v12 = AceData;
  while ( 1 )
  {
    v13 = *((unsigned __int8 *)*v12->Sid + 1);
    if ( v12->AceType )
    {
      if ( v12->AceType != 1 )
        break;
    }
    v14 = 4 * v13 + 20;
    if ( v14 + v10 < v10 )
      return -1073741801;
    v10 += v14;
LABEL_6:
    if ( v6 > v14 )
      v14 = v6;
    ++v8;
    ++v12;
    v6 = v14;
    if ( v8 >= AceCount )
      goto LABEL_9;
  }
  if ( v12->AceType == 2 )
  {
    v14 = 4 * v13 + 20;
    if ( v14 + v11 < v11 )
      return -1073741801;
    v11 += v14;
    goto LABEL_6;
  }
  return -1073741811;
}
