/*
 * XREFs of MiRemoveWsleList @ 0x14020BD70
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWriteWsle @ 0x14023F36C (MiWriteWsle.c)
 *     MiIsDriverPage @ 0x140327410 (MiIsDriverPage.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiLogRemoveWsleEvent @ 0x1405308A4 (MiLogRemoveWsleEvent.c)
 */

__int64 MiRemoveWsleList(__int64 a1, __int64 a2, char *a3, ...)
{
  __int64 v3; // r13
  char v5; // al
  int *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rbp
  char *v15; // r14
  int v16; // esi
  char v17; // cl
  unsigned __int64 v18; // r12
  int v19; // ebx
  unsigned __int64 *v20; // rdi
  char *v21; // r15
  unsigned __int64 v22; // rsi
  unsigned __int64 *v23; // rdx
  unsigned __int64 v24; // rbp
  __int64 v25; // r12
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdx
  char v28; // r12
  __int64 v29; // rax
  unsigned __int8 v30; // r12
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  __int64 *v34; // r8
  __int64 v35; // rdx
  unsigned __int8 v36; // al
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 *v40; // rbx
  __int64 v41; // r8
  unsigned __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 IsDriverPage; // rax
  __int64 v45; // rax
  __int64 **v46; // rcx
  __int64 v47; // r13
  __int64 **v48; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  struct _LIST_ENTRY *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned int v55; // [rsp+20h] [rbp-C8h]
  int v56; // [rsp+24h] [rbp-C4h]
  int v57; // [rsp+28h] [rbp-C0h]
  __int64 v58; // [rsp+30h] [rbp-B8h]
  __int64 v59; // [rsp+38h] [rbp-B0h]
  __int64 v60; // [rsp+40h] [rbp-A8h]
  __int64 v61; // [rsp+48h] [rbp-A0h]
  __int64 v62; // [rsp+50h] [rbp-98h]
  int *v63; // [rsp+58h] [rbp-90h]
  unsigned __int64 *v64; // [rsp+60h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v65; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int64 v69; // [rsp+F8h] [rbp+10h]
  unsigned __int64 v71; // [rsp+108h] [rbp+20h] BYREF
  va_list va; // [rsp+108h] [rbp+20h]
  va_list va1; // [rsp+110h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v71 = va_arg(va1, _QWORD);
  v3 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = *(_BYTE *)(a1 + 184) & 7;
  v58 = 0LL;
  v60 = 0LL;
  v6 = &dword_140C4F840;
  v61 = 0LL;
  if ( v5 != 2 )
    v6 = 0LL;
  v55 = 0;
  v63 = v6;
  result = 0LL;
  v62 = 0LL;
  v8 = 0LL;
  v59 = 0LL;
  v56 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( v71 )
  {
    v64 = (unsigned __int64 *)(a2 + 24);
    v13 = (_QWORD *)(a2 + 24);
    v14 = v71;
    v15 = &a3[-a2];
    v16 = 0;
    do
    {
      v17 = *((_BYTE *)v13 + (_QWORD)v15 - 23);
      if ( (v17 & 1) != 0 )
      {
        v18 = *v13;
        v58 = ++v10;
        if ( *v13 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v56 = 2;
          v62 = ((v18 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        }
        else
        {
          v56 = 1;
        }
        if ( (v17 & 2) != 0 )
        {
          v59 = ++v8;
          if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
            v60 = ++v11;
        }
        if ( (*(_BYTE *)(v3 + 184) & 7) == 4 )
        {
          if ( PsNtosImageBase
            && (v18 >= (unsigned __int64)PsNtosImageBase && v18 < PsNtosImageEnd
             || v18 < PsHalImageEnd && v18 >= (unsigned __int64)PsHalImageBase) )
          {
            v12 = (unsigned int)(v12 + 1);
            v55 = v12;
          }
          else if ( (unsigned int)MiGetSystemRegionType(v18) == 12 )
          {
            IsDriverPage = MiIsDriverPage(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v8 = v59;
            v11 = v60;
            v12 = v55;
            v10 = v58;
            if ( IsDriverPage )
              ++v16;
          }
          else
          {
            v8 = v59;
            v11 = v60;
            v12 = v55;
            v10 = v58;
          }
        }
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    v19 = v56;
    v20 = v64;
    v21 = a3;
    v57 = v16;
    v22 = v71;
    if ( v56 )
    {
      if ( (*(_BYTE *)(v3 + 184) & 7) == 2 )
        v23 = (unsigned __int64 *)&unk_140C4F800;
      else
        v23 = (unsigned __int64 *)(v3 + 256);
      LockHandle.LockQueue.Lock = v23;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&LockHandle, v23, v11, v12);
      if ( v59 )
      {
        *(_QWORD *)(v3 + 144) -= v59;
        if ( v60 )
          *(_QWORD *)(v3 + 128) -= v60;
      }
      if ( v55 )
        LODWORD(xmmword_140C4CD88) = xmmword_140C4CD88 - v55;
      if ( v57 )
        DWORD1(xmmword_140C4CD88) -= v57;
      v24 = 0LL;
      *(_QWORD *)(v3 + 136) -= v58;
      v25 = a2 - (_QWORD)a3;
      v69 = a2 - (_QWORD)a3;
      while ( 1 )
      {
        v26 = 0xFFFFF6FB7DBED000uLL;
        if ( (v21[v25 + 1 + (_QWORD)v15] & 1) == 0 )
          goto LABEL_40;
        v27 = *(_QWORD *)&v21[v25 + 24];
        if ( v19 != 1 )
          break;
        if ( (*(_BYTE *)(v3 + 184) & 7) == 0 )
        {
          v28 = *v21;
          goto LABEL_28;
        }
LABEL_40:
        ++v24;
        v21 += 8;
        if ( v24 >= v22 )
        {
          if ( v63 )
          {
            *((_QWORD *)v63 + 1) -= v58;
            if ( v61 )
              *((_QWORD *)v63 + 2) -= v61;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          do
          {
            if ( (v15[(_QWORD)v20 - 23] & 1) != 0 )
            {
              v42 = *v20;
              if ( v56 == 2 )
              {
                v43 = *(unsigned __int8 *)(((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v43 & 1) != 0 )
                {
                  LOBYTE(v41) = 10;
                  MiWriteWsle(v43, *v20, v41);
                }
              }
              if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
                MiLogRemoveWsleEvent(v42, *(_BYTE *)(v3 + 184) & 7);
            }
            ++v20;
            --v22;
          }
          while ( v22 );
          return v62;
        }
        v19 = v56;
      }
      --*(_QWORD *)(v3 + 120);
      v28 = *v21;
      v29 = v61 + 1;
      if ( !v63 )
        v29 = v61;
      v61 = v29;
      if ( (v28 & 0xF) != 8 )
      {
        v61 = v29;
LABEL_28:
        v30 = v28 & 0xF;
        if ( v27 < 0xFFFFF68000000000uLL || v27 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v31 = (v27 >> 18) & 0x3FFFFFF8;
          v32 = *(_QWORD *)(v31 - 0x904C0000000LL);
          v33 = v31 - 0x904C0000000LL;
          if ( (unsigned __int64)(v31 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
            && v33 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v50 = v32 | 0x20;
              v51 = *((_QWORD *)&Flink->Flink + ((v33 >> 3) & 0x1FF));
              if ( (v51 & 0x20) == 0 )
                v50 = v32;
              v32 = v50;
              if ( (v51 & 0x42) != 0 )
                v32 = v50 | 0x42;
            }
          }
          v71 = v32;
          if ( (unsigned int)MiPteInShadowRange((unsigned __int64 *)va)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v32 & 1) != 0
            && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            v52 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v52 )
            {
              v53 = *((_QWORD *)&v52->Flink + (((unsigned __int64)va >> 3) & 0x1FF));
              v54 = v32 | 0x20;
              if ( (v53 & 0x20) == 0 )
                v54 = v32;
              v32 = v54;
              if ( (v53 & 0x42) != 0 )
                v32 = v54 | 0x42;
            }
          }
          v34 = (__int64 *)(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v35 = *v34;
          v36 = ((unsigned __int64)*v34 >> 14) & 7;
          if ( (((unsigned __int64)*v34 >> 4) & 0x3FF) != 0 )
          {
            if ( v30 == v36 )
            {
              *v34 = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v34 >> 4) & 0x3FF) - 1))) & 0x3FF0;
            }
            else if ( v30 > v36 )
            {
              *v34 = v35 ^ ((unsigned int)v35 ^ (v30 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
        }
        --*(_QWORD *)(v3 + 8LL * v30 + 40);
        if ( v30 == 7 )
        {
          v37 = *(unsigned __int16 *)(v3 + 174);
          memset(&v65, 0, sizeof(v65));
          v38 = *(_QWORD *)(qword_140C4E688 + 8 * v37);
          v39 = *(_QWORD *)(v38 + 6848);
          if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v39 + 56) )
          {
            v40 = (__int64 *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 24) )
            {
              if ( *(__int64 **)(v38 + 6864) != v40 )
              {
                v65.LockQueue.Lock = &SpinLock;
                v65.LockQueue.Next = 0LL;
                KxAcquireQueuedSpinLock(&v65, &SpinLock, &SpinLock, v26);
                if ( *(_BYTE *)(v39 + 53) || (v45 = *v40) == 0 )
                {
                  *(_BYTE *)(v39 + 54) = 1;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v65);
                }
                else
                {
                  if ( *(__int64 **)(v45 + 8) != v40
                    || (v46 = *(__int64 ***)(a1 + 32), *v46 != v40)
                    || (*v46 = (__int64 *)v45,
                        v47 = v38 + 6856,
                        *(_QWORD *)(v45 + 8) = v46,
                        v48 = *(__int64 ***)(v47 + 8),
                        *v48 != (__int64 *)v47) )
                  {
                    __fastfail(3u);
                  }
                  *v40 = v47;
                  *(_QWORD *)(a1 + 32) = v48;
                  *v48 = v40;
                  *(_QWORD *)(v47 + 8) = v40;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v65);
                }
              }
            }
          }
          v3 = a1;
        }
      }
      v25 = v69;
      goto LABEL_40;
    }
    return v62;
  }
  return result;
}
