/*
 * XREFs of PfpFlushBuffers @ 0x1406541D0
 * Callers:
 *     PfTLoggingWorker @ 0x14078CA20 (PfTLoggingWorker.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x1402C2DF4 (MmFreeAccessPfnBuffer.c)
 *     PfpIsProcessInfoPresent @ 0x1402C2E34 (PfpIsProcessInfoPresent.c)
 *     PfpReturnAccessBuffer @ 0x1402C2F78 (PfpReturnAccessBuffer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1403FDDE0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PfpFlushEventBuffers @ 0x140653EB0 (PfpFlushEventBuffers.c)
 *     PfpCopyEvent @ 0x140653FB0 (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x140654570 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x140654BC0 (PfTAcquireLogEntry.c)
 */

char PfpFlushBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  _SLIST_ENTRY *v1; // rdi
  void *v2; // r12
  PSLIST_ENTRY v3; // rax
  _SLIST_ENTRY *v4; // rcx
  _SLIST_ENTRY *v5; // r15
  _SLIST_ENTRY *v6; // rsi
  _SLIST_ENTRY *v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  _SLIST_ENTRY *v11; // r14
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ebp
  _SLIST_ENTRY *Next; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  _SLIST_ENTRY *v21; // rcx
  int v22; // [rsp+30h] [rbp-88h] BYREF
  __int128 v23; // [rsp+38h] [rbp-80h] BYREF
  __int128 v24; // [rsp+48h] [rbp-70h] BYREF
  __int128 v25; // [rsp+58h] [rbp-60h] BYREF
  __int64 Src; // [rsp+68h] [rbp-50h] BYREF
  int v27; // [rsp+70h] [rbp-48h]
  __int64 v28; // [rsp+74h] [rbp-44h]
  int v29; // [rsp+7Ch] [rbp-3Ch]

  v23 = 0LL;
  DWORD2(v23) = 1;
  v0 = 0LL;
  v25 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v24 = 0LL;
  v22 = PfpFlushEventBuffers();
  if ( v22 < 0 )
    return 0;
  v3 = RtlpInterlockedFlushSList(&stru_140CEC0C0);
  if ( !v3 )
  {
LABEL_16:
    v14 = v22;
    goto LABEL_17;
  }
  do
  {
    v4 = v3;
    v5 = v0;
    v3 = v3->Next;
    v4->Next = v0;
    v0 = v4;
  }
  while ( v3 );
  while ( 1 )
  {
    v6 = v0;
    v28 = 0LL;
    v7 = v0;
    v0 = v5;
    v8 = MEMORY[0xFFFFF78000000004] * HIDWORD(*((_QWORD *)&v6[1].Next + 1));
    v9 = (MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*((_QWORD *)&v6[1].Next + 1)) >> 24;
    HIDWORD(v28) = dword_140C5021C
                 + ((((MEMORY[0xFFFFF78000000004] * ((unsigned __int64)v6[1].Next >> 32)) << 8)
                   + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v6[1].Next) >> 24)) >> 10);
    v27 = HIDWORD(v28);
    v29 = dword_140C5021C + (((v8 << 8) + v9) >> 10);
    Src = 163851LL;
    PfpCopyEvent(&Src);
    if ( *((int *)&v6->Next + 2) > 1
      || (*((_QWORD *)&v24 + 1) = *((unsigned int *)&v6->Next + 3),
          *(_QWORD *)&v24 = 94215LL,
          PfpCopyEvent((__int64 *)&v24),
          *((int *)&v6->Next + 2) > 1) )
    {
      Next = v6[2].Next;
      if ( (unsigned __int64)Next <= *((_QWORD *)&v6[2].Next + 1) )
      {
        while ( 1 )
        {
          v17 = (unsigned __int64)Next->Next;
          v22 = 0;
          v18 = PfTAcquireLogEntry(&unk_140C4FB18, &v22, 1LL);
          if ( !v18 )
            break;
          v19 = (unsigned __int64 *)(16LL * (unsigned int)v22 + ((v18 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
          v20 = *v19 & 0xFFFFFFFFFFFC6007uLL;
          v19[1] = v17;
          *v19 = v20 | 0x6007;
          Next = (_SLIST_ENTRY *)((char *)Next + 8);
          v22 = 0;
          if ( (unsigned __int64)Next > *((_QWORD *)&v6[2].Next + 1) )
            goto LABEL_13;
        }
        v22 = -1073741670;
        v6[2].Next = Next;
      }
      goto LABEL_12;
    }
    v10 = *((_QWORD *)&v6[3].Next + 1);
    v11 = v6[3].Next;
    if ( v10 == 1 )
    {
      LODWORD(v10) = LODWORD(v6[4].Next) + 1;
    }
    else if ( v10 && !PfpIsProcessInfoPresent(*((_QWORD *)&v6[3].Next + 1)) )
    {
      goto LABEL_14;
    }
    v2 = &v6[4].Next + 1;
    v1 = (_SLIST_ENTRY *)((char *)v6 + 72);
    if ( (_SLIST_ENTRY *)(&v6[4].Next + 1) < v6[2].Next )
      break;
LABEL_12:
    if ( v22 < 0 )
    {
      v14 = v22;
      goto LABEL_28;
    }
LABEL_13:
    v12 = (unsigned int)*((_QWORD *)&v6[1].Next + 1);
    v13 = HIDWORD(*((_QWORD *)&v6[1].Next + 1));
    *(_QWORD *)&v25 = 147463LL;
    *((_QWORD *)&v25 + 1) = dword_140C5021C
                          + (unsigned int)((((MEMORY[0xFFFFF78000000004] * v13) << 8)
                                          + (((unsigned __int64)MEMORY[0xFFFFF78000000004] * v12) >> 24)) >> 10);
    PfpCopyEvent((__int64 *)&v25);
LABEL_14:
    MmFreeAccessPfnBuffer(v7, 0);
    if ( !v5 )
      goto LABEL_16;
    v5 = v5->Next;
  }
  while ( PfpLogPageAccess(v10, (_DWORD)v1, (unsigned int)&v23, (_DWORD)v11, 0) )
  {
    v1 = (_SLIST_ENTRY *)((char *)v1 + 8);
    if ( v1 >= v6[2].Next )
      goto LABEL_12;
  }
  v14 = -1073741432;
LABEL_28:
  if ( *((int *)&v6->Next + 2) <= 1 )
  {
    memmove(v2, v1, ((char *)v6[2].Next - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v6[2].Next = (_SLIST_ENTRY *)((char *)v6[2].Next - 8 * (((char *)v1 - (_BYTE *)v2) >> 3));
  }
  PfpReturnAccessBuffer(v6);
LABEL_17:
  if ( v14 >= 0 )
    return 1;
  while ( v0 )
  {
    v21 = v0;
    v0 = v0->Next;
    PfpReturnAccessBuffer(v21);
  }
  return 0;
}
