/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x14031E900
 * Callers:
 *     MiDispatchFault @ 0x14031E200 (MiDispatchFault.c)
 * Callees:
 *     MiFaultListPagesRemaining @ 0x140231910 (MiFaultListPagesRemaining.c)
 *     KiRspInIstStack @ 0x14024EF40 (KiRspInIstStack.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeMaximumFaultCluster(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  _BYTE *v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 *v6; // r11
  __int16 v7; // ax
  bool v8; // cl
  void *v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 **Address; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char *AnyMultiplexedVm; // rax
  __int64 v19; // r11
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx

  v2 = a1[2];
  v4 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = *a1 & 0xFFFFFFFFFFFFF000uLL;
  v6 = a1;
  if ( v2 == (v2 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    if ( (v2 & 1) != 0 )
    {
      if ( *v4 == 1 || *v4 == 3 || *v4 == 6 )
        return 1LL;
    }
    else if ( v2 )
    {
      v7 = *(_WORD *)(v2 + 368);
      v8 = 0;
      if ( v7 == 16 )
      {
        if ( (*(_DWORD *)(v2 + 376) & 0x200) != 0
          || !KiRspInIstStack(3u, *(_QWORD *)(v2 + 384)) && !KiRspInIstStack(2u, v16) )
        {
          v9 = &ExpInterlockedPopEntrySListFault;
          v8 = KiDynamicTraceEnabled
            && (v17 = *(_QWORD *)(v2 + 360), v17 >= qword_140D070E8)
            && v17 < qword_140D070F0
            && KeGetCurrentIrql() == 15;
LABEL_7:
          if ( *(void **)(v2 + 360) == v9 || v8 )
            return 1LL;
        }
      }
      else if ( v7 == 51 )
      {
        v9 = (void *)qword_140D071B0;
        goto LABEL_7;
      }
    }
    v10 = 1LL;
    if ( (unsigned __int8)((unsigned __int64)*((unsigned int *)v6 + 20) >> 9) > 1uLL )
      v10 = (unsigned __int8)((unsigned __int64)*((unsigned int *)v6 + 20) >> 9);
    v11 = 0;
    goto LABEL_12;
  }
  v10 = MiFaultListPagesRemaining(a1);
  v11 = 1;
LABEL_12:
  if ( v10 == 1 )
    return 1LL;
  if ( !a2 || a2 > v10 )
    a2 = v10;
  v13 = 512LL - (((unsigned int)(v5 >> 9) >> 3) & 0x1FF);
  v14 = v13;
  if ( a2 <= v13 )
    v14 = a2;
  if ( v5 < 0xFFFF800000000000uLL )
  {
    Address = (__int64 **)v6[11];
    if ( Address || (MiLockVadTree(1), Address = MiLocateAddress(v5), MiUnlockVadTree(1, 0x11u), Address) )
      v13 = (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32))
          - (v5 >> 12)
          + 1;
    else
      v13 = 1LL;
    goto LABEL_26;
  }
  if ( v11 )
    goto LABEL_26;
  v13 = 1LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( *(char **)(v19 + 56) != AnyMultiplexedVm )
    goto LABEL_26;
  v20 = P;
  if ( !P )
    goto LABEL_26;
  while ( 1 )
  {
    v21 = v20[4];
    v22 = v20[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( v5 < v21 + v22 )
      break;
    v20 = (_QWORD *)v20[1];
LABEL_49:
    if ( !v20 )
      goto LABEL_26;
  }
  if ( v5 < v22 )
  {
    v20 = (_QWORD *)*v20;
    goto LABEL_49;
  }
  if ( v20 )
  {
    v13 = 8LL;
    v23 = (v21 >> 12) - ((v5 - (v20[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
    if ( v23 < 8 )
      v13 = v23;
  }
LABEL_26:
  if ( v14 <= v13 )
    return v14;
  return v13;
}
