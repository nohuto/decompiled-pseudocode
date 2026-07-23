/*
 * XREFs of IopConnectInterrupt @ 0x14074A9DC
 * Callers:
 *     IoConnectInterruptEx @ 0x14074A3E0 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x14074A664 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x1407B3C74 (IopConnectLineBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1407B6090 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeGetProcessorIndexFromNumber @ 0x140205810 (KeGetProcessorIndexFromNumber.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KeFreeInterrupt @ 0x140373ADC (KeFreeInterrupt.c)
 *     KeInitializeInterruptEx @ 0x1403743AC (KeInitializeInterruptEx.c)
 *     KeAllocateInterrupt @ 0x1403744EC (KeAllocateInterrupt.c)
 *     KeConnectInterrupt @ 0x14037459C (KeConnectInterrupt.c)
 *     KeVerifyGroupAffinity @ 0x140374F84 (KeVerifyGroupAffinity.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopDestroyActiveConnectBlock @ 0x14074AE60 (IopDestroyActiveConnectBlock.c)
 *     PnpTraceInterruptConnection @ 0x14074AF60 (PnpTraceInterruptConnection.c)
 *     IopReleaseActiveConnectLock @ 0x14074AFCC (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14074AFF0 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x14074B014 (IopInitializeActiveConnectBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14089D120 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14089D280 (IopDestroyPassiveInterruptBlock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopConnectInterrupt(
        _QWORD *a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(__int64 a1, __int64 a2),
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  __m128i v13; // xmm0
  int v14; // esi
  unsigned __int64 v15; // r12
  char v16; // al
  unsigned __int64 v18; // rsi
  char *PoolWithTag; // rax
  char *v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  char v23; // dl
  __m128i v24; // xmm0
  __int64 v25; // rax
  unsigned __int8 v26; // cl
  PSLIST_ENTRY Interrupt; // rax
  _DWORD *v28; // rbx
  int v29; // ebx
  __int64 v30; // rcx
  char *v31; // rbx
  unsigned __int64 v32; // r15
  _OWORD *v33; // rax
  _OWORD *v34; // rcx
  __int64 v35; // rbx
  __int128 v36; // xmm1
  PSLIST_ENTRY *v38; // rdi
  __int64 v39; // rcx
  _WORD *v40; // rcx
  __int64 v41; // rcx
  unsigned __int16 *v42; // rsi
  __int64 v43; // rdx
  _WORD *v44; // rcx
  __int64 v45; // rcx
  _WORD *v46; // rcx
  __int64 v47; // rcx
  int v48; // [rsp+70h] [rbp-98h]
  char v49; // [rsp+88h] [rbp-80h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v51; // [rsp+90h] [rbp-78h]
  unsigned int v52; // [rsp+94h] [rbp-74h]
  ULONG ProcessorIndexFromNumber; // [rsp+98h] [rbp-70h]
  __m128i v54; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-58h]
  __int64 v56; // [rsp+B8h] [rbp-50h]
  _BYTE v57[128]; // [rsp+C8h] [rbp-40h] BYREF
  bool v61; // [rsp+190h] [rbp+88h]
  char v62; // [rsp+190h] [rbp+88h]
  char v63; // [rsp+1A0h] [rbp+98h]
  unsigned __int8 v64; // [rsp+1A8h] [rbp+A0h]

  memset(v57, 0, 0x50uLL);
  *a1 = 0LL;
  ProcNumber = 0;
  v63 = 0;
  IopInitializeActiveConnectBlock(a11, v57);
  v13 = *(__m128i *)(a11 + 32);
  v14 = *(_DWORD *)(a11 + 24);
  v52 = *(_DWORD *)(a11 + 12);
  v54 = v13;
  v51 = v14;
  v15 = v13.m128i_i64[0] & qword_140CFC838[(unsigned __int16)_mm_extract_epi16(v13, 4)];
  v16 = *(_BYTE *)(a11 + 16);
  v54.m128i_i64[0] = v15;
  v49 = v16;
  if ( !*(_DWORD *)(a11 + 8)
    && !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])(0LL, *(unsigned int *)(a11 + 64))
    && (unsigned int)(*(_DWORD *)(a11 + 20) - 3) <= 1 )
  {
    v63 = 1;
    v51 = 0;
  }
  v61 = a8 == 0;
  if ( KeVerifyGroupAffinity((__int64)&v54, 0)
    && (v18 = (0x101010101010101LL
             * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        (_BYTE)v18) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * (char)v18 + 496), 0x6E696F49u);
    v20 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * (char)v18 + 496));
      KeInitializeDpc((PRKDPC)(v20 + 432), 0LL, 0LL);
      v21 = v51;
      *((_OWORD *)v20 + 1) = *(_OWORD *)a11;
      v22 = (__int64)v20;
      v23 = 0;
      *((_OWORD *)v20 + 2) = *(_OWORD *)(a11 + 16);
      ProcNumber.Reserved = 0;
      *((_OWORD *)v20 + 3) = *(_OWORD *)(a11 + 32);
      *((_OWORD *)v20 + 4) = *(_OWORD *)(a11 + 48);
      *((_OWORD *)v20 + 5) = *(_OWORD *)(a11 + 64);
      v24 = v54;
      *((_OWORD *)v20 + 6) = *(_OWORD *)(a11 + 80);
      *((_DWORD *)v20 + 10) = v21;
      *((__m128i *)v20 + 3) = v24;
      if ( a7 )
        v22 = a7;
      *((_QWORD *)v20 + 1) = v15;
      v20[400] = v61;
      v25 = (__int64)(v20 + 408);
      if ( a8 )
        v25 = 0LL;
      v56 = v22;
      v55 = v25;
      v26 = 0;
      v62 = 0;
      v64 = 0;
      ProcNumber.Group = _mm_extract_epi16(v24, 4);
      if ( (char)v18 > 0 )
      {
        do
        {
          if ( _bittest64((const __int64 *)&v15, v26) )
          {
            ProcNumber.Number = v26;
            ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
            Interrupt = KeAllocateInterrupt((_SLIST_HEADER *)KiProcessorBlock[ProcessorIndexFromNumber]);
            v28 = Interrupt;
            if ( !Interrupt )
            {
              v29 = -1073741670;
              goto LABEL_33;
            }
            memset(Interrupt, 0, 0x120uLL);
            KeInitializeInterruptEx(
              v28,
              a3,
              a4,
              a5,
              a6,
              v56,
              v55,
              v52,
              v49,
              a8,
              v51,
              a9,
              ProcessorIndexFromNumber,
              v48,
              v63,
              (__int64)(v20 + 16));
            v26 = v64;
            *(_QWORD *)&v20[8 * v62 + 496] = v28;
            v23 = ++v62;
          }
          v64 = ++v26;
        }
        while ( v23 < (char)v18 );
      }
      if ( !a8 )
      {
        v29 = IopAllocatePassiveInterruptBlock(v20 + 16, &v54);
        if ( v29 < 0 )
          goto LABEL_33;
      }
      IopAcquireActiveConnectLock(v57);
      v29 = KeConnectInterrupt((__int64 *)v20 + 62, v18, (__int64)(v20 + 16));
      IopReleaseActiveConnectLock(v57);
      if ( v29 < 0 )
      {
        if ( !a8 )
          IopDestroyPassiveInterruptBlock(v52);
      }
      else
      {
        if ( a2 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
          if ( !v30 || (*(_DWORD *)(v30 + 396) & 0x20000) != 0 )
          {
            IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
            v39 = *(_QWORD *)(a2 + 8);
            if ( v39 )
            {
              IoAddTriageDumpDataBlock(v39, (PVOID)(unsigned int)*(__int16 *)(v39 + 2));
              v40 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
              if ( *v40 )
              {
                IoAddTriageDumpDataBlock((ULONG)v40, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
              }
            }
            v41 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
            if ( v41 )
            {
              v42 = (unsigned __int16 *)(v41 + 40);
              IoAddTriageDumpDataBlock(v41, (PVOID)0x310);
              if ( *v42 )
              {
                IoAddTriageDumpDataBlock((ULONG)v42, (PVOID)2);
                IoAddTriageDumpDataBlock(*((_QWORD *)v42 + 1), (PVOID)*v42);
              }
              v43 = *(_QWORD *)(a2 + 312);
              v44 = (_WORD *)(*(_QWORD *)(v43 + 40) + 56LL);
              if ( *v44 )
              {
                IoAddTriageDumpDataBlock((ULONG)v44, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
                v43 = *(_QWORD *)(a2 + 312);
              }
              v45 = *(_QWORD *)(*(_QWORD *)(v43 + 40) + 16LL);
              if ( v45 )
              {
                v46 = (_WORD *)(v45 + 56);
                if ( *v46 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v46, (PVOID)2);
                  v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v47 + 64), (PVOID)*(unsigned __int16 *)(v47 + 56));
                }
              }
            }
            KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
          }
          if ( (char)v18 > 0 )
          {
            v31 = v20 + 496;
            v32 = (0x101010101010101LL
                 * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            do
            {
              ObfReferenceObjectWithTag((PVOID)a2, 0x54706E50u);
              *(_QWORD *)(*(_QWORD *)v31 + 280LL) = a2;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 312) + 96LL));
              v31 += 8;
              --v32;
            }
            while ( v32 );
          }
        }
        v33 = (_OWORD *)*((_QWORD *)v20 + 62);
        v34 = v20 + 112;
        v35 = 2LL;
        do
        {
          *v34 = *v33;
          v34[1] = v33[1];
          v34[2] = v33[2];
          v34[3] = v33[3];
          v34[4] = v33[4];
          v34[5] = v33[5];
          v34[6] = v33[6];
          v34 += 8;
          v36 = v33[7];
          v33 += 8;
          *(v34 - 1) = v36;
          --v35;
        }
        while ( v35 );
        v29 = 0;
        *v34 = *v33;
        v34[1] = v33[1];
        LOBYTE(v34) = 1;
        *a1 = v20;
        PnpTraceInterruptConnection(v34);
      }
      if ( v29 < 0 )
      {
LABEL_33:
        if ( (char)v18 > 0 )
        {
          v38 = (PSLIST_ENTRY *)(v20 + 496);
          do
          {
            if ( *v38 )
              KeFreeInterrupt(*v38);
            ++v38;
            --v18;
          }
          while ( v18 );
        }
        ExFreePoolWithTag(v20, 0x6E696F49u);
      }
    }
    else
    {
      v29 = -1073741670;
    }
  }
  else
  {
    v29 = -1073741811;
  }
  IopDestroyActiveConnectBlock(v57);
  return (unsigned int)v29;
}
