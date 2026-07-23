/*
 * XREFs of MiProcessCrcList @ 0x140726FD0
 * Callers:
 *     MiCombineWorkingSetTail @ 0x14055D040 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiValidCombineProtection @ 0x140367F90 (MiValidCombineProtection.c)
 *     MiAllocateCombineProto @ 0x140367FC0 (MiAllocateCombineProto.c)
 *     MiCompareActiveCrcEntries @ 0x140368248 (MiCompareActiveCrcEntries.c)
 *     MiCapturePfnVm @ 0x1403682B0 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiPushCombineBlock @ 0x14036B038 (MiPushCombineBlock.c)
 *     MiFreeCombineBlock @ 0x14036B8E0 (MiFreeCombineBlock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     MiPopulateCombineMdls @ 0x140726E20 (MiPopulateCombineMdls.c)
 *     MiFreeCombineMdls @ 0x140726F18 (MiFreeCombineMdls.c)
 *     MiDereferenceCombineCrc @ 0x140727CEC (MiDereferenceCombineCrc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, __int64 *a2, size_t a3, int a4)
{
  int v4; // ebx
  __int64 *result; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  size_t v9; // r10
  __int64 *v10; // r14
  PADAPTER_OBJECT v11; // rbx
  __int64 CombineProto; // r13
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // r9
  unsigned __int64 v19; // r11
  __int64 v20; // rcx
  char *v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rdi
  _QWORD *Pool; // rax
  char *v25; // rdx
  bool v26; // r8
  char *v27; // rax
  char *v28; // r15
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *j; // rcx
  __int64 i; // rax
  _QWORD **v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // r12
  size_t v37; // rsi
  _QWORD **v38; // r14
  _QWORD *v39; // rdi
  unsigned __int64 v40; // r10
  __int64 v41; // rdx
  __int64 *v42; // r12
  _QWORD *v43; // rdi
  size_t v44; // r14
  __int64 v45; // rsi
  _QWORD *v46; // rax
  size_t k; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdx
  struct _DMA_ADAPTER *v50; // rcx
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  size_t NumOfElements; // [rsp+48h] [rbp-79h]
  PVOID P; // [rsp+50h] [rbp-71h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-69h] BYREF
  __int64 *v58; // [rsp+60h] [rbp-61h]
  int v59; // [rsp+68h] [rbp-59h] BYREF
  int v60; // [rsp+6Ch] [rbp-55h]
  __int64 v61[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v62; // [rsp+80h] [rbp-41h] BYREF
  __int64 *v63; // [rsp+88h] [rbp-39h]
  unsigned int v64; // [rsp+90h] [rbp-31h]
  __int64 v65; // [rsp+98h] [rbp-29h]
  unsigned __int64 v66; // [rsp+A0h] [rbp-21h] BYREF
  __int64 *v67; // [rsp+A8h] [rbp-19h]
  __int64 v68; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v70; // [rsp+C8h] [rbp+7h]

  v4 = a4;
  v58 = a2;
  v63 = (__int64 *)a1;
  result = a2;
  v60 = a4;
  v66 = 0LL;
  v59 = 0;
  v62 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)a1;
    v64 = *(_DWORD *)(a1 + 60);
    P = 0LL;
    v65 = v8;
    v68 = v8;
    qsort(a2, a3, 0x28uLL, MiCombinePageSortByHash);
    DmaAdapter = (PADAPTER_OBJECT)KeGetCurrentThread();
    v9 = 0LL;
    NumOfElements = 0LL;
    v61[1] = (__int64)v61;
    v10 = v58;
    v67 = &v58[5 * a3 - 5];
    v61[0] = (__int64)v61;
    if ( v58 <= v67 )
    {
      v11 = DmaAdapter;
      while ( 1 )
      {
        if ( v7 && *(_DWORD *)(v7 + 4) || (*(_DWORD *)&v11[81].Version & 1) != 0 )
        {
LABEL_55:
          v4 = v60;
          v8 = v65;
          goto LABEL_56;
        }
        CombineProto = 0LL;
        v13 = 48 * v10[1] - 0x58000000000LL;
        v14 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        v15 = (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
        if ( !MiValidCombineProtection(v15) || v14 < v19 || v14 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_15;
        v20 = *v10;
        if ( (v10 == v17 || v20 != v10[5]) && (v20 != v16 || v10 == v18) )
        {
          CombineProto = MiAllocateCombineProto(v65, *v10, v15, 0LL, 0);
          if ( !CombineProto )
            goto LABEL_14;
          v20 = *v10;
        }
        else if ( (*(_BYTE *)(v13 + 34) & 0xC0u) >= 0xC0 )
        {
          *v10 = 0LL;
          goto LABEL_15;
        }
        DmaAdapter = 0LL;
        v21 = MiCapturePfnVm(v63, v13, v64, v20, &DmaAdapter, &v66, &v59, &v62);
        if ( !v21 || v66 != v14 || v59 != v15 )
        {
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( CombineProto )
            MiDecrementCombinedPte(0LL, CombineProto + 48);
LABEL_49:
          *v10 = 0LL;
LABEL_14:
          v9 = NumOfElements;
          goto LABEL_15;
        }
        if ( !CombineProto )
          goto LABEL_23;
        v22 = v62;
        if ( *(_QWORD *)(CombineProto + 64) != v62 )
          break;
LABEL_24:
        *((_DWORD *)v10 + 8) = v15;
        v10[3] = v22;
        if ( CombineProto )
          v10[4] = CombineProto;
        v23 = P;
        if ( !P )
          goto LABEL_34;
        while ( (unsigned __int64)v21 > v23[4] )
        {
          v23 = (_QWORD *)v23[1];
LABEL_33:
          if ( !v23 )
            goto LABEL_34;
        }
        if ( (unsigned __int64)v21 < v23[4] )
        {
          v23 = (_QWORD *)*v23;
          goto LABEL_33;
        }
        if ( v23 )
        {
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          goto LABEL_42;
        }
LABEL_34:
        Pool = MiAllocatePool(64, 0x38uLL, 0x6D56694Du);
        v23 = Pool;
        if ( !Pool )
        {
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( CombineProto )
          {
            MiDecrementCombinedPte(0LL, CombineProto + 48);
            v10[4] = 0LL;
            goto LABEL_49;
          }
          goto LABEL_14;
        }
        v25 = (char *)P;
        v26 = 0;
        Pool[4] = v21;
        Pool[5] = DmaAdapter;
        if ( !v25 )
          goto LABEL_41;
        while ( 2 )
        {
          if ( v21 < v25 + 32 )
          {
            v27 = *(char **)v25;
            if ( !*(_QWORD *)v25 )
              goto LABEL_41;
            goto LABEL_38;
          }
          v27 = (char *)*((_QWORD *)v25 + 1);
          if ( v27 )
          {
LABEL_38:
            v25 = v27;
            continue;
          }
          break;
        }
        v26 = 1;
LABEL_41:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v25, v26, v23);
LABEL_42:
        v9 = NumOfElements + 1;
        v10[2] = v23[6];
        ++v23[3];
        ++NumOfElements;
        v23[6] = v10;
        v10[1] = (__int64)(v14 << 25) >> 16;
LABEL_15:
        v10 += 5;
        if ( v10 > v67 )
          goto LABEL_55;
      }
      MiDecrementCombinedPte(0LL, CombineProto + 48);
      CombineProto = MiAllocateCombineProto(v65, *v10, v15, &v62, 0);
      if ( !CombineProto )
      {
        if ( !DmaAdapter )
          goto LABEL_49;
        HalPutDmaAdapter(DmaAdapter);
        *v10 = 0LL;
        goto LABEL_14;
      }
LABEL_23:
      v22 = v62;
      goto LABEL_24;
    }
LABEL_56:
    v28 = 0LL;
    if ( v9 && (v28 = (char *)MiAllocatePool(256, 8 * v9, 0x6D56694Du)) != 0LL )
    {
      v29 = P;
      v30 = 0LL;
      j = 0LL;
      if ( P )
      {
        do
        {
          j = v29;
          v29 = (_QWORD *)*v29;
        }
        while ( v29 );
      }
      while ( j )
      {
        for ( i = j[6]; i; i = *(_QWORD *)(i + 16) )
          *(_QWORD *)&v28[8 * v30++] = i;
        v33 = (_QWORD **)j[1];
        v34 = j;
        if ( v33 )
        {
          v35 = *v33;
          for ( j = (_QWORD *)j[1]; v35; v35 = (_QWORD *)*v35 )
            j = v35;
        }
        else
        {
          for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*j == v34 )
              break;
            v34 = j;
          }
        }
      }
      qsort(v28, NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByHash);
      v36 = 0LL;
      v37 = 0LL;
      if ( NumOfElements )
      {
        v38 = (_QWORD **)(v28 + 8);
        while ( 1 )
        {
          v39 = *(v38 - 1);
          v40 = v39[4];
          if ( v40 <= 0x100 )
          {
            if ( (v37 && !(unsigned int)MiCompareActiveCrcEntries(*(v38 - 1), *(v38 - 2))
               || v37 != NumOfElements - 1 && !(unsigned int)MiCompareActiveCrcEntries(v39, *v38))
              && v41 )
            {
              if ( v36 && !(unsigned int)MiCompareActiveCrcEntries(v36, v39) )
                goto LABEL_79;
              v52 = (_QWORD *)MiAllocateCombineProto(v8, *v39, v40, v39 + 3, 1);
              if ( !v52 )
                goto LABEL_79;
LABEL_110:
              if ( v52[3] )
              {
                v39[4] = v52;
              }
              else
              {
                MiPushCombineBlock(v61, v52);
                v53 = MiProtectionToCacheAttribute(*((_DWORD *)v39 + 8));
                ++*((_QWORD *)&v69 + v53);
              }
              v36 = v39;
              goto LABEL_79;
            }
            v52 = (_QWORD *)MiAllocateCombineProto(v8, *v39, v40, v39 + 3, 0);
            if ( v52 )
              goto LABEL_110;
            v39[1] = -1LL;
          }
LABEL_79:
          ++v37;
          ++v38;
          if ( v37 >= NumOfElements )
          {
            v4 = v60;
            break;
          }
        }
      }
      v42 = v63;
      MiPopulateCombineMdls((char *)v63, v4, (__int64)&v69);
    }
    else
    {
      v42 = v63;
    }
    while ( P )
    {
      v43 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
      v44 = v43[3];
      v45 = v43[6];
      if ( v28 )
      {
        if ( v45 )
        {
          v46 = v28;
          do
          {
            *v46++ = v45;
            v45 = *(_QWORD *)(v45 + 16);
          }
          while ( v45 );
        }
        qsort(v28, v44, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByVa);
        v43[6] = 0LL;
        for ( k = 0LL; k < v44; ++k )
        {
          v48 = *(_QWORD *)&v28[8 * k];
          v49 = *(_QWORD *)(v48 + 8);
          if ( v49 == -1 || k && v49 == *(_QWORD *)(*(_QWORD *)&v28[8 * k - 8] + 8LL) )
          {
            MiDereferenceCombineCrc(v48);
            --v43[3];
          }
          else
          {
            *(_QWORD *)(v48 + 16) = v43[6];
            v43[6] = v48;
          }
        }
        if ( v43[3] )
          MiSharePages((__int64)v42, v43, (unsigned __int64 *)v61, &v68, v4);
      }
      else
      {
        for ( ; v45; v45 = *(_QWORD *)(v45 + 16) )
          MiDereferenceCombineCrc(v45);
      }
      v50 = (struct _DMA_ADAPTER *)v43[5];
      if ( v50 )
        HalPutDmaAdapter(v50);
      ExFreePoolWithTag(v43, 0);
    }
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    if ( (*((_DWORD *)v42 + 15) & 2) == 0 )
      MiFreeCombineMdls((__int64)v42);
    while ( 1 )
    {
      v51 = v61[0];
      result = v61;
      if ( (__int64 *)v61[0] == v61 )
        break;
      if ( *(__int64 **)(v61[0] + 8) != v61 || (v54 = *(_QWORD *)v61[0], *(_QWORD *)(*(_QWORD *)v61[0] + 8LL) != v61[0]) )
        __fastfail(3u);
      v61[0] = *(_QWORD *)v61[0];
      *(_QWORD *)(v54 + 8) = v61;
      *(_QWORD *)(v51 + 32) = 0LL;
      MiFreeCombineBlock(v51);
    }
  }
  return result;
}
