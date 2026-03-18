/*
 * XREFs of MiAllocateLargeZeroPages @ 0x1405C0D40
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x140589518 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x14096DAE0 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     MiCreatePageChains @ 0x140263558 (MiCreatePageChains.c)
 *     MiZeroInParallel @ 0x14026446C (MiZeroInParallel.c)
 *     MiDereferencePageChains @ 0x1402646FC (MiDereferencePageChains.c)
 *     MiInsertMdlPageNeedsZero @ 0x1402660E4 (MiInsertMdlPageNeedsZero.c)
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14028CF90 (MiConvertSmallPageRangeToLarge.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAddPageToHeatRanges @ 0x1405B7574 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 *     MiAssembleLargePagePfnList @ 0x1405C11C0 (MiAssembleLargePagePfnList.c)
 *     MiGetFastLargePages @ 0x1405C2478 (MiGetFastLargePages.c)
 *     MiFindLargePageMemory @ 0x140982F64 (MiFindLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateLargeZeroPages(unsigned int *a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdi
  BOOL v4; // r12d
  unsigned int v5; // ecx
  __int64 *v6; // rdx
  unsigned int v7; // r13d
  __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD **v11; // r14
  _QWORD *v12; // rdx
  _QWORD *v13; // rbx
  __int64 result; // rax
  unsigned __int64 *i; // rdi
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *PageChains; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 **v21; // rax
  __int64 *v22; // rbx
  unsigned __int64 *v23; // rdx
  unsigned __int64 *v24; // rcx
  unsigned __int64 *v25; // rcx
  __int64 v26; // r14
  unsigned int v27; // edx
  __int64 *v28; // rax
  int PfnPageSizeIndex; // eax
  __int64 v30; // rcx
  __int64 *v31; // [rsp+28h] [rbp-E0h] BYREF
  int v32; // [rsp+30h] [rbp-D8h]
  int v33; // [rsp+34h] [rbp-D4h]
  __int64 v34; // [rsp+38h] [rbp-D0h]
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+50h] [rbp-B8h]
  _DWORD v37[32]; // [rsp+54h] [rbp-B4h] BYREF
  _BYTE v38[96]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  v2 = 0;
  v3 = 0LL;
  v4 = KeGetCurrentIrql() != 2 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0;
  v5 = a1[9];
  v35 = 1LL;
  v36 = 16;
  v32 = MiProtectionToCacheAttribute(v5);
  if ( *((_QWORD *)a1 + 9) >= *((_QWORD *)a1 + 2) )
    goto LABEL_19;
  do
  {
    MiGetFastLargePages(a1, v38);
    v6 = MiLargePageSizes;
    v33 = 0;
    v31 = MiLargePageSizes;
    v7 = 0;
    v8 = 0LL;
    do
    {
      while ( 1 )
      {
        v9 = &v38[v8];
        v10 = *(_QWORD **)&v38[v8];
        if ( (_QWORD *)*v9 == v9 )
          break;
        v33 = 1;
        if ( (_QWORD *)v10[1] != v9 || (v16 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
LABEL_44:
          __fastfail(3u);
        *v9 = v16;
        *(_QWORD *)(v16 + 8) = v9;
        --v9[2];
        if ( (*a1 & 8) == 0 && (v10[2] & 0x3E0LL) != 0 )
          v2 = 1;
        v34 = *v6;
        LOBYTE(v17) = MiIsFreeZeroPfnCold((__int64)v10);
        if ( v17 && (HvlEnlightenments & 0x200000) != 0 )
        {
          if ( (unsigned int)MiAddPageToHeatRanges(
                               (__int64)&v35,
                               0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x44000000000LL) >> 4),
                               v7) )
            MiNotifyPageHeat((unsigned int *)&v35);
          v10[2] = MiUpdatePageFileHighInPte(v10[2], 0LL);
        }
        if ( v2 )
        {
          v2 = 0;
          if ( v3 )
            goto LABEL_38;
          if ( v4 )
          {
            PageChains = (_DWORD *)MiCreatePageChains(a1[8], v32);
            v3 = (__int64)PageChains;
            if ( PageChains )
            {
              *PageChains = 2;
LABEL_38:
              MiInsertMdlPageNeedsZero(v3, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x44000000000LL) >> 4), v34);
              goto LABEL_43;
            }
          }
          MiZeroLargePage((__int64)v10, v7, v32);
        }
        else
        {
          v2 = 0;
        }
        v19 = v8 + *((_QWORD *)a1 + 10);
        v20 = *(_QWORD **)(v19 + 8);
        if ( *v20 != v19 )
          goto LABEL_44;
        *v10 = v19;
        v10[1] = v20;
        *v20 = v10;
        *(_QWORD *)(v19 + 8) = v10;
        ++*(_QWORD *)(v8 + *((_QWORD *)a1 + 10) + 16);
LABEL_43:
        v6 = v31;
      }
      ++v6;
      ++v7;
      v8 += 24LL;
      v31 = v6;
    }
    while ( v7 < 4 );
  }
  while ( v33 && *((_QWORD *)a1 + 9) < *((_QWORD *)a1 + 2) );
  if ( HIDWORD(v35) )
    MiNotifyPageHeat((unsigned int *)&v35);
  if ( v3 )
  {
    MiZeroInParallel((char *)v3);
    if ( *(_DWORD *)(v3 + 8) )
    {
      v11 = (_QWORD **)(v3 + 120);
      do
      {
        v12 = *v11;
        if ( *v11 != v11 )
        {
          do
          {
            v13 = (_QWORD *)*v12;
            MiAssembleLargePagePfnList(*((_QWORD *)a1 + 10));
            v12 = v13;
          }
          while ( v13 != v11 );
        }
        v11 += 6;
        ++v2;
      }
      while ( v2 < *(_DWORD *)(v3 + 8) );
    }
    MiDereferencePageChains((volatile signed __int32 *)v3);
  }
LABEL_19:
  result = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 9) != result )
  {
    if ( v4 )
    {
      result = *a1;
      if ( (result & 0x10) == 0 )
      {
        v31 = 0LL;
        MiFindLargePageMemory(a1, &v31);
        result = (__int64)v31;
        i = 0LL;
        while ( result )
        {
          i = (unsigned __int64 *)result;
          result = *(_QWORD *)result;
        }
        while ( i )
        {
          v21 = (unsigned __int64 **)i[1];
          v22 = (__int64 *)(i - 3);
          v23 = i;
          v24 = i;
          if ( v21 )
          {
            v25 = *v21;
            for ( i = (unsigned __int64 *)i[1]; v25; v25 = (unsigned __int64 *)*v25 )
              i = v25;
          }
          else
          {
            while ( 1 )
            {
              i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || (unsigned __int64 *)*i == v24 )
                break;
              v24 = i;
            }
          }
          RtlAvlRemoveNode((unsigned __int64 *)&v31, v23);
          v26 = *v22;
          if ( *((_BYTE *)v22 + 16) )
          {
            v27 = 0;
            v28 = MiLargePageSizes;
            do
            {
              if ( v22[1] == *v28 )
                break;
              ++v27;
              ++v28;
            }
            while ( v27 < 3 );
            MiConvertSmallPageRangeToLarge(*v22, v27);
          }
          ExFreePoolWithTag(v22, 0);
          PfnPageSizeIndex = MiGetPfnPageSizeIndex(48 * v26 - 0x220000000000LL);
          v30 = *((_QWORD *)a1 + 10);
          *((_QWORD *)a1 + 9) += MiLargePageSizes[PfnPageSizeIndex];
          result = MiAssembleLargePagePfnList(v30);
        }
      }
    }
  }
  return result;
}
