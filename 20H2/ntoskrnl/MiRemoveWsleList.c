/*
 * XREFs of MiRemoveWsleList @ 0x14029DF00
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiIsDriverPage @ 0x140296FB0 (MiIsDriverPage.c)
 *     MiWriteWsle @ 0x14030D2E4 (MiWriteWsle.c)
 *     MiLogRemoveWsleEvent @ 0x14052EB64 (MiLogRemoveWsleEvent.c)
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
  int v12; // r9d
  unsigned __int64 *v13; // rbx
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
  unsigned __int64 v26; // rdx
  char v27; // r12
  __int64 v28; // rax
  unsigned __int8 v29; // r12
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r8
  __int64 *v33; // r8
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 *v39; // rbx
  __int64 v40; // r8
  unsigned __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 **v48; // rcx
  __int64 v49; // r13
  __int64 **v50; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  int v57; // [rsp+20h] [rbp-C8h]
  int v58; // [rsp+24h] [rbp-C4h]
  int v59; // [rsp+28h] [rbp-C0h]
  __int64 v60; // [rsp+30h] [rbp-B8h]
  __int64 v61; // [rsp+38h] [rbp-B0h]
  __int64 v62; // [rsp+40h] [rbp-A8h]
  __int64 v63; // [rsp+48h] [rbp-A0h]
  __int64 v64; // [rsp+50h] [rbp-98h]
  int *v65; // [rsp+58h] [rbp-90h]
  unsigned __int64 *v66; // [rsp+60h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v67; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int64 v71; // [rsp+F8h] [rbp+10h]
  unsigned __int64 v73; // [rsp+108h] [rbp+20h] BYREF
  va_list va; // [rsp+108h] [rbp+20h]
  va_list va1; // [rsp+110h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v73 = va_arg(va1, _QWORD);
  v3 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = *(_BYTE *)(a1 + 184) & 7;
  v60 = 0LL;
  v62 = 0LL;
  v6 = &dword_140C4F680;
  v63 = 0LL;
  if ( v5 != 2 )
    v6 = 0LL;
  v57 = 0;
  v65 = v6;
  result = 0LL;
  v64 = 0LL;
  v8 = 0LL;
  v61 = 0LL;
  v58 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( v73 )
  {
    v66 = (unsigned __int64 *)(a2 + 24);
    v13 = (unsigned __int64 *)(a2 + 24);
    v14 = v73;
    v15 = &a3[-a2];
    v16 = 0;
    do
    {
      v17 = *((_BYTE *)v13 + (_QWORD)v15 - 23);
      if ( (v17 & 1) != 0 )
      {
        v18 = *v13;
        v60 = ++v10;
        if ( *v13 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v58 = 2;
          v64 = ((v18 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        }
        else
        {
          v58 = 1;
        }
        if ( (v17 & 2) != 0 )
        {
          v61 = ++v8;
          if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
            v62 = ++v11;
        }
        if ( (*(_BYTE *)(v3 + 184) & 7) == 4 )
        {
          if ( PsNtosImageBase
            && (v18 >= (unsigned __int64)PsNtosImageBase && v18 < PsNtosImageEnd
             || v18 < PsHalImageEnd && v18 >= (unsigned __int64)PsHalImageBase) )
          {
            v57 = ++v12;
          }
          else if ( (unsigned int)MiGetSystemRegionType(v18) == 12 )
          {
            v46 = MiIsDriverPage(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v43, v44, v45);
            v8 = v61;
            v11 = v62;
            v12 = v57;
            v10 = v60;
            if ( v46 )
              ++v16;
          }
          else
          {
            v8 = v61;
            v11 = v62;
            v12 = v57;
            v10 = v60;
          }
        }
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    v19 = v58;
    v20 = v66;
    v21 = a3;
    v59 = v16;
    v22 = v73;
    if ( v58 )
    {
      if ( (*(_BYTE *)(v3 + 184) & 7) == 2 )
        v23 = (unsigned __int64 *)&unk_140C4F640;
      else
        v23 = (unsigned __int64 *)(v3 + 256);
      LockHandle.LockQueue.Lock = v23;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v23);
      if ( v61 )
      {
        *(_QWORD *)(v3 + 144) -= v61;
        if ( v62 )
          *(_QWORD *)(v3 + 128) -= v62;
      }
      if ( v57 )
        LODWORD(xmmword_140C4CBC8) = xmmword_140C4CBC8 - v57;
      if ( v59 )
        DWORD1(xmmword_140C4CBC8) -= v59;
      v24 = 0LL;
      *(_QWORD *)(v3 + 136) -= v60;
      v25 = a2 - (_QWORD)a3;
      v71 = a2 - (_QWORD)a3;
      while ( 1 )
      {
        if ( (v21[v25 + 1 + (_QWORD)v15] & 1) == 0 )
          goto LABEL_40;
        v26 = *(_QWORD *)&v21[v25 + 24];
        if ( v19 != 1 )
          break;
        if ( (*(_BYTE *)(v3 + 184) & 7) == 0 )
        {
          v27 = *v21;
          goto LABEL_28;
        }
LABEL_40:
        ++v24;
        v21 += 8;
        if ( v24 >= v22 )
        {
          if ( v65 )
          {
            *((_QWORD *)v65 + 1) -= v60;
            if ( v63 )
              *((_QWORD *)v65 + 2) -= v63;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          do
          {
            if ( (v15[(_QWORD)v20 - 23] & 1) != 0 )
            {
              v41 = *v20;
              if ( v58 == 2 )
              {
                v42 = *(unsigned __int8 *)(((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v42 & 1) != 0 )
                {
                  LOBYTE(v40) = 10;
                  MiWriteWsle(v42, *v20, v40);
                }
              }
              if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
                MiLogRemoveWsleEvent(v41, *(_BYTE *)(v3 + 184) & 7);
            }
            ++v20;
            --v22;
          }
          while ( v22 );
          return v64;
        }
        v19 = v58;
      }
      --*(_QWORD *)(v3 + 120);
      v27 = *v21;
      v28 = v63 + 1;
      if ( !v65 )
        v28 = v63;
      v63 = v28;
      if ( (v27 & 0xF) != 8 )
      {
        v63 = v28;
LABEL_28:
        v29 = v27 & 0xF;
        if ( v26 < 0xFFFFF68000000000uLL || v26 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v30 = (v26 >> 18) & 0x3FFFFFF8;
          v31 = *(_QWORD *)(v30 - 0x904C0000000LL);
          v32 = v30 - 0x904C0000000LL;
          if ( (unsigned __int64)(v30 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
            && v32 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v52 = v31 | 0x20;
              v53 = *((_QWORD *)&Flink->Flink + ((v32 >> 3) & 0x1FF));
              if ( (v53 & 0x20) == 0 )
                v52 = v31;
              v31 = v52;
              if ( (v53 & 0x42) != 0 )
                v31 = v52 | 0x42;
            }
          }
          v73 = v31;
          if ( MiPteInShadowRange((unsigned __int64)va)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v54 )
            {
              v55 = *((_QWORD *)&v54->Flink + (((unsigned __int64)va >> 3) & 0x1FF));
              v56 = v31 | 0x20;
              if ( (v55 & 0x20) == 0 )
                v56 = v31;
              v31 = v56;
              if ( (v55 & 0x42) != 0 )
                v31 = v56 | 0x42;
            }
          }
          v33 = (__int64 *)(48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v34 = *v33;
          v35 = ((unsigned __int64)*v33 >> 14) & 7;
          if ( (((unsigned __int64)*v33 >> 4) & 0x3FF) != 0 )
          {
            if ( v29 == v35 )
            {
              *v33 = v34 ^ ((unsigned __int16)v34 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v33 >> 4) & 0x3FF) - 1))) & 0x3FF0;
            }
            else if ( v29 > v35 )
            {
              *v33 = v34 ^ ((unsigned int)v34 ^ (v29 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
        }
        --*(_QWORD *)(v3 + 8LL * v29 + 40);
        if ( v29 == 7 )
        {
          v36 = *(unsigned __int16 *)(v3 + 174);
          memset(&v67, 0, sizeof(v67));
          v37 = *(_QWORD *)(qword_140C4E4C8 + 8 * v36);
          v38 = *(_QWORD *)(v37 + 6848);
          if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v38 + 56) )
          {
            v39 = (__int64 *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 24) )
            {
              if ( *(__int64 **)(v37 + 6864) != v39 )
              {
                v67.LockQueue.Lock = &qword_140C4ECC0;
                v67.LockQueue.Next = 0LL;
                KxAcquireQueuedSpinLock((__int64)&v67, (volatile __int64 *)&qword_140C4ECC0);
                if ( *(_BYTE *)(v38 + 53) || (v47 = *v39) == 0 )
                {
                  *(_BYTE *)(v38 + 54) = 1;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
                }
                else
                {
                  if ( *(__int64 **)(v47 + 8) != v39
                    || (v48 = *(__int64 ***)(a1 + 32), *v48 != v39)
                    || (*v48 = (__int64 *)v47,
                        v49 = v37 + 6856,
                        *(_QWORD *)(v47 + 8) = v48,
                        v50 = *(__int64 ***)(v49 + 8),
                        *v50 != (__int64 *)v49) )
                  {
                    __fastfail(3u);
                  }
                  *v39 = v49;
                  *(_QWORD *)(a1 + 32) = v50;
                  *v50 = v39;
                  *(_QWORD *)(v49 + 8) = v39;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
                }
              }
            }
          }
          v3 = a1;
        }
      }
      v25 = v71;
      goto LABEL_40;
    }
    return v64;
  }
  return result;
}
