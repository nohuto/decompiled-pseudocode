/*
 * XREFs of MiCreateNewSection @ 0x140709EC4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     IoSetTopLevelIrp @ 0x14029FEC0 (IoSetTopLevelIrp.c)
 *     MiMakeImageReadOnly @ 0x140319024 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x140332CF0 (MiFinalizeImageHeaderPage.c)
 *     MiSectionCreated @ 0x1403563C4 (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x140356970 (MiReleaseImageSection.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiValidateSectionSigningPolicy @ 0x14062B59C (MiValidateSectionSigningPolicy.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
 *     SeGetImageRequiredSigningLevel @ 0x14068E764 (SeGetImageRequiredSigningLevel.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 *     MiEnablePartitionMappedWrites @ 0x14070A580 (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x14070A6F0 (MiCreateDataFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x14070AF2C (MiDeleteImageCreationMdls.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x14070C690 (MiParseComAndCetHeaders.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088D75C (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, _QWORD *a2)
{
  ULONG_PTR **v4; // rdi
  struct _FILE_OBJECT *v5; // r12
  int v6; // r15d
  __int64 v7; // rsi
  ULONG_PTR *v8; // rdi
  int v9; // r14d
  unsigned int v11; // eax
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
  __int64 v25; // r8
  unsigned int v26; // edx
  int v27; // ecx
  unsigned int v28; // r15d
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
  PMDL v39; // rbx
  struct _MDL *v40; // r15
  ULONG i; // esi
  char v42; // [rsp+60h] [rbp-A0h]
  char v43; // [rsp+61h] [rbp-9Fh]
  char v44; // [rsp+62h] [rbp-9Eh] BYREF
  _BYTE FileObject[13]; // [rsp+63h] [rbp-9Dh] BYREF
  int v46; // [rsp+70h] [rbp-90h]
  _DWORD v47[3]; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51[14]; // [rsp+A0h] [rbp-60h] BYREF

  v48 = 0LL;
  memset(v51, 0, sizeof(v51));
  v4 = *(ULONG_PTR ***)(a1 + 176);
  v5 = *(struct _FILE_OBJECT **)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 152);
  v42 = *(_BYTE *)(a1 + 24);
  *(_WORD *)FileObject = 0;
  *(_QWORD *)&FileObject[5] = v5;
  v46 = 0;
  v44 = 0;
  memset(v47, 0, sizeof(v47));
  if ( v4 )
    v8 = *v4;
  else
    v8 = &MiSystemPartition;
  v9 = MiEnablePartitionMappedWrites(v8);
  if ( v9 >= 0 )
  {
    MemoryDescriptorList = 0LL;
    v11 = *(_DWORD *)(a1 + 172);
    v12 = v6 & 0x1000000;
    if ( (v6 & 0x1000000) != 0 )
      DataFileMap = MiCreateImageFileMap(
                      *(PFILE_OBJECT *)&FileObject[5],
                      (unsigned __int64)v8,
                      v11,
                      *(_DWORD *)a1,
                      &v47[1],
                      &MemoryDescriptorList,
                      (__int64)v51,
                      (__int128 *)v47);
    else
      DataFileMap = MiCreateDataFileMap(*(PFILE_OBJECT *)&FileObject[5], *(_DWORD *)(a1 + 28), v6, v11, *(_DWORD *)a1);
    ImageRequiredSigningLevel = DataFileMap;
    if ( DataFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(*(PFILE_OBJECT *)&FileObject[5]);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v15 = *(_QWORD *)&v47[1];
    *a2 = *(_QWORD *)&v47[1];
    if ( v7 )
    {
      *(_QWORD *)(a1 + 128) = v7;
    }
    else
    {
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), -1LL, -1LL);
      v15 = *(_QWORD *)&v47[1];
      *(_QWORD *)(a1 + 128) = v16;
    }
    v17 = *(_DWORD *)a1;
    v18 = *(_QWORD *)v15;
    if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v18 + 62) |= 1u;
      v17 = *(_DWORD *)a1;
    }
    v19 = *(struct _FILE_OBJECT **)&FileObject[5];
    LOWORD(v20) = v17;
    if ( (v17 & 0x2000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&FileObject[5] + 8LL) + 52LL) & 0x10) == 0
      && (!v12 || (v51[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v18 + 56) |= 0x20000000u;
      v20 = *(_DWORD *)a1;
    }
    if ( (v20 & 0x4000) != 0 )
      *(_DWORD *)(v18 + 56) |= 0x20000u;
    v21 = 2;
    v22 = (_QWORD *)MiSectionCreated((__int64)v19, v18, (__int64 *)MemoryDescriptorList);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v19);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v12 )
      goto LABEL_118;
    v23 = *(_QWORD *)(*(_QWORD *)&v47[1] + 56LL);
    v50 = v23;
    if ( !LODWORD(v51[11]) && !HIDWORD(v51[11]) && !*(_BYTE *)(v23 + 50) )
      *(_BYTE *)(*(_QWORD *)&v47[1] + 15LL) |= 1u;
    if ( (*(_DWORD *)(v18 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x80000) != 0 )
      {
        dword_140C4CA98 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_121:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v18, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        v24 = 6;
LABEL_40:
        dword_140C4CA98 = v24;
        goto LABEL_121;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders(v18, v51, &v44);
    if ( ImageRequiredSigningLevel < 0 )
    {
      v24 = 4;
      goto LABEL_40;
    }
    v26 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v27 = 4;
    }
    else if ( (v26 & 0x20) != 0 )
    {
      v27 = 1;
    }
    else if ( (v26 & 0x10) != 0 )
    {
      v27 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v27 = 0;
    }
    LOBYTE(v25) = v42;
    v28 = v27 | 0x10;
    if ( (v26 & 0x800) == 0 )
      v28 = v27;
    v29 = *(_DWORD *)a1;
    if ( (v26 & 0x8400) != 0 && (v26 & 0x10) == 0 )
    {
      Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(*(PVOID *)&FileObject[5], v28, v25, 0, FileObject);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CA98 = 7;
        goto LABEL_121;
      }
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v42 )
        {
          v31 = v46;
          if ( (Blink & 0x800000) != 0 )
            v31 = 1;
          v46 = v31;
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
      LOBYTE(v25) = FileObject[0];
      v19 = *(struct _FILE_OBJECT **)&FileObject[5];
      *(_BYTE *)(a1 + 24) = FileObject[0];
      v29 = *(_DWORD *)a1;
      v42 = v25;
    }
    if ( (v29 & 0x80000) != 0 )
    {
      v33 = v25;
      v28 |= 0x40000000u;
      if ( !(_BYTE)v25 )
        v33 = 4;
      LOBYTE(v25) = v33;
      v42 = v33;
    }
    v34 = v28 | 0x20000000;
    if ( (v29 & 0x400000) == 0 )
      v34 = v28;
    *(_DWORD *)&FileObject[5] = v34;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v29 |= 0x8000u;
      *(_DWORD *)a1 = v29;
      if ( !(_BYTE)v25 )
      {
        LOBYTE(v25) = 1;
        v42 = 1;
      }
    }
    if ( (v29 & 0x400) != 0 && (_BYTE)v25 || (v29 & 0x8000) != 0 || (v43 = 0, *(char *)(v50 + 46) < 0) )
      v43 = 1;
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
        v38 = v48;
      }
      else
      {
        if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
        {
          ImageRequiredSigningLevel = 0;
          v38 = -1LL;
          v48 = -1LL;
        }
        else
        {
          v38 = v48;
        }
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CA98 = 8;
          goto LABEL_121;
        }
      }
    }
    else
    {
      v38 = -1LL;
      v48 = -1LL;
    }
    if ( v43 == 1 || v35 == 1 )
    {
      if ( v38 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v47[1], (unsigned int)v51, v47[0], v21, v38, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CA98 = 9;
          goto LABEL_121;
        }
        v36 = 1;
        if ( v44 == 1 )
          MiMakeImageReadOnly(v18);
      }
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    (__int64)v19,
                                    v18,
                                    *(_DWORD *)(a1 + 168),
                                    *(_QWORD *)(a1 + 160),
                                    *(int *)&FileObject[5],
                                    v43,
                                    v35,
                                    v46,
                                    v42,
                                    FileObject[1]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CA98 = 10;
        goto LABEL_121;
      }
      if ( v36 )
        goto LABEL_109;
      v38 = v48;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v47[1], (unsigned int)v51, v47[0], v21, v38, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4CA98 = 11;
      goto LABEL_121;
    }
    if ( v44 == 1 )
      MiMakeImageReadOnly(v18);
LABEL_109:
    v39 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      do
      {
        if ( (v39->MdlFlags & 4) == 0 )
        {
          v40 = v39 + 1;
          for ( i = v39->ByteCount >> 12; i; --i )
          {
            if ( v40->Next != (struct _MDL *)-1LL )
              MiFinalizeImageHeaderPage(48 * (__int64)v40->Next - 0x58000000000LL);
            v40 = (struct _MDL *)((char *)v40 + 8);
          }
        }
        v39 = v39->Next;
      }
      while ( v39 );
      v39 = MemoryDescriptorList;
    }
    MiDeleteImageCreationMdls(v39);
    v22 = (_QWORD *)MiReleaseImageSection((__int64)v19, v18);
LABEL_118:
    MiReleaseControlAreaWaiters(v22);
    return (unsigned int)ImageRequiredSigningLevel;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v5);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)v9;
}
