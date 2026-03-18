/*
 * XREFs of BgpFwLibraryInitialize @ 0x1409EF9E8
 * Callers:
 *     BgLibraryInitialize @ 0x1409EE854 (BgLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1403617D0 (MmGetPhysicalAddress.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x1403997F4 (BgpFwAllocateMemory.c)
 *     BgpFwLibraryEnable @ 0x140399AF8 (BgpFwLibraryEnable.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1403CB128 (BgpGxProcessQrCodeBitmap.c)
 *     wcscpy_s @ 0x1403D4C70 (wcscpy_s.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     BgpFwReservePoolSwap @ 0x1409EE354 (BgpFwReservePoolSwap.c)
 *     ResFwConfigureDisplayStringResources @ 0x1409EE56C (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x1409EE608 (AnFwConfigureProgressResources.c)
 *     BgpFwInitializeReservePool @ 0x1409F05B8 (BgpFwInitializeReservePool.c)
 *     LogFwInitialize @ 0x1409F0654 (LogFwInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1409F0F0C (BgpFwLibraryDestroy.c)
 *     AnFwProgressIndicatorTransition @ 0x1409F4148 (AnFwProgressIndicatorTransition.c)
 *     BgpFoInitialize @ 0x140A93328 (BgpFoInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140A93F20 (BgpBcInitializeCriticalMode.c)
 *     BgpFwInitializeLock @ 0x140A94508 (BgpFwInitializeLock.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  int v4; // ebp
  int v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // r13d
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  _OWORD *v15; // rax
  _OWORD *v16; // r15
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  char *v20; // r8
  _OWORD *v21; // rbx
  int v22; // eax
  __int64 v23; // rdi
  void *v24; // rbx
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 result; // rax
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 Memory; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  const wchar_t *v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // [rsp+60h] [rbp+8h]
  unsigned int v48; // [rsp+70h] [rbp+18h]
  unsigned int v49; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 116) < 4u )
    return 3221225561LL;
  v4 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
  if ( (dword_140C13310 & 1) != 0 && (dword_140C13310 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
  {
    BgpFwAcquireLock();
    if ( a2 == -1 )
    {
      qword_140C132C0 = 0LL;
      dword_140C13310 = dword_140C13310 & 0xFFEFE7FD | 0x101800;
      BgInternal = 0LL;
      xmmword_140C132B0 = 0LL;
      result = BgpFwLibraryEnable(a1 + 32);
      if ( (int)result < 0 )
        return result;
      dword_140C13310 &= ~0x2000u;
      v39 = *(_QWORD *)(a1 + 16);
      if ( v39 )
      {
        BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 248), v39);
        qword_140C133D8 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
        qword_140C133D0 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
      }
      else
      {
        qword_140C133D8 = 0LL;
        qword_140C133D0 = 0LL;
      }
      LogFwInitialize();
    }
    else
    {
      dword_140C13310 &= ~0x1000u;
      AnFwProgressIndicatorTransition();
    }
    BgpFwReleaseLock();
    goto LABEL_49;
  }
  if ( a2 == -1 )
  {
    dword_140C13310 = BgpFwInitializeLock(0x100000LL) | 0xC04;
    qword_140C133E8 = (__int64)&qword_140C133E0;
    qword_140C133E0 = (__int64)&qword_140C133E0;
    v40 = *(_QWORD *)(a1 + 240);
    if ( !v40 || !*(_DWORD *)(a1 + 248) )
      return 3221225626LL;
    BgpFwInitializeReservePool(v40, 0x4000LL, &unk_140CF2640);
    v5 = BgpFwLibraryEnable(a1 + 32);
    if ( v5 < 0 )
      goto LABEL_59;
    xmmword_140C13348 = *(_OWORD *)(a1 + 100);
    if ( *(_QWORD *)(a1 + 88) )
    {
      Memory = BgpFwAllocateMemory(0x18uLL);
      if ( !Memory )
        goto LABEL_72;
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 12) = 1;
      qword_140C133B8 = Memory;
      v5 = BgpFoInitialize(Memory, 0LL);
      if ( v5 < 0 )
        goto LABEL_59;
    }
    if ( *(_DWORD *)(a1 + 116) >= 3u )
    {
      qword_140C13490 = *(_QWORD *)(a1 + 404);
      dword_140C13498 = *(_DWORD *)(a1 + 412);
    }
    dword_140C13478 = *(_DWORD *)(a1 + 400);
    v5 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
    if ( v5 < 0 )
      goto LABEL_59;
    goto LABEL_49;
  }
  BgpFwAcquireLock();
  v5 = BgpFwLibraryEnable(a1 + 32);
  if ( v5 >= 0 )
  {
    *(PHYSICAL_ADDRESS *)&xmmword_140C132F0 = MmGetPhysicalAddress(qword_140C132C0);
    DWORD2(xmmword_140C132F0) = DWORD2(BgInternal);
    HIDWORD(xmmword_140C132F0) = DWORD1(BgInternal);
    LODWORD(xmmword_140C13300) = HIDWORD(BgInternal);
    if ( (_DWORD)xmmword_140C132B0 == 4 )
    {
      DWORD2(xmmword_140C13300) = 3;
    }
    else if ( (_DWORD)xmmword_140C132B0 == 5 )
    {
      DWORD2(xmmword_140C13300) = 4;
    }
    else
    {
      DWORD2(xmmword_140C13300) = 0;
    }
    v6 = 0;
    v7 = 416;
    v8 = 0;
    xmmword_140C133F0 = *(_OWORD *)(a1 + 272);
    v9 = 0;
    xmmword_140C13400 = *(_OWORD *)(a1 + 288);
    xmmword_140C13410 = *(_OWORD *)(a1 + 304);
    xmmword_140C13420 = *(_OWORD *)(a1 + 320);
    xmmword_140C13430 = *(_OWORD *)(a1 + 336);
    xmmword_140C13440 = *(_OWORD *)(a1 + 352);
    xmmword_140C13450 = *(_OWORD *)(a1 + 368);
    xmmword_140C13460 = *(_OWORD *)(a1 + 384);
    if ( *(_QWORD *)(a1 + 72) )
    {
      v8 = 32;
      v9 = *(_DWORD *)(a1 + 84);
      v6 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
      v7 = v6 + 448;
    }
    v10 = 0;
    v11 = 0;
    v46 = 0;
    if ( *(_QWORD *)(a1 + 128) )
    {
      v10 = 32;
      v46 = 32;
      v11 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
      v7 += v11 + 32;
    }
    v12 = v9 + 16480 + v7;
    v13 = v12 - v6 - v10 - v11 - v8 - 416;
    v14 = ((v13 >> 3) + 15) & 0xFFFFFFF0;
    v48 = v14 + v12;
    v15 = (_OWORD *)BgpFwAllocateMemory(v14 + v12);
    qword_140C13340 = (__int64)v15;
    v16 = v15;
    if ( v15 )
    {
      v17 = 3LL;
      v18 = (_OWORD *)a1;
      do
      {
        *v15 = *v18;
        v15[1] = v18[1];
        v15[2] = v18[2];
        v15[3] = v18[3];
        v15[4] = v18[4];
        v15[5] = v18[5];
        v15[6] = v18[6];
        v15 += 8;
        v19 = v18[7];
        v18 += 8;
        *(v15 - 1) = v19;
        --v17;
      }
      while ( v17 );
      *v15 = *v18;
      v15[1] = v18[1];
      *(_DWORD *)v16 = v48;
      *((_DWORD *)v16 + 30) |= 0x100000u;
      *((_QWORD *)v16 + 30) = 0LL;
      *((_DWORD *)v16 + 62) = 0;
      *((_QWORD *)v16 + 33) = 0LL;
      *((_QWORD *)v16 + 32) = 0LL;
      v49 = v6 + v8;
      v20 = (char *)v16 + v11 + v6 + v8 + v46 + 416;
      BgpFwInitializeReservePool(&v20[v14], v13, v20);
      qword_140C133C0 = 0LL;
      if ( !v6 )
        goto LABEL_76;
      v21 = &v16[v8 / 0x10 + 26];
      memmove(v21, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
      *((_DWORD *)v16 + 107) = 1;
      *((_QWORD *)v16 + 52) = v21;
      *((_DWORD *)v16 + 106) = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v16 + 54) = v21;
      dword_140C13310 |= 0x800u;
      v22 = BgpFoInitialize(v16 + 26, 1LL);
      dword_140C13310 &= ~0x800u;
      if ( v22 >= 0 )
        qword_140C133C0 = (__int64)(v16 + 26);
      if ( !qword_140C133C0 )
LABEL_76:
        DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
      qword_140C133C8 = 0LL;
      if ( v11 )
      {
        v23 = (__int64)v16 + v49 + 416;
        v24 = (void *)(v23 + v46);
        memmove(v24, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
        *(_DWORD *)(v23 + 12) = 1;
        *(_QWORD *)v23 = v24;
        *(_DWORD *)(v23 + 8) = *(_DWORD *)(a1 + 136);
        *(_QWORD *)(v23 + 16) = v24;
        qword_140C133C8 = v23;
      }
      memset(&qword_140C13358, 0, 0x58uLL);
      if ( *(_QWORD *)(a1 + 144) )
      {
        v25 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
        qword_140C13358 = v25;
        if ( v25 )
        {
          memmove(v25, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
          LODWORD(Size) = *(_DWORD *)(a1 + 160);
          qword_140C1336C = *(_QWORD *)(a1 + 164);
        }
      }
      v26 = *(_QWORD *)(a1 + 184);
      if ( v26 && (int)BgpGxProcessQrCodeBitmap(v26, &qword_140C13398) < 0 )
        qword_140C13398 = 0LL;
      v27 = *(_QWORD *)(a1 + 216);
      if ( v27 )
      {
        v42 = -1LL;
        v43 = -1LL;
        do
          ++v43;
        while ( *(_WORD *)(v27 + 2 * v43) );
        Dst = (wchar_t *)BgpFwAllocateMemory(2 * v43 + 2);
        if ( Dst )
        {
          v44 = *(const wchar_t **)(a1 + 216);
          do
            ++v42;
          while ( v44[v42] );
          wcscpy_s(Dst, v42 + 1, v44);
        }
      }
      qword_140C133B8 = 0LL;
      if ( !*(_QWORD *)(a1 + 88) )
        goto LABEL_35;
      v28 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
      v29 = (__int64)v28;
      if ( !v28 )
        goto LABEL_35;
      memmove(v28, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
      v30 = BgpFwAllocateMemory(0x18uLL);
      v31 = v30;
      if ( v30 )
      {
        *(_DWORD *)(v30 + 12) = 0;
        *(_QWORD *)v30 = v29;
        *(_DWORD *)(v30 + 8) = *(_DWORD *)(a1 + 96);
        *(_QWORD *)(v30 + 16) = v29;
        if ( (int)BgpFoInitialize(v30, 0LL) >= 0 )
        {
          qword_140C133B8 = v31;
LABEL_35:
          if ( *(_DWORD *)(a1 + 116) >= 3u )
          {
            qword_140C13490 = *(_QWORD *)(a1 + 404);
            dword_140C13498 = *(_DWORD *)(a1 + 412);
          }
          v32 = *(_DWORD *)(a1 + 400);
          dword_140C13310 |= 0x8000u;
          dword_140C13478 = v32;
          BgpBcInitializeCriticalMode(a1, a2);
          dword_140C13310 = dword_140C13310 & 0xFFFF77FF | 0x800;
          v33 = BgpFwAllocateMemory(0x38uLL);
          dword_140C13310 &= ~0x800u;
          v34 = v33;
          if ( v33 )
          {
            v35 = *(_QWORD *)(a1 + 256);
            if ( v35 )
            {
              *(_OWORD *)v34 = *(_OWORD *)v35;
              *(_QWORD *)(v34 + 16) = *(_QWORD *)(v35 + 16);
              *(_DWORD *)(v34 + 24) = *(_DWORD *)(v35 + 24);
              *((_QWORD *)v16 + 32) = v34;
              v34 += 28LL;
            }
            v36 = *(_QWORD *)(a1 + 264);
            if ( v36 )
            {
              *(_OWORD *)v34 = *(_OWORD *)v36;
              *(_QWORD *)(v34 + 16) = *(_QWORD *)(v36 + 16);
              *(_DWORD *)(v34 + 24) = *(_DWORD *)(v36 + 24);
              *((_QWORD *)v16 + 33) = v34;
            }
          }
          qword_140C133D8 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
          qword_140C133D0 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
          v37 = *(_DWORD *)(a1 + 124);
          dword_140C13310 |= v4 | 0x80;
          dword_140C13314 = v37;
          BgpFwReleaseLock();
          qword_140C133B0 = *(_QWORD *)(a1 + 232);
LABEL_49:
          dword_140C13310 |= 1u;
          v5 = 0;
          goto LABEL_50;
        }
        BgpFwFreeMemory(v29);
        v45 = v31;
      }
      else
      {
        v45 = v29;
      }
      BgpFwFreeMemory(v45);
      goto LABEL_35;
    }
    BgpFwReleaseLock();
LABEL_72:
    v5 = -1073741801;
    goto LABEL_59;
  }
  BgpFwReleaseLock();
LABEL_50:
  if ( v5 < 0 )
LABEL_59:
    BgpFwLibraryDestroy();
  return (unsigned int)v5;
}
