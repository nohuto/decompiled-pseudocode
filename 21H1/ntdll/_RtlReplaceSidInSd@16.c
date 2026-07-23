/*
 * XREFs of _RtlReplaceSidInSd@16 @ 0x4B346EC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetDaclSecurityDescriptor@16 @ 0x4B2E5690 (_RtlGetDaclSecurityDescriptor@16.c)
 *     _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80 (_RtlGetOwnerSecurityDescriptor@12.c)
 *     _RtlGetSaclSecurityDescriptor@16 @ 0x4B2EC050 (_RtlGetSaclSecurityDescriptor@16.c)
 *     _RtlGetGroupSecurityDescriptor@12 @ 0x4B2ECDD0 (_RtlGetGroupSecurityDescriptor@12.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  int v4; // edi
  int v5; // ebx
  NTSTATUS result; // eax
  PACL v7; // edi
  unsigned __int8 Sbz1; // al
  unsigned __int8 v9; // cl
  ACL *v10; // edi
  PACL v11; // edi
  unsigned __int8 v12; // al
  unsigned __int8 v13; // cl
  ACL *v14; // edi
  PACL v15; // edi
  ACL *AceCount; // eax
  ACL *v17; // ecx
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // cl
  ACL *v21; // eax
  PACL v22; // edi
  ACL *v23; // ecx
  int v24; // ebx
  unsigned __int8 v25; // al
  unsigned __int8 v26; // cl
  size_t v27; // [esp-8h] [ebp-20h]
  unsigned __int8 *v28; // [esp+8h] [ebp-10h]
  unsigned __int8 *v29; // [esp+8h] [ebp-10h]
  int Size; // [esp+Ch] [ebp-Ch]
  PACL Size_4; // [esp+10h] [ebp-8h] BYREF
  BOOLEAN DaclPresent; // [esp+16h] [ebp-2h] BYREF
  BOOLEAN OwnerDefaulted; // [esp+17h] [ebp-1h] BYREF

  Size_4 = 0;
  *NumChanges = 0;
  v5 = 4 * *((unsigned __int8 *)OldSid + 1);
  Size = v5;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, (PSID *)&Size_4, &OwnerDefaulted);
  if ( result >= 0 )
  {
    HIDWORD(v27) = v4;
    v7 = Size_4;
    if ( Size_4 )
    {
      if ( Size_4->AclRevision == *(_BYTE *)OldSid )
      {
        Sbz1 = Size_4->Sbz1;
        v9 = *((_BYTE *)OldSid + 1);
        if ( Sbz1 == v9 || Sbz1 == v9 + 1 )
        {
          LODWORD(v27) = 6;
          if ( !memcmp(&Size_4->AclSize, (char *)OldSid + 2, v27) )
          {
            LODWORD(v27) = v5;
            v10 = v7 + 1;
            if ( !memcmp(v10, (char *)OldSid + 8, v27) )
            {
              LODWORD(v27) = v5;
              memcpy(v10, (char *)NewSid + 8, v27);
              ++*NumChanges;
            }
          }
        }
      }
    }
    Size_4 = 0;
    result = RtlGetGroupSecurityDescriptor(SecurityDescriptor, (PSID *)&Size_4, &OwnerDefaulted);
    if ( result >= 0 )
    {
      v11 = Size_4;
      if ( Size_4 )
      {
        if ( Size_4->AclRevision == *(_BYTE *)OldSid )
        {
          v12 = Size_4->Sbz1;
          v13 = *((_BYTE *)OldSid + 1);
          if ( v12 == v13 || v12 == v13 + 1 )
          {
            LODWORD(v27) = 6;
            if ( !memcmp(&Size_4->AclSize, (char *)OldSid + 2, v27) )
            {
              LODWORD(v27) = v5;
              v14 = v11 + 1;
              if ( !memcmp(v14, (char *)OldSid + 8, v27) )
              {
                LODWORD(v27) = v5;
                memcpy(v14, (char *)NewSid + 8, v27);
                ++*NumChanges;
              }
            }
          }
        }
      }
      Size_4 = 0;
      result = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Size_4, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( DaclPresent )
        {
          if ( Size_4 )
          {
            v15 = Size_4 + 1;
            AceCount = (ACL *)Size_4->AceCount;
            Size_4 = AceCount;
            if ( AceCount )
            {
              v17 = AceCount;
              while ( v15->AclRevision > 3u )
              {
                if ( v15->AclRevision == 4 )
                {
                  v18 = 4 * HIBYTE(v15[1].AceCount) + 20;
LABEL_26:
                  if ( *(&v15->AclRevision + v18) == *(_BYTE *)OldSid )
                  {
                    v19 = *(&v15->Sbz1 + v18);
                    v20 = *((_BYTE *)OldSid + 1);
                    if ( v19 == v20 || v19 == v20 + 1 )
                    {
                      LODWORD(v27) = 6;
                      if ( !memcmp((char *)&v15->AclSize + v18, (char *)OldSid + 2, v27) )
                      {
                        LODWORD(v27) = Size;
                        v28 = &v15[1].AclRevision + v18;
                        if ( !memcmp(v28, (char *)OldSid + 8, v27) )
                        {
                          LODWORD(v27) = Size;
                          memcpy(v28, (char *)NewSid + 8, v27);
                          ++*NumChanges;
                        }
                      }
                    }
                    v17 = Size_4;
                  }
                }
                v17 = (ACL *)((char *)v17 - 1);
                v15 = (PACL)((char *)v15 + v15->AclSize);
                Size_4 = v17;
                if ( !v17 )
                  goto LABEL_34;
              }
              v18 = 8;
              goto LABEL_26;
            }
          }
        }
LABEL_34:
        Size_4 = 0;
        result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Size_4, &OwnerDefaulted);
        if ( result >= 0 && DaclPresent && Size_4 )
        {
          v21 = (ACL *)Size_4->AceCount;
          v22 = Size_4 + 1;
          Size_4 = v21;
          if ( v21 )
          {
            v23 = v21;
            while ( v22->AclRevision > 3u )
            {
              if ( v22->AclRevision == 4 )
              {
                v24 = 4 * HIBYTE(v22[1].AceCount) + 20;
LABEL_43:
                if ( *(&v22->AclRevision + v24) == *(_BYTE *)OldSid )
                {
                  v25 = *(&v22->Sbz1 + v24);
                  v26 = *((_BYTE *)OldSid + 1);
                  if ( v25 == v26 || v25 == v26 + 1 )
                  {
                    LODWORD(v27) = 6;
                    if ( !memcmp((char *)&v22->AclSize + v24, (char *)OldSid + 2, v27) )
                    {
                      LODWORD(v27) = Size;
                      v29 = &v22[1].AclRevision + v24;
                      if ( !memcmp(v29, (char *)OldSid + 8, v27) )
                      {
                        LODWORD(v27) = Size;
                        memcpy(v29, (char *)NewSid + 8, v27);
                        ++*NumChanges;
                      }
                    }
                  }
                  v23 = Size_4;
                }
              }
              v23 = (ACL *)((char *)v23 - 1);
              v22 = (PACL)((char *)v22 + v22->AclSize);
              Size_4 = v23;
              if ( !v23 )
                return 0;
            }
            v24 = 8;
            goto LABEL_43;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
