/*
 * XREFs of MiRelocateImage @ 0x1407074F0
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14028DA5C (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14028DC08 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     PsSetSystemPagePriorityThread @ 0x14029C6F4 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14029C790 (PsRevertToUserPagePriorityThread.c)
 *     MiLegacyImageArchitecture @ 0x14029E74C (MiLegacyImageArchitecture.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiSetDeleteOnClose @ 0x14058C1D4 (MiSetDeleteOnClose.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 *     MiCompressRelocations @ 0x1407070B0 (MiCompressRelocations.c)
 *     MiLogRelocationFaults @ 0x140707460 (MiLogRelocationFaults.c)
 *     MiScanRelocationPage @ 0x140707CF0 (MiScanRelocationPage.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x1407091D8 (MiUpdateImageSystemWideBitmaps.c)
 *     MiSelectImageBase @ 0x1407092C0 (MiSelectImageBase.c)
 *     MiFreeRelocations @ 0x1407FB090 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1407FB114 (MiFreeImageLoadConfig.c)
 *     MiCreateFileOnlyImageFixupList @ 0x14097023C (MiCreateFileOnlyImageFixupList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // r14d
  unsigned int v16; // r14d
  int v17; // eax
  unsigned __int64 v18; // r15
  __int16 v19; // ax
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // r12
  SIZE_T v23; // rsi
  _QWORD *Pool; // rax
  _QWORD *v25; // rcx
  int v26; // edx
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rsi
  __int64 v29; // r8
  ULONG_PTR v30; // r13
  int Config; // edi
  _OWORD *v32; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rcx
  unsigned __int64 v35; // r14
  int v36; // edi
  int v37; // edi
  __int64 v38; // r13
  __int64 v39; // rdx
  unsigned int v40; // r15d
  unsigned int v41; // r12d
  __int64 v42; // rsi
  unsigned __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // r14d
  __int64 v46; // r15
  __int64 *v47; // r9
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // r15
  unsigned int SessionId; // r14d
  int v52; // r12d
  __int64 v53; // r14
  __int64 v55; // rcx
  unsigned int v56; // r8d
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned int v59; // edx
  unsigned __int16 v60; // r8
  _WORD *v61; // rcx
  unsigned int v62; // edx
  _QWORD *P; // [rsp+30h] [rbp-128h]
  __int64 v64; // [rsp+38h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-118h]
  unsigned int v66; // [rsp+48h] [rbp-110h]
  unsigned int Size; // [rsp+4Ch] [rbp-10Ch]
  int Size_4; // [rsp+50h] [rbp-108h]
  unsigned int v69; // [rsp+54h] [rbp-104h]
  __int64 v71; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v72; // [rsp+68h] [rbp-F0h]
  ULONG_PTR v73; // [rsp+70h] [rbp-E8h]
  __int64 v74; // [rsp+78h] [rbp-E0h] BYREF
  PVOID v75; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+90h] [rbp-C8h]
  struct _KTHREAD *v78; // [rsp+98h] [rbp-C0h]
  __int64 v79; // [rsp+A0h] [rbp-B8h]
  __int64 v80; // [rsp+A8h] [rbp-B0h]
  __int64 v81; // [rsp+B0h] [rbp-A8h]
  ULONG_PTR v82[10]; // [rsp+C0h] [rbp-98h] BYREF

  v77 = a1;
  memset(v82, 0, sizeof(v82));
  v74 = 0LL;
  v10 = 2;
  v75 = 0LL;
  v81 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v81 + 48)) )
  {
    v10 = 66;
    if ( (*(_BYTE *)(v11 + 44) & 1) != 0 )
      return 0LL;
    v12 = (*(_WORD *)(v11 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v12 = -1073741701;
  }
  v66 = v12;
  v13 = *(unsigned int *)(a2 + 88);
  LODWORD(v74) = v13;
  v14 = *(unsigned int *)(a2 + 92);
  Size = *(_DWORD *)(a2 + 92);
  HIDWORD(v74) = Size;
  if ( (_DWORD)v13 )
  {
    if ( !(_DWORD)v14 )
      return v12;
  }
  else
  {
    if ( (_DWORD)v14 )
      return v12;
    v10 &= ~2u;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v64 = *(_QWORD *)a1;
  v79 = v64;
  v80 = *(_QWORD *)(v64 + 96);
  v15 = 52;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
    v15 = 48;
  v16 = a3 + v15;
  v17 = 3;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
    v17 = 7;
  if ( (v17 & v16) != 0 )
    return v12;
  v18 = *(_QWORD *)(a1 + 32);
  if ( v10 >= 0x40 && !a4 )
  {
    v19 = *(_WORD *)(v11 + 46);
    if ( (v19 & 0x40) == 0 && MmRegistryState != -1 && (v19 & 0x1000) == 0 )
      return 0LL;
  }
  v20 = *(_DWORD *)(a1 + 8);
  v21 = v20;
  v69 = v20;
  if ( (v10 & 2) == 0 )
  {
    v21 = (v16 >> 12) + 1;
    v69 = v21;
  }
  v72 = v20 << 12;
  if ( (int)v13 + (int)v14 > v20 << 12 )
    return v12;
  if ( (v10 & 2) != 0 )
  {
    if ( (int)v13 + (int)v14 <= (unsigned int)v13 )
      return v12;
    v22 = v13;
    if ( v13 + v18 <= v18 )
      return v12;
  }
  else
  {
    v22 = v13;
  }
  if ( (v10 & 2) != 0 && v18 + v22 + v14 <= v18 )
    return v12;
  v76 = 8LL * v21;
  v23 = v76 + v14 + 96;
  v71 = 0LL;
  v73 = 0LL;
  Size_4 = 0;
  CurrentThread = KeGetCurrentThread();
  v78 = CurrentThread;
  Pool = MiAllocatePool(256, v23, 0x65526D4Du);
  P = Pool;
  if ( !Pool )
    return 3221225626LL;
  v25 = Pool;
  do
    v25 += 512;
  while ( v25 < (_QWORD *)((char *)Pool + v23) );
  v26 = (int)Pool;
  *((_BYTE *)Pool + 64) = 0;
  *((_DWORD *)Pool + 14) = v69;
  Pool[3] = 0LL;
  if ( (v10 & 2) == 0 )
  {
    v28 = Pool + 9;
    v30 = v64;
    goto LABEL_30;
  }
  if ( (int)MiMapImageInSystemSpace((__int64 *)v64, 3, (__int64)v82) < 0 )
  {
    ExFreePoolWithTag(P, 0);
    MiSetDeleteOnClose(v64, 0);
    return 0LL;
  }
  v27 = v82[0];
  v73 = v82[0];
  Size_4 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
  v10 |= 1u;
  v28 = P + 9;
  v29 = a2;
  v30 = v64;
  Config = MiParseImageLoadConfig(v64, v27, v29, LODWORD(v82[2]) << 12, (__int64)(P + 9));
  if ( Config < 0 )
  {
    ExFreePoolWithTag(P, 0);
    v53 = (__int64)CurrentThread;
    goto LABEL_75;
  }
  v26 = (int)P;
LABEL_30:
  Config = MiSelectImageBase(v77, v26, a4, a6, (__int64)&v71);
  if ( Config < 0 )
  {
    MiFreeImageLoadConfig(v28);
    ExFreePoolWithTag(P, 0);
    v53 = (__int64)CurrentThread;
    if ( !a4 )
      Config = v66;
    goto LABEL_75;
  }
  Config = MiUpdateImageSystemWideBitmaps(v30, v71, v28);
  if ( Config >= 0 )
  {
    v32 = P;
    *((_DWORD *)P + 15) = v16;
    P[5] = v71 - v18;
    if ( a5 == -1 )
      v33 = 0LL;
    else
      v33 = a5 - v18;
    P[6] = v33;
    v34 = P + 12;
    *P = P + 12;
    v35 = (unsigned __int64)P + v76 + 96;
    P[4] = v35;
    v36 = 24;
    if ( !P[11] )
      v36 = 16;
    v37 = v10 | v36;
    LOBYTE(v10) = v37;
    if ( (v37 & 2) != 0 )
    {
      memmove((void *)v35, (const void *)(v22 + v73), Size);
      LODWORD(v38) = 0;
      v39 = (__int64)P;
      if ( (v37 & 8) != 0 )
      {
        v55 = P[11];
        if ( v55 )
        {
          LODWORD(v38) = v82[2] & 0xFFFFF;
          if ( (v82[2] & 0xFFFFF) != 0 )
          {
            while ( 1 )
            {
              v38 = (unsigned int)(v38 - 1);
              if ( *(_QWORD *)(v55 + 8 * v38 + 56) )
                break;
              if ( !(_DWORD)v38 )
                goto LABEL_119;
            }
          }
          else
          {
LABEL_119:
            LODWORD(v38) = 0;
          }
        }
      }
      v40 = Size;
      v41 = 0;
      v10 = v37;
      if ( Size )
      {
        while ( v40 >= 0xA )
        {
          v42 = *(unsigned int *)(v35 + 4);
          if ( (unsigned int)v42 > v40 || (v42 & 1) != 0 || (unsigned int)v42 < 8 )
            goto LABEL_109;
          v43 = *(unsigned int *)v35;
          if ( (v43 & 0xFFF) != 0 )
            v10 &= ~0x10u;
          if ( (int)v43 + 4096 < (unsigned int)v43 || (int)v43 + 4096 > v72 || (unsigned int)v43 < v41 )
            goto LABEL_109;
          if ( (_DWORD)v42 == 8 )
          {
            v40 -= 8;
            v10 &= ~0x10u;
          }
          else
          {
            v44 = v64;
            if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(v64 + 92) & 0xC0000) != 0 )
            {
              v76 = 0LL;
              if ( (MiOffsetToProtos(v64, v43, (unsigned __int64 *)&v76)[8] & 4) != 0 )
              {
                Config = -1073741701;
                goto LABEL_125;
              }
              v39 = (__int64)P;
              v44 = v64;
            }
            if ( (unsigned int)v43 >> 12 > (unsigned int)v38 )
              LODWORD(v38) = (unsigned int)v43 >> 12;
            *(_QWORD *)(v39 + 8 * (v43 >> 12) + 96) |= v35;
            v41 = (v43 & 0xFFFFF000) + 4096;
            v40 -= v42;
            Config = MiScanRelocationPage(v73, v43, (unsigned int)(v42 - 8) >> 1, (int)v35 + 8, v44, v39);
            if ( Config < 0 )
            {
              v32 = P;
              v30 = v64;
              v53 = (__int64)CurrentThread;
              if ( Config == -1073741207 )
              {
                Config = 0;
              }
              else if ( Config == -1073741701 )
              {
                Config = v66;
              }
              goto LABEL_73;
            }
            v10 |= 4u;
          }
          v35 += v42;
          if ( !v40 )
            goto LABEL_56;
          v39 = (__int64)P;
        }
        if ( v40 == 8 )
        {
          v45 = Size - 8;
          goto LABEL_57;
        }
LABEL_109:
        Config = v66;
LABEL_125:
        v32 = P;
        v30 = v64;
        goto LABEL_108;
      }
LABEL_56:
      v45 = Size;
LABEL_57:
      MiUnmapImageInSystemSpace(v82);
      v46 = (__int64)CurrentThread;
      PsRevertToUserPagePriorityThread((__int64)CurrentThread, Size_4);
      LOBYTE(v10) = v10 & 0xFE;
      v32 = P;
      v47 = (__int64 *)P[2];
      if ( v47 )
      {
        while ( 1 )
        {
          v56 = *((_DWORD *)v47 + 3);
          v57 = P[((unsigned __int64)v56 >> 12) + 12];
          if ( v56 >> 12 > (unsigned int)v38 )
            LODWORD(v38) = *((_DWORD *)v47 + 3) >> 12;
          if ( v57 > 1 )
          {
            v58 = v57 & 0xFFFFFFFFFFFFFFFEuLL;
            v59 = *(_DWORD *)(v58 + 4) - 8;
            v60 = v56 & 0xFFF;
            v61 = (_WORD *)(v58 + 8);
            v62 = v59 >> 1;
            if ( v62 )
              break;
          }
LABEL_100:
          v47 = (__int64 *)*v47;
          if ( !v47 )
            goto LABEL_58;
        }
        while ( *v61 < 0x1000u || (unsigned __int16)(*v61 & 0xFFF) >= v60 )
        {
          ++v61;
          if ( !--v62 )
            goto LABEL_100;
        }
        Config = v66;
        v30 = v64;
        v53 = (__int64)CurrentThread;
LABEL_73:
        if ( (v10 & 0x20) == 0 )
          MiFreeRelocations(v30, v32);
        goto LABEL_75;
      }
LABEL_58:
      MiLogRelocationFaults(v64, (unsigned int *)&v74, (__int64)P);
      *((_DWORD *)P + 14) = v38 + 1;
      if ( (v10 & 0x14) == 0x14 )
        v32 = MiCompressRelocations((__int64)P, v45);
      v34 = v32 + 6;
      v30 = v64;
    }
    else
    {
      v46 = (__int64)CurrentThread;
    }
    v34[(unsigned __int64)*((unsigned int *)v32 + 15) >> 12] |= 1uLL;
    if ( (*(_BYTE *)(v30 + 62) & 0xC) == 4 && (Config = MiCreateFileOnlyImageFixupList(v30, v32, &v75), Config < 0) )
    {
LABEL_108:
      v53 = (__int64)CurrentThread;
    }
    else
    {
      LOBYTE(v10) = v10 | 0x20;
      MI_LOCK_RELOCATIONS_EXCLUSIVE(v46, (__int64)v32);
      v48 = v80;
      *(_QWORD *)(v80 + 32) = v32;
      v49 = v71;
      *(_QWORD *)(v77 + 32) = v71;
      v50 = v81;
      *(_QWORD *)v81 += *((_QWORD *)v32 + 5);
      *(_DWORD *)(v30 + 92) |= 0x400000u;
      if ( (*(_DWORD *)(v30 + 56) & 0x800) != 0 )
      {
        MiSetDeleteOnClose(v30, 0);
        v49 = v71;
      }
      if ( (MiFlags & 0x2000) != 0
        && (*(_DWORD *)(v30 + 92) & 0xC0000) != 0
        && (qword_140C1B920
          ? (Config = qword_140C1B920(*(_QWORD *)(v48 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v49))
          : (Config = -1073741637),
            Config < 0) )
      {
        v52 = a6;
      }
      else
      {
        if ( a4 )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v52 = a6;
        if ( !a6 || (v10 & 8) != 0 )
        {
          if ( (*(_BYTE *)(v30 + 62) & 0xC) != 4
            || (Config = MiWalkEntireImage(v30, (unsigned __int64)v75, 8u, SessionId), Config >= 0) )
          {
            Config = MiWalkEntireImage(v30, 0LL, 2u, SessionId);
          }
        }
        else
        {
          Config = 0;
        }
      }
      v53 = (__int64)CurrentThread;
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v32);
      if ( Config >= 0 && !v52 )
        *(_BYTE *)(v50 + 51) |= 4u;
    }
    goto LABEL_73;
  }
  MiFreeRelocations(v30, P);
  v53 = (__int64)CurrentThread;
LABEL_75:
  if ( (v10 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v82);
    PsRevertToUserPagePriorityThread(v53, Size_4);
  }
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
  return (unsigned int)Config;
}
