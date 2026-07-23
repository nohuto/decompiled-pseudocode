/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x1407B2B5C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1407B2AF8 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x1403BD8D0 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1403BD9C8 (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     AslFree @ 0x14075493C (AslFree.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     AslStringXmlSanitize @ 0x1407B2EF0 (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x1407B2FFC (AslpFileQueryVersionString.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, unsigned __int16 *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  int v6; // ebx
  unsigned __int16 *i; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // rcx
  char *v14; // r13
  __int16 v15; // ax
  unsigned __int16 *v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int16 *v20; // r14
  unsigned int v21; // ebx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  int VersionString; // eax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *v32; // [rsp+38h] [rbp-38h] BYREF
  _WORD *v33; // [rsp+40h] [rbp-30h] BYREF
  wchar_t *Str1; // [rsp+48h] [rbp-28h]
  unsigned __int64 v35; // [rsp+50h] [rbp-20h] BYREF
  int v36[2]; // [rsp+58h] [rbp-18h] BYREF
  int v37[2]; // [rsp+60h] [rbp-10h] BYREF
  int v38; // [rsp+B8h] [rbp+48h]
  __int16 v39; // [rsp+C0h] [rbp+50h]
  int v40; // [rsp+C0h] [rbp+50h]

  v38 = (int)a2;
  *(_QWORD *)v36 = 0LL;
  *(_QWORD *)v37 = 0LL;
  v35 = 0LL;
  if ( !a2 )
  {
    v4 = (_DWORD *)(a1 + 184);
    v5 = 8LL;
    do
    {
      *v4 |= 2u;
      v4 += 8;
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
  i = a2;
  v32 = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  if ( !a2[2] )
  {
    v6 = AslStringDuplicate(&v32, L"\\VarFileInfo\\Translation");
    if ( v6 < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_7;
    }
    v12 = *a2;
    if ( (__int16)v12 >= 8 )
    {
      v13 = v32;
      v14 = (char *)a2 + v12;
      v15 = *(unsigned __int16 *)((char *)a2 + v12 - 2);
      v16 = (unsigned __int16 *)v14;
      v39 = v15;
      *((_WORD *)v14 - 1) = 0;
LABEL_12:
      Str1 = AslpFileStringTokenize(v13, v11, &v33);
      if ( Str1 )
      {
        v9 = (unsigned int)((_DWORD)v14 - (_DWORD)i);
        if ( (unsigned int)v9 >= 8
          && *i <= (unsigned int)v9
          && AslpFileVerBlockGetValueOffset(&v31, (__int64)i, (unsigned int)v9) >= 0 )
        {
          v17 = *i;
          v18 = v31 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
          v31 = v18;
          if ( v18 <= v17 )
          {
            v16 = (unsigned __int16 *)((char *)i + v17);
            for ( i = (unsigned __int16 *)((char *)i + v18);
                  i < v16;
                  i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
            {
              v19 = *i;
              if ( (unsigned __int16)v19 <= 8u )
                break;
              v9 = (char *)v16 - (char *)i;
              if ( v19 > (char *)v16 - (char *)i )
                break;
              if ( !wcsicmp(Str1, i + 3) )
              {
                v13 = 0LL;
                goto LABEL_12;
              }
            }
          }
        }
        v6 = -1073741275;
        *((_WORD *)v14 - 1) = v39;
        v10 = 0LL;
      }
      else
      {
        v8 = (char *)v16 - (char *)i;
        *((_WORD *)v14 - 1) = v39;
        v10 = (__int64)i;
        v6 = 0;
      }
      goto LABEL_26;
    }
  }
  v6 = -1073741811;
  AslLogCallPrintf(1LL);
LABEL_7:
  v10 = 0LL;
LABEL_26:
  AslFree(v9, v32);
  if ( v6 == -1073741275 )
  {
    v20 = 0LL;
    v21 = 0;
  }
  else
  {
    if ( v6 < 0 )
    {
LABEL_47:
      AslLogCallPrintf(1LL);
      return (unsigned int)v6;
    }
    v20 = 0LL;
    v21 = 0;
    if ( AslpFileVerBlockGetValueOffset(&v35, v10, v8) >= 0 && v8 > v35 )
    {
      v20 = (unsigned __int16 *)(v35 + v10);
      v21 = v8 - v35;
    }
  }
  v22 = 0LL;
  v23 = (unsigned __int64)v21 >> 2;
  do
  {
    v24 = *(int *)&byte_140008F00[v22];
    v40 = *(_DWORD *)&byte_140008F00[v22];
    VersionString = AslpFileQueryVersionString(
                      (int)v36,
                      (int)v37,
                      v38,
                      (int)v20,
                      v23,
                      *(NTSTRSAFE_PCWSTR *)&byte_140008F00[v22 + 8]);
    v6 = VersionString;
    if ( VersionString < 0 )
    {
      if ( VersionString != -1073741275 )
        goto LABEL_47;
      *(_DWORD *)(32 * v24 + a1 + 24) |= 2u;
    }
    else
    {
      v26 = *(_QWORD *)v36;
      v6 = AslStringXmlSanitize(*(_QWORD *)v36, 0LL);
      if ( v6 < 0 )
        goto LABEL_47;
      v27 = 32LL * v40;
      v28 = -1LL;
      *(_DWORD *)(v27 + a1) = 4;
      do
        ++v28;
      while ( *(_WORD *)(v26 + 2 * v28) );
      *(_DWORD *)(v27 + a1 + 24) |= 1u;
      *(_QWORD *)(v27 + a1 + 8) = v28;
      *(_QWORD *)(v27 + a1 + 16) = v26;
    }
    v22 += 16LL;
  }
  while ( v22 < 0x80 );
  if ( v20 && v23 == 1 )
  {
    *(_DWORD *)(a1 + 768) = 2;
    *(_QWORD *)(a1 + 776) = 4LL;
    v29 = *v20;
    *(_DWORD *)(a1 + 792) |= 1u;
    *(_QWORD *)(a1 + 784) = v29;
  }
  else
  {
    *(_DWORD *)(a1 + 792) |= 2u;
  }
  return 0;
}
