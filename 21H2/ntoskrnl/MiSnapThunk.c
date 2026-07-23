/*
 * XREFs of MiSnapThunk @ 0x14075D820
 * Callers:
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14075D820 (MiSnapThunk.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     strchr @ 0x1403D3860 (strchr.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlPrefixString @ 0x1405F4760 (RtlPrefixString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     MiSnapThunk @ 0x14075D820 (MiSnapThunk.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSnapThunk(char *a1, __int64 a2, __int64 *a3, char **a4, unsigned __int16 *a5)
{
  char *v9; // r8
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  unsigned __int16 *v12; // rsi
  char *v13; // r14
  __int64 v14; // rdx
  char *v15; // rbx
  unsigned int v16; // r10d
  __int64 v17; // r11
  unsigned __int8 *v18; // rax
  char *v19; // rcx
  int v20; // r9d
  int v21; // edx
  unsigned __int16 v22; // dx
  char *v23; // rbx
  int v25; // r9d
  int v26; // ecx
  unsigned __int16 *v27; // rax
  int v28; // edx
  char *v29; // r11
  char v30; // r10
  int v31; // eax
  unsigned __int16 v32; // r14
  PVOID *v33; // rdi
  unsigned int v34; // esi
  char *v35; // r15
  __int64 v36; // rbx
  _WORD *Pool; // rax
  _WORD *v38; // r14
  PVOID v39; // rcx
  ULONG Size[2]; // [rsp+30h] [rbp-30h] BYREF
  ANSI_STRING SourceString; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  Size[0] = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  v9 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, Size);
  if ( !v9 )
    return 3221226083LL;
  v10 = *a3;
  v11 = a5;
  if ( *a3 >= 0 )
  {
    if ( !a5 )
      v11 = (unsigned __int16 *)(v10 + a2);
LABEL_5:
    v12 = v11 + 1;
    v13 = &a1[*((unsigned int *)v9 + 8)];
    v14 = *v11;
    v15 = &a1[*((unsigned int *)v9 + 9)];
    v16 = *((_DWORD *)v9 + 6);
    if ( (unsigned int)v14 < v16 )
    {
      v17 = *v11;
      v18 = (unsigned __int8 *)(v11 + 1);
      v19 = (char *)(&a1[*(unsigned int *)&v13[4 * v14]] - (char *)v12);
      do
      {
        v20 = (unsigned __int8)v19[(_QWORD)v18];
        v21 = *v18 - v20;
        if ( v21 )
          break;
        ++v18;
      }
      while ( v20 );
      if ( !v21 )
      {
        v22 = *(_WORD *)&v15[2 * v17];
        goto LABEL_11;
      }
    }
    v25 = 0;
    if ( v16 )
    {
      v26 = v16 - 1;
      if ( (int)(v16 - 1) >= 0 )
      {
        do
        {
          v27 = v12;
          v28 = (v25 + v26) >> 1;
          v29 = (char *)(&a1[*(unsigned int *)&v13[4 * v28]] - (char *)v12);
          while ( 1 )
          {
            v30 = *(_BYTE *)v27;
            if ( *(_BYTE *)v27 != v29[(_QWORD)v27] )
              break;
            v27 = (unsigned __int16 *)((char *)v27 + 1);
            if ( !v30 )
            {
              v31 = 0;
              goto LABEL_21;
            }
          }
          v31 = *(_BYTE *)v27 < v29[(_QWORD)v27] ? -1 : 1;
LABEL_21:
          if ( v31 < 0 )
          {
            if ( !v28 )
              return 3221226083LL;
            v26 = v28 - 1;
          }
          else
          {
            if ( v31 <= 0 )
              break;
            v25 = v28 + 1;
          }
        }
        while ( v26 >= v25 );
        if ( v26 >= v25 )
        {
          v22 = *(_WORD *)&v15[2 * v28];
          goto LABEL_11;
        }
      }
    }
    return 3221226083LL;
  }
  if ( a5 )
    goto LABEL_5;
  v22 = v10 - *((_WORD *)v9 + 8);
LABEL_11:
  if ( (unsigned int)v22 >= *((_DWORD *)v9 + 5) )
    return 3221226082LL;
  v23 = &a1[*(unsigned int *)&a1[4 * v22 + *((unsigned int *)v9 + 7)]];
  *a4 = v23;
  if ( v23 <= v9 || v23 >= &v9[Size[0]] )
    return 0LL;
  SourceString.Buffer = v23;
  v32 = 1 - (_WORD)v23 + (unsigned __int16)strchr(v23, 46);
  SourceString.Length = v32;
  SourceString.MaximumLength = v32;
  if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
    return 3221226083LL;
  v33 = (PVOID *)PsLoadedModuleList;
  v34 = -1073741213;
  while ( v33 != &PsLoadedModuleList )
  {
    if ( RtlPrefixString((const STRING *)&DestinationString, (const STRING *)(v33 + 11), 1u) )
    {
      v35 = &v23[v32];
      v36 = -1LL;
      do
        ++v36;
      while ( v35[v36] );
      Pool = MiAllocatePool(256, v36 + 5, 0x20206D4Du);
      v38 = Pool;
      if ( Pool )
      {
        memmove(Pool + 1, v35, v36 + 1);
        *v38 = 0;
        v39 = v33[6];
        *(_QWORD *)Size = 0LL;
        v34 = MiSnapThunk((_DWORD)v39, a2, (unsigned int)Size, (unsigned int)Size, (__int64)v38);
        ExFreePoolWithTag(v38, 0);
        *a4 = *(char **)Size;
      }
      break;
    }
    v33 = (PVOID *)*v33;
  }
  RtlFreeAnsiString(&DestinationString);
  return v34;
}
