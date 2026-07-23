/*
 * XREFs of _RtlCreateAndSetSD@20 @ 0x4B335C50
 * Callers:
 *     _RtlCreateUserSecurityObject@28 @ 0x4B335F30 (_RtlCreateUserSecurityObject@28.c)
 * Callees:
 *     _RtlAddAce@20 @ 0x4B2AAF90 (_RtlAddAce@20.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlSetGroupSecurityDescriptor@12 @ 0x4B2D8680 (_RtlSetGroupSecurityDescriptor@12.c)
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _RtlSetSaclSecurityDescriptor@16 @ 0x4B2E7F40 (_RtlSetSaclSecurityDescriptor@16.c)
 *     _RtlpInitializeAllowedAce@24 @ 0x4B336734 (_RtlpInitializeAllowedAce@24.c)
 *     _RtlpInitializeAuditAce@24 @ 0x4B336770 (_RtlpInitializeAuditAce@24.c)
 *     _RtlpInitializeDeniedAce@24 @ 0x4B3367AC (_RtlpInitializeDeniedAce@24.c)
 */

NTSTATUS __cdecl RtlCreateAndSetSD(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  int Acl; // esi
  void *ProcessHeap; // edi
  ULONG v7; // ebx
  unsigned int v8; // edx
  PRTL_ACE_DATA v9; // edi
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  char *Heap; // eax
  char *v15; // edi
  ACL *v16; // eax
  void *v17; // ebx
  ACCESS_MASK *p_AccessMask; // ebx
  ACL *v20; // edx
  ULONG v21; // ecx
  int v22; // eax
  SIZE_T v23; // [esp-4h] [ebp-30h]
  SIZE_T v24; // [esp-4h] [ebp-30h]
  ACL *v25; // [esp+Ch] [ebp-20h]
  int v26; // [esp+Ch] [ebp-20h]
  ACL *Sacl; // [esp+10h] [ebp-1Ch]
  char *SourceSid; // [esp+14h] [ebp-18h]
  unsigned __int8 *SourceSida; // [esp+14h] [ebp-18h]
  ACL *Dacl; // [esp+18h] [ebp-14h]
  SIZE_T Size; // [esp+1Ch] [ebp-10h]
  ACL *Sizea; // [esp+1Ch] [ebp-10h]
  int Size_4; // [esp+20h] [ebp-Ch]
  PVOID AceList; // [esp+24h] [ebp-8h]
  PVOID HeapHandle; // [esp+28h] [ebp-4h]

  Acl = 0;
  Dacl = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v7 = 8;
  v8 = 8;
  Sacl = 0;
  Size = 0x800000000LL;
  AceList = 0;
  HeapHandle = ProcessHeap;
  SourceSid = 0;
  if ( AceCount )
  {
    v9 = AceData;
    while ( 1 )
    {
      v10 = *((unsigned __int8 *)*v9->Sid + 1);
      if ( !v9->AceType || v9->AceType == 1 )
      {
        v11 = 4 * v10 + 20;
        if ( v11 + v7 < v7 )
          return -1073741801;
        v7 += v11;
      }
      else
      {
        if ( v9->AceType != 2 )
          return -1073741811;
        v11 = 4 * v10 + 20;
        v12 = v11 + v8;
        if ( v11 + v8 < v8 )
          return -1073741801;
        v8 += v11;
        HIDWORD(Size) = v12;
      }
      if ( (unsigned int)Size <= v11 )
        LODWORD(Size) = v11;
      ++v9;
      if ( (unsigned int)++SourceSid >= AceCount )
      {
        ProcessHeap = HeapHandle;
        break;
      }
    }
  }
  v13 = 20;
  if ( v7 != 8 )
  {
    if ( v7 + 20 < 0x14 )
      return -1073741801;
    v13 = v7 + 20;
  }
  if ( v8 != 8 )
  {
    if ( v13 + v8 < v13 )
      return -1073741801;
    v13 += v8;
  }
  LODWORD(v23) = v13;
  Heap = (char *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v23);
  v15 = Heap;
  if ( Heap )
  {
    v16 = (ACL *)(Heap + 20);
    if ( v7 != 8 )
    {
      Dacl = (ACL *)(v15 + 20);
      v25 = (ACL *)((char *)v16 + v7);
      Acl = RtlCreateAcl((PACL)(v15 + 20), v7, 2u);
      if ( Acl < 0 )
        goto LABEL_49;
      v16 = v25;
    }
    if ( HIDWORD(Size) == 8 || (Sacl = v16, Acl = RtlCreateAcl(v16, HIDWORD(Size), 2u), Acl >= 0) )
    {
      LODWORD(v24) = Size;
      v17 = HeapHandle;
      AceList = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v24);
      if ( !AceList )
      {
        Acl = -1073741801;
        goto LABEL_50;
      }
      v26 = 0;
      if ( !AceCount )
      {
LABEL_43:
        Acl = RtlCreateSecurityDescriptor(v15, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetOwnerSecurityDescriptor(v15, OwnerSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetGroupSecurityDescriptor(v15, GroupSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(v15, 1u, Dacl, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlSetSaclSecurityDescriptor(v15, Sacl != 0, Sacl, 0);
                if ( Acl >= 0 )
                {
                  Acl = 0;
                  *NewSecurityDescriptor = v15;
                  goto LABEL_51;
                }
              }
            }
          }
        }
LABEL_50:
        RtlFreeHeap(v17, 0, v15);
LABEL_51:
        if ( AceList )
          RtlFreeHeap(v17, 0, AceList);
        return Acl;
      }
      p_AccessMask = &AceData->AccessMask;
      while ( 1 )
      {
        v20 = 0;
        SourceSida = *(unsigned __int8 **)p_AccessMask[1];
        v21 = 4 * SourceSida[1] + 8;
        if ( *((_BYTE *)p_AccessMask - 4) )
        {
          if ( *((_BYTE *)p_AccessMask - 4) == 1 )
          {
            Sizea = Dacl;
            Size_4 = 4 * SourceSida[1] + 20;
            v22 = RtlpInitializeDeniedAce(
                    *((_BYTE *)p_AccessMask - 3),
                    *((_BYTE *)p_AccessMask - 2),
                    *p_AccessMask,
                    SourceSida);
          }
          else
          {
            if ( *((_BYTE *)p_AccessMask - 4) != 2 )
              goto LABEL_39;
            Sizea = Sacl;
            Size_4 = 4 * SourceSida[1] + 20;
            v22 = RtlpInitializeAuditAce(
                    *((_BYTE *)p_AccessMask - 3),
                    *((_BYTE *)p_AccessMask - 2),
                    *p_AccessMask,
                    SourceSida);
          }
        }
        else
        {
          Sizea = Dacl;
          Size_4 = 4 * SourceSida[1] + 20;
          v22 = RtlpInitializeAllowedAce(
                  *((_BYTE *)p_AccessMask - 3),
                  *((_BYTE *)p_AccessMask - 2),
                  *p_AccessMask,
                  SourceSida);
        }
        v21 = Size_4;
        Acl = v22;
        v20 = Sizea;
LABEL_39:
        if ( Acl < 0 )
          break;
        Acl = RtlAddAce(v20, 2u, 0xFFFFFFFF, AceList, v21);
        if ( Acl < 0 )
          break;
        p_AccessMask += 3;
        if ( ++v26 >= AceCount )
        {
          v17 = HeapHandle;
          goto LABEL_43;
        }
      }
    }
LABEL_49:
    v17 = HeapHandle;
    goto LABEL_50;
  }
  return -1073741801;
}
