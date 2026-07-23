/*
 * XREFs of FsRtlRemoveDotsFromPath @ 0x140760270
 * Callers:
 *     IopReplaceSymlinkPath @ 0x140895310 (IopReplaceSymlinkPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveDotsFromPath(PWSTR OriginalString, USHORT PathLength, USHORT *NewLength)
{
  unsigned __int16 v3; // r10
  __int16 v6; // r9
  unsigned __int16 v7; // ax
  int v8; // r8d
  __int64 v9; // rcx
  WCHAR v11; // cx
  int v12; // r11d
  bool v13; // sf
  __int64 v14; // rcx
  WCHAR *v15; // rdi

  v3 = PathLength >> 1;
  v6 = 0;
  if ( PathLength >> 1 == 3 )
  {
    if ( *OriginalString == 92 && OriginalString[1] == 46 && OriginalString[2] == 46 )
      return -1073741192;
    goto LABEL_4;
  }
  if ( v3 == 2 )
  {
    if ( *OriginalString != 46 || OriginalString[1] != 46 )
      goto LABEL_5;
    return -1073741192;
  }
  if ( v3 > 2u )
  {
LABEL_4:
    if ( *OriginalString != 46 || OriginalString[1] != 46 || OriginalString[2] != 92 )
      goto LABEL_5;
    return -1073741192;
  }
LABEL_5:
  v7 = 0;
  if ( v3 )
  {
    while ( v7 )
    {
      v8 = v3 - 1;
      if ( v7 < v8 && OriginalString[v7] == 92 && OriginalString[v7 + 1] == 92 )
        goto LABEL_12;
      v9 = v7;
      if ( OriginalString[v7] != 46 )
        goto LABEL_10;
      if ( v7 == v8 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          if ( v6 > 1 )
            --v6;
          goto LABEL_12;
        }
        goto LABEL_21;
      }
      v11 = OriginalString[v7 + 1];
      if ( v11 == 92 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          ++v7;
          goto LABEL_12;
        }
LABEL_21:
        OriginalString[v6] = 46;
LABEL_11:
        ++v6;
        goto LABEL_12;
      }
      if ( v11 != 46 )
        goto LABEL_21;
      if ( OriginalString[v7 - 1] != 92 )
        goto LABEL_21;
      v12 = v3 - 2;
      if ( v7 != v12 && OriginalString[v7 + 2] != 92 )
        goto LABEL_21;
      v6 -= 2;
      v13 = v6 < 0;
      if ( v6 > 0 )
      {
        do
        {
          if ( OriginalString[v6] == 92 )
            break;
          --v6;
        }
        while ( v6 > 0 );
        v13 = v6 < 0;
      }
      if ( v13 || OriginalString[v6] != 92 )
        return -1073741192;
      if ( !v6 )
        v6 = v7 == v12;
      ++v7;
LABEL_12:
      if ( ++v7 >= v3 )
        goto LABEL_13;
    }
    v9 = 0LL;
LABEL_10:
    OriginalString[v6] = OriginalString[v9];
    goto LABEL_11;
  }
LABEL_13:
  *NewLength = 2 * v6;
  if ( v6 < (int)v3 )
  {
    v14 = (__int16)(v3 - v6);
    v15 = &OriginalString[v6];
    while ( v14 )
    {
      *v15++ = 0;
      --v14;
    }
  }
  return 0;
}
