/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C006E3DC
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C005FFD8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0085B08 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0085D6C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E330 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E694 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C006E6DC (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C006E930 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0089784 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        unsigned __int64 this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v9; // r10
  struct VIDMM_VAD *v10; // r13
  CVirtualAddressAllocator *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r15d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // r14d
  struct VIDMM_VAD *NodeInFreeList; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct VIDMM_VAD *v22; // rbx
  __int64 v23; // r8
  unsigned __int64 v24; // rsi
  struct VIDMM_VAD *Vad; // rax
  __int64 v26; // rcx
  struct VIDMM_VAD **v27; // r15
  struct VIDMM_VAD *v28; // rcx
  struct VIDMM_VAD **v29; // rdx
  __int64 v31; // rcx
  struct VIDMM_VAD *v32; // r12
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  char *v35; // rsi
  char *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r10
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-48h]
  unsigned __int64 v48; // [rsp+30h] [rbp-40h]
  unsigned __int64 v49; // [rsp+38h] [rbp-38h]
  unsigned __int64 v50; // [rsp+40h] [rbp-30h]
  __int64 v51; // [rsp+48h] [rbp-28h]
  unsigned __int64 v52; // [rsp+50h] [rbp-20h]
  unsigned __int64 v53; // [rsp+58h] [rbp-18h]
  __int64 v54; // [rsp+60h] [rbp-10h]

  v9 = a9;
  v10 = 0LL;
  v11 = (CVirtualAddressAllocator *)this;
  if ( a9 )
  {
    v12 = *(_QWORD *)(this + 96);
    if ( !v12 || (*(_DWORD *)(v12 + 96) & 2) != 0 && !*(_BYTE *)(*(_QWORD *)(this + 88) + 40169LL) )
      v9 = 0;
  }
  v13 = *(_QWORD *)(this + 88);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 7000);
  else
    v14 = 1;
  v15 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, v15, a3);
    *(_QWORD *)(v40 + 24) = 1251LL;
LABEL_49:
    WdLogEvent5_WdAssertion(v40);
    return 3221225485LL;
  }
  if ( !a7 || (this = a7 - 1, ((unsigned int)this & a7) != 0) )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, v15, a3);
    *(_QWORD *)(v40 + 24) = 1257LL;
    goto LABEL_49;
  }
  v47 = 0LL;
  v53 = 0LL;
  v52 = ~(unsigned __int64)(unsigned int)this;
  v54 = 0LL;
  v51 = a7 - 1;
  if ( (this & a4) != 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, v15, a3);
    *(_QWORD *)(v40 + 24) = 1267LL;
    goto LABEL_49;
  }
  v16 = a6;
  v17 = a5;
  v46 = a4;
  v47 = a3 + a4;
  v48 = a5;
  if ( !a6 )
    v16 = *((_QWORD *)v11 + 2);
  v49 = v16;
  v18 = 0;
  v50 = a3;
  if ( v9 && dword_1C0050490 && v15 != *((_QWORD *)v11 + 2) )
  {
    v41 = a3 + 4096;
    if ( a3 + 4096 < a3 || v15 + 4096 < v15 )
    {
      v42 = WdLogNewEntry5_WdAssertion(a5, v15, a3);
      *(_QWORD *)(v42 + 24) = 1289LL;
      WdLogEvent5_WdAssertion(v42);
      a3 = v50;
      v16 = v49;
      v17 = v48;
    }
    else
    {
      a3 += 4096LL;
      v50 = v41;
      v47 = v15 + 4096;
      v18 = 1;
    }
  }
  if ( v17 < v16 && v16 - v17 >= a3 )
  {
    NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(v11, &v46);
    v22 = NodeInFreeList;
    if ( !NodeInFreeList )
    {
      v43 = WdLogNewEntry5_WdWarning(v21, v20);
      WdLogEvent5_WdWarning(v43);
      return 3221225473LL;
    }
    v23 = *((_QWORD *)NodeInFreeList + 3);
    v24 = v53 + v50;
    if ( v23 == v53 )
    {
      if ( *((_QWORD *)NodeInFreeList + 4) - v23 == v50 )
      {
        CVirtualAddressAllocator::RemoveVadFromFreeList(v11, NodeInFreeList);
        v27 = a8;
        *a8 = v22;
        goto LABEL_22;
      }
      Vad = CVirtualAddressAllocator::AllocateVad(v53, v53 + v50, v14);
      if ( Vad )
      {
        v27 = a8;
        v28 = (struct VIDMM_VAD *)((char *)Vad + 40);
        *a8 = Vad;
        v29 = (struct VIDMM_VAD **)*((_QWORD *)v22 + 6);
        if ( *v29 == (struct VIDMM_VAD *)((char *)v22 + 40) )
        {
          *((_QWORD *)Vad + 6) = v29;
          *(_QWORD *)v28 = (char *)v22 + 40;
          *v29 = v28;
          *((_QWORD *)v22 + 6) = v28;
          CVirtualAddressAllocator::RemoveVadFromFreeList(v11, v22);
          *((_QWORD *)v22 + 3) = v24;
          CVirtualAddressAllocator::InsertVadToFreeList(v11, v22);
LABEL_22:
          *((_DWORD *)*v27 + 18) = (v18 << 12) | *((_DWORD *)*v27 + 18) & 0xFFFFEFFF;
          return 0LL;
        }
LABEL_33:
        __fastfail(3u);
      }
      _InterlockedAdd(&dword_1C005079C, 1u);
      v44 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v44 + 24) = 1349LL;
    }
    else
    {
      v32 = CVirtualAddressAllocator::AllocateVad(v53, v53 + v50, v14);
      if ( v32 )
      {
        v33 = *((_QWORD *)v22 + 4);
        if ( v24 >= v33 || (v10 = CVirtualAddressAllocator::AllocateVad(v24, v33, v14)) != 0LL )
        {
          CVirtualAddressAllocator::RemoveVadFromFreeList(v11, v22);
          *((_QWORD *)v22 + 4) = v53;
          CVirtualAddressAllocator::InsertVadToFreeList(v11, v22);
          v27 = a8;
          v35 = (char *)v32 + 40;
          v36 = (char *)v22 + 40;
          *a8 = v32;
          v37 = *(_QWORD *)v36;
          if ( *(char **)(*(_QWORD *)v36 + 8LL) == v36 )
          {
            *(_QWORD *)v35 = v37;
            *((_QWORD *)v32 + 6) = v36;
            *(_QWORD *)(v37 + 8) = v35;
            *(_QWORD *)v36 = v35;
            if ( !v10 )
              goto LABEL_22;
            CVirtualAddressAllocator::InsertVadToFreeList(v11, v10);
            v38 = *(_QWORD *)v35;
            v39 = (_QWORD *)((char *)v10 + 40);
            if ( *(char **)(*(_QWORD *)v35 + 8LL) == v35 )
            {
              *v39 = v38;
              *((_QWORD *)v10 + 6) = v35;
              *(_QWORD *)(v38 + 8) = v39;
              *(_QWORD *)v35 = v39;
              goto LABEL_22;
            }
          }
          goto LABEL_33;
        }
        _InterlockedIncrement(&dword_1C005079C);
        v45 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v45 + 24) = 1395LL;
        WdLogEvent5_WdLowResource(v45);
        CVirtualAddressAllocator::FreeVad(v32);
        return 3221225495LL;
      }
      _InterlockedIncrement(&dword_1C005079C);
      v44 = WdLogNewEntry5_WdLowResource(v31);
      *(_QWORD *)(v44 + 24) = 1382LL;
    }
    WdLogEvent5_WdLowResource(v44);
    return 3221225495LL;
  }
  return 3221225485LL;
}
