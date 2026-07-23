/*
 * XREFs of MiObtainSessionVa @ 0x140232364
 * Callers:
 *     MiReservePoolMemory @ 0x140231024 (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x140231448 (MiExpandPtes.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x140267370 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainSessionVa(unsigned int a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  struct _KTHREAD *CurrentThread; // r15
  __int64 ClearBitsAndSet; // rax
  __int64 v19; // rsi
  ULONG_PTR v20; // r14
  struct _KTHREAD *v21; // rbx
  unsigned int v22; // edx
  unsigned __int8 v23; // r12
  unsigned int v24; // r8d
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned __int64 *v34; // r11
  __int64 v35; // rax
  unsigned int v36; // r10d
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r10
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rdx
  unsigned __int64 *v44; // r9
  unsigned int v45; // r9d
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  ULONG_PTR v49; // rsi
  struct _KTHREAD *v50; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v52; // r14
  unsigned int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rdx
  unsigned __int64 v57; // [rsp+30h] [rbp-48h]

  v1 = a1;
  v2 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  v4 = v2 + 832;
  v5 = *(_QWORD *)(v2 + 832);
  v6 = *(_QWORD *)(v2 + 840);
  v3 = *(_QWORD *)(v2 + 848);
  v57 = v5;
  v7 = v3 & -(__int64)(v3 < v5);
  v8 = v5 - 1;
  if ( (_DWORD)v1 )
  {
    while ( v8 - v7 + 1 < v1 )
    {
      v15 = -1LL;
LABEL_100:
      if ( !v7 )
        goto LABEL_12;
      v48 = v1 + v3;
      if ( v1 + v3 > v5 )
        v48 = v5;
      v8 = v48 - 1;
      v7 = 0LL;
    }
    v9 = v8 - v1 + 1;
    v10 = v6 + 8 * (v9 >> 6);
    v11 = (unsigned __int64 *)(v6 + 8 * (v7 >> 6));
    v12 = *v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( v1 > 0x7F )
    {
      v40 = v10 + 8;
      if ( (v9 & 0x3F) == 0 )
        v40 = v6 + 8 * ((v8 - v1 + 1) >> 6);
      if ( v12 )
      {
        if ( *++v11 )
          goto LABEL_76;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v41, v12);
        if ( v25 )
          v42 = 64;
        else
          v42 = 63 - v41;
      }
      else
      {
        v42 = 0;
      }
LABEL_80:
      v15 = (((__int64)v11 - v6) >> 3 << 6) - v42;
      if ( v15 > v9 )
      {
LABEL_42:
        v15 = -1LL;
LABEL_43:
        v3 = *(_QWORD *)(v2 + 848);
        v5 = v57;
        goto LABEL_100;
      }
      v44 = &v11[(v1 - v42) >> 6];
      while ( ++v11 != v44 )
      {
        if ( *v11 )
          goto LABEL_76;
      }
      v45 = ((_BYTE)v1 - (_BYTE)v42) & 0x3F;
      if ( (((_BYTE)v1 - (_BYTE)v42) & 0x3F) != 0 )
      {
        v25 = !_BitScanForward64((unsigned __int64 *)&v46, *v11);
        if ( v25 )
          LODWORD(v46) = 64;
        if ( (unsigned int)v46 < v45 )
        {
LABEL_76:
          while ( (unsigned __int64)v11 <= v40 )
          {
            if ( !*++v11 )
            {
              v25 = !_BitScanReverse64((unsigned __int64 *)&v43, *(v11 - 1));
              if ( v25 )
                v42 = 64;
              else
                v42 = 63 - v43;
              goto LABEL_80;
            }
          }
LABEL_41:
          v15 = -1LL;
          goto LABEL_43;
        }
      }
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        v4 = v2 + 832;
        goto LABEL_13;
      }
      goto LABEL_43;
    }
    v13 = 64;
    if ( v1 < 0x40 )
    {
      if ( v1 <= 1 )
      {
        while ( 1 )
        {
          if ( v12 != -1 )
          {
            _BitScanForward64(&v14, ~v12);
            v15 = v14 + (((__int64)v11 - v6) >> 3 << 6);
            goto LABEL_10;
          }
          if ( (unsigned __int64)++v11 > v10 )
            break;
          v12 = *v11;
        }
        v15 = -1LL;
        goto LABEL_43;
      }
      v33 = 0;
      v34 = (unsigned __int64 *)(v6 + 8 * (v8 >> 6));
      while ( 1 )
      {
        if ( v12 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v11 > v10 )
              goto LABEL_42;
            v12 = *v11;
            if ( *v11 != -1LL )
            {
              v33 = 0;
              break;
            }
          }
        }
        v25 = !_BitScanForward64((unsigned __int64 *)&v35, v12);
        if ( v25 )
          LODWORD(v35) = 64;
        if ( v33 + (unsigned int)v35 >= v1 )
          break;
        v36 = v1;
        v37 = ~v12;
        while ( 1 )
        {
          v37 &= v37 >> (v36 >> 1);
          if ( !v37 )
            break;
          v36 -= v36 >> 1;
          if ( v36 <= 1 )
          {
            _BitScanForward64(&v38, v37);
            v39 = (unsigned int)v38;
            goto LABEL_68;
          }
        }
        if ( v11 == v34 )
          goto LABEL_42;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v47, v12);
        if ( v25 )
          v33 = 64;
        else
          v33 = 63 - v47;
        v12 = *++v11;
      }
      v39 = -(__int64)v33;
LABEL_68:
      v15 = (((__int64)v11 - v6) >> 3 << 6) + v39;
LABEL_10:
      if ( v15 > v9 )
        goto LABEL_42;
      goto LABEL_11;
    }
    while ( 1 )
    {
      while ( v12 < 0 )
      {
        if ( (unsigned __int64)++v11 > v10 )
          goto LABEL_41;
        v12 = *v11;
      }
      v25 = !_BitScanReverse64((unsigned __int64 *)&v30, v12);
      if ( !v25 )
        v13 = 63 - v30;
      v15 = (((((__int64)v11 - v6) >> 3) + 1) << 6) - v13;
      if ( v15 > v9 )
        goto LABEL_41;
      v31 = v1 - v13;
      if ( v1 == v13 )
        goto LABEL_11;
      v12 = *++v11;
      if ( v31 >= 0x40 )
      {
        if ( *v11 )
          goto LABEL_38;
        v31 -= 64LL;
        if ( !v31 )
          goto LABEL_11;
        v12 = *++v11;
      }
      v25 = !_BitScanForward64(&v32, v12);
      if ( v25 )
        v32 = 64LL;
      if ( v32 >= v31 )
        goto LABEL_11;
LABEL_38:
      v13 = 64;
    }
  }
  v16 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 == -1LL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 824, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v4, v1, v16);
  v19 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v49 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 824;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v49);
    v50 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v49) == 1 )
      SessionId = MmGetSessionIdEx(v50->ApcState.Process);
    else
      SessionId = -1;
    --v50->SpecialApcDisable;
    v52 = ++v50->AbAllocationRegionCount;
    v53 = ((char)v50->AbEntrySummary | (char)v50->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v54, v53);
      if ( v25 )
        goto LABEL_116;
      v55 = (__int64)&v50->LockEntries[v54];
      v53 &= ~(1 << v54);
      if ( (*(_BYTE *)(v55 + 26) & 1) != 0
        && (*(_DWORD *)(v55 + 32) & 1) == 0
        && (*(_QWORD *)(v55 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v49 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v55 + 40) == SessionId )
      {
        *(_BYTE *)(v55 + 26) &= ~1u;
        if ( *(_QWORD *)(v55 + 32) )
          break;
      }
    }
    if ( !v55 )
    {
LABEL_116:
      if ( (*((_DWORD *)&v50->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v50, v49, SessionId, 0LL);
      goto LABEL_128;
    }
    *(_BYTE *)(v55 + 32) |= 2u;
    if ( *(__int64 *)(v55 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v55);
    *(_DWORD *)(v55 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v55 + 25) &= ~1u;
    *(_QWORD *)(v55 + 32) = 0LL;
    v56 = (signed __int64)(v55 - (unsigned __int64)v50->LockEntries) / 96;
    if ( v52 == 1 )
      v50->AbEntrySummary |= 1 << v56;
    else
      _InterlockedOr8((volatile signed __int8 *)&v50->AbOrphanedEntrySummary, 1 << v56);
LABEL_128:
    --v50->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v50);
    v25 = v50->SpecialApcDisable++ == -1;
    if ( v25 && ($C459BD0D405E8E46662177FB3D0A143F *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  if ( (_DWORD)v1 == 1 )
    *(_QWORD *)(v2 + 848) = ClearBitsAndSet + 1;
  *(_DWORD *)(v2 + 872) += v1;
  v20 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 824;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v20) == 1 )
    v22 = MmGetSessionIdEx(v21->ApcState.Process);
  else
    v22 = -1;
  --v21->SpecialApcDisable;
  v23 = ++v21->AbAllocationRegionCount;
  v24 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v25 = !_BitScanReverse((unsigned int *)&v26, v24);
    if ( v25 )
      break;
    v27 = (__int64)&v21->LockEntries[v26];
    v24 &= ~(1 << v26);
    if ( (*(_BYTE *)(v27 + 26) & 1) != 0
      && (*(_DWORD *)(v27 + 32) & 1) == 0
      && (*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v20 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v27 + 40) == v22 )
    {
      *(_BYTE *)(v27 + 26) &= ~1u;
      if ( *(_QWORD *)(v27 + 32) )
      {
        if ( v27 )
        {
          *(_BYTE *)(v27 + 32) |= 2u;
          if ( *(__int64 *)(v27 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v27);
          *(_DWORD *)(v27 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v27 + 25) &= ~1u;
          *(_QWORD *)(v27 + 32) = 0LL;
          v28 = (signed __int64)(v27 - (unsigned __int64)v21->LockEntries) / 96;
          if ( v23 == 1 )
            v21->AbEntrySummary |= 1 << v28;
          else
            _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v28);
          goto LABEL_33;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v21, v20, v22, 0LL);
LABEL_33:
  --v21->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v21);
  v25 = v21->SpecialApcDisable++ == -1;
  if ( v25 && ($C459BD0D405E8E46662177FB3D0A143F *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return qword_140C4CDE0 + (v19 << 21);
}
