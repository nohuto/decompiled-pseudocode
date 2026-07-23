/*
 * XREFs of _RtlAddAce@20 @ 0x4B2AAF90
 * Callers:
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

NTSTATUS __cdecl RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  _BYTE *v5; // ebx
  ULONG v6; // edi
  char *v7; // edx
  char *v8; // eax
  unsigned __int8 v9; // al
  _BYTE *v10; // edx
  PACL v11; // ecx
  ULONG i; // eax
  int v13; // edx
  int v14; // ebx
  bool v16; // cf
  PVOID FirstFree; // [esp+Ch] [ebp-10h] BYREF
  ULONG v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  unsigned __int8 AclRevision; // [esp+1Bh] [ebp-1h]

  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)AceRevision > AclRevision )
    AclRevision = AceRevision;
  v5 = AceList;
  v6 = AceListLength;
  v7 = (char *)AceList;
  v18 = 0;
  v19 = 0;
  v8 = (char *)AceList + AceListLength;
  if ( AceList < (char *)AceList + AceListLength )
  {
    do
    {
      v9 = *v7;
      if ( (unsigned __int8)*v7 > 3u )
      {
        if ( v9 > 4u )
        {
          if ( v9 > 8u )
            goto LABEL_7;
          v16 = AceRevision < 4;
        }
        else
        {
          v16 = AceRevision < 3;
        }
        if ( v16 )
          return -1073741811;
      }
LABEL_7:
      v7 += *((unsigned __int16 *)v7 + 1);
      ++v19;
      v8 = (char *)AceList + AceListLength;
    }
    while ( v7 < (char *)AceList + AceListLength );
  }
  if ( v7 > v8 )
    return -1073741811;
  v10 = FirstFree;
  if ( !FirstFree || (char *)FirstFree + AceListLength > (char *)Acl + Acl->AclSize )
    return -1073741789;
  v11 = Acl + 1;
  if ( StartingAceIndex )
  {
    FirstFree = (PVOID)Acl->AceCount;
    for ( i = 0; i < StartingAceIndex; v18 = i )
    {
      if ( i >= (unsigned int)FirstFree )
        break;
      v11 = (PACL)((char *)v11 + v11->AclSize);
      i = v18 + 1;
    }
  }
  v13 = v10 - (_BYTE *)v11 - 1;
  if ( v13 >= 0 )
  {
    do
    {
      *(&v11->AclRevision + AceListLength + v13) = *(&v11->AclRevision + v13);
      --v13;
    }
    while ( v13 >= 0 );
    v5 = AceList;
  }
  if ( AceListLength )
  {
    v14 = v5 - (_BYTE *)v11;
    do
    {
      v11->AclRevision = *(&v11->AclRevision + v14);
      v11 = (PACL)((char *)v11 + 1);
      --v6;
    }
    while ( v6 );
  }
  Acl->AceCount += v19;
  Acl->AclRevision = AclRevision;
  return 0;
}
