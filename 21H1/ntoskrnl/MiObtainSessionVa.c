/*
 * XREFs of MiObtainSessionVa @ 0x140301EC0
 * Callers:
 *     MiReservePoolMemory @ 0x1403008E0 (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x140300D04 (MiExpandPtes.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402A92F0 (RtlFindClearBitsAndSetEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainSessionVa(unsigned int a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r8
  unsigned __int64 *v4; // rdi
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
  unsigned __int64 ClearBitsAndSet; // rsi
  unsigned __int64 v19; // r14
  struct _KTHREAD *v20; // rbx
  unsigned int v21; // edx
  unsigned __int8 v22; // r12
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned int v36; // r10d
  unsigned __int64 *v37; // r11
  __int64 v38; // rax
  unsigned int v39; // r10d
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // r10
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  unsigned __int64 *v47; // r9
  unsigned int v48; // r9d
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rsi
  struct _KTHREAD *v53; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v55; // r14
  unsigned int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // [rsp+30h] [rbp-48h]
  unsigned __int64 v65; // [rsp+38h] [rbp-40h]
  int v66; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v67; // [rsp+44h] [rbp-34h]
  unsigned int v68; // [rsp+48h] [rbp-30h]
  int v69; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v70; // [rsp+50h] [rbp-28h]
  int v71; // [rsp+54h] [rbp-24h]
  int v72; // [rsp+58h] [rbp-20h]
  unsigned int v73; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int64 v74; // [rsp+60h] [rbp-18h]
  int v75; // [rsp+D0h] [rbp+58h] BYREF
  int v76; // [rsp+D8h] [rbp+60h]

  v1 = a1;
  v2 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  v74 = v2;
  v4 = (unsigned __int64 *)(v2 + 832);
  v5 = *(_QWORD *)(v2 + 832);
  v6 = *(_QWORD *)(v2 + 840);
  v65 = *(_QWORD *)(v2 + 848);
  v3 = v65;
  v64 = v5;
  v7 = v3 & -(__int64)(v3 < v5);
  v8 = v5 - 1;
  if ( (_DWORD)v1 )
  {
    while ( v8 - v7 + 1 < v1 )
    {
      v15 = -1LL;
LABEL_102:
      if ( !v7 )
        goto LABEL_12;
      v51 = v1 + v3;
      if ( v1 + v3 > v5 )
        v51 = v5;
      v8 = v51 - 1;
      v7 = 0LL;
    }
    v9 = v8 - v1 + 1;
    v10 = v6 + 8 * (v9 >> 6);
    v11 = (unsigned __int64 *)(v6 + 8 * (v7 >> 6));
    v12 = *v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( v1 > 0x7F )
    {
      v43 = v10 + 8;
      if ( (v9 & 0x3F) == 0 )
        v43 = v6 + 8 * ((v8 - v1 + 1) >> 6);
      if ( v12 )
      {
        if ( *++v11 )
          goto LABEL_77;
        v67 = 0;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v44, v12);
        if ( v24 )
          v45 = 64;
        else
          v45 = 63 - v44;
        v67 = v45;
      }
      else
      {
        v45 = 0;
      }
LABEL_82:
      v15 = (((__int64)v11 - v6) >> 3 << 6) - v45;
      if ( v15 > v9 )
      {
LABEL_42:
        v15 = -1LL;
LABEL_43:
        v3 = v65;
        v5 = v64;
        goto LABEL_102;
      }
      v47 = &v11[(v1 - v45) >> 6];
      while ( ++v11 != v47 )
      {
        if ( *v11 )
          goto LABEL_77;
      }
      v48 = ((_BYTE)v1 - (_BYTE)v45) & 0x3F;
      if ( (((_BYTE)v1 - (_BYTE)v45) & 0x3F) != 0 )
      {
        v24 = !_BitScanForward64((unsigned __int64 *)&v49, *v11);
        if ( v24 )
          LODWORD(v49) = 64;
        v69 = v49;
        if ( (unsigned int)v49 < v48 )
        {
LABEL_77:
          while ( (unsigned __int64)v11 <= v43 )
          {
            if ( !*++v11 )
            {
              v68 = 0;
              v24 = !_BitScanReverse64((unsigned __int64 *)&v46, *(v11 - 1));
              if ( v24 )
                v45 = 64;
              else
                v45 = 63 - v46;
              v68 = v45;
              goto LABEL_82;
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
        v2 = v74;
        v16 = v15;
        v4 = (unsigned __int64 *)(v74 + 832);
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
      v36 = 0;
      v37 = (unsigned __int64 *)(v6 + 8 * (v8 >> 6));
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
              v36 = 0;
              break;
            }
          }
        }
        v24 = !_BitScanForward64((unsigned __int64 *)&v38, v12);
        if ( v24 )
          LODWORD(v38) = 64;
        v72 = v38;
        if ( v36 + (unsigned int)v38 >= v1 )
          break;
        v39 = v1;
        v40 = ~v12;
        while ( 1 )
        {
          v40 &= v40 >> (v39 >> 1);
          if ( !v40 )
            break;
          v39 -= v39 >> 1;
          if ( v39 <= 1 )
          {
            _BitScanForward64(&v41, v40);
            v42 = (unsigned int)v41;
            goto LABEL_68;
          }
        }
        if ( v11 == v37 )
          goto LABEL_42;
        v73 = 0;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v50, v12);
        if ( v24 )
          v36 = 64;
        else
          v36 = 63 - v50;
        ++v11;
        v73 = v36;
        v12 = *v11;
      }
      v42 = -(__int64)v36;
LABEL_68:
      v15 = (((__int64)v11 - v6) >> 3 << 6) + v42;
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
      v70 = 0;
      v24 = !_BitScanReverse64((unsigned __int64 *)&v33, v12);
      if ( !v24 )
        v13 = 63 - v33;
      v70 = v13;
      v15 = (((((__int64)v11 - v6) >> 3) + 1) << 6) - v13;
      if ( v15 > v9 )
        goto LABEL_41;
      v34 = v1 - v13;
      if ( v1 == v13 )
        goto LABEL_11;
      v12 = *++v11;
      if ( v34 >= 0x40 )
      {
        if ( *v11 )
          goto LABEL_38;
        v34 -= 64LL;
        if ( !v34 )
          goto LABEL_11;
        v12 = *++v11;
      }
      v24 = !_BitScanForward64(&v35, v12);
      if ( v24 )
        v35 = 64LL;
      v71 = v35;
      if ( v35 >= v34 )
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
  if ( ClearBitsAndSet == -1LL )
  {
    v52 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 824;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v52);
    v75 = 0;
    v53 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v52) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v53->ApcState.Process);
    else
      SessionId = -1;
    --v53->SpecialApcDisable;
    v55 = ++v53->AbAllocationRegionCount;
    v56 = ((char)v53->AbEntrySummary | (char)v53->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v57, v56);
      if ( v24 )
        goto LABEL_118;
      v58 = (__int64)&v53->LockEntries[v57];
      v56 &= ~(1 << v57);
      if ( (*(_BYTE *)(v58 + 26) & 1) != 0
        && (*(_DWORD *)(v58 + 32) & 1) == 0
        && (*(_QWORD *)(v58 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v52 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v58 + 40) == SessionId )
      {
        *(_BYTE *)(v58 + 26) &= ~1u;
        if ( *(_QWORD *)(v58 + 32) )
          break;
      }
    }
    if ( !v58 )
    {
LABEL_118:
      if ( (*((_DWORD *)&v53->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v53, v52, SessionId, 0LL);
      goto LABEL_130;
    }
    *(_BYTE *)(v58 + 32) |= 2u;
    if ( *(__int64 *)(v58 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v58);
    v75 = *(_DWORD *)(v58 + 88) & 0x1FFFF;
    *(_DWORD *)(v58 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v58 + 25) &= ~1u;
    *(_QWORD *)(v58 + 32) = 0LL;
    v59 = (signed __int64)(v58 - (unsigned __int64)v53->LockEntries) / 96;
    if ( v55 == 1 )
      v53->AbEntrySummary |= 1 << v59;
    else
      _InterlockedOr8((volatile signed __int8 *)&v53->AbOrphanedEntrySummary, 1 << v59);
LABEL_130:
    --v53->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v53, v52, &v75);
    v24 = v53->SpecialApcDisable++ == -1;
    if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
      KiCheckForKernelApcDelivery(v61);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v60, v62, v63);
    return 0LL;
  }
  if ( (_DWORD)v1 == 1 )
    *(_QWORD *)(v2 + 848) = ClearBitsAndSet + 1;
  *(_DWORD *)(v2 + 872) += v1;
  v19 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 824;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v19);
  v66 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
    v21 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  else
    v21 = -1;
  --v20->SpecialApcDisable;
  v22 = ++v20->AbAllocationRegionCount;
  v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v23);
    v76 = v25;
    if ( v24 )
      break;
    v26 = (__int64)&v20->LockEntries[v25];
    v23 &= ~(1 << v25);
    if ( (*(_BYTE *)(v26 + 26) & 1) != 0
      && (*(_DWORD *)(v26 + 32) & 1) == 0
      && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v26 + 40) == v21 )
    {
      *(_BYTE *)(v26 + 26) &= ~1u;
      if ( *(_QWORD *)(v26 + 32) )
      {
        if ( v26 )
        {
          *(_BYTE *)(v26 + 32) |= 2u;
          if ( *(__int64 *)(v26 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
          v66 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
          *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v26 + 25) &= ~1u;
          *(_QWORD *)(v26 + 32) = 0LL;
          v27 = (signed __int64)(v26 - (unsigned __int64)v20->LockEntries) / 96;
          if ( v22 == 1 )
            v20->AbEntrySummary |= 1 << v27;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v27);
          goto LABEL_33;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, v21, 0LL);
LABEL_33:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v19, &v66);
  v24 = v20->SpecialApcDisable++ == -1;
  if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v29);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v28, v30, v31);
  return qword_140C4CCE0 + (ClearBitsAndSet << 21);
}
