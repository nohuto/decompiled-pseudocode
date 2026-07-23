/*
 * XREFs of MiCreateNewSection @ 0x14060DEB4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     IoSetTopLevelIrp @ 0x140228F20 (IoSetTopLevelIrp.c)
 *     MiSectionCreated @ 0x140267074 (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x14026780C (MiReleaseImageSection.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E0BD8 (MiFinalizeImageHeaderPage.c)
 *     MiMakeImageReadOnly @ 0x1402F48E4 (MiMakeImageReadOnly.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     FsRtlReleaseFile @ 0x1405FBD40 (FsRtlReleaseFile.c)
 *     MiValidateSectionSigningPolicy @ 0x1406064F4 (MiValidateSectionSigningPolicy.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     MiEnablePartitionMappedWrites @ 0x14060E570 (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x14060E6E0 (MiCreateDataFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x14060EF1C (MiDeleteImageCreationMdls.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x14060FE30 (MiParseComAndCetHeaders.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406FC3C8 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140887C0C (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(unsigned int *a1, _QWORD *a2)
{
  ULONG_PTR **v4; // rdi
  struct _FILE_OBJECT *v5; // r12
  unsigned int v6; // r15d
  __int64 v7; // rsi
  ULONG_PTR *v8; // rdi
  int v9; // r14d
  int v11; // eax
  int v12; // r12d
  NTSTATUS DataFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v15; // r14
  signed __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r14
  struct _FILE_OBJECT *v19; // r13
  unsigned int v20; // r8d
  int v21; // esi
  _QWORD *v22; // r15
  __int64 v23; // rcx
  int v24; // r12d
  unsigned int v25; // edx
  int v26; // ecx
  char v27; // r8
  int v28; // r15d
  unsigned int v29; // ecx
  int Blink; // r13d
  int v31; // eax
  int v32; // eax
  char v33; // al
  int v34; // edx
  char v35; // r12
  int v36; // r15d
  int DirectImageOriginalBase; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  PMDL v40; // rbx
  struct _MDL *v41; // r15
  ULONG i; // esi
  char v43; // [rsp+60h] [rbp-A0h]
  char v44; // [rsp+61h] [rbp-9Fh]
  char v45; // [rsp+62h] [rbp-9Eh] BYREF
  _BYTE FileObject[13]; // [rsp+63h] [rbp-9Dh] BYREF
  int v47; // [rsp+70h] [rbp-90h]
  _DWORD v48[3]; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52[14]; // [rsp+A0h] [rbp-60h] BYREF

  v49 = 0LL;
  memset(v52, 0, sizeof(v52));
  v4 = (ULONG_PTR **)*((_QWORD *)a1 + 22);
  v5 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v6 = a1[4];
  v7 = *((_QWORD *)a1 + 19);
  v43 = *((_BYTE *)a1 + 24);
  *(_WORD *)FileObject = 0;
  *(_QWORD *)&FileObject[5] = v5;
  v47 = 0;
  v45 = 0;
  memset(v48, 0, sizeof(v48));
  if ( v4 )
    v8 = *v4;
  else
    v8 = &MiSystemPartition;
  v9 = MiEnablePartitionMappedWrites(v8);
  if ( v9 >= 0 )
  {
    MemoryDescriptorList = 0LL;
    v11 = a1[43];
    v12 = v6 & 0x1000000;
    if ( (v6 & 0x1000000) != 0 )
      DataFileMap = MiCreateImageFileMap(
                      *(PFILE_OBJECT *)&FileObject[5],
                      (__int64)v8,
                      v11,
                      *a1,
                      (__int64 *)&v48[1],
                      &MemoryDescriptorList,
                      (__int64)v52,
                      (__int128 *)v48);
    else
      DataFileMap = MiCreateDataFileMap(*(PFILE_OBJECT *)&FileObject[5], a1[7], v6, v11, *a1);
    ImageRequiredSigningLevel = DataFileMap;
    if ( DataFileMap < 0 )
    {
      if ( (*a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*((PIRP *)a1 + 23));
        FsRtlReleaseFile(*(PFILE_OBJECT *)&FileObject[5]);
        *a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v15 = *(_QWORD *)&v48[1];
    *a2 = *(_QWORD *)&v48[1];
    if ( v7 )
    {
      *((_QWORD *)a1 + 16) = v7;
    }
    else
    {
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), -1LL, -1LL);
      v15 = *(_QWORD *)&v48[1];
      *((_QWORD *)a1 + 16) = v16;
    }
    v17 = *a1;
    v18 = *(_QWORD *)v15;
    if ( (*a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v18 + 62) |= 1u;
      v17 = *a1;
    }
    v19 = *(struct _FILE_OBJECT **)&FileObject[5];
    LOWORD(v20) = v17;
    if ( (v17 & 0x2000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&FileObject[5] + 8LL) + 52LL) & 0x10) == 0
      && (!v12 || (v52[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v18 + 56) |= 0x20000000u;
      v20 = *a1;
    }
    if ( (v20 & 0x4000) != 0 )
      *(_DWORD *)(v18 + 56) |= 0x20000u;
    v21 = 2;
    v22 = (_QWORD *)MiSectionCreated((__int64)v19, v18, (__int64 *)MemoryDescriptorList);
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(v19);
      *a1 &= ~2u;
    }
    if ( !v12 )
      goto LABEL_118;
    v23 = *(_QWORD *)(*(_QWORD *)&v48[1] + 56LL);
    v51 = v23;
    if ( !LODWORD(v52[11]) && !HIDWORD(v52[11]) && !*(_BYTE *)(v23 + 50) )
      *(_BYTE *)(*(_QWORD *)&v48[1] + 15LL) |= 1u;
    if ( (*(_DWORD *)(v18 + 56) & 0x800) != 0 )
    {
      if ( (*a1 & 0x80000) != 0 )
      {
        dword_140C4CA18 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_121:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v18, a1[42]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        v24 = 6;
LABEL_40:
        dword_140C4CA18 = v24;
        goto LABEL_121;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders(v18, v52, &v45);
    if ( ImageRequiredSigningLevel < 0 )
    {
      v24 = 4;
      goto LABEL_40;
    }
    v25 = *a1;
    if ( (*a1 & 0x100) != 0 )
    {
      v26 = 4;
    }
    else if ( (v25 & 0x20) != 0 )
    {
      v26 = 1;
    }
    else if ( (v25 & 0x10) != 0 )
    {
      v26 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v26 = 0;
    }
    v27 = v43;
    v28 = v26 | 0x10;
    if ( (v25 & 0x800) == 0 )
      v28 = v26;
    v29 = *a1;
    if ( (v25 & 0x8400) != 0 && (v25 & 0x10) == 0 )
    {
      Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(*(PVOID *)&FileObject[5], (__int64)FileObject);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CA18 = 7;
        goto LABEL_121;
      }
      if ( (*a1 & 0x800) == 0 )
      {
        if ( v43 )
        {
          v31 = v47;
          if ( (Blink & 0x800000) != 0 )
            v31 = 1;
          v47 = v31;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          FileObject[1] = 8;
        }
        else
        {
          v32 = FileObject[1];
          if ( (Blink & 0x2000000) != 0 )
            v32 = 6;
          *(_DWORD *)&FileObject[1] = v32;
        }
      }
      v27 = FileObject[0];
      v19 = *(struct _FILE_OBJECT **)&FileObject[5];
      *((_BYTE *)a1 + 24) = FileObject[0];
      v29 = *a1;
      v43 = v27;
    }
    if ( (v29 & 0x80000) != 0 )
    {
      v33 = v27;
      v28 |= 0x40000000u;
      if ( !v27 )
        v33 = 4;
      v27 = v33;
      v43 = v33;
    }
    v34 = v28 | 0x20000000;
    if ( (v29 & 0x400000) == 0 )
      v34 = v28;
    *(_DWORD *)&FileObject[5] = v34;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v29 |= 0x8000u;
      *a1 = v29;
      if ( !v27 )
      {
        v27 = 1;
        v43 = 1;
      }
    }
    if ( (v29 & 0x400) != 0 && v27 || (v29 & 0x8000) != 0 || (v44 = 0, *(char *)(v51 + 46) < 0) )
      v44 = 1;
    v35 = (v29 & 0x400) != 0 && FileObject[1];
    if ( (v29 & 0x40) == 0 )
      v21 = (v29 & 0x20) != 0;
    v36 = 0;
    if ( (*(_DWORD *)(v18 + 56) & 0x40000000) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v19);
      ImageRequiredSigningLevel = DirectImageOriginalBase;
      if ( DirectImageOriginalBase >= 0 )
      {
        v38 = v49;
      }
      else
      {
        if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
        {
          ImageRequiredSigningLevel = 0;
          v38 = -1LL;
          v49 = -1LL;
        }
        else
        {
          v38 = v49;
        }
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CA18 = 8;
          goto LABEL_121;
        }
      }
    }
    else
    {
      v38 = -1LL;
      v49 = -1LL;
    }
    if ( v44 == 1 || v35 == 1 )
    {
      if ( v38 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v48[1], (unsigned int)v52, v48[0], v21, v38, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CA18 = 9;
          goto LABEL_121;
        }
        v36 = 1;
        if ( v45 == 1 )
          MiMakeImageReadOnly(v18, v39);
      }
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    (__int64)v19,
                                    v18,
                                    a1[42],
                                    *((_QWORD *)a1 + 20),
                                    *(int *)&FileObject[5],
                                    v44,
                                    v35,
                                    v47,
                                    v43,
                                    FileObject[1]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CA18 = 10;
        goto LABEL_121;
      }
      if ( v36 )
        goto LABEL_109;
      v38 = v49;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v48[1], (unsigned int)v52, v48[0], v21, v38, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4CA18 = 11;
      goto LABEL_121;
    }
    if ( v45 == 1 )
      MiMakeImageReadOnly(v18, 1LL);
LABEL_109:
    v40 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      do
      {
        if ( (v40->MdlFlags & 4) == 0 )
        {
          v41 = v40 + 1;
          for ( i = v40->ByteCount >> 12; i; --i )
          {
            if ( v41->Next != (struct _MDL *)-1LL )
              MiFinalizeImageHeaderPage(48 * (__int64)v41->Next - 0x58000000000LL);
            v41 = (struct _MDL *)((char *)v41 + 8);
          }
        }
        v40 = v40->Next;
      }
      while ( v40 );
      v40 = MemoryDescriptorList;
    }
    MiDeleteImageCreationMdls(v40);
    v22 = (_QWORD *)MiReleaseImageSection((__int64)v19, v18);
LABEL_118:
    MiReleaseControlAreaWaiters(v22);
    return (unsigned int)ImageRequiredSigningLevel;
  }
  if ( (*a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*((PIRP *)a1 + 23));
    FsRtlReleaseFile(v5);
    *a1 &= ~2u;
  }
  return (unsigned int)v9;
}
