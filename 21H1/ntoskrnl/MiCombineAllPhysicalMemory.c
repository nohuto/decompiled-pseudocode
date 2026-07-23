/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1407134D0
 * Callers:
 *     MiCombineIdenticalPages @ 0x1407128D0 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     KeQueryAffinityThread @ 0x140321900 (KeQueryAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     MiMapArbitraryPage @ 0x1403669C0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x140366B50 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x140366F50 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x140367030 (MiPerformCombineScan.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x140368EFC (KeQueryNodeActiveDpcGangAffinity.c)
 *     MiDereferencePageRuns @ 0x14037BE90 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403EFAF8 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiProcessCrcList @ 0x140712D40 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x140713AD8 (MiAllocateCrcList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // r12d
  __int64 v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned int v13; // ebx
  unsigned __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // r14
  __int64 *v17; // r15
  unsigned __int64 Mask; // rcx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  _DWORD *v20; // r9
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  unsigned int *v23; // rcx
  unsigned __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 PteAddress; // r12
  int v28; // ecx
  __int64 v29; // rdi
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v31; // rdi
  unsigned __int64 UltraMapping; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rdx
  __int64 *v35; // rcx
  BOOL v36; // edi
  __int64 v37; // rdx
  __int64 v38; // r8
  _DWORD *v39; // r9
  bool v40; // zf
  int v42; // [rsp+30h] [rbp-F8h]
  unsigned int v43; // [rsp+34h] [rbp-F4h]
  unsigned int v44; // [rsp+38h] [rbp-F0h]
  int v46; // [rsp+48h] [rbp-E0h]
  int v47; // [rsp+4Ch] [rbp-DCh] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-D8h]
  unsigned int *v49; // [rsp+58h] [rbp-D0h]
  unsigned int *v50; // [rsp+60h] [rbp-C8h]
  __int64 *v51; // [rsp+68h] [rbp-C0h]
  int v52; // [rsp+70h] [rbp-B8h] BYREF
  __int64 *v53; // [rsp+78h] [rbp-B0h]
  _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v55; // [rsp+90h] [rbp-98h] BYREF
  _QWORD *v56; // [rsp+98h] [rbp-90h]
  unsigned int *v57; // [rsp+A0h] [rbp-88h]
  unsigned int *v58; // [rsp+A8h] [rbp-80h]
  __int64 v59; // [rsp+B0h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-70h]
  __int64 *v61; // [rsp+C0h] [rbp-68h]
  __int64 v62; // [rsp+C8h] [rbp-60h]
  __int128 v63; // [rsp+D0h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+E0h] [rbp-48h] BYREF

  v4 = *(__int64 **)a1;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v8 = **(_QWORD **)a1;
  v9 = *(_DWORD *)(a1 + 60);
  v10 = *(_QWORD *)(a1 + 24);
  v56 = *(_QWORD **)(a1 + 16);
  Affinity = 0LL;
  v51 = v4;
  PreviousAffinity = 0LL;
  v59 = v6;
  v63 = 0LL;
  v44 = v9;
  v42 = 0;
  CurrentThread = KeGetCurrentThread();
  v62 = v8;
  v57 = (unsigned int *)MiReferencePageRuns(v8, 1u, a3, a4);
  v46 = 0;
  v48 = *v57;
  v58 = &v57[4 * v48 + 4];
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v63, v11, v12);
  v13 = 0;
  if ( !KeNumberNodes )
    goto LABEL_59;
  while ( 1 )
  {
    v14 = *(_QWORD *)(4544LL * v13 + *(_QWORD *)(v8 + 16) + 4176);
    if ( v14 < 0x10 )
      goto LABEL_53;
    v55 = (40 * v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = (__int64 *)MiAllocateCrcList(v4, v9, &v55);
    v53 = v15;
    v16 = v15;
    if ( !v15 )
      break;
    v17 = v15;
    v61 = &v15[5 * (v55 / 0x28)];
    KeQueryNodeActiveDpcGangAffinity(v13, &Affinity, 0LL);
    Mask = Affinity.Mask;
    if ( Affinity.Group == WORD4(v63) )
    {
      if ( (Affinity.Mask & (unsigned __int64)v63) != 0 )
        Mask = Affinity.Mask & v63;
      Affinity.Mask = Mask;
    }
    if ( Mask )
    {
      if ( v46 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v46 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v20 = (_DWORD *)v48;
    v43 = 0;
    v21 = 0;
    if ( !(_DWORD)v48 )
      goto LABEL_51;
    v22 = v58;
    v23 = v57 + 6;
    v50 = v57 + 6;
    v49 = v58;
LABEL_15:
    if ( *v22 != v13 )
      goto LABEL_46;
    v24 = *(_QWORD *)v23;
    v25 = *((_QWORD *)v23 - 1) - 1LL;
    v26 = 48 * v25 - 0x58000000000LL;
    if ( !*(_QWORD *)v23 )
      goto LABEL_45;
    PteAddress = 0LL;
LABEL_18:
    if ( (!v59 || !*(_DWORD *)(v59 + 4)) && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      v26 += 48LL;
      ++v25;
      while ( 1 )
      {
        v28 = *(_BYTE *)(v26 + 34) & 7;
        v52 = 0;
        v29 = 1LL;
        v47 = v28;
        if ( (*(_QWORD *)(v26 + 40) & 0x1000000000LL) != 0 )
        {
          PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(v26, &v47, &v52, v20);
          if ( PfnPageSizeIndexUnsynchronized != -1 )
          {
            v29 = MiLargePageSizes[PfnPageSizeIndexUnsynchronized];
            goto LABEL_27;
          }
          v28 = v47;
        }
        if ( v28 > 1 )
        {
          if ( !(unsigned int)MiCombineCandidate(v51, v44, (__int128 *)v26) )
            goto LABEL_39;
          if ( !PteAddress )
          {
            v5 = a1;
            UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 208), 3u, 1LL, 0);
            PteAddress = MiGetPteAddress(UltraMapping);
            if ( !PteAddress )
            {
              v42 = -1073741670;
              goto LABEL_44;
            }
          }
          v33 = (__int64)v56;
          v34 = v56;
          v35 = v51;
          v56[9] = PteAddress;
          v34[8] = v26;
          if ( (unsigned int)MiMapArbitraryPage((__int64)v35, v34, v44, 0LL, 0) )
          {
            if ( (*(_BYTE *)(v26 + 34) & 7) == 6 )
              ++*(_QWORD *)(v10 + 16);
            else
              ++*(_QWORD *)(v10 + 24);
            v36 = MiPerformCombineScan(a1, v33, 0LL, v17);
            MiReleaseArbitraryPage((__int64)v56, v37, v38, v39);
            v40 = v36;
            PteAddress = 0LL;
            v5 = a1;
            if ( v40 )
            {
              v17[1] = v25;
              v17[2] = 0LL;
              v17[4] = 0LL;
              v17 += 5;
              if ( v17 == v61 )
              {
                MiProcessCrcList(a1, v53, ((char *)v17 - (char *)v53) / 40, v13);
                v17 = v53;
              }
            }
          }
          else
          {
LABEL_39:
            v5 = a1;
          }
          if ( --v24 )
            goto LABEL_18;
LABEL_44:
          v23 = v50;
          v22 = v49;
          v21 = v43;
          v20 = (_DWORD *)v48;
LABEL_45:
          if ( v42 < 0 )
          {
LABEL_47:
            v7 = v42;
            goto LABEL_48;
          }
LABEL_46:
          ++v21;
          v22 += 2;
          v23 += 4;
          v43 = v21;
          v49 = v22;
          v50 = v23;
          if ( v21 >= (unsigned int)v20 )
            goto LABEL_47;
          goto LABEL_15;
        }
LABEL_27:
        v31 = v29 - (v25 & (v29 - 1));
        if ( v31 >= v24 )
        {
          v5 = a1;
          goto LABEL_44;
        }
        v25 += v31;
        v24 -= v31;
        v26 += 48 * v31;
      }
    }
    v7 = -1073741248;
    v42 = -1073741248;
LABEL_48:
    v16 = v53;
    if ( v17 != v53 )
      MiProcessCrcList(v5, v53, ((char *)v17 - (char *)v53) / 40, v13);
    v9 = v44;
    v4 = v51;
LABEL_51:
    ExFreePoolWithTag(v16, 0);
    if ( v7 < 0 )
      goto LABEL_57;
    v8 = v62;
LABEL_53:
    if ( ++v13 == (unsigned __int16)KeNumberNodes )
      goto LABEL_57;
  }
  v7 = -1073741670;
LABEL_57:
  if ( v46 == 1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_59:
  MiDereferencePageRuns((__int64)v57);
  return (unsigned int)v7;
}
