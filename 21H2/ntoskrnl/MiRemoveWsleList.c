/*
 * XREFs of MiRemoveWsleList @ 0x14028EBD0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWriteWsle @ 0x1402C0ED0 (MiWriteWsle.c)
 *     MiIsDriverPage @ 0x14031C6C0 (MiIsDriverPage.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiLogRemoveWsleEvent @ 0x140530664 (MiLogRemoveWsleEvent.c)
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
  __int64 IsDriverPage; // rax
  __int64 v44; // rax
  __int64 **v45; // rcx
  __int64 v46; // r13
  __int64 **v47; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v49; // rax
  struct _LIST_ENTRY *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // [rsp+20h] [rbp-C8h]
  int v54; // [rsp+24h] [rbp-C4h]
  int v55; // [rsp+28h] [rbp-C0h]
  __int64 v56; // [rsp+30h] [rbp-B8h]
  __int64 v57; // [rsp+38h] [rbp-B0h]
  __int64 v58; // [rsp+40h] [rbp-A8h]
  __int64 v59; // [rsp+48h] [rbp-A0h]
  __int64 v60; // [rsp+50h] [rbp-98h]
  int *v61; // [rsp+58h] [rbp-90h]
  unsigned __int64 *v62; // [rsp+60h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v63; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int64 v67; // [rsp+F8h] [rbp+10h]
  unsigned __int64 v69; // [rsp+108h] [rbp+20h] BYREF
  va_list va; // [rsp+108h] [rbp+20h]
  va_list va1; // [rsp+110h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v69 = va_arg(va1, _QWORD);
  v3 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = *(_BYTE *)(a1 + 184) & 7;
  v56 = 0LL;
  v58 = 0LL;
  v6 = &dword_140C4F800;
  v59 = 0LL;
  if ( v5 != 2 )
    v6 = 0LL;
  v53 = 0;
  v61 = v6;
  result = 0LL;
  v60 = 0LL;
  v8 = 0LL;
  v57 = 0LL;
  v54 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( v69 )
  {
    v62 = (unsigned __int64 *)(a2 + 24);
    v13 = (_QWORD *)(a2 + 24);
    v14 = v69;
    v15 = &a3[-a2];
    v16 = 0;
    do
    {
      v17 = *((_BYTE *)v13 + (_QWORD)v15 - 23);
      if ( (v17 & 1) != 0 )
      {
        v18 = *v13;
        v56 = ++v10;
        if ( *v13 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v54 = 2;
          v60 = ((v18 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        }
        else
        {
          v54 = 1;
        }
        if ( (v17 & 2) != 0 )
        {
          v57 = ++v8;
          if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
            v58 = ++v11;
        }
        if ( (*(_BYTE *)(v3 + 184) & 7) == 4 )
        {
          if ( PsNtosImageBase
            && (v18 >= PsNtosImageBase && v18 < PsNtosImageEnd || v18 < PsHalImageEnd && v18 >= PsHalImageBase) )
          {
            v53 = ++v12;
          }
          else if ( (unsigned int)MiGetSystemRegionType(v18) == 12 )
          {
            IsDriverPage = MiIsDriverPage(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v8 = v57;
            v11 = v58;
            v12 = v53;
            v10 = v56;
            if ( IsDriverPage )
              ++v16;
          }
          else
          {
            v8 = v57;
            v11 = v58;
            v12 = v53;
            v10 = v56;
          }
        }
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    v19 = v54;
    v20 = v62;
    v21 = a3;
    v55 = v16;
    v22 = v69;
    if ( v54 )
    {
      if ( (*(_BYTE *)(v3 + 184) & 7) == 2 )
        v23 = (unsigned __int64 *)&unk_140C4F7C0;
      else
        v23 = (unsigned __int64 *)(v3 + 256);
      LockHandle.LockQueue.Lock = v23;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&LockHandle, v23, v11);
      if ( v57 )
      {
        *(_QWORD *)(v3 + 144) -= v57;
        if ( v58 )
          *(_QWORD *)(v3 + 128) -= v58;
      }
      if ( v53 )
        LODWORD(xmmword_140C4CD48) = xmmword_140C4CD48 - v53;
      if ( v55 )
        DWORD1(xmmword_140C4CD48) -= v55;
      v24 = 0LL;
      *(_QWORD *)(v3 + 136) -= v56;
      v25 = a2 - (_QWORD)a3;
      v67 = a2 - (_QWORD)a3;
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
          if ( v61 )
          {
            *((_QWORD *)v61 + 1) -= v56;
            if ( v59 )
              *((_QWORD *)v61 + 2) -= v59;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          do
          {
            if ( (v15[(_QWORD)v20 - 23] & 1) != 0 )
            {
              v41 = *v20;
              if ( v54 == 2 )
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
          return v60;
        }
        v19 = v54;
      }
      --*(_QWORD *)(v3 + 120);
      v27 = *v21;
      v28 = v59 + 1;
      if ( !v61 )
        v28 = v59;
      v59 = v28;
      if ( (v27 & 0xF) != 8 )
      {
        v59 = v28;
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
              v30 = v31 | 0x20;
              v49 = *((_QWORD *)&Flink->Flink + ((v32 >> 3) & 0x1FF));
              if ( (v49 & 0x20) == 0 )
                v30 = v31;
              v31 = v30;
              if ( (v49 & 0x42) != 0 )
                v31 = v30 | 0x42;
            }
          }
          v69 = v31;
          if ( (unsigned int)MiPteInShadowRange((unsigned __int64 *)va, v30)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v50 )
            {
              v51 = *((_QWORD *)&v50->Flink + (((unsigned __int64)va >> 3) & 0x1FF));
              v52 = v31 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v52 = v31;
              v31 = v52;
              if ( (v51 & 0x42) != 0 )
                v31 = v52 | 0x42;
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
          memset(&v63, 0, sizeof(v63));
          v37 = *(_QWORD *)(qword_140C4E648 + 8 * v36);
          v38 = *(_QWORD *)(v37 + 6848);
          if ( *(_QWORD *)(a1 + 96) < *(_QWORD *)(v38 + 56) )
          {
            v39 = (__int64 *)(a1 + 24);
            if ( *(_QWORD *)(a1 + 24) )
            {
              if ( *(__int64 **)(v37 + 6864) != v39 )
              {
                v63.LockQueue.Lock = &SpinLock;
                v63.LockQueue.Next = 0LL;
                KxAcquireQueuedSpinLock(&v63, &SpinLock, &SpinLock);
                if ( *(_BYTE *)(v38 + 53) || (v44 = *v39) == 0 )
                {
                  *(_BYTE *)(v38 + 54) = 1;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v63);
                }
                else
                {
                  if ( *(__int64 **)(v44 + 8) != v39
                    || (v45 = *(__int64 ***)(a1 + 32), *v45 != v39)
                    || (*v45 = (__int64 *)v44,
                        v46 = v37 + 6856,
                        *(_QWORD *)(v44 + 8) = v45,
                        v47 = *(__int64 ***)(v46 + 8),
                        *v47 != (__int64 *)v46) )
                  {
                    __fastfail(3u);
                  }
                  *v39 = v46;
                  *(_QWORD *)(a1 + 32) = v47;
                  *v47 = v39;
                  *(_QWORD *)(v46 + 8) = v39;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v63);
                }
              }
            }
          }
          v3 = a1;
        }
      }
      v25 = v67;
      goto LABEL_40;
    }
    return v60;
  }
  return result;
}
