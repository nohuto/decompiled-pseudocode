/*
 * XREFs of MiPrefetchVirtualMemory @ 0x14022D6A0
 * Callers:
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x14032F714 (MiPrefetchRestOfCluster.c)
 *     MiInPageSingleKernelStack @ 0x140335B20 (MiInPageSingleKernelStack.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     NtSetInformationVirtualMemory @ 0x14062AB80 (NtSetInformationVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1406B26C0 (MiPrefetchDriverPages.c)
 *     MmPrefetchVirtualMemory @ 0x1406F09B8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiSufficientAvailablePages @ 0x14022DC70 (MiSufficientAvailablePages.c)
 *     MiVaIsUltra @ 0x1402513B4 (MiVaIsUltra.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MiPfCompletePrefetchIos @ 0x1402D12F4 (MiPfCompletePrefetchIos.c)
 *     MiAdvanceFaultList @ 0x1403179F8 (MiAdvanceFaultList.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140321004 (MiPfCoalesceAndIssueIOs.c)
 *     MiLeapPrefetch @ 0x14037BE44 (MiLeapPrefetch.c)
 *     MiPrefetchPreallocatePages @ 0x140537B20 (MiPrefetchPreallocatePages.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140537EA0 (MiPrefetchReleasePreallocatedPages.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 LeafVa, int a4)
{
  unsigned __int64 v6; // r13
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
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r14
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // edi
  int v28; // r14d
  int v29; // eax
  unsigned __int64 v31; // rax
  int v32; // eax
  _QWORD **v33; // rcx
  _QWORD *v34; // rdx
  int v35; // eax
  int v36; // ecx
  __int16 v37; // [rsp+30h] [rbp-C8h] BYREF
  int v38; // [rsp+32h] [rbp-C6h]
  __int16 v39; // [rsp+36h] [rbp-C2h]
  unsigned __int64 v40; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+50h] [rbp-A8h]
  _QWORD v44[2]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v45[2]; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-80h] BYREF
  int v47; // [rsp+80h] [rbp-78h]
  int v48; // [rsp+84h] [rbp-74h]
  __int64 v49; // [rsp+88h] [rbp-70h]
  _OWORD v50[3]; // [rsp+90h] [rbp-68h] BYREF
  int v51; // [rsp+100h] [rbp+8h]
  struct _KTHREAD *v52; // [rsp+108h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+20h]

  v53 = 0;
  v38 = 0;
  v39 = 0;
  v48 = 0;
  v6 = LeafVa;
  v42 = 0LL;
  v43 = 0LL;
  v44[1] = v44;
  v44[0] = v44;
  v45[1] = v45;
  v45[0] = v45;
  v37 = 1;
  v40 = a2;
  v41 = a1;
  v46 = 0LL;
  v49 = 0LL;
  v47 = a4;
  CurrentThread = KeGetCurrentThread();
  v51 = 0;
  v52 = CurrentThread;
  v8 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v8 >= 2u )
    return 3221225626LL;
  if ( LeafVa == 1 )
  {
    v13 = (__int64 *)&MiSystemPartition;
LABEL_7:
    BYTE6(CurrentThread[1].Queue) = v8 + 1;
    --CurrentThread->KernelApcDisable;
    memset(v50, 0, sizeof(v50));
    if ( v42 < v41 )
    {
      v14 = &MiState;
      while ( 1 )
      {
        v15 = 0xFFFF800000000000uLL;
        v16 = 0xFFFFF68000000000uLL;
        if ( (v47 & 0x40000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
          v28 = v51;
          v27 = -1073741749;
          goto LABEL_37;
        }
        v17 = a2 + 16 * v42;
        v18 = *(_QWORD *)(v17 + 8);
        if ( v43 >= ((unsigned __int64)(*(_DWORD *)v17 & 0xFFF) + v18 + 4095) >> 12 )
          goto LABEL_63;
        if ( !v18 )
        {
          v42 = v41;
          v43 = 0LL;
LABEL_82:
          CurrentThread = v52;
LABEL_36:
          v27 = v53;
          v28 = v51;
          goto LABEL_37;
        }
        if ( (v19 = *(_QWORD *)v17 + (v43 << 12), LeafVa = v19, v19 >= qword_140C4F9B8) && v19 <= qword_140C4E1E8
          || v19 >= 0xFFFF800000000000uLL
          && ((unsigned int)MiVaIsUltra(*(_QWORD *)v17 + (v43 << 12), v18, v19, 0xFFFF800000000000uLL)
           || *((_BYTE *)v14 + ((v19 >> 39) & 0x1FF) + 12296) == 1
           && v19 >= qword_140C4DC60
           && v19 < qword_140C4DC60 + 290816) )
        {
LABEL_63:
          MiAdvanceFaultList(&v37, v18, LeafVa, v15);
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
        if ( v6 == 1 || (*(_BYTE *)(v6 + 184) & 7) != 1 )
          goto LABEL_63;
LABEL_18:
        if ( (v47 & 0x80u) == 0 )
        {
          if ( !(unsigned int)MiSufficientAvailablePages(v13, 288LL) )
            goto LABEL_82;
          v20 = v13[949];
          v21 = v13[933];
          if ( v21 > v20 || v20 - v21 < 0x1080 || v13[896] < 288 )
            goto LABEL_82;
        }
        if ( (a4 & 0x20000) != 0 )
          MiPrefetchPreallocatePages((unsigned int)v50, (unsigned int)&v37, (_DWORD)v13, v6, v17, v19);
        v22 = v42;
        v23 = v43;
        v24 = MmAccessFault(0LL, v19);
        if ( HIBYTE(v37) == 2 )
        {
          if ( (v47 & 0x80u) == 0 )
            goto LABEL_82;
        }
        else if ( HIBYTE(v37) != 1 )
        {
          if ( v42 == v22 && v43 == v23 )
          {
            LeafVa = v40;
            v25 = *(_QWORD *)(v40 + 16 * v42 + 8) + 4095LL;
            v26 = *(_DWORD *)(v40 + 16 * v42) & 0xFFF;
            if ( ++v43 == (unsigned __int64)(v25 + v26) >> 12 )
            {
              v31 = v42 + 1;
              v42 = v31;
              v43 = 0LL;
              if ( v31 < v41 && !*(_QWORD *)(v40 + 16 * v31 + 8) )
                v42 = v41;
            }
          }
          goto LABEL_30;
        }
        HIBYTE(v37) = 0;
LABEL_30:
        if ( v24 < 0 )
        {
          v51 = v24;
          v28 = v24;
          if ( v24 != -1073741819 || v42 == v41 || !(unsigned int)MiLeapPrefetch(&v37, 0LL) )
          {
            CurrentThread = v52;
            v27 = v53;
            goto LABEL_37;
          }
        }
        if ( v46 >= 0x200000 )
          MiPfCoalesceAndIssueIOs(v45, v44, &v46);
        if ( (v47 & 0x400) != 0 )
        {
          LeafVa = 0LL;
          v32 = 0;
          while ( 1 )
          {
            v33 = (_QWORD **)v44;
            if ( !v32 )
              v33 = (_QWORD **)v45;
            v34 = *v33;
            if ( *v33 != v33 )
              break;
LABEL_70:
            if ( (unsigned int)++v32 >= 2 )
              goto LABEL_34;
          }
          while ( 1 )
          {
            LeafVa = (unsigned int)(LeafVa + 1);
            if ( (_DWORD)LeafVa == 4 )
              break;
            v34 = (_QWORD *)*v34;
            if ( v34 == v33 )
              goto LABEL_70;
          }
          v35 = MiPfCompletePrefetchIos(v44, v45, v6);
          if ( v35 < 0 )
          {
            v36 = v53;
            if ( v53 >= 0 )
              v36 = v35;
            v53 = v36;
          }
          v46 = 0LL;
        }
LABEL_34:
        v14 = &MiState;
LABEL_35:
        CurrentThread = v52;
        if ( v42 >= v41 )
          goto LABEL_36;
      }
      if ( LeafVa >= v15 )
      {
        if ( v6 != 1 )
          goto LABEL_63;
        goto LABEL_18;
      }
LABEL_16:
      if ( v6 == 1 || (*(_BYTE *)(v6 + 184) & 7) != 0 )
        goto LABEL_63;
      goto LABEL_18;
    }
    v27 = 0;
    v28 = 0;
LABEL_37:
    if ( (a4 & 0x20000) != 0 )
      MiPrefetchReleasePreallocatedPages(v50, &v37, v13, 1LL);
    v29 = MiPfCompletePrefetchIos(v44, v45, v6);
    if ( v29 < 0 )
    {
      if ( v27 < 0 )
      {
LABEL_42:
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        --BYTE6(CurrentThread[1].Queue);
        return (unsigned int)v27;
      }
      v27 = v29;
    }
    if ( v27 >= 0 && v28 < 0 && (v47 & 0x8000) != 0 )
      v27 = v28;
    goto LABEL_42;
  }
  v10 = *(_BYTE *)(LeafVa + 184) & 7;
  if ( v10 == 1 )
  {
    v11 = Process[1].AffinityPadding[5];
    if ( v11 )
    {
      v12 = *(unsigned __int16 *)(v11 + 430);
LABEL_6:
      v13 = *(__int64 **)(qword_140C4E4C8 + 8 * v12);
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
