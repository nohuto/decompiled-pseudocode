/*
 * XREFs of SepSddlGetAclForString @ 0x1C00C47E4
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00C46F8 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C001CA80 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C00C45F8 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C00C4B78 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C00C4C50 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C00C4CEC (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *AclString, _ACL **Acl, wchar_t **End)
{
  wchar_t *v5; // rsi
  unsigned int SidForString; // edi
  unsigned int v7; // ebx
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rcx
  wchar_t *v12; // rax
  int i; // r8d
  unsigned int v14; // r13d
  _ACL *PoolWithTag; // rax
  unsigned int v16; // r15d
  _ACL *v17; // r14
  unsigned int v18; // r12d
  ACCESS_MASK v19; // r15d
  wchar_t v20; // ax
  wchar_t v21; // cx
  const wchar_t *v22; // rbx
  wchar_t *j; // rbx
  wchar_t v24; // ax
  wchar_t *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  wchar_t *v29; // rsi
  _ACL **v30; // rbx
  _ACL *v31; // rcx
  wchar_t *MaskEnd; // [rsp+40h] [rbp-18h] BYREF
  void *SidPtr; // [rsp+48h] [rbp-10h] BYREF
  wchar_t *EndLocation; // [rsp+A0h] [rbp+48h] BYREF
  _ACL **v35; // [rsp+A8h] [rbp+50h]
  unsigned int AccessMask; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int AclUsed; // [rsp+B8h] [rbp+60h] BYREF

  v35 = Acl;
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
  v16 = 48 * v14 + 8;
  if ( v16 > 0xFFFF )
    v16 = 0xFFFF;
  v17 = (_ACL *)ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
  *v35 = v17;
  if ( !v17 )
    return (unsigned int)-1073741670;
  AclUsed = 8;
  memset(v17, 0, v16);
  *(_WORD *)&v17->AclRevision = 2;
  v17->AclSize = v16;
  v18 = 0;
  *(_DWORD *)&v17->AceCount = 0;
  do
  {
    v19 = 0;
    LODWORD(EndLocation) = 0;
    while ( 1 )
    {
      v20 = *v5;
      if ( *v5 != 32 )
        break;
      ++v5;
    }
    v21 = *v5;
    if ( v20 == 40 )
      v21 = v5[1];
    v22 = v5 + 1;
    if ( v20 != 40 )
      v22 = v5;
    if ( v21 == 32 )
    {
      do
        ++v22;
      while ( *v22 == 32 );
    }
    if ( _wcsnicmp(v22, L"A", 1uLL) )
      goto LABEL_73;
    for ( j = (wchar_t *)(v22 + 2); *j == 32; ++j )
      ;
    if ( *j != 59 )
    {
LABEL_73:
      SidForString = -1073741811;
      break;
    }
    do
      v24 = *++j;
    while ( *j == 32 );
    while ( 1 )
    {
      if ( v24 == 59 )
      {
        ++j;
        goto LABEL_49;
      }
      if ( v24 == 32 )
      {
        do
          ++j;
        while ( *j == 32 );
      }
      if ( SepSddlLookupAccessMaskInTable(j, &AccessMask, &MaskEnd) )
      {
        v19 |= AccessMask;
        v25 = MaskEnd;
        LODWORD(EndLocation) = v19;
        goto LABEL_46;
      }
      SepSddlParseWideStringUlong(j, (const wchar_t **)&MaskEnd, (unsigned int *)&EndLocation);
      v25 = MaskEnd;
      v19 = (unsigned int)EndLocation;
      if ( MaskEnd == j )
        break;
LABEL_46:
      j = v25;
      v24 = *v25;
    }
    SidForString = -1073741811;
LABEL_49:
    if ( SidForString )
      break;
    v26 = 2LL;
    do
    {
      while ( *j == 32 )
        ++j;
      if ( *j != 59 )
        SidForString = -1073741811;
      ++j;
      --v26;
    }
    while ( v26 );
    if ( SidForString )
      break;
    while ( *j == 32 )
      ++j;
    EndLocation = 0LL;
    SidForString = SepSddlGetSidForString(j, &SidPtr, &EndLocation);
    if ( SidForString )
      break;
    v29 = EndLocation;
    if ( EndLocation )
    {
      while ( *v29 == 32 )
        ++v29;
      if ( *v29 == 41 )
        goto LABEL_81;
    }
    SidForString = -1073741705;
    break;
LABEL_81:
    v5 = v29 + 1;
    if ( SidPtr )
    {
      SidForString = SepSddlAddAceToAcl(v35, &AclUsed, v27, v28, v19, v14 - v18, SidPtr);
      if ( SidForString )
        break;
    }
    if ( *v5 == 40 )
      ++v5;
    ++v18;
  }
  while ( v18 < v14 );
  v30 = v35;
  v31 = *v35;
  if ( SidForString )
  {
    ExFreePoolWithTag(v31, 0);
    *v30 = 0LL;
  }
  else
  {
    v31->AclSize = AclUsed;
  }
  return SidForString;
}
