/*
 * XREFs of MiCreateImageFileMap @ 0x1406AA6D4
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 * Callees:
 *     PsIsCurrentThreadPrefetching @ 0x1402253E0 (PsIsCurrentThreadPrefetching.c)
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiInitializeImageHeaderPage @ 0x140298EAC (MiInitializeImageHeaderPage.c)
 *     MiCopyHeaderIfResident @ 0x14029A080 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x14029A2A0 (MiFlushDataSection.c)
 *     IoIsDeviceEjectable @ 0x14029AA0C (IoIsDeviceEjectable.c)
 *     MiLegacyImageArchitecture @ 0x14029AA2C (MiLegacyImageArchitecture.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiReadImageHeaders @ 0x1406A8C3C (MiReadImageHeaders.c)
 *     MiCreateMdl @ 0x1406AAD54 (MiCreateMdl.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     MiDeleteImageCreationMdls @ 0x1406AC1B4 (MiDeleteImageCreationMdls.c)
 *     MiBuildImageControlArea @ 0x1406AC318 (MiBuildImageControlArea.c)
 *     MiVerifyImageHeader @ 0x1406AD10C (MiVerifyImageHeader.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C7854 (MiLogCreateImageFileMapFailure.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408CF404 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D0170 (MiDeleteImageExtentList.c)
 *     MiInitializeImageExtents @ 0x1408D01CC (MiInitializeImageExtents.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        struct _MDL **a6,
        __int64 a7,
        __int128 *a8)
{
  ULONG_PTR v8; // r12
  NTSTATUS result; // eax
  unsigned __int64 v13; // rdi
  __int64 v14; // r15
  PVOID *v15; // r13
  __int64 Mdl; // rax
  int ImageHeaders; // r14d
  ULONG LowPart; // r14d
  unsigned __int64 v19; // r9
  struct _MDL *v20; // r13
  ULONG_PTR StartVa; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // r13d
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r9
  unsigned int v27; // edx
  __int128 *v28; // rcx
  __int64 v29; // r11
  unsigned int v30; // r9d
  __int128 v31; // xmm0
  int v32; // r8d
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned int v37; // r10d
  __int64 v38; // r13
  struct _FILE_OBJECT *v39; // rdi
  int v40; // eax
  __int64 v41; // r8
  char v42; // si
  struct _MDL *v43; // r13
  unsigned int v44; // eax
  __int64 v45; // r9
  unsigned __int16 v46; // di
  __int64 v47; // rdx
  unsigned __int16 v48; // r10
  unsigned __int64 v49; // rax
  int v50; // edx
  __int64 v51; // rdx
  char v52; // al
  __int64 v53; // rbx
  __int64 v54; // r14
  __int64 v55; // rdi
  __int64 v56; // rcx
  LARGE_INTEGER v57; // rdx
  int v58; // eax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r14
  struct _MDL *v61; // rax
  __int64 v62; // rcx
  unsigned int v63; // edi
  __int64 v64; // r13
  __int64 v65; // rcx
  __int64 v66; // rax
  bool v67; // zf
  __int128 *v68; // rax
  unsigned __int64 v69; // rdi
  struct _MDL *v70; // rcx
  unsigned __int64 v71; // rdx
  PDEVICE_OBJECT DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  int v74; // edx
  __int64 v75; // rsi
  int v76; // ebx
  int v77; // edx
  __int64 v78; // rdx
  char v79; // [rsp+40h] [rbp-C0h]
  __int64 v80; // [rsp+48h] [rbp-B8h]
  struct _MDL *MemoryDescriptorList; // [rsp+58h] [rbp-A8h]
  __int64 v84; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER FileSize; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v88; // [rsp+88h] [rbp-78h] BYREF
  int v89; // [rsp+90h] [rbp-70h] BYREF
  __int64 v90; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v91; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v92; // [rsp+A8h] [rbp-58h] BYREF
  signed __int64 v93; // [rsp+B8h] [rbp-48h]
  __int64 v94; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v95; // [rsp+C8h] [rbp-38h]
  __int128 v96; // [rsp+D0h] [rbp-30h] BYREF
  int v97; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v98; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v99; // [rsp+F0h] [rbp-10h]
  __int128 v100; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v101; // [rsp+108h] [rbp+8h]
  struct _MDL **v102; // [rsp+110h] [rbp+10h]
  __int128 *v103; // [rsp+118h] [rbp+18h] BYREF
  int v104; // [rsp+120h] [rbp+20h]
  int v105; // [rsp+124h] [rbp+24h]

  v8 = 0LL;
  v101 = a5;
  v102 = a6;
  v86 = a7;
  v103 = a8;
  v89 = 0;
  v92 = 0LL;
  FileSize.QuadPart = 0LL;
  v100 = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result >= 0 )
  {
    if ( FileSize.HighPart )
    {
      dword_140C4CC58 = 34;
      return -1073741792;
    }
    v94 = 0LL;
    v13 = 1LL;
    v93 = 0LL;
    v90 = 0LL;
    v80 = 0LL;
    v14 = 0LL;
    v88 = 0LL;
    v15 = 0LL;
    Mdl = MiCreateMdl(a2, a3, 4096LL, 1LL);
    MemoryDescriptorList = (struct _MDL *)Mdl;
    if ( !Mdl )
    {
      dword_140C4CC58 = 35;
      return -1073741670;
    }
    *(_QWORD *)(Mdl + 16) = 0LL;
    v99 = *(_QWORD *)(Mdl + 48);
    CcZeroEndOfLastPage(FileObject);
    ImageHeaders = MiFlushDataSection((__int64)FileObject, &v89);
    if ( ImageHeaders == -1073741740 )
    {
      dword_140C4CC58 = 36;
      goto LABEL_82;
    }
    v79 = 0;
    if ( v89 == 1 )
      a4 |= 0x100000u;
    if ( (a4 & 0x100080) != 0 )
    {
      v79 = 1;
      if ( PsIsCurrentThreadPrefetching() )
      {
        dword_140C4CC58 = 37;
        ImageHeaders = -1073740749;
        goto LABEL_82;
      }
    }
    LowPart = FileSize.LowPart;
    if ( (a4 & 0x10000) != 0 )
    {
      v57 = FileSize;
      if ( (a4 & 0x40000) != 0 )
        v57.QuadPart = 4096LL;
      v58 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MiAllocateEntireImageFileExtents)(
              FileObject,
              (LARGE_INTEGER)v57.QuadPart,
              0LL,
              &v88);
      v8 = v88;
      ImageHeaders = v58;
      if ( v58 < 0 )
      {
        dword_140C4CC58 = 38;
        goto LABEL_171;
      }
      LowPart = FileSize.LowPart;
    }
    if ( (a4 & 0x10000) != 0 )
      goto LABEL_15;
    if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v99) == 1 )
    {
      v19 = 4096LL;
      *((_QWORD *)&v92 + 1) = 4096LL;
    }
    else
    {
      if ( !v79
        && ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && LowPart <= 0x20000)
        && !FileObject->SectionObjectPointer->DataSectionObject )
      {
        v13 = ((unsigned __int64)LowPart + 4095) >> 12;
        if ( v13 > 1 )
        {
          v94 = MiCreateMdl(a2, a3, v13 << 12, 0LL);
          v54 = v94;
          if ( v94 )
          {
            MiDeleteImageCreationMdls(MemoryDescriptorList);
            *(_QWORD *)(v54 + 16) = 0LL;
            MemoryDescriptorList = (struct _MDL *)v54;
          }
          else
          {
            v13 = 1LL;
          }
        }
      }
      v19 = *((_QWORD *)&v92 + 1);
      if ( !*((_QWORD *)&v92 + 1) )
      {
LABEL_15:
        v20 = MemoryDescriptorList;
        ImageHeaders = MiReadImageHeaders(FileObject, v8, (__int64)MemoryDescriptorList, (__int64)&v92);
        if ( ImageHeaders < 0 )
        {
          dword_140C4CC58 = 40;
          goto LABEL_171;
        }
        v19 = *((_QWORD *)&v92 + 1);
        if ( *((_QWORD *)&v92 + 1) != v13 << 12 && *((_QWORD *)&v92 + 1) < 0x40uLL )
        {
          dword_140C4CC58 = 41;
LABEL_80:
          ImageHeaders = -1073741521;
LABEL_81:
          v15 = 0LL;
LABEL_82:
          v55 = a2;
LABEL_83:
          MiDeleteImageCreationMdls(MemoryDescriptorList);
          v56 = v93;
          if ( v93 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 7624), -v93);
            MiReturnCommit(v55, v56);
            v14 = v90;
            v8 = v88;
          }
          if ( v14 )
          {
            MiUpdateSystemProtoPtesTree(*(unsigned __int64 **)(v14 + 96), 0);
            ExFreePoolWithTag(v15[8], 0);
            ExFreePoolWithTag(v15, 0);
            ExFreePoolWithTag((PVOID)v14, 0);
          }
          goto LABEL_62;
        }
LABEL_17:
        if ( (v20->MdlFlags & 4) != 0 )
          StartVa = (ULONG_PTR)v20->StartVa;
        else
          StartVa = (ULONG_PTR)v20->MappedSystemVa;
        v91 = StartVa;
        if ( *(_WORD *)StartVa != 23117 )
          goto LABEL_80;
        v22 = *(unsigned int *)(StartVa + 60);
        v85 = v22;
        if ( (int)v22 + 264 < (unsigned int)v22 )
        {
          ImageHeaders = -1073741520;
          dword_140C4CC58 = 42;
          goto LABEL_81;
        }
        v23 = v22 + 264;
        v24 = v22;
        if ( (unsigned __int64)(v22 + 264) > FileSize.QuadPart )
        {
          ImageHeaders = -1073741520;
          dword_140C4CC58 = 43;
          goto LABEL_81;
        }
        if ( v23 > v13 << 12 )
        {
          v55 = a2;
          v59 = 0x2000LL;
          v60 = (FileSize.QuadPart - ((unsigned int)v22 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
          if ( v60 < 0x2000 )
            v59 = (FileSize.QuadPart - ((unsigned int)v22 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v95 = v59;
          v61 = (struct _MDL *)MiCreateMdl(a2, a3, v59, 1LL);
          v84 = (__int64)v61;
          v62 = (__int64)v61;
          if ( !v61 )
          {
            ImageHeaders = -1073741670;
            dword_140C4CC58 = 44;
            v15 = 0LL;
            goto LABEL_83;
          }
          v61->Next = MemoryDescriptorList;
          v63 = v24 & 0xFFFFF000;
          MemoryDescriptorList = v61;
          v61->Process = (struct _EPROCESS *)((v24 & 0xFFFFF000) / 4096LL);
          if ( (a4 & 0x40000) != 0 )
          {
            v98 = 0LL;
            ImageHeaders = MiAllocateEntireImageFileExtents(FileObject, v60, v8, &v98);
            if ( ImageHeaders < 0 )
            {
              dword_140C4CC58 = 128;
              goto LABEL_171;
            }
            v8 = v98;
            v62 = v84;
            v88 = v98;
          }
          ImageHeaders = MiReadImageHeaders(FileObject, v8, v62, (__int64)&v92);
          if ( ImageHeaders < 0 )
          {
            dword_140C4CC58 = 45;
            goto LABEL_171;
          }
          v64 = v24 & 0xFFF;
          if ( *((_QWORD *)&v92 + 1) != (unsigned int)v95 && *((_QWORD *)&v92 + 1) < (unsigned __int64)(v64 + 264) )
          {
            ImageHeaders = -1073741520;
            dword_140C4CC58 = 46;
            goto LABEL_81;
          }
          v26 = *((_QWORD *)&v92 + 1) - v64;
          v65 = v63 + *((_QWORD *)&v92 + 1);
          v95 = v64 + *(_QWORD *)(v84 + 24);
          v25 = v95;
          *((_QWORD *)&v92 + 1) = v65;
          StartVa = v91;
        }
        else
        {
          if ( v23 > v19 )
          {
            ImageHeaders = -1073741520;
            dword_140C4CC58 = 47;
            goto LABEL_81;
          }
          v25 = StartVa + (unsigned int)v22;
          v26 = v19 - (unsigned int)v22;
        }
        ImageHeaders = MiVerifyImageHeader(v86, v25, StartVa, v26);
        if ( ImageHeaders )
          goto LABEL_171;
        v27 = v85;
        v28 = v103;
        v29 = v86;
        *(_DWORD *)v103 = v85 + 48;
        if ( *(_WORD *)(v29 + 48) == 267 )
          *(_DWORD *)v28 = v27 + 52;
        v30 = *(_DWORD *)(v29 + 16);
        if ( !((v30 >> 12) + ((v30 & 0xFFF) != 0)) )
        {
          ImageHeaders = -1073741701;
          dword_140C4CC58 = 49;
          goto LABEL_81;
        }
        v31 = *(_OWORD *)(v25 + 4);
        v97 = *(_DWORD *)(v25 + 20);
        v32 = (unsigned __int16)v97 + 24;
        v96 = v31;
        if ( v27 + v32 + 40 * WORD1(v31) <= v27 )
        {
          ImageHeaders = -1073741701;
          dword_140C4CC58 = 50;
          goto LABEL_81;
        }
        v33 = v32 + v27;
        v34 = (unsigned int)v33;
        v35 = 40LL * WORD1(v31);
        v36 = v35 + v33;
        v37 = v35 + v33;
        if ( *(unsigned int *)(v29 + 24) >= (unsigned __int64)(v35 + v33) )
          v37 = *(_DWORD *)(v29 + 24);
        v85 = v37;
        if ( v37 > v30 )
        {
          ImageHeaders = -1073741701;
          dword_140C4CC58 = 48;
          goto LABEL_81;
        }
        if ( v36 > *((_QWORD *)&v92 + 1) )
        {
          v66 = ((int)v25 + v32) & 0xFFFLL;
          v67 = v35 + v66 == 0;
          v68 = (__int128 *)(v35 + v66);
          v103 = v68;
          if ( v67 || (v69 = ((unsigned __int64)v68 + 4095) & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)v68 > v69) )
          {
            ImageHeaders = -1073741701;
            dword_140C4CC58 = 51;
LABEL_171:
            if ( ImageHeaders >= 0 )
              goto LABEL_62;
LABEL_172:
            v15 = (PVOID *)v80;
            goto LABEL_82;
          }
          v84 = MiCreateMdl(a2, a3, ((unsigned __int64)v68 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1LL);
          v70 = (struct _MDL *)v84;
          if ( !v84 )
          {
            ImageHeaders = -1073741670;
            dword_140C4CC58 = 52;
            goto LABEL_81;
          }
          *(_QWORD *)(v84 + 16) = v34 >> 12;
          v70->Next = MemoryDescriptorList;
          MemoryDescriptorList = v70;
          if ( (a4 & 0x40000) != 0 )
          {
            v91 = 0LL;
            v71 = v69;
            v39 = FileObject;
            ImageHeaders = MiAllocateEntireImageFileExtents(FileObject, v71, v8, &v91);
            if ( ImageHeaders < 0 )
            {
              dword_140C4CC58 = 129;
              goto LABEL_171;
            }
            v8 = v91;
            v70 = (struct _MDL *)v84;
            v88 = v91;
          }
          else
          {
            v39 = FileObject;
          }
          ImageHeaders = MiReadImageHeaders(v39, v8, (__int64)v70, (__int64)&v92);
          if ( ImageHeaders < 0 )
          {
            dword_140C4CC58 = 53;
            goto LABEL_171;
          }
          if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)v103 )
          {
            ImageHeaders = -1073741701;
            dword_140C4CC58 = 54;
            goto LABEL_81;
          }
          v29 = v86;
          v38 = *(_QWORD *)(v84 + 24) + (v34 & 0xFFF);
        }
        else
        {
          LODWORD(v38) = v25 + v32;
          v39 = FileObject;
        }
        if ( *(_DWORD *)(v29 + 12) < 0x1000u )
        {
          if ( (a4 & 0x80000) != 0 )
          {
            ImageHeaders = -1073741701;
            MiLogCreateImageFileMapFailure(v36, v39, *(unsigned int *)(v29 + 64), DWORD1(v96));
            dword_140C4CC58 = 55;
            goto LABEL_81;
          }
          if ( !MiLegacyImageArchitecture(v96) )
          {
            ImageHeaders = -1073741701;
            dword_140C4CC58 = 56;
            goto LABEL_81;
          }
          a4 |= 0x200000u;
        }
        v40 = MiBuildImageControlArea(a3, v38, v29, (unsigned int)&v96, a4, (__int64)&FileSize, (__int64)&v90);
        v14 = v90;
        ImageHeaders = v40;
        if ( v40 < 0 )
          goto LABEL_172;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v90 + 56LL) + 64LL) = v85;
        *(_WORD *)(v14 + 60) ^= (*(_WORD *)(v14 + 60) ^ *(_WORD *)a2) & 0x3FF;
        if ( (a4 & 0x200) != 0 )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14 + 56LL) + 51LL) |= 0x10u;
        v41 = *(_QWORD *)v14;
        v42 = 0;
        v43 = MemoryDescriptorList;
        v80 = *(_QWORD *)v14;
        if ( v94 || MemoryDescriptorList->Next || (a4 & 0x210000) != 0 )
        {
          v45 = 1LL;
        }
        else
        {
          v44 = *(_DWORD *)(v86 + 24);
          v45 = 1LL;
          if ( v44 < 0x1000 )
          {
            if ( (v44 & 0x1FF) != 0 )
              ++*(_QWORD *)(v41 + 16);
            v42 = 1;
          }
        }
        v46 = HIWORD(v97);
        if ( !v79
          && (IoIsDeviceEjectable((__int64)FileObject->DeviceObject)
           || (v46 & 0x400) != 0 && ((unsigned __int8)*(_DWORD *)(v47 + 52) & (unsigned __int8)v45) != 0
           || (v46 & v48) != 0 && (*(_DWORD *)(v47 + 52) & 0x10) != 0) )
        {
          v79 = v45;
        }
        v49 = *(_QWORD *)(v41 + 16);
        v93 = v49;
        if ( v49 )
        {
          v55 = a2;
          if ( !(unsigned int)MiChargeCommit(a2, v49, 0) )
          {
            v15 = (PVOID *)v80;
            v93 = 0LL;
            ImageHeaders = -1073741523;
            dword_140C4CC58 = 57;
            goto LABEL_83;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 7624), v93);
          v14 = v90;
          v46 = HIWORD(v97);
          v8 = v88;
        }
        v50 = *(_DWORD *)(v14 + 56);
        if ( (v50 & 0x20000) != 0 && (a4 & 0x200000) == 0 && (*(_DWORD *)(v86 + 20) & 0x1000000) == 0 )
          *(_DWORD *)(v14 + 56) = v50 | 0x4000000;
        if ( v94 )
          MiInitializeImageProtos(v14, v94);
        v51 = 1LL;
        if ( v42 == 1 )
        {
          MiInitializeImageHeaderPage(v99, *(unsigned int *)(v86 + 24));
          v51 = 1LL;
        }
        if ( *(_WORD *)(v86 + 48) == 267 )
          *(_BYTE *)(v80 + 14) |= 0x40u;
        v52 = v79;
        if ( v79 )
        {
          *(_DWORD *)(v14 + 56) |= 0x800u;
          if ( (a4 & 0x100080) != 0 )
            *(_DWORD *)(v14 + 56) |= 0x40000u;
          if ( (PerfGlobalGroupMask & 4) != 0 )
          {
            DeviceObject = FileObject->DeviceObject;
            *(_QWORD *)&v100 = FileObject->FsContext;
            WORD6(v100) = v46;
            DWORD2(v100) = DeviceObject->Characteristics;
            IsDeviceEjectable = IoIsDeviceEjectable((__int64)DeviceObject);
            v105 = 0;
            v104 = 16;
            HIWORD(v100) = v74 & (a4 >> 20) | (2 * ((2 * (v74 & (a4 >> 7))) | (unsigned __int8)v74 & IsDeviceEjectable));
            v103 = &v100;
            EtwTraceKernelEvent((int)&v103, v74, 4u, 617, 4200450);
          }
          v52 = v79;
        }
        if ( (a4 & 0x10000) == 0 )
          goto LABEL_60;
        v75 = *(_QWORD *)(v14 + 96);
        if ( !v52 && (MiFlags & 0x2000) == 0 && (a4 & 0x20000) == 0 )
          *(_DWORD *)(v14 + 56) |= 0x40000000u;
        v76 = a4 & 0x40000;
        if ( v76 )
          *(_QWORD *)(v75 + 48) |= 1uLL;
        if ( (*(_DWORD *)(v14 + 56) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v14 + 64) = FileObject;
          ImageHeaders = MiInitializeImageExtents(v14, v51, v41, v45);
          ObFastReplaceObject((volatile __int64 *)(v14 + 64), 0LL);
          if ( ImageHeaders < 0 )
          {
            if ( ImageHeaders != -1073741800 )
            {
              dword_140C4CC58 = 58;
              goto LABEL_171;
            }
            *(_DWORD *)(v14 + 56) &= ~0x40000000u;
          }
          else
          {
            MiDeleteImageCreationMdls(MemoryDescriptorList);
            v43 = 0LL;
            MemoryDescriptorList = 0LL;
          }
          if ( (*(_DWORD *)(v14 + 56) & 0x40000000) != 0 )
          {
LABEL_60:
            v53 = v80;
LABEL_61:
            ImageHeaders = 0;
            *v101 = v53;
            *v102 = v43;
LABEL_62:
            if ( v8 )
              MiDeleteImageExtentList((PVOID)v8);
            return ImageHeaders;
          }
        }
        v67 = v76 == 0;
        v53 = v80;
        if ( !v67 )
        {
          v77 = *(_DWORD *)(v80 + 8);
          v84 = 0LL;
          v78 = (unsigned int)(v77 << 12);
          FileSize.QuadPart = (unsigned int)v78;
          ImageHeaders = MiAllocateEntireImageFileExtents(FileObject, v78, v8, &v84);
          if ( ImageHeaders < 0 )
          {
            dword_140C4CC58 = 91;
            goto LABEL_171;
          }
          v8 = v84;
        }
        *(_QWORD *)(v75 + 48) |= v8;
        v8 = 0LL;
        goto LABEL_61;
      }
    }
    v20 = MemoryDescriptorList;
    goto LABEL_17;
  }
  dword_140C4CC58 = 33;
  if ( result == -1073741638 )
    return -1073741792;
  return result;
}
