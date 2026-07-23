/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x140727760
 * Callers:
 *     MiCombineIdenticalPages @ 0x140726B60 (MiCombineIdenticalPages.c)
 * Callees:
 *     KeQueryAffinityThread @ 0x1402504F0 (KeQueryAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiMapArbitraryPage @ 0x1403697C0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x140369D50 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x140369E30 (MiPerformCombineScan.c)
 *     KeQueryNodeActiveDpcGangAffinity @ 0x14036BCFC (KeQueryNodeActiveDpcGangAffinity.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x140727D68 (MiAllocateCrcList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned int v11; // ebx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // r14
  __int64 *v15; // r15
  unsigned __int64 Mask; // rcx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  _DWORD *v18; // r9
  unsigned int v19; // r8d
  unsigned int *v20; // rdx
  unsigned int *v21; // rcx
  unsigned __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 PteAddress; // r12
  int v26; // ecx
  __int64 v27; // rdi
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v29; // rdi
  unsigned __int64 UltraMapping; // rax
  __int64 v31; // rdi
  _QWORD *v32; // rdx
  __int64 *v33; // rcx
  BOOL v34; // edi
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  bool v38; // zf
  int v40; // [rsp+30h] [rbp-F8h]
  unsigned int v41; // [rsp+34h] [rbp-F4h]
  unsigned int v42; // [rsp+38h] [rbp-F0h]
  int v44; // [rsp+48h] [rbp-E0h]
  int v45; // [rsp+4Ch] [rbp-DCh] BYREF
  unsigned __int64 v46; // [rsp+50h] [rbp-D8h]
  unsigned int *v47; // [rsp+58h] [rbp-D0h]
  unsigned int *v48; // [rsp+60h] [rbp-C8h]
  __int64 *v49; // [rsp+68h] [rbp-C0h]
  int v50; // [rsp+70h] [rbp-B8h] BYREF
  __int64 *v51; // [rsp+78h] [rbp-B0h]
  _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v53; // [rsp+90h] [rbp-98h] BYREF
  _QWORD *v54; // [rsp+98h] [rbp-90h]
  unsigned int *v55; // [rsp+A0h] [rbp-88h]
  unsigned int *v56; // [rsp+A8h] [rbp-80h]
  __int64 v57; // [rsp+B0h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-70h]
  __int64 *v59; // [rsp+C0h] [rbp-68h]
  __int64 v60; // [rsp+C8h] [rbp-60h]
  __int128 v61; // [rsp+D0h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+E0h] [rbp-48h] BYREF

  v4 = *(__int64 **)a1;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v8 = **(_QWORD **)a1;
  v9 = *(_DWORD *)(a1 + 60);
  v10 = *(_QWORD *)(a1 + 24);
  v54 = *(_QWORD **)(a1 + 16);
  Affinity = 0LL;
  v49 = v4;
  PreviousAffinity = 0LL;
  v57 = v6;
  v61 = 0LL;
  v42 = v9;
  v40 = 0;
  CurrentThread = KeGetCurrentThread();
  v60 = v8;
  v55 = (unsigned int *)MiReferencePageRuns(v8, 1u, a3, a4);
  v44 = 0;
  v46 = *v55;
  v56 = &v55[4 * v46 + 4];
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v61);
  v11 = 0;
  if ( !KeNumberNodes )
    goto LABEL_59;
  while ( 1 )
  {
    v12 = *(_QWORD *)(4544LL * v11 + *(_QWORD *)(v8 + 16) + 4176);
    if ( v12 < 0x10 )
      goto LABEL_53;
    v53 = (40 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v13 = (__int64 *)MiAllocateCrcList(v4, v9, &v53);
    v51 = v13;
    v14 = v13;
    if ( !v13 )
      break;
    v15 = v13;
    v59 = &v13[5 * (v53 / 0x28)];
    KeQueryNodeActiveDpcGangAffinity(v11, &Affinity, 0LL);
    Mask = Affinity.Mask;
    if ( Affinity.Group == WORD4(v61) )
    {
      if ( (Affinity.Mask & (unsigned __int64)v61) != 0 )
        Mask = Affinity.Mask & v61;
      Affinity.Mask = Mask;
    }
    if ( Mask )
    {
      if ( v44 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v44 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v18 = (_DWORD *)v46;
    v41 = 0;
    v19 = 0;
    if ( !(_DWORD)v46 )
      goto LABEL_51;
    v20 = v56;
    v21 = v55 + 6;
    v48 = v55 + 6;
    v47 = v56;
LABEL_15:
    if ( *v20 != v11 )
      goto LABEL_46;
    v22 = *(_QWORD *)v21;
    v23 = *((_QWORD *)v21 - 1) - 1LL;
    v24 = 48 * v23 - 0x58000000000LL;
    if ( !*(_QWORD *)v21 )
      goto LABEL_45;
    PteAddress = 0LL;
LABEL_18:
    if ( (!v57 || !*(_DWORD *)(v57 + 4)) && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      v24 += 48LL;
      ++v23;
      while ( 1 )
      {
        v26 = *(_BYTE *)(v24 + 34) & 7;
        v50 = 0;
        v27 = 1LL;
        v45 = v26;
        if ( (*(_QWORD *)(v24 + 40) & 0x1000000000LL) != 0 )
        {
          PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(v24, &v45, &v50, v18);
          if ( PfnPageSizeIndexUnsynchronized != -1 )
          {
            v27 = MiLargePageSizes[PfnPageSizeIndexUnsynchronized];
            goto LABEL_27;
          }
          v26 = v45;
        }
        if ( v26 > 1 )
        {
          if ( !(unsigned int)MiCombineCandidate(v49, v42, (__int128 *)v24) )
            goto LABEL_39;
          if ( !PteAddress )
          {
            v5 = a1;
            UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 208), 3u, 1LL, 0);
            PteAddress = MiGetPteAddress(UltraMapping);
            if ( !PteAddress )
            {
              v40 = -1073741670;
              goto LABEL_44;
            }
          }
          v31 = (__int64)v54;
          v32 = v54;
          v33 = v49;
          v54[9] = PteAddress;
          v32[8] = v24;
          if ( (unsigned int)MiMapArbitraryPage((__int64)v33, v32, v42, 0LL, 0) )
          {
            if ( (*(_BYTE *)(v24 + 34) & 7) == 6 )
              ++*(_QWORD *)(v10 + 16);
            else
              ++*(_QWORD *)(v10 + 24);
            v34 = MiPerformCombineScan(a1, v31, 0LL, v15);
            MiReleaseArbitraryPage((__int64)v54, v35, v36, v37);
            v38 = v34;
            PteAddress = 0LL;
            v5 = a1;
            if ( v38 )
            {
              v15[1] = v23;
              v15[2] = 0LL;
              v15[4] = 0LL;
              v15 += 5;
              if ( v15 == v59 )
              {
                MiProcessCrcList(a1, v51, ((char *)v15 - (char *)v51) / 40, v11);
                v15 = v51;
              }
            }
          }
          else
          {
LABEL_39:
            v5 = a1;
          }
          if ( --v22 )
            goto LABEL_18;
LABEL_44:
          v21 = v48;
          v20 = v47;
          v19 = v41;
          v18 = (_DWORD *)v46;
LABEL_45:
          if ( v40 < 0 )
          {
LABEL_47:
            v7 = v40;
            goto LABEL_48;
          }
LABEL_46:
          ++v19;
          v20 += 2;
          v21 += 4;
          v41 = v19;
          v47 = v20;
          v48 = v21;
          if ( v19 >= (unsigned int)v18 )
            goto LABEL_47;
          goto LABEL_15;
        }
LABEL_27:
        v29 = v27 - (v23 & (v27 - 1));
        if ( v29 >= v22 )
        {
          v5 = a1;
          goto LABEL_44;
        }
        v23 += v29;
        v22 -= v29;
        v24 += 48 * v29;
      }
    }
    v7 = -1073741248;
    v40 = -1073741248;
LABEL_48:
    v14 = v51;
    if ( v15 != v51 )
      MiProcessCrcList(v5, v51, ((char *)v15 - (char *)v51) / 40, v11);
    v9 = v42;
    v4 = v49;
LABEL_51:
    ExFreePoolWithTag(v14, 0);
    if ( v7 < 0 )
      goto LABEL_57;
    v8 = v60;
LABEL_53:
    if ( ++v11 == (unsigned __int16)KeNumberNodes )
      goto LABEL_57;
  }
  v7 = -1073741670;
LABEL_57:
  if ( v44 == 1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_59:
  MiDereferencePageRuns((__int64)v55);
  return (unsigned int)v7;
}
