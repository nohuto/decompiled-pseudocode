/*
 * XREFs of MiPrefetchVirtualMemory @ 0x140274EA0
 * Callers:
 *     MmCopyMemory @ 0x1402B48E0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1402D1764 (MiPrefetchRestOfCluster.c)
 *     MiInPageSingleKernelStack @ 0x1402E4C40 (MiInPageSingleKernelStack.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiPrefetchDriverPages @ 0x1406885A0 (MiPrefetchDriverPages.c)
 *     NtSetInformationVirtualMemory @ 0x14070F280 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1407108F8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiSufficientAvailablePages @ 0x140275470 (MiSufficientAvailablePages.c)
 *     MiVaIsUltra @ 0x1402754B0 (MiVaIsUltra.c)
 *     MiAdvanceFaultList @ 0x14028E148 (MiAdvanceFaultList.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1402C2704 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompletePrefetchIos @ 0x1402FCB00 (MiPfCompletePrefetchIos.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MiLeapPrefetch @ 0x14037BFAC (MiLeapPrefetch.c)
 *     MiPrefetchPreallocatePages @ 0x140539620 (MiPrefetchPreallocatePages.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1405399A0 (MiPrefetchReleasePreallocatedPages.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v8; // dl
  _KPROCESS *Process; // rcx
  char v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r15
  __int64 *v14; // r11
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 LeafVa; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r14
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edi
  int v29; // r14d
  int v30; // eax
  unsigned __int64 v32; // rax
  int v33; // r8d
  int v34; // eax
  _QWORD **v35; // rcx
  _QWORD *v36; // rdx
  int v37; // eax
  int v38; // ecx
  __int16 v39; // [rsp+30h] [rbp-C8h] BYREF
  int v40; // [rsp+32h] [rbp-C6h]
  __int16 v41; // [rsp+36h] [rbp-C2h]
  __int64 v42; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+50h] [rbp-A8h]
  _QWORD v46[2]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v47[2]; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-80h] BYREF
  int v49; // [rsp+80h] [rbp-78h]
  int v50; // [rsp+84h] [rbp-74h]
  __int64 v51; // [rsp+88h] [rbp-70h]
  _OWORD v52[3]; // [rsp+90h] [rbp-68h] BYREF
  int v53; // [rsp+100h] [rbp+8h]
  struct _KTHREAD *v54; // [rsp+108h] [rbp+10h]
  int v55; // [rsp+118h] [rbp+20h]

  v55 = 0;
  v40 = 0;
  v41 = 0;
  v50 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46[1] = v46;
  v46[0] = v46;
  v47[1] = v47;
  v47[0] = v47;
  v39 = 1;
  v42 = a2;
  v43 = a1;
  v48 = 0LL;
  v51 = 0LL;
  v49 = a4;
  CurrentThread = KeGetCurrentThread();
  v53 = 0;
  v54 = CurrentThread;
  v8 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v8 >= 2u )
    return 3221225626LL;
  if ( a3 == 1 )
  {
    v13 = (__int64 *)&MiSystemPartition;
LABEL_7:
    BYTE6(CurrentThread[1].Queue) = v8 + 1;
    --CurrentThread->KernelApcDisable;
    memset(v52, 0, sizeof(v52));
    if ( v44 < v43 )
    {
      v14 = MiState;
      while ( 1 )
      {
        v15 = 0xFFFF800000000000uLL;
        v16 = 0xFFFFF68000000000uLL;
        if ( (v49 & 0x40000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
          v29 = v53;
          v28 = -1073741749;
          goto LABEL_37;
        }
        v17 = a2 + 16 * v44;
        v18 = *(_QWORD *)(v17 + 8);
        if ( v45 >= ((unsigned __int64)(*(_DWORD *)v17 & 0xFFF) + v18 + 4095) >> 12 )
          goto LABEL_63;
        if ( !v18 )
        {
          v44 = v43;
          v45 = 0LL;
LABEL_82:
          CurrentThread = v54;
LABEL_36:
          v28 = v55;
          v29 = v53;
          goto LABEL_37;
        }
        if ( (v19 = *(_QWORD *)v17 + (v45 << 12), LeafVa = v19, v19 >= qword_140C4FB38) && v19 <= qword_140C4E368
          || v19 >= 0xFFFF800000000000uLL
          && ((unsigned int)MiVaIsUltra(*(_QWORD *)v17 + (v45 << 12), v18, v19, 0xFFFF800000000000uLL)
           || *((_BYTE *)v14 + ((v19 >> 39) & 0x1FF) + 12296) == 1
           && v19 >= qword_140C4DDE0
           && v19 < qword_140C4DDE0 + 290816) )
        {
LABEL_63:
          MiAdvanceFaultList(&v39);
          goto LABEL_35;
        }
        if ( v19 >= v16 && v19 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( v19 >= v16 + 0x4000000000LL )
            goto LABEL_63;
          LeafVa = MiGetLeafVa(v19, v18, LeafVa, v15);
        }
        if ( LeafVa < v15 )
          goto LABEL_16;
        if ( *((_BYTE *)v14 + ((LeafVa >> 39) & 0x1FF) + 12296) != 1 )
          break;
        if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 1 )
          goto LABEL_63;
LABEL_18:
        if ( (v49 & 0x80u) == 0 )
        {
          if ( !(unsigned int)MiSufficientAvailablePages(v13, 288LL) )
            goto LABEL_82;
          v21 = v13[949];
          v22 = v13[933];
          if ( v22 > v21 || v21 - v22 < 0x1080 || v13[896] < 288 )
            goto LABEL_82;
        }
        if ( (a4 & 0x20000) != 0 )
          MiPrefetchPreallocatePages((unsigned int)v52, (unsigned int)&v39, (_DWORD)v13, a3, v17, v19);
        v23 = v44;
        v24 = v45;
        v25 = MmAccessFault(0LL, v19, 0, (ULONG_PTR)&v39 + 1);
        if ( HIBYTE(v39) == 2 )
        {
          if ( (v49 & 0x80u) == 0 )
            goto LABEL_82;
        }
        else if ( HIBYTE(v39) != 1 )
        {
          if ( v44 == v23 && v45 == v24 )
          {
            v26 = *(_QWORD *)(v42 + 16 * v44 + 8) + 4095LL;
            v27 = *(_DWORD *)(v42 + 16 * v44) & 0xFFF;
            if ( ++v45 == (unsigned __int64)(v26 + v27) >> 12 )
            {
              v32 = v44 + 1;
              v44 = v32;
              v45 = 0LL;
              if ( v32 < v43 && !*(_QWORD *)(v42 + 16 * v32 + 8) )
                v44 = v43;
            }
          }
          goto LABEL_30;
        }
        HIBYTE(v39) = 0;
LABEL_30:
        if ( v25 < 0 )
        {
          v53 = v25;
          v29 = v25;
          if ( v25 != -1073741819 || v44 == v43 || !(unsigned int)MiLeapPrefetch(&v39, 0LL) )
          {
            CurrentThread = v54;
            v28 = v55;
            goto LABEL_37;
          }
        }
        if ( v48 >= 0x200000 )
          MiPfCoalesceAndIssueIOs(v47, v46, &v48);
        if ( (v49 & 0x400) != 0 )
        {
          v33 = 0;
          v34 = 0;
          while ( 1 )
          {
            v35 = (_QWORD **)v46;
            if ( !v34 )
              v35 = (_QWORD **)v47;
            v36 = *v35;
            if ( *v35 != v35 )
              break;
LABEL_70:
            if ( (unsigned int)++v34 >= 2 )
              goto LABEL_34;
          }
          while ( ++v33 != 4 )
          {
            v36 = (_QWORD *)*v36;
            if ( v36 == v35 )
              goto LABEL_70;
          }
          v37 = MiPfCompletePrefetchIos(v46, v47, a3);
          if ( v37 < 0 )
          {
            v38 = v55;
            if ( v55 >= 0 )
              v38 = v37;
            v55 = v38;
          }
          v48 = 0LL;
        }
LABEL_34:
        v14 = MiState;
LABEL_35:
        CurrentThread = v54;
        if ( v44 >= v43 )
          goto LABEL_36;
      }
      if ( LeafVa >= v15 )
      {
        if ( a3 != 1 )
          goto LABEL_63;
        goto LABEL_18;
      }
LABEL_16:
      if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 0 )
        goto LABEL_63;
      goto LABEL_18;
    }
    v28 = 0;
    v29 = 0;
LABEL_37:
    if ( (a4 & 0x20000) != 0 )
      MiPrefetchReleasePreallocatedPages(v52, &v39, v13, 1LL);
    v30 = MiPfCompletePrefetchIos(v46, v47, a3);
    if ( v30 < 0 )
    {
      if ( v28 < 0 )
      {
LABEL_42:
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        --BYTE6(CurrentThread[1].Queue);
        return (unsigned int)v28;
      }
      v28 = v30;
    }
    if ( v28 >= 0 && v29 < 0 && (v49 & 0x8000) != 0 )
      v28 = v29;
    goto LABEL_42;
  }
  v10 = *(_BYTE *)(a3 + 184) & 7;
  if ( v10 == 1 )
  {
    v11 = Process[1].AffinityPadding[5];
    if ( v11 )
    {
      v12 = *(unsigned __int16 *)(v11 + 430);
LABEL_6:
      v13 = *(__int64 **)(qword_140C4E648 + 8 * v12);
      goto LABEL_7;
    }
  }
  else if ( !v10 )
  {
    v12 = Process[1].IdealProcessorPadding[5];
    goto LABEL_6;
  }
  return 3221225485LL;
}
