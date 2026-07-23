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
  _WORD *v10; // ebx
  wchar_t *v11; // eax
  int v12; // esi
  const wchar_t *v13; // esi
  int v14; // eax
  const wchar_t *v15; // esi
  const wchar_t *v16; // edx
  const wchar_t *v17; // ebx
  wchar_t v18; // cx
  _WORD *v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // esi
  rsize_t v24; // [esp+0h] [ebp-10h]
  const wchar_t *FullPatha; // [esp+18h] [ebp+8h]

  v9 = FullPath;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !(_DWORD)DriveCount )
      goto LABEL_4;
LABEL_7:
    v10 = (_WORD *)HIDWORD(DriveCount);
    if ( HIDWORD(DriveCount) )
    {
      if ( !Dir )
        goto LABEL_5;
    }
    else if ( Dir )
    {
      goto LABEL_5;
    }
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
        {
          v11 = Filename;
          goto LABEL_61;
        }
        wcsncpy_s(Drive, __PAIR64__((unsigned int)FullPath, DriveCount), (const wchar_t *)2, v24);
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
      if ( HIDWORD(DriveCount) )
      {
        if ( (unsigned int)Dir <= v16 - v9 )
        {
          v11 = Filename;
LABEL_60:
          v10 = (_WORD *)HIDWORD(DriveCount);
LABEL_61:
          v12 = 0;
          goto LABEL_62;
        }
        wcsncpy_s(
          (wchar_t *)HIDWORD(DriveCount),
          __PAIR64__((unsigned int)v9, (unsigned int)Dir),
          (const wchar_t *)(v16 - v9),
          v24);
        v16 = FullPatha;
      }
      v9 = v16;
    }
    else
    {
LABEL_42:
      if ( HIDWORD(DriveCount) )
        *(_WORD *)HIDWORD(DriveCount) = 0;
    }
    if ( v17 && v17 >= v9 )
    {
      v19 = (_WORD *)DirCount;
      if ( !(_DWORD)DirCount )
      {
LABEL_49:
        v11 = Filename;
        if ( !Filename )
          return 0;
        v20 = v15 - v17;
        if ( (unsigned int)FilenameCount > v20 )
        {
          wcsncpy_s(Filename, __PAIR64__((unsigned int)v17, FilenameCount), (const wchar_t *)v20, v24);
          return 0;
        }
        goto LABEL_60;
      }
      if ( HIDWORD(DirCount) > v17 - v9 )
      {
        wcsncpy_s(
          (wchar_t *)DirCount,
          __PAIR64__((unsigned int)v9, HIDWORD(DirCount)),
          (const wchar_t *)(v17 - v9),
          v24);
        goto LABEL_49;
      }
LABEL_58:
      v11 = Filename;
      v10 = (_WORD *)HIDWORD(DriveCount);
      v12 = 0;
      goto LABEL_63;
    }
    v19 = (_WORD *)DirCount;
    if ( (_DWORD)DirCount )
    {
      v21 = v15 - v9;
      if ( HIDWORD(DirCount) <= v21 )
        goto LABEL_58;
      wcsncpy_s((wchar_t *)DirCount, __PAIR64__((unsigned int)v9, HIDWORD(DirCount)), (const wchar_t *)v21, v24);
    }
    if ( Filename )
      *Filename = 0;
    return 0;
  }
  if ( !(_DWORD)DriveCount )
    goto LABEL_7;
LABEL_4:
  v10 = (_WORD *)HIDWORD(DriveCount);
LABEL_5:
  v11 = Filename;
  v12 = 1;
LABEL_62:
  v19 = (_WORD *)DirCount;
LABEL_63:
  if ( Drive && (_DWORD)DriveCount )
  {
    *Drive = 0;
    v11 = Filename;
  }
  if ( v10 && Dir )
    *v10 = 0;
  if ( v19 && HIDWORD(DirCount) )
    *v19 = 0;
  if ( v11 && (_DWORD)FilenameCount )
    *v11 = 0;
  if ( v9 && !v12 )
    return 34;
  _invalid_parameter();
  return 22;
}
