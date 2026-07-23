/*
 * XREFs of MiCreateNewSection @ 0x1406A9EA0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiMakeImageReadOnly @ 0x140257490 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x140298F3C (MiFinalizeImageHeaderPage.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x14029A710 (MiReleaseImageSection.c)
 *     IoSetTopLevelIrp @ 0x140361970 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 *     MiCreateDataFileMap @ 0x140685C44 (MiCreateDataFileMap.c)
 *     MiParseComAndCetHeaders @ 0x1406A9AD4 (MiParseComAndCetHeaders.c)
 *     MiEnablePartitionMappedWrites @ 0x1406AA564 (MiEnablePartitionMappedWrites.c)
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x1406AC1B4 (MiDeleteImageCreationMdls.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiValidateSectionSigningPolicy @ 0x1406C2794 (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406C311C (SeGetImageRequiredSigningLevel.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AE5C (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, _QWORD *a2)
{
  ULONG_PTR **v4; // rdi
  struct _FILE_OBJECT *v5; // r12
  int v6; // r15d
  LARGE_INTEGER v7; // rsi
  ULONG_PTR *v8; // rdi
  int v9; // r14d
  int v11; // r12d
  int ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v14; // r14
  signed __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r14
  struct _FILE_OBJECT *v18; // r13
  int v19; // r8d
  int v20; // esi
  _QWORD *v21; // r15
  __int64 v22; // rcx
  int v23; // r12d
  int v24; // edx
  int v25; // ecx
  char v26; // r8
  int v27; // r15d
  int v28; // ecx
  int Blink; // r13d
  int v30; // eax
  int v31; // eax
  char v32; // al
  int v33; // edx
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
  v4 = *(ULONG_PTR ***)(a1 + 176);
  v5 = *(struct _FILE_OBJECT **)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(LARGE_INTEGER *)(a1 + 152);
  v43 = *(_BYTE *)(a1 + 24);
  *(_WORD *)FileObject = 0;
  *(_QWORD *)&FileObject[5] = v5;
  v47 = 0;
  v45 = 0;
  memset(v48, 0, sizeof(v48));
  if ( v4 )
    v8 = *v4;
  else
    v8 = &MiSystemPartition;
  v9 = MiEnablePartitionMappedWrites((__int64)v8);
  if ( v9 >= 0 )
  {
    MemoryDescriptorList = 0LL;
    v11 = v6 & 0x1000000;
    if ( (v6 & 0x1000000) != 0 )
      ImageFileMap = MiCreateImageFileMap(
                       *(PFILE_OBJECT *)&FileObject[5],
                       (__int64)&v48[1],
                       (__int64)&MemoryDescriptorList,
                       (__int64)v52,
                       (__int64)v48);
    else
      ImageFileMap = MiCreateDataFileMap(
                       *(PFILE_OBJECT *)&FileObject[5],
                       v8,
                       (LARGE_INTEGER **)&v48[1],
                       v7,
                       *(_DWORD *)(a1 + 28),
                       v6,
                       *(_DWORD *)(a1 + 172),
                       *(_DWORD *)a1);
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(*(PFILE_OBJECT *)&FileObject[5]);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v14 = *(_QWORD *)&v48[1];
    *a2 = *(_QWORD *)&v48[1];
    if ( v7.QuadPart )
    {
      *(LARGE_INTEGER *)(a1 + 128) = v7;
    }
    else
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v14 = *(_QWORD *)&v48[1];
      *(_QWORD *)(a1 + 128) = v15;
    }
    v16 = *(_DWORD *)a1;
    v17 = *(_QWORD *)v14;
    if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v17 + 62) |= 1u;
      v16 = *(_DWORD *)a1;
    }
    v18 = *(struct _FILE_OBJECT **)&FileObject[5];
    LOWORD(v19) = v16;
    if ( (v16 & 0x2000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&FileObject[5] + 8LL) + 52LL) & 0x10) == 0
      && (!v11 || (v52[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v17 + 56) |= 0x20000000u;
      v19 = *(_DWORD *)a1;
    }
    if ( (v19 & 0x4000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    v20 = 2;
    v21 = (_QWORD *)MiSectionCreated((__int64)v18, v17, (__int64 *)MemoryDescriptorList);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v18);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v11 )
      goto LABEL_119;
    v22 = *(_QWORD *)(*(_QWORD *)&v48[1] + 56LL);
    v51 = v22;
    if ( !LODWORD(v52[11]) && !HIDWORD(v52[11]) && !*(_BYTE *)(v22 + 50) )
      *(_BYTE *)(*(_QWORD *)&v48[1] + 15LL) |= 1u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x80000) != 0 )
      {
        dword_140C4CC58 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_122:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v17, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        v23 = 6;
LABEL_40:
        dword_140C4CC58 = v23;
        goto LABEL_122;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders((__int64 *)v17, (unsigned int *)v52, &v45);
    if ( ImageRequiredSigningLevel < 0 )
    {
      v23 = 4;
      goto LABEL_40;
    }
    v24 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v25 = 4;
    }
    else if ( (v24 & 0x20) != 0 )
    {
      v25 = 1;
    }
    else if ( (v24 & 0x10) != 0 )
    {
      v25 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v25 = 0;
    }
    v26 = v43;
    v27 = v25 | 0x10;
    if ( (v24 & 0x800) == 0 )
      v27 = v25;
    v28 = *(_DWORD *)a1;
    if ( (v24 & 0x8400) != 0 && (v24 & 0x10) == 0 )
    {
      Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(*(PVOID *)&FileObject[5], (__int64)FileObject);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CC58 = 7;
        goto LABEL_122;
      }
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v43 )
        {
          v30 = v47;
          if ( (Blink & 0x800000) != 0 )
            v30 = 1;
          v47 = v30;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          FileObject[1] = 8;
        }
        else
        {
          v31 = FileObject[1];
          if ( (Blink & 0x2000000) != 0 )
            v31 = 6;
          *(_DWORD *)&FileObject[1] = v31;
        }
      }
      v26 = FileObject[0];
      v18 = *(struct _FILE_OBJECT **)&FileObject[5];
      *(_BYTE *)(a1 + 24) = FileObject[0];
      v28 = *(_DWORD *)a1;
      v43 = v26;
    }
    if ( (v28 & 0x80000) != 0 )
    {
      v32 = v26;
      v27 |= 0x40000000u;
      if ( !v26 )
        v32 = 4;
      v26 = v32;
      v43 = v32;
    }
    v33 = v27 | 0x20000000;
    if ( (v28 & 0x400000) == 0 )
      v33 = v27;
    *(_DWORD *)&FileObject[5] = v33;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v28 |= 0x8000u;
      *(_DWORD *)a1 = v28;
      if ( !v26 )
      {
        v26 = 1;
        v43 = 1;
      }
    }
    if ( (v28 & 0x8000) != 0 || (v34 = v28 & 0x400, (v28 & 0x400) != 0) && (v26 || *(char *)(v51 + 46) < 0) )
    {
      v44 = 1;
      v34 = v28 & 0x400;
    }
    else
    {
      v44 = 0;
    }
    v35 = v34 && FileObject[1];
    if ( (v28 & 0x40) == 0 )
      v20 = (v28 & 0x20) != 0;
    v36 = 0;
    if ( (*(_DWORD *)(v17 + 56) & 0x40000000) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v18);
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
          dword_140C4CC58 = 8;
          goto LABEL_122;
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
        ImageRequiredSigningLevel = MiRelocateImage(v48[1], (unsigned int)v52, v48[0], v20, v38, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C4CC58 = 9;
          goto LABEL_122;
        }
        v36 = 1;
        if ( v45 == 1 )
          MiMakeImageReadOnly(v17, v39);
      }
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    (_DWORD)v18,
                                    v17,
                                    *(_DWORD *)(a1 + 168),
                                    *(_QWORD *)(a1 + 160),
                                    *(_DWORD *)&FileObject[5],
                                    v44,
                                    v35,
                                    v47,
                                    v43,
                                    FileObject[1]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C4CC58 = 10;
        goto LABEL_122;
      }
      if ( v36 )
        goto LABEL_110;
      v38 = v49;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v48[1], (unsigned int)v52, v48[0], v20, v38, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C4CC58 = 11;
      goto LABEL_122;
    }
    if ( v45 == 1 )
      MiMakeImageReadOnly(v17, 1LL);
LABEL_110:
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
    v21 = (_QWORD *)MiReleaseImageSection((__int64)v18, v17);
LABEL_119:
    MiReleaseControlAreaWaiters(v21);
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
