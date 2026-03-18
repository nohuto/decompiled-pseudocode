/*
 * XREFs of MiDeletePagefile @ 0x14096F074
 * Callers:
 *     MmStoreRegister @ 0x14084A7D0 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x14096E2E0 (MiCreateSpecialPurposeMemoryPageFile.c)
 *     MiDeletePagingFiles @ 0x14096F240 (MiDeletePagingFiles.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     MiFreePageFileHashPfns @ 0x140268C20 (MiFreePageFileHashPfns.c)
 *     MiFreeModWriterEntry @ 0x14028C978 (MiFreeModWriterEntry.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MiUpdatePageFileList @ 0x1403CF758 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x1405BC988 (MiReleasePageHash.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 *     MiDeletePageFileMemoryExtents @ 0x14096E3A4 (MiDeletePageFileMemoryExtents.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePagefile(char *P, int a2)
{
  __int64 i; // rdi
  void *v5; // rcx
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned __int64 v7; // rcx
  __int16 v8; // ax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  char v11; // al
  int v12; // ebp
  _QWORD *v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 18); i = (unsigned int)(i + 1) )
    MiFreeModWriterEntry(*(_QWORD **)(*((_QWORD *)P + 8) + 8 * i), 0);
  v5 = (void *)*((_QWORD *)P + 8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 14);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *((_QWORD *)P + 27);
  if ( v7 )
    MiReleasePageHash(v7, *((_DWORD *)P + 2));
  MiFreePageFileHashPfns(*((_QWORD *)P + 31));
  v8 = *((_WORD *)P + 102);
  if ( (v8 & 0x100) != 0 )
  {
    MiUpdatePageFileList((__int64)P, 0);
    v8 = *((_WORD *)P + 102);
  }
  if ( (v8 & 0x800) != 0 )
  {
    v9 = (unsigned __int64)(P + 256);
    v10 = *((_QWORD *)P + 32);
    if ( (P[264] & 1) != 0 && v10 )
      v10 ^= v9;
    v11 = P[264];
    v12 = v11 & 1;
    if ( v10 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *(_QWORD *)v10 )
          {
            v13 = (_QWORD *)v10;
            if ( v12 )
              v10 ^= *(_QWORD *)v10;
            else
              v10 = *(_QWORD *)v10;
            *v13 = 0LL;
          }
          v14 = *(_QWORD *)(v10 + 8);
          if ( !v14 )
            break;
          v15 = v10;
          if ( v12 )
            v10 ^= v14;
          else
            v10 = *(_QWORD *)(v10 + 8);
          *(_QWORD *)(v15 + 8) = 0LL;
        }
        v16 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v12 && v16 )
          v16 ^= v10;
        MiDeletePageFileMemoryExtents((_QWORD *)v10);
        if ( !v16 )
          break;
        v10 = v16;
      }
      v11 = P[264];
    }
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)P + 33) = 0LL;
    if ( (v11 & 1) != 0 )
      P[264] = 1;
  }
  if ( _bittest16((const signed __int16 *)P + 102, 9u) )
    PiPagePathSetState(*((struct _FILE_OBJECT **)P + 7), 0);
  v17 = (void *)*((_QWORD *)P + 28);
  if ( v17 )
    ObCloseHandle(v17, 0);
  v18 = (void *)*((_QWORD *)P + 7);
  if ( v18 )
    ObfDereferenceObject(v18);
  v19 = (void *)*((_QWORD *)P + 13);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = (void *)*((_QWORD *)P + 24);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( a2 )
    ExFreePoolWithTag(P, 0);
}
