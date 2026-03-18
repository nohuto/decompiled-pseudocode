/*
 * XREFs of SepSddlGetAclForString @ 0x1C00BE464
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00BE378 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C0036C00 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C00BE278 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C00BE7E8 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C00BE8C0 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C00BE95C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *AclString, _ACL **Acl, wchar_t **End)
{
  wchar_t *v5; // rbx
  unsigned int SidForString; // edi
  unsigned int v7; // esi
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rcx
  int i; // r8d
  unsigned int v14; // edx
  _ACL *PoolWithTag; // rax
  __int16 v16; // si
  unsigned int v17; // r12d
  _ACL *v18; // rax
  _ACL *v19; // r15
  int v20; // r13d
  unsigned int v21; // r15d
  ACCESS_MASK v22; // r12d
  bool v23; // zf
  wchar_t *j; // rbx
  wchar_t v25; // ax
  wchar_t *v26; // rax
  wchar_t *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  wchar_t *v31; // rbx
  _ACL *v32; // rax
  void *SidPtr; // [rsp+40h] [rbp-18h] BYREF
  wchar_t *EndLocation; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int AccessMask; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int AclUsed; // [rsp+B0h] [rbp+58h] BYREF
  wchar_t *MaskEnd; // [rsp+B8h] [rbp+60h] BYREF

  *Acl = 0LL;
  v5 = AclString;
  AccessMask = 0;
  SidForString = 0;
  MaskEnd = 0LL;
  SidPtr = 0LL;
  v7 = 0;
  v8 = wcschr(AclString, 0x3Au);
  *End = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *End = v11;
  v12 = v5;
  for ( i = 0; v12 < v11; ++v12 )
  {
    if ( *v12 == 59 )
    {
      ++v7;
    }
    else if ( *v12 != 32 )
    {
      i = 1;
    }
  }
  v14 = v7 / 5;
  LODWORD(EndLocation) = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( !v14 )
  {
    PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
    *Acl = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = (_ACL)524290LL;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v16 = 8;
  v17 = 48 * v14 + 8;
  if ( v17 > 0xFFFF )
    v17 = 0xFFFF;
  v18 = (_ACL *)ExAllocatePoolWithTag(PagedPool, v17, 0x6C416553u);
  *Acl = v18;
  v19 = v18;
  if ( !v18 )
    return (unsigned int)-1073741670;
  AclUsed = 8;
  memset(v18, 0, v17);
  *(_WORD *)&v19->AclRevision = 2;
  v19->AclSize = v17;
  v20 = 0;
  *(_DWORD *)&v19->AceCount = 0;
  v21 = (unsigned int)EndLocation;
  if ( (_DWORD)EndLocation )
  {
    while ( 1 )
    {
      v22 = 0;
      LODWORD(EndLocation) = 0;
      while ( *v5 == 32 )
        ++v5;
      if ( *v5 == 40 )
      {
        v23 = v5[1] == 32;
        ++v5;
        if ( v23 )
        {
          do
            ++v5;
          while ( *v5 == 32 );
        }
      }
      if ( _wcsnicmp(v5, L"A", 1uLL) )
        break;
      for ( j = v5 + 2; *j == 32; ++j )
        ;
      if ( *j != 59 )
        break;
      do
        v25 = *++j;
      while ( *j == 32 );
      for ( ; v25 != 59; v25 = *v26 )
      {
        if ( v25 == 32 )
        {
          do
            ++j;
          while ( *j == 32 );
        }
        if ( SepSddlLookupAccessMaskInTable(j, &AccessMask, &MaskEnd) )
        {
          v22 |= AccessMask;
          v26 = MaskEnd;
          LODWORD(EndLocation) = v22;
        }
        else
        {
          SepSddlParseWideStringUlong(j, (const wchar_t **)&MaskEnd, (unsigned int *)&EndLocation);
          v26 = MaskEnd;
          if ( MaskEnd == j )
            goto LABEL_69;
          v22 = (unsigned int)EndLocation;
        }
        j = v26;
      }
      v27 = j + 1;
      v28 = 2LL;
      do
      {
        while ( *v27 == 32 )
          ++v27;
        if ( *v27 != 59 )
          SidForString = -1073741811;
        ++v27;
        --v28;
      }
      while ( v28 );
      if ( SidForString )
        goto LABEL_70;
      while ( *v27 == 32 )
        ++v27;
      EndLocation = 0LL;
      SidForString = SepSddlGetSidForString(v27, &SidPtr, &EndLocation);
      if ( SidForString )
        goto LABEL_66;
      v31 = EndLocation;
      if ( !EndLocation )
        goto LABEL_57;
      while ( *v31 == 32 )
        ++v31;
      if ( *v31 != 41 )
      {
LABEL_57:
        SidForString = -1073741705;
        goto LABEL_70;
      }
      v5 = v31 + 1;
      if ( SidPtr )
      {
        SidForString = SepSddlAddAceToAcl(Acl, &AclUsed, v29, v30, v22, v21 - v20, SidPtr);
        if ( SidForString )
          goto LABEL_70;
      }
      if ( *v5 == 40 )
        ++v5;
      if ( ++v20 >= v21 )
      {
LABEL_66:
        v16 = AclUsed;
        goto LABEL_67;
      }
    }
LABEL_69:
    SidForString = -1073741811;
LABEL_70:
    v32 = *Acl;
  }
  else
  {
LABEL_67:
    v32 = *Acl;
    if ( !SidForString )
    {
      v32->AclSize = v16;
      return SidForString;
    }
  }
  ExFreePoolWithTag(v32, 0);
  *Acl = 0LL;
  return SidForString;
}
