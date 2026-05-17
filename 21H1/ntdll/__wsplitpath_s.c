/*
 * XREFs of __wsplitpath_s @ 0x4B2FFC60
 * Callers:
 *     <none>
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _wcsncpy_s @ 0x4B300710 (_wcsncpy_s.c)
 */

errno_t __cdecl _wsplitpath_s(
        const wchar_t *FullPath,
        wchar_t *Drive,
        size_t DriveCount,
        wchar_t *Dir,
        size_t DirCount,
        wchar_t *Filename,
        size_t FilenameCount,
        wchar_t *Ext,
        size_t ExtCount)
{
  const wchar_t *v9; // edi
  wchar_t *v10; // ebx
  wchar_t *v11; // eax
  int v12; // esi
  const wchar_t *v13; // esi
  int v14; // eax
  const wchar_t *v15; // esi
  const wchar_t *v16; // edx
  const wchar_t *v17; // ebx
  wchar_t v18; // cx
  wchar_t *v19; // ecx
  rsize_t v20; // esi
  rsize_t v21; // esi
  const wchar_t *FullPatha; // [esp+18h] [ebp+8h]

  v9 = FullPath;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !DriveCount )
      goto LABEL_4;
LABEL_7:
    v10 = Dir;
    if ( Dir )
    {
      if ( !DirCount )
        goto LABEL_5;
    }
    else if ( DirCount )
    {
      goto LABEL_5;
    }
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
        {
          v11 = Ext;
          goto LABEL_61;
        }
        wcsncpy_s(Drive, DriveCount, FullPath, 2u);
      }
      v9 = v13 + 1;
    }
    else if ( Drive )
    {
      *Drive = 0;
    }
    v15 = v9;
    v16 = 0;
    v17 = 0;
    if ( !*v9 )
      goto LABEL_42;
    v18 = *v9;
    do
    {
      if ( v18 == 47 || v18 == 92 )
      {
        v16 = v15 + 1;
      }
      else if ( v18 == 46 )
      {
        v17 = v15;
      }
      v18 = *++v15;
    }
    while ( *v15 );
    FullPatha = v16;
    if ( v16 )
    {
      if ( Dir )
      {
        if ( DirCount <= v16 - v9 )
        {
          v11 = Ext;
LABEL_60:
          v10 = Dir;
LABEL_61:
          v12 = 0;
          goto LABEL_62;
        }
        wcsncpy_s(Dir, DirCount, v9, v16 - v9);
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
    if ( v17 && v17 >= v9 )
    {
      v19 = Filename;
      if ( !Filename )
      {
LABEL_49:
        v11 = Ext;
        if ( !Ext )
          return 0;
        v20 = v15 - v17;
        if ( ExtCount > v20 )
        {
          wcsncpy_s(Ext, ExtCount, v17, v20);
          return 0;
        }
        goto LABEL_60;
      }
      if ( FilenameCount > v17 - v9 )
      {
        wcsncpy_s(Filename, FilenameCount, v9, v17 - v9);
        goto LABEL_49;
      }
LABEL_58:
      v11 = Ext;
      v10 = Dir;
      v12 = 0;
      goto LABEL_63;
    }
    v19 = Filename;
    if ( Filename )
    {
      v21 = v15 - v9;
      if ( FilenameCount <= v21 )
        goto LABEL_58;
      wcsncpy_s(Filename, FilenameCount, v9, v21);
    }
    if ( Ext )
      *Ext = 0;
    return 0;
  }
  if ( !DriveCount )
    goto LABEL_7;
LABEL_4:
  v10 = Dir;
LABEL_5:
  v11 = Ext;
  v12 = 1;
LABEL_62:
  v19 = Filename;
LABEL_63:
  if ( Drive && DriveCount )
  {
    *Drive = 0;
    v11 = Ext;
  }
  if ( v10 && DirCount )
    *v10 = 0;
  if ( v19 && FilenameCount )
    *v19 = 0;
  if ( v11 && ExtCount )
    *v11 = 0;
  if ( v9 && !v12 )
    return 34;
  _invalid_parameter();
  return 22;
}
