/*
 * XREFs of ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00E1224
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00D80BC (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C009E81C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z @ 0x1C00E04A4 (-CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z.c)
 *     ?SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z @ 0x1C00E0CD8 (-SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00E0E00 (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchQueryDmaData @ 0x1C00F6C1C (VidSchQueryDmaData.c)
 */

unsigned __int64 __fastcall VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v10; // r12
  BOOL v11; // r14d
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdi
  int v14; // r13d
  int v15; // ebx
  __int64 v16; // r9
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-D1h]
  unsigned int v21; // [rsp+30h] [rbp-C9h]
  int v22; // [rsp+38h] [rbp-C1h]
  unsigned int v23[2]; // [rsp+88h] [rbp-71h]
  unsigned int v24; // [rsp+88h] [rbp-71h]
  unsigned __int8 *v25; // [rsp+90h] [rbp-69h]
  __int64 v26[20]; // [rsp+98h] [rbp-61h] BYREF
  int v31; // [rsp+170h] [rbp+77h]

  v7 = a6;
  v25 = a3;
  *(_QWORD *)v23 = a4;
  v10 = a4;
  memset(v26, 0, 0x58uLL);
  *((_DWORD *)a2 + 330) = 0;
  VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
  if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 632LL), a5, a6, v26) >= 0
    && v26[1]
    && v26[0] )
  {
    v11 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(this, (struct _LIST_ENTRY *)v26[0])
       && a7
       && a7 >= LODWORD(v26[4])
       && a7 < HIDWORD(v26[4]);
    v12 = a6;
    v13 = a6;
    if ( v10 >= 0x48 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 && v11 )
        {
LABEL_34:
          *(_QWORD *)v23 = v10;
          v10 = a4;
          break;
        }
        if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 632LL), a5, v7, v26) < 0 )
        {
          if ( v14 )
          {
            v15 = 1;
LABEL_22:
            if ( v11 )
            {
              if ( v13 )
                v7 = --v13;
              else
                v15 = 1;
              goto LABEL_33;
            }
            v14 = 0;
LABEL_32:
            v7 = ++v12;
            goto LABEL_33;
          }
          v11 = 1;
        }
        else
        {
          v31 = HIDWORD(v26[5]) - LODWORD(v26[5]);
          v24 = HIDWORD(v26[4]) - LODWORD(v26[4]);
          if ( !(unsigned int)VIDMM_DMA_POOL::CheckIfDmaInformationPresent(
                                (VIDMM_DMA_POOL *)LODWORD(v26[7]),
                                a2,
                                a3,
                                v16,
                                v26[0],
                                v26[4],
                                HIDWORD(v26[4]) - LODWORD(v26[4]),
                                v26[7],
                                HIDWORD(v26[7]),
                                v26[6],
                                HIDWORD(v26[6]),
                                HIDWORD(v26[5]) - LODWORD(v26[5])) )
          {
            v17 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(this, (struct _LIST_ENTRY *)v26[0]);
            if ( v17 )
            {
              v18 = VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
                      this,
                      (struct _VIDMM_DMA_BUFFER *)v17,
                      v25,
                      v10,
                      v20,
                      v21,
                      v22,
                      v7,
                      v26[0],
                      v26[4],
                      v24,
                      v26[7],
                      HIDWORD(v26[7]),
                      v26[6],
                      HIDWORD(v26[6]),
                      v31);
              v25 += v18;
              v10 -= v18;
              ++*((_DWORD *)a2 + 330);
            }
          }
          if ( v14 )
            goto LABEL_22;
        }
        if ( v15 || !v13 )
        {
          v15 = 1;
          goto LABEL_32;
        }
        --v13;
        v14 = 1;
        v7 = v13;
LABEL_33:
        if ( v10 < 0x48 )
          goto LABEL_34;
      }
    }
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return v10 - *(_QWORD *)v23;
  }
  else
  {
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return 0LL;
  }
}
