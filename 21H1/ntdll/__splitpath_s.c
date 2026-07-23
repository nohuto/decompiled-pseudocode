/*
 * XREFs of __splitpath_s @ 0x4B2FF850
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _strncpy_s @ 0x4B300210 (_strncpy_s.c)
 */

errno_t __cdecl _splitpath_s(
        const char *FullPath,
        char *Drive,
        size_t DriveCount,
        char *Dir,
        size_t DirCount,
        char *Filename,
        size_t FilenameCount,
        char *Ext,
        size_t ExtCount)
{
  const char *v9; // edi
  int v10; // ebx
  _BYTE *v11; // edx
  char *v12; // eax
  const char *v13; // esi
  int v14; // eax
  char v15; // al
  const char *v16; // ecx
  unsigned int v17; // ebx
  const char *v18; // esi
  const char *v19; // esi
  const char *v20; // esi
  rsize_t v23; // [esp+0h] [ebp-10h]
  const char *FullPatha; // [esp+18h] [ebp+8h]

  v9 = FullPath;
  v10 = 0;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !(_DWORD)DriveCount )
      goto LABEL_4;
  }
  else if ( (_DWORD)DriveCount )
  {
LABEL_4:
    v11 = (_BYTE *)DirCount;
LABEL_5:
    v10 = 1;
LABEL_6:
    v12 = Filename;
    goto LABEL_60;
  }
  if ( HIDWORD(DriveCount) )
  {
    if ( !Dir )
      goto LABEL_4;
  }
  else if ( Dir )
  {
    goto LABEL_4;
  }
  v11 = (_BYTE *)DirCount;
  if ( (_DWORD)DirCount )
  {
    if ( !HIDWORD(DirCount) )
      goto LABEL_5;
  }
  else if ( HIDWORD(DirCount) )
  {
    goto LABEL_5;
  }
  if ( Filename )
  {
    if ( !(_DWORD)FilenameCount )
      goto LABEL_5;
  }
  else if ( (_DWORD)FilenameCount )
  {
    goto LABEL_5;
  }
  v13 = FullPath;
  v14 = 1;
  do
  {
    if ( !*v13 )
      break;
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( *v13 == 58 )
  {
    if ( Drive )
    {
      if ( (unsigned int)DriveCount < 3 )
        goto LABEL_6;
      strncpy_s(Drive, __PAIR64__((unsigned int)FullPath, DriveCount), (const char *)2, v23);
      v11 = (_BYTE *)DirCount;
    }
    v9 = v13 + 1;
  }
  else if ( Drive )
  {
    *Drive = 0;
  }
  v15 = *v9;
  v16 = 0;
  v17 = 0;
  v18 = v9;
  if ( !*v9 )
    goto LABEL_42;
  do
  {
    if ( v15 == 47 || v15 == 92 )
    {
      v16 = v18 + 1;
    }
    else if ( v15 == 46 )
    {
      v17 = (unsigned int)v18;
    }
    v15 = *++v18;
  }
  while ( *v18 );
  FullPatha = v16;
  if ( v16 )
  {
    if ( HIDWORD(DriveCount) )
    {
      if ( (unsigned int)Dir <= v16 - v9 )
        goto LABEL_58;
      strncpy_s(
        (char *)HIDWORD(DriveCount),
        __PAIR64__((unsigned int)v9, (unsigned int)Dir),
        (const char *)(v16 - v9),
        v23);
      v16 = FullPatha;
    }
    v9 = v16;
  }
  else
  {
LABEL_42:
    if ( HIDWORD(DriveCount) )
      *(_BYTE *)HIDWORD(DriveCount) = 0;
  }
  if ( !v17 || v17 < (unsigned int)v9 )
  {
    v11 = (_BYTE *)DirCount;
    if ( (_DWORD)DirCount )
    {
      v20 = (const char *)(v18 - v9);
      if ( HIDWORD(DirCount) <= (unsigned int)v20 )
        goto LABEL_58;
      strncpy_s((char *)DirCount, __PAIR64__((unsigned int)v9, HIDWORD(DirCount)), v20, v23);
    }
    if ( Filename )
      *Filename = 0;
    return 0;
  }
  v11 = (_BYTE *)DirCount;
  if ( (_DWORD)DirCount )
  {
    if ( HIDWORD(DirCount) > v17 - (unsigned int)v9 )
    {
      strncpy_s(
        (char *)DirCount,
        __PAIR64__((unsigned int)v9, HIDWORD(DirCount)),
        (const char *)(v17 - (_DWORD)v9),
        v23);
      v11 = (_BYTE *)DirCount;
      goto LABEL_49;
    }
LABEL_58:
    v12 = Filename;
    goto LABEL_59;
  }
LABEL_49:
  v12 = Filename;
  if ( !Filename )
    return 0;
  v19 = &v18[-v17];
  if ( (unsigned int)FilenameCount > (unsigned int)v19 )
  {
    strncpy_s(Filename, __PAIR64__(v17, FilenameCount), v19, v23);
    return 0;
  }
LABEL_59:
  v10 = 0;
LABEL_60:
  if ( Drive && (_DWORD)DriveCount )
    *Drive = 0;
  if ( HIDWORD(DriveCount) && Dir )
    *(_BYTE *)HIDWORD(DriveCount) = 0;
  if ( v11 && HIDWORD(DirCount) )
    *v11 = 0;
  if ( v12 && (_DWORD)FilenameCount )
    *v12 = 0;
  if ( v9 && !v10 )
    return 34;
  _invalid_parameter();
  return 22;
}
