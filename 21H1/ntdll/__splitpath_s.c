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
  char *v11; // edx
  char *v12; // eax
  const char *v13; // esi
  int v14; // eax
  char v15; // al
  const char *v16; // ecx
  const char *v17; // ebx
  const char *v18; // esi
  rsize_t v19; // esi
  rsize_t v20; // esi
  const char *FullPatha; // [esp+18h] [ebp+8h]

  v9 = FullPath;
  v10 = 0;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !DriveCount )
      goto LABEL_4;
  }
  else if ( DriveCount )
  {
LABEL_4:
    v11 = Filename;
LABEL_5:
    v10 = 1;
LABEL_6:
    v12 = Ext;
    goto LABEL_60;
  }
  if ( Dir )
  {
    if ( !DirCount )
      goto LABEL_4;
  }
  else if ( DirCount )
  {
    goto LABEL_4;
  }
  v11 = Filename;
  if ( Filename )
  {
    if ( !FilenameCount )
      goto LABEL_5;
  }
  else if ( FilenameCount )
  {
    goto LABEL_5;
  }
  if ( Ext )
  {
    if ( !ExtCount )
      goto LABEL_5;
  }
  else if ( ExtCount )
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
      if ( DriveCount < 3 )
        goto LABEL_6;
      strncpy_s(Drive, DriveCount, FullPath, 2u);
      v11 = Filename;
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
      v17 = v18;
    }
    v15 = *++v18;
  }
  while ( *v18 );
  FullPatha = v16;
  if ( v16 )
  {
    if ( Dir )
    {
      if ( DirCount <= v16 - v9 )
        goto LABEL_58;
      strncpy_s(Dir, DirCount, v9, v16 - v9);
      v16 = FullPatha;
    }
    v9 = v16;
  }
  else
  {
LABEL_42:
    if ( Dir )
      *Dir = 0;
  }
  if ( !v17 || v17 < v9 )
  {
    v11 = Filename;
    if ( Filename )
    {
      v20 = v18 - v9;
      if ( FilenameCount <= v20 )
        goto LABEL_58;
      strncpy_s(Filename, FilenameCount, v9, v20);
    }
    if ( Ext )
      *Ext = 0;
    return 0;
  }
  v11 = Filename;
  if ( Filename )
  {
    if ( FilenameCount > v17 - v9 )
    {
      strncpy_s(Filename, FilenameCount, v9, v17 - v9);
      v11 = Filename;
      goto LABEL_49;
    }
LABEL_58:
    v12 = Ext;
    goto LABEL_59;
  }
LABEL_49:
  v12 = Ext;
  if ( !Ext )
    return 0;
  v19 = v18 - v17;
  if ( ExtCount > v19 )
  {
    strncpy_s(Ext, ExtCount, v17, v19);
    return 0;
  }
LABEL_59:
  v10 = 0;
LABEL_60:
  if ( Drive && DriveCount )
    *Drive = 0;
  if ( Dir && DirCount )
    *Dir = 0;
  if ( v11 && FilenameCount )
    *v11 = 0;
  if ( v12 && ExtCount )
    *v12 = 0;
  if ( v9 && !v10 )
    return 34;
  _invalid_parameter();
  return 22;
}
