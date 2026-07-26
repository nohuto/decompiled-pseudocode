/*
 * XREFs of ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00ADF8C
 * Callers:
 *     NdisCopyFromNetBufferToNetBuffer @ 0x1C00AC8C0 (NdisCopyFromNetBufferToNetBuffer.c)
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 __fastcall RtlCopyMdlToMdl(
        PMDL MemoryDescriptorList,
        unsigned __int64 a2,
        struct _MDL *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  PMDL i; // rdi
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r13
  char *MappedSystemVa; // r14
  char *v15; // r14
  size_t v16; // r12
  char *v17; // rbp
  char *v18; // rbp
  size_t v19; // r15
  unsigned __int64 v20; // rcx
  char *v21; // rax
  unsigned __int64 v23; // rax

  for ( i = MemoryDescriptorList; i; a2 -= ByteCount )
  {
    ByteCount = i->ByteCount;
    if ( a2 < ByteCount )
      break;
    i = i->Next;
  }
  while ( a3 )
  {
    v11 = a3->ByteCount;
    if ( a4 < v11 )
      break;
    a3 = a3->Next;
    a4 -= v11;
  }
  v12 = a5;
  if ( a5 && i && a3 )
  {
    v13 = a5;
    if ( i->ByteCount - a2 <= a5 )
      v13 = i->ByteCount - a2;
    if ( (i->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)i->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( !MappedSystemVa )
      return 3221225626LL;
    v15 = &MappedSystemVa[a2];
    v16 = a3->ByteCount - a4;
    v17 = (char *)((a3->MdlFlags & 5) != 0
                 ? a3->MappedSystemVa
                 : MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, 0x40000000u));
    if ( !v17 )
      return 3221225626LL;
    v18 = &v17[a4];
    while ( 1 )
    {
LABEL_22:
      v19 = v16;
      if ( v16 >= v13 )
        v19 = v13;
      memmove(v18, v15, v19);
      if ( a5 == v19 )
        break;
      v20 = a5 - v19;
      a5 -= v19;
      if ( v16 == v19 )
      {
        while ( 1 )
        {
          a3 = a3->Next;
          if ( !a3 )
            goto LABEL_45;
          v16 = a3->ByteCount;
          if ( a3->ByteCount )
          {
            if ( (a3->MdlFlags & 5) != 0 )
            {
              v18 = (char *)a3->MappedSystemVa;
            }
            else
            {
              v21 = (char *)MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, 0x40000000u);
              v20 = a5;
              v18 = v21;
            }
            if ( v18 )
              goto LABEL_34;
            return 3221225626LL;
          }
        }
      }
      v18 += v19;
      v16 -= v19;
LABEL_34:
      if ( v13 == v19 )
      {
        while ( 1 )
        {
          i = i->Next;
          if ( !i )
            break;
          v23 = i->ByteCount;
          if ( (_DWORD)v23 )
          {
            v13 = v20;
            if ( v23 <= v20 )
              v13 = i->ByteCount;
            if ( (i->MdlFlags & 5) != 0 )
              v15 = (char *)i->MappedSystemVa;
            else
              v15 = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000000u);
            if ( v15 )
              goto LABEL_22;
            return 3221225626LL;
          }
        }
LABEL_45:
        v12 -= v20;
        break;
      }
      v15 += v19;
      v13 -= v19;
    }
    *a6 = v12;
  }
  else
  {
    *a6 = 0LL;
  }
  return 0LL;
}
