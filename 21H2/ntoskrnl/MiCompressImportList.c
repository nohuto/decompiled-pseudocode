/*
 * XREFs of MiCompressImportList @ 0x14075DB10
 * Callers:
 *     MiAddEntryToImportList @ 0x140545788 (MiAddEntryToImportList.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 * Callees:
 *     MiAllocateImportList @ 0x14075DC24 (MiAllocateImportList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiCompressImportList(unsigned __int64 *P)
{
  unsigned __int64 v1; // r8
  __int64 ImportList; // rdi
  unsigned int v3; // eax
  unsigned int v4; // r9d
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // r9

  v1 = *P;
  ImportList = 0LL;
  v3 = 0;
  v4 = 0;
  if ( !*P )
    goto LABEL_18;
  v6 = 0LL;
  do
  {
    v7 = P[v6 + 1];
    v8 = v3;
    v9 = v7 | 1;
    if ( !v7 )
      v9 = ImportList;
    ImportList = v9;
    v3 = v8 + 1;
    if ( !v7 )
      v3 = v8;
    v6 = ++v4;
  }
  while ( v4 < v1 );
  if ( !v3 )
  {
LABEL_18:
    ImportList = -2LL;
    goto LABEL_17;
  }
  if ( v3 == 1 )
  {
LABEL_17:
    ExFreePoolWithTag(P, 0);
    return (unsigned __int64 *)ImportList;
  }
  if ( v3 != v1 )
  {
    ImportList = MiAllocateImportList(v3);
    if ( ImportList )
    {
      v10 = *P;
      v11 = 0LL;
      v12 = 0;
      if ( *P )
      {
        v13 = 0LL;
        do
        {
          v14 = P[v13 + 1];
          if ( v14 )
          {
            *(_QWORD *)(ImportList + 8 * v11 + 8) = v14;
            v11 = (unsigned int)(v11 + 1);
          }
          v13 = ++v12;
        }
        while ( v12 < v10 );
      }
      goto LABEL_17;
    }
  }
  return P;
}
