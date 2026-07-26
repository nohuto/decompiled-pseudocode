/*
 * XREFs of SepSddlGetAclForString @ 0x1C012804C
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C0127F60 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C0127E60 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C01283E0 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C01284B8 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C0128554 (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, const void **a2, wchar_t **a3)
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
  _QWORD *PoolWithTag; // rax
  unsigned int v16; // r15d
  _WORD *v17; // r14
  unsigned int v18; // r12d
  ACCESS_MASK AccessMask; // r15d
  wchar_t v20; // ax
  wchar_t v21; // cx
  const wchar_t *v22; // rbx
  wchar_t *j; // rbx
  wchar_t v24; // ax
  wchar_t *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _WORD *v29; // rsi
  const void **v30; // rbx
  _WORD *v31; // rcx
  wchar_t *v32; // [rsp+40h] [rbp-18h] BYREF
  PSID Sid; // [rsp+48h] [rbp-10h]
  _WORD *v34; // [rsp+A0h] [rbp+48h] BYREF
  const void **v35; // [rsp+A8h] [rbp+50h]
  int v36; // [rsp+B0h] [rbp+58h]
  int v37; // [rsp+B8h] [rbp+60h] BYREF

  v35 = a2;
  *a2 = 0LL;
  v5 = Str1;
  v36 = 0;
  SidForString = 0;
  v32 = 0LL;
  Sid = 0LL;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
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
  *a3 = v11;
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
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 524290LL;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v16 = 48 * v14 + 8;
  if ( v16 > 0xFFFF )
    v16 = 0xFFFF;
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
  *v35 = v17;
  if ( !v17 )
    return (unsigned int)-1073741670;
  v37 = 8;
  memset(v17, 0, v16);
  *v17 = 2;
  v17[1] = v16;
  v18 = 0;
  *((_DWORD *)v17 + 1) = 0;
  do
  {
    AccessMask = 0;
    LODWORD(v34) = 0;
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
      if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
      {
        AccessMask |= v36;
        v25 = v32;
        LODWORD(v34) = AccessMask;
        goto LABEL_46;
      }
      SepSddlParseWideStringUlong(j, &v32, &v34);
      v25 = v32;
      AccessMask = (unsigned int)v34;
      if ( v32 == j )
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
    v34 = 0LL;
    SidForString = SepSddlGetSidForString(j);
    if ( SidForString )
      break;
    v29 = v34;
    if ( v34 )
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
    if ( Sid )
    {
      SidForString = SepSddlAddAceToAcl(v35, &v37, v27, v28, AccessMask, v14 - v18, Sid);
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
    v31[1] = v37;
  }
  return SidForString;
}
