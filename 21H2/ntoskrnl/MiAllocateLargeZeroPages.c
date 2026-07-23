/*
 * XREFs of MiAllocateLargeZeroPages @ 0x14055DC9C
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x140533F24 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreateLargePfnList @ 0x14055E13C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C8BA4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiCreateColorAnchors @ 0x1402936E4 (MiCreateColorAnchors.c)
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 *     MiInsertMdlPageNeedsZero @ 0x140295398 (MiInsertMdlPageNeedsZero.c)
 *     MiDeleteColorAnchors @ 0x1402953FC (MiDeleteColorAnchors.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiIsFreshPfnFromZeroedList @ 0x14030EA6C (MiIsFreshPfnFromZeroedList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F6180 (MiConvertSmallPageRangeToLarge.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     MiGetFastLargePages @ 0x1403F7B20 (MiGetFastLargePages.c)
 *     MiAssembleLargePagePfnList @ 0x14055E060 (MiAssembleLargePagePfnList.c)
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiAllocateLargeZeroPages(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  char v7; // r13
  unsigned int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r14d
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD *FastLargePages; // rdi
  int v17; // esi
  _QWORD *v18; // r13
  unsigned int PfnPageSizeIndex; // r14d
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  _QWORD **v24; // rdx
  __int64 v25; // r13
  _QWORD *v26; // rdi
  unsigned int v27; // ecx
  unsigned int v28; // r14d
  __int64 v29; // r13
  _QWORD **v30; // rsi
  _QWORD *v31; // rdx
  _QWORD *v32; // rdi
  unsigned __int64 *v33; // rax
  unsigned __int64 *i; // rbx
  unsigned __int64 **v35; // rax
  __int64 *v36; // rdi
  unsigned __int64 *v37; // rdx
  unsigned __int64 *v38; // rcx
  unsigned __int64 *v39; // rcx
  __int64 v40; // r8
  _DWORD *v41; // r9
  __int64 v42; // rdx
  __int64 *v43; // rax
  int v45; // [rsp+44h] [rbp-8Dh]
  unsigned __int64 *v46; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-81h]
  _QWORD *v48; // [rsp+58h] [rbp-79h] BYREF
  _QWORD **v49; // [rsp+60h] [rbp-71h]
  __int64 v50; // [rsp+68h] [rbp-69h]
  __int64 v51; // [rsp+70h] [rbp-61h]
  __int64 CurrentIrql; // [rsp+78h] [rbp-59h]
  __int64 v53; // [rsp+80h] [rbp-51h]
  __int64 v54; // [rsp+88h] [rbp-49h]
  __int128 v55; // [rsp+90h] [rbp-41h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-31h]
  __int128 v57; // [rsp+B0h] [rbp-21h]

  v7 = a7;
  v54 = a1;
  v47 = a5;
  v50 = a6;
  v55 = 0LL;
  v53 = a3;
  v56 = 0LL;
  v57 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  LODWORD(v46) = MiProtectionToCacheAttribute(a5);
  v13 = 0;
  v45 = 0;
  v49 = &v48;
  v14 = 0LL;
  v48 = &v48;
  if ( v15 )
  {
    do
    {
      FastLargePages = (_QWORD *)MiGetFastLargePages(v12, a4, a2 - v14, v11, v10, v7);
      if ( !FastLargePages )
      {
        v13 = v45;
        break;
      }
      v17 = v7 & 2;
      do
      {
        v18 = (_QWORD *)*FastLargePages;
        if ( !v17 )
          MiIsFreshPfnFromZeroedList((__int64)FastLargePages);
        PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)FastLargePages);
        v51 = MiLargePageSizes[PfnPageSizeIndex];
        if ( v20 )
        {
          if ( (_DWORD)v56 )
            goto LABEL_11;
          if ( (unsigned __int8)CurrentIrql < 2u && (unsigned int)MiCreateColorAnchors((__int64)&v55, a4) )
          {
            HIDWORD(v55) = (_DWORD)v46;
            DWORD2(v55) = v17 == 0 ? 2 : 0;
LABEL_11:
            v21 = (unsigned __int128)((__int64)(FastLargePages + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
            v22 = v51;
            MiInsertMdlPageNeedsZero((__int64)&v55, ((unsigned __int64)v21 >> 63) + (v21 >> 3), v51);
            v13 = 1;
            v45 = 1;
            goto LABEL_15;
          }
          MiZeroLargePage((__int64)FastLargePages, PfnPageSizeIndex);
        }
        v23 = v49;
        if ( *v49 != &v48 )
          __fastfail(3u);
        v13 = v45;
        *FastLargePages = &v48;
        FastLargePages[1] = v23;
        *v23 = FastLargePages;
        v49 = (_QWORD **)FastLargePages;
        v22 = v51;
LABEL_15:
        v14 += v22;
        FastLargePages = v18;
      }
      while ( v18 );
      v7 = a7;
      v10 = v47;
      v12 = v54;
      v11 = v53;
    }
    while ( v14 < a2 );
  }
  v24 = (_QWORD **)v48;
  if ( v48 != &v48 )
  {
    v25 = v50;
    do
    {
      v26 = *v24;
      MiAssembleLargePagePfnList(v25);
      v24 = (_QWORD **)v26;
    }
    while ( v26 != &v48 );
    v7 = a7;
  }
  if ( v13 )
  {
    MiZeroInParallel((__int64 *)&v55);
    v27 = v56;
    v28 = 0;
    if ( (_DWORD)v56 )
    {
      v29 = v50;
      v30 = (_QWORD **)(v55 + 32);
      do
      {
        v31 = *v30;
        if ( *v30 != v30 )
        {
          do
          {
            v32 = (_QWORD *)*v31;
            MiAssembleLargePagePfnList(v29);
            v31 = v32;
          }
          while ( v32 != v30 );
          v27 = v56;
        }
        v30 += 6;
        ++v28;
      }
      while ( v28 < v27 );
      v7 = a7;
    }
    MiDeleteColorAnchors((__int64)&v55);
  }
  if ( v14 != a2 && (unsigned __int8)CurrentIrql < 2u && (v7 & 1) == 0 )
  {
    v46 = 0LL;
    MiFindLargePageMemory(v54, a4, a2 - v14, v53, v47, v7, (__int64)&v46);
    v33 = v46;
    i = 0LL;
    while ( v33 )
    {
      i = v33;
      v33 = (unsigned __int64 *)*v33;
    }
    while ( i )
    {
      v35 = (unsigned __int64 **)i[1];
      v36 = (__int64 *)(i - 3);
      v37 = i;
      v38 = i;
      if ( v35 )
      {
        v39 = *v35;
        for ( i = (unsigned __int64 *)i[1]; v39; v39 = (unsigned __int64 *)*v39 )
          i = v39;
      }
      else
      {
        while ( 1 )
        {
          i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (unsigned __int64 *)*i == v38 )
            break;
          v38 = i;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)&v46, v37);
      if ( *((_BYTE *)v36 + 16) == 1 )
      {
        v42 = 0LL;
        v43 = MiLargePageSizes;
        do
        {
          if ( v36[1] == *v43 )
            break;
          v42 = (unsigned int)(v42 + 1);
          ++v43;
        }
        while ( (unsigned int)v42 < 3 );
        MiConvertSmallPageRangeToLarge(*v36, v42, v40, v41);
      }
      ExFreePoolWithTag(v36, 0);
      v14 += MiAssembleLargePagePfnList(v50);
    }
  }
  return v14;
}
