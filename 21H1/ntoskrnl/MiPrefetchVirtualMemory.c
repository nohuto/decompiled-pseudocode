/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1402A1330
 * Callers:
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x140320F64 (MiPrefetchRestOfCluster.c)
 *     MiInPageSingleKernelStack @ 0x140329D10 (MiInPageSingleKernelStack.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     NtSetInformationVirtualMemory @ 0x14063BA60 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1406B97B0 (MiPrefetchDriverPages.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     MiPfCompletePrefetchIos @ 0x1402BC504 (MiPfCompletePrefetchIos.c)
 *     MiVaIsUltra @ 0x140303130 (MiVaIsUltra.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140312944 (MiPfCoalesceAndIssueIOs.c)
 *     MiAdvanceFaultList @ 0x140340BDC (MiAdvanceFaultList.c)
 *     MiLeapPrefetch @ 0x14037926C (MiLeapPrefetch.c)
 *     MiPrefetchPreallocatePages @ 0x140533B00 (MiPrefetchPreallocatePages.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140533E80 (MiPrefetchReleasePreallocatedPages.c)
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
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v35; // rax
  int v36; // r8d
  int v37; // eax
  _QWORD **v38; // rcx
  _QWORD *v39; // rdx
  int v40; // eax
  int v41; // ecx
  __int16 v42; // [rsp+30h] [rbp-C8h] BYREF
  int v43; // [rsp+32h] [rbp-C6h]
  __int16 v44; // [rsp+36h] [rbp-C2h]
  __int64 v45; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v46; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v47; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+50h] [rbp-A8h]
  _QWORD v49[2]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v50[2]; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v51; // [rsp+78h] [rbp-80h] BYREF
  int v52; // [rsp+80h] [rbp-78h]
  int v53; // [rsp+84h] [rbp-74h]
  __int64 v54; // [rsp+88h] [rbp-70h]
  _OWORD v55[3]; // [rsp+90h] [rbp-68h] BYREF
  int v56; // [rsp+100h] [rbp+8h]
  struct _KTHREAD *v57; // [rsp+108h] [rbp+10h]
  int v58; // [rsp+118h] [rbp+20h]

  v58 = 0;
  v43 = 0;
  v44 = 0;
  v53 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49[1] = v49;
  v49[0] = v49;
  v50[1] = v50;
  v50[0] = v50;
  v42 = 1;
  v45 = a2;
  v46 = a1;
  v51 = 0LL;
  v54 = 0LL;
  v52 = a4;
  CurrentThread = KeGetCurrentThread();
  v56 = 0;
  v57 = CurrentThread;
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
    memset(v55, 0, sizeof(v55));
    if ( v47 < v46 )
    {
      v14 = MiState;
      while ( 1 )
      {
        v15 = 0xFFFF800000000000uLL;
        v16 = 0xFFFFF68000000000uLL;
        if ( (v52 & 0x40000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
          v29 = v56;
          v28 = -1073741749;
          goto LABEL_37;
        }
        v17 = a2 + 16 * v47;
        v18 = *(_QWORD *)(v17 + 8);
        if ( v48 >= ((unsigned __int64)(*(_DWORD *)v17 & 0xFFF) + v18 + 4095) >> 12 )
          goto LABEL_63;
        if ( !v18 )
        {
          v47 = v46;
          v48 = 0LL;
LABEL_82:
          CurrentThread = v57;
LABEL_36:
          v28 = v58;
          v29 = v56;
          goto LABEL_37;
        }
        if ( (v19 = *(_QWORD *)v17 + (v48 << 12), LeafVa = v19, v19 >= qword_140C4FA78) && v19 <= qword_140C4E2A8
          || v19 >= 0xFFFF800000000000uLL
          && ((unsigned int)MiVaIsUltra(*(_QWORD *)v17 + (v48 << 12), v18, v19, 0xFFFF800000000000uLL)
           || *((_BYTE *)v14 + ((v19 >> 39) & 0x1FF) + 12296) == 1
           && v19 >= qword_140C4DD20
           && v19 < qword_140C4DD20 + 290816) )
        {
LABEL_63:
          MiAdvanceFaultList(&v42);
          goto LABEL_35;
        }
        if ( v19 >= v16 && v19 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( v19 >= v16 + 0x4000000000LL )
            goto LABEL_63;
          LeafVa = MiGetLeafVa(v19);
        }
        if ( LeafVa < v15 )
          goto LABEL_16;
        if ( *((_BYTE *)v14 + ((LeafVa >> 39) & 0x1FF) + 12296) != 1 )
          break;
        if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 1 )
          goto LABEL_63;
LABEL_18:
        if ( (v52 & 0x80u) == 0 )
        {
          if ( !(unsigned int)MiSufficientAvailablePages(v13, 288LL) )
            goto LABEL_82;
          v21 = v13[949];
          v22 = v13[933];
          if ( v22 > v21 || v21 - v22 < 0x1080 || v13[896] < 288 )
            goto LABEL_82;
        }
        if ( (a4 & 0x20000) != 0 )
          MiPrefetchPreallocatePages((unsigned int)v55, (unsigned int)&v42, (_DWORD)v13, a3, v17, v19);
        v23 = v47;
        v24 = v48;
        v25 = MmAccessFault(0LL, v19, 0, (ULONG_PTR)&v42 + 1);
        if ( HIBYTE(v42) == 2 )
        {
          if ( (v52 & 0x80u) == 0 )
            goto LABEL_82;
        }
        else if ( HIBYTE(v42) != 1 )
        {
          if ( v47 == v23 && v48 == v24 )
          {
            v26 = *(_QWORD *)(v45 + 16 * v47 + 8) + 4095LL;
            v27 = *(_DWORD *)(v45 + 16 * v47) & 0xFFF;
            if ( ++v48 == (unsigned __int64)(v26 + v27) >> 12 )
            {
              v35 = v47 + 1;
              v47 = v35;
              v48 = 0LL;
              if ( v35 < v46 && !*(_QWORD *)(v45 + 16 * v35 + 8) )
                v47 = v46;
            }
          }
          goto LABEL_30;
        }
        HIBYTE(v42) = 0;
LABEL_30:
        if ( v25 < 0 )
        {
          v56 = v25;
          v29 = v25;
          if ( v25 != -1073741819 || v47 == v46 || !(unsigned int)MiLeapPrefetch(&v42, 0LL) )
          {
            CurrentThread = v57;
            v28 = v58;
            goto LABEL_37;
          }
        }
        if ( v51 >= 0x200000 )
          MiPfCoalesceAndIssueIOs(v50, v49, &v51);
        if ( (v52 & 0x400) != 0 )
        {
          v36 = 0;
          v37 = 0;
          while ( 1 )
          {
            v38 = (_QWORD **)v49;
            if ( !v37 )
              v38 = (_QWORD **)v50;
            v39 = *v38;
            if ( *v38 != v38 )
              break;
LABEL_70:
            if ( (unsigned int)++v37 >= 2 )
              goto LABEL_34;
          }
          while ( ++v36 != 4 )
          {
            v39 = (_QWORD *)*v39;
            if ( v39 == v38 )
              goto LABEL_70;
          }
          v40 = MiPfCompletePrefetchIos(v49, v50, a3);
          if ( v40 < 0 )
          {
            v41 = v58;
            if ( v58 >= 0 )
              v41 = v40;
            v58 = v41;
          }
          v51 = 0LL;
        }
LABEL_34:
        v14 = MiState;
LABEL_35:
        CurrentThread = v57;
        if ( v47 >= v46 )
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
      MiPrefetchReleasePreallocatedPages(v55, &v42, v13, 1LL);
    v30 = MiPfCompletePrefetchIos(v49, v50, a3);
    if ( v30 < 0 )
    {
      if ( v28 < 0 )
      {
LABEL_42:
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v31, v32, v33);
        --BYTE6(CurrentThread[1].Queue);
        return (unsigned int)v28;
      }
      v28 = v30;
    }
    if ( v28 >= 0 && v29 < 0 && (v52 & 0x8000) != 0 )
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
      v13 = *(__int64 **)(qword_140C4E588 + 8 * v12);
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
