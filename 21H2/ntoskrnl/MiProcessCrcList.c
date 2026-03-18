/*
 * XREFs of MiProcessCrcList @ 0x1406F2C30
 * Callers:
 *     MiCombineWorkingSetTail @ 0x1405B60A0 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140221E50 (MmGetCurrentProcessorColor.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiFreeCombineBlock @ 0x140239A98 (MiFreeCombineBlock.c)
 *     MiValidCombineProtection @ 0x14026AB40 (MiValidCombineProtection.c)
 *     MiAllocateCombineProto @ 0x14026AB70 (MiAllocateCombineProto.c)
 *     MiCompareActiveCrcEntries @ 0x14026AE50 (MiCompareActiveCrcEntries.c)
 *     MiCapturePfnVm @ 0x14026AEB0 (MiCapturePfnVm.c)
 *     MiPushCombineBlock @ 0x14026B308 (MiPushCombineBlock.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     MiFreeCombineMdls @ 0x14069A6F4 (MiFreeCombineMdls.c)
 *     MiPopulateCombineMdls @ 0x1406E6E88 (MiPopulateCombineMdls.c)
 *     MiDereferenceCombineCrc @ 0x1406F33E4 (MiDereferenceCombineCrc.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, char *a2, size_t a3, int a4)
{
  __int64 *result; // rax
  __int64 *v5; // r12
  int v6; // ebx
  char *v8; // r14
  __int64 v9; // r13
  __int64 *v10; // rax
  struct _KTHREAD *v11; // r11
  __int64 v12; // r8
  char *v13; // rdi
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rax
  ULONG_PTR v16; // rsi
  unsigned __int64 v17; // r15
  unsigned int v18; // r12d
  __int64 v19; // rdx
  char *v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  unsigned __int64 CombineProto; // rax
  unsigned __int64 v25; // r14
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rsi
  int v29; // eax
  _QWORD *PoolMm; // rax
  _QWORD *v31; // rdx
  bool v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  size_t v35; // r13
  char *Pool; // r15
  _QWORD *v37; // rax
  _QWORD *j; // rcx
  __int64 v39; // r8
  __int64 i; // rax
  _QWORD **v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // r12
  size_t v45; // rsi
  __int64 v46; // rbx
  _QWORD **v47; // r14
  _QWORD *v48; // rdi
  unsigned __int64 v49; // r10
  __int64 v50; // rdx
  _QWORD *v51; // rdi
  size_t v52; // r14
  __int64 v53; // rsi
  _QWORD *v54; // rax
  size_t k; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdx
  void *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rdx
  int v62; // eax
  PVOID P; // [rsp+48h] [rbp-89h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-81h]
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  int v66; // [rsp+60h] [rbp-71h] BYREF
  int v67; // [rsp+64h] [rbp-6Dh]
  char *v68; // [rsp+68h] [rbp-69h]
  __int64 v69[2]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v70; // [rsp+80h] [rbp-51h] BYREF
  unsigned int v71; // [rsp+88h] [rbp-49h]
  size_t NumOfElements; // [rsp+90h] [rbp-41h]
  __int64 *v73; // [rsp+98h] [rbp-39h]
  __int64 *v74; // [rsp+A0h] [rbp-31h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-29h] BYREF
  char *v76; // [rsp+B0h] [rbp-21h]
  __int64 *v77; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v78; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-1h]

  result = 0LL;
  v74 = (__int64 *)a1;
  v5 = (__int64 *)a1;
  v68 = a2;
  v79 = 0LL;
  v75 = 0LL;
  v6 = a4;
  v67 = a4;
  v66 = 0;
  v70 = 0LL;
  v8 = a2;
  v78 = 0LL;
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v71 = *(_DWORD *)(a1 + 60);
    v10 = *(__int64 **)a1;
    P = 0LL;
    v73 = v10;
    v77 = v10;
    qsort(a2, a3, 0x28uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    NumOfElements = 0LL;
    v69[1] = (__int64)v69;
    v12 = 5 * (a3 - 1);
    v13 = v8;
    v76 = &v8[8 * v12];
    v69[0] = (__int64)v69;
    if ( v8 <= v76 )
    {
      v14 = CurrentThread;
      while ( 1 )
      {
        if ( v9 && *(_DWORD *)(v9 + 4) || (*(_DWORD *)(&v14[1].SwapListEntry + 1) & 1) != 0 )
        {
LABEL_54:
          v6 = v67;
          v5 = v74;
          goto LABEL_55;
        }
        v15 = *((_QWORD *)v13 + 1);
        CurrentThread = v11;
        v16 = 48 * v15 - 0x220000000000LL;
        v17 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
        v18 = (*(_DWORD *)(v16 + 16) >> 5) & 0x1F;
        if ( !MiValidCombineProtection(v18) || v17 < v21 || v17 > v22 )
          goto LABEL_14;
        v23 = *(_QWORD *)v13;
        if ( (v13 == v20 || v23 != *((_QWORD *)v13 + 5)) && (v23 != v19 || v13 == v8) )
        {
          CombineProto = MiAllocateCombineProto((__int64)v73, *(_QWORD *)v13, v18, 0LL, (int)v11);
          v11 = 0LL;
          CurrentThread = (struct _KTHREAD *)CombineProto;
          if ( !CombineProto )
            goto LABEL_14;
          v23 = *(_QWORD *)v13;
        }
        else if ( (*(_BYTE *)(v16 + 34) & 0xC0u) >= 0xC0 )
        {
          *(_QWORD *)v13 = v11;
          goto LABEL_14;
        }
        Object = v11;
        v25 = MiCapturePfnVm(v74, v16, v71, v23, &Object, &v75, &v66, &v70);
        if ( !v25 || v75 != v17 || v66 != v18 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CurrentThread )
          {
            MiDecrementCombinedPte(0LL, (__int64)&CurrentThread->StackLimit);
            v8 = v68;
            v11 = 0LL;
            *(_QWORD *)v13 = 0LL;
            goto LABEL_14;
          }
          goto LABEL_47;
        }
        v26 = CurrentThread;
        if ( !CurrentThread )
          goto LABEL_22;
        v27 = v70;
        if ( CurrentThread->ThreadLock != v70 )
          break;
LABEL_23:
        *((_DWORD *)v13 + 8) = v18;
        *((_QWORD *)v13 + 3) = v27;
        if ( v26 )
          *((_QWORD *)v13 + 4) = v26;
        v28 = P;
        if ( !P )
          goto LABEL_33;
        while ( v25 > v28[4] )
        {
          v28 = (_QWORD *)v28[1];
LABEL_32:
          if ( !v28 )
            goto LABEL_33;
        }
        if ( v25 < v28[4] )
        {
          v28 = (_QWORD *)*v28;
          goto LABEL_32;
        }
        if ( v28 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_41;
        }
LABEL_33:
        LOWORD(v29) = MmGetCurrentProcessorColor();
        PoolMm = ExAllocatePoolMm(64LL, 0x38uLL, 0x6D56694Du, v29 | 0x80000000);
        v28 = PoolMm;
        if ( !PoolMm )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CurrentThread )
          {
            MiDecrementCombinedPte(0LL, (__int64)&CurrentThread->StackLimit);
            v11 = 0LL;
            *(_QWORD *)v13 = 0LL;
            *((_QWORD *)v13 + 4) = 0LL;
          }
          else
          {
            v11 = 0LL;
          }
          goto LABEL_48;
        }
        v31 = P;
        v32 = 0;
        PoolMm[4] = v25;
        PoolMm[5] = Object;
        if ( !v31 )
          goto LABEL_40;
        while ( 2 )
        {
          if ( v25 < (unsigned __int64)(v31 + 4) )
          {
            v33 = (_QWORD *)*v31;
            if ( !*v31 )
              goto LABEL_40;
            goto LABEL_37;
          }
          v33 = (_QWORD *)v31[1];
          if ( v33 )
          {
LABEL_37:
            v31 = v33;
            continue;
          }
          break;
        }
        v32 = 1;
LABEL_40:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v31, v32, v28);
LABEL_41:
        v34 = v28[6];
        ++NumOfElements;
        *((_QWORD *)v13 + 2) = v34;
        ++v28[3];
        v28[6] = v13;
        v8 = v68;
        *((_QWORD *)v13 + 1) = (__int64)(v17 << 25) >> 16;
        v11 = 0LL;
LABEL_14:
        v13 += 40;
        if ( v13 > v76 )
          goto LABEL_54;
      }
      MiDecrementCombinedPte(0LL, (__int64)&CurrentThread->StackLimit);
      CurrentThread = (struct _KTHREAD *)MiAllocateCombineProto((__int64)v73, *(_QWORD *)v13, v18, &v70, 0);
      v26 = CurrentThread;
      if ( !CurrentThread )
      {
        if ( Object )
          ObfDereferenceObject(Object);
LABEL_47:
        v11 = 0LL;
        *(_QWORD *)v13 = 0LL;
LABEL_48:
        v8 = v68;
        goto LABEL_14;
      }
LABEL_22:
      v27 = v70;
      goto LABEL_23;
    }
LABEL_55:
    v35 = NumOfElements;
    Pool = (char *)v11;
    if ( NumOfElements )
    {
      Pool = (char *)MiAllocatePool(256, 8 * NumOfElements, 0x6D56694Du);
      if ( Pool )
      {
        v37 = P;
        j = 0LL;
        v39 = 0LL;
        if ( P )
        {
          do
          {
            j = v37;
            v37 = (_QWORD *)*v37;
          }
          while ( v37 );
        }
        while ( j )
        {
          for ( i = j[6]; i; i = *(_QWORD *)(i + 16) )
            *(_QWORD *)&Pool[8 * v39++] = i;
          v41 = (_QWORD **)j[1];
          v42 = j;
          if ( v41 )
          {
            v43 = *v41;
            for ( j = (_QWORD *)j[1]; v43; v43 = (_QWORD *)*v43 )
              j = v43;
          }
          else
          {
            for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*j == v42 )
                break;
              v42 = j;
            }
          }
        }
        qsort(Pool, v35, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByHash);
        v44 = 0LL;
        v45 = 0LL;
        if ( v35 )
        {
          v46 = (__int64)v73;
          v47 = (_QWORD **)(Pool + 8);
          while ( 1 )
          {
            v48 = *(v47 - 1);
            v49 = v48[4];
            if ( v49 <= 0x100 )
            {
              if ( (v45 && !(unsigned int)MiCompareActiveCrcEntries(*(v47 - 1), *(v47 - 2))
                 || v45 != v35 - 1 && !(unsigned int)MiCompareActiveCrcEntries(v48, *v47))
                && v50 )
              {
                if ( v44 && !(unsigned int)MiCompareActiveCrcEntries(v44, v48) )
                  goto LABEL_74;
                v61 = (_QWORD *)MiAllocateCombineProto(v46, *v48, v49, v48 + 3, 1);
                if ( !v61 )
                  goto LABEL_74;
LABEL_111:
                if ( v61[3] )
                {
                  v48[4] = v61;
                }
                else
                {
                  MiPushCombineBlock(v69, v61);
                  v62 = MiProtectionToCacheAttribute(*((_DWORD *)v48 + 8));
                  ++*((_QWORD *)&v78 + v62);
                }
                v44 = v48;
                goto LABEL_74;
              }
              v61 = (_QWORD *)MiAllocateCombineProto(v46, *v48, v49, v48 + 3, 0);
              if ( v61 )
                goto LABEL_111;
              v48[1] = -1LL;
            }
LABEL_74:
            ++v45;
            ++v47;
            if ( v45 >= v35 )
            {
              v6 = v67;
              break;
            }
          }
        }
        v5 = v74;
        MiPopulateCombineMdls((__int64)v74, v6, (__int64)&v78);
      }
    }
    while ( P )
    {
      v51 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
      v52 = v51[3];
      v53 = v51[6];
      if ( Pool )
      {
        if ( v53 )
        {
          v54 = Pool;
          do
          {
            *v54++ = v53;
            v53 = *(_QWORD *)(v53 + 16);
          }
          while ( v53 );
        }
        qsort(Pool, v52, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByVa);
        v51[6] = 0LL;
        for ( k = 0LL; k < v52; ++k )
        {
          v56 = *(_QWORD *)&Pool[8 * k];
          v57 = *(_QWORD *)(v56 + 8);
          if ( v57 == -1 || k && v57 == *(_QWORD *)(*(_QWORD *)&Pool[8 * k - 8] + 8LL) )
          {
            MiDereferenceCombineCrc(v56);
            --v51[3];
          }
          else
          {
            *(_QWORD *)(v56 + 16) = v51[6];
            v51[6] = v56;
          }
        }
        if ( v51[3] )
          MiSharePages((__int64)v5, v51, v69, &v77, v6);
      }
      else
      {
        for ( ; v53; v53 = *(_QWORD *)(v53 + 16) )
          MiDereferenceCombineCrc(v53);
      }
      v58 = (void *)v51[5];
      if ( v58 )
        ObfDereferenceObject(v58);
      ExFreePoolWithTag(v51, 0);
    }
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    if ( (*((_DWORD *)v5 + 15) & 2) == 0 )
      MiFreeCombineMdls((__int64)v5);
    while ( 1 )
    {
      v59 = v69[0];
      result = v69;
      if ( (__int64 *)v69[0] == v69 )
        break;
      if ( *(__int64 **)(v69[0] + 8) != v69 || (v60 = *(_QWORD *)v69[0], *(_QWORD *)(*(_QWORD *)v69[0] + 8LL) != v69[0]) )
        __fastfail(3u);
      v69[0] = *(_QWORD *)v69[0];
      *(_QWORD *)(v60 + 8) = v69;
      *(_QWORD *)(v59 + 32) = 0LL;
      MiFreeCombineBlock(v59);
    }
  }
  return result;
}
