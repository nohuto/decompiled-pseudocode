/*
 * XREFs of ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180003740
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180003AB0 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x180003B68 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180042320 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18004300C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x18019AA98 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18019AB04 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x18019ACE0 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x18019ADC8 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::BuildTransformParentStack(
        const void **this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        struct _LIST_ENTRY *a5)
{
  struct CVisual *v7; // rsi
  struct _LIST_ENTRY *v8; // rdi
  _DWORD *v9; // r8
  const struct CVisual *v10; // r14
  struct CVisual *v11; // rbx
  char v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  struct CVisual *v17; // rax
  char v18; // r9
  int v19; // eax
  struct CVisual *v20; // rcx
  __int64 v22; // r9
  _BYTE *v23; // r10
  unsigned int v24; // ecx
  _BYTE *v25; // rax
  __int64 *v26; // r13
  __int64 v27; // r13
  unsigned int i; // eax
  _QWORD **v29; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CPreComputeHelper *v32; // rcx
  unsigned int v33; // r14d
  int v34; // eax
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  void *v37; // rdi
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  void *v42; // rdi
  HANDLE ProcessHeap; // rax
  int v44; // eax
  unsigned int v45; // ecx
  void *lpMem[2]; // [rsp+30h] [rbp-48h] BYREF
  int v47; // [rsp+90h] [rbp+18h]
  struct CVisual *v48; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v47 = 0;
  v48 = a4;
  if ( a4 != *((struct CVisual **)a3 + 7) )
  {
    while ( 1 )
    {
      v8 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, struct CComposition *))(*(_QWORD *)a3 + 200LL))(
             a3,
             a2) )
      {
        v8 = (struct _LIST_ENTRY *)((char *)v7 + 320);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v7);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != a3 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_4;
            }
            v8 = Flink - 18;
          }
        }
      }
LABEL_4:
      lpMem[0] = v8;
      if ( v8 && v8[7].Blink >= a5 )
      {
        v18 = 0;
        goto LABEL_19;
      }
      v9 = (_DWORD *)*((_QWORD *)v7 + 28);
      v10 = 0LL;
      if ( (*v9 & 0x1000000) == 0 )
        break;
      v22 = (unsigned int)v9[1];
      v23 = v9 + 2;
      v24 = 0;
      if ( (_DWORD)v22 )
      {
        v25 = v9 + 2;
        do
        {
          if ( *v25 == 8 )
            break;
          ++v24;
          ++v25;
        }
        while ( v24 < (unsigned int)v22 );
      }
      if ( v24 >= (unsigned int)v22 )
      {
        v26 = 0LL;
      }
      else
      {
        a2 = (struct CComposition *)(v22 + 15);
        v26 = (__int64 *)((char *)v9 + v22 + 8LL * v24 - (((_BYTE)v22 + 15) & 7) + 15);
      }
      v27 = *v26;
      if ( v27 )
      {
        for ( i = 0; i < (unsigned int)v22; ++v23 )
        {
          if ( *v23 == 8 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v22 )
          v29 = 0LL;
        else
          v29 = (_QWORD **)((char *)v9 + 8LL * i - (((_BYTE)v22 + 15) & 7) + v22 + 15);
        v10 = (const struct CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v29 + 200LL))(**v29);
      }
      v11 = v10;
      if ( !v27 )
        goto LABEL_8;
      v12 = *(_BYTE *)(v27 + 8);
LABEL_9:
      if ( !v10 )
      {
        v13 = (unsigned __int64)a5;
LABEL_11:
        v11 = (struct CVisual *)*((_QWORD *)v7 + 10);
        goto LABEL_12;
      }
      if ( !v8 )
      {
        v38 = CVisual::EnsureTreeData(v7, a3, (struct CTreeData **)lpMem);
        v47 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x5Bu, 0LL);
          goto LABEL_24;
        }
        v8 = (struct _LIST_ENTRY *)lpMem[0];
      }
      v13 = (unsigned __int64)a5;
      if ( BYTE3(v8[1].Flink) )
      {
        v40 = CPreComputeHelper::ResolveTransformParentCycle((CPreComputeHelper *)this, a3, (unsigned __int64)a5, v7);
        v47 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x63u, 0LL);
          goto LABEL_24;
        }
      }
      if ( BYTE2(v8[1].Flink) && v8[17].Blink == (struct _LIST_ENTRY *)v13 )
        goto LABEL_11;
      if ( v12 )
      {
        BYTE3(v8[1].Flink) = 1;
      }
      else if ( !CVisualTree::IsAncestorInSameSpace(a3, v7, v10) )
      {
        CPreComputeHelper::InvalidateVisual(v32, v7, a3, v13);
        goto LABEL_11;
      }
LABEL_12:
      v14 = *((unsigned int *)this + 3);
      v15 = *((_DWORD *)this + 2);
      lpMem[0] = 0LL;
      if ( v15 != (_DWORD)v14 )
        goto LABEL_13;
      v33 = 2 * v14;
      if ( (unsigned __int64)(2 * v14) <= 0xFFFFFFFF )
      {
        if ( v33 <= 0x40 )
          v33 = 64;
        v34 = HrMalloc(8uLL, v33, lpMem);
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x53u, 0LL);
LABEL_74:
          v42 = lpMem[0];
          if ( lpMem[0] )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v42);
          }
          goto LABEL_16;
        }
        v36 = 8LL * *((unsigned int *)this + 2);
        if ( v36 > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, -2147024362, 0x55u, 0LL);
          goto LABEL_74;
        }
        v37 = lpMem[0];
        memcpy_0(lpMem[0], this[3], (unsigned int)v36);
        operator delete((void *)this[3]);
        v15 = *((_DWORD *)this + 2);
        this[3] = v37;
        *((_DWORD *)this + 3) = v33;
LABEL_13:
        *((_QWORD *)this[3] + v15) = v7;
        v16 = *((_DWORD *)this + 8);
        if ( v16 <= ++*((_DWORD *)this + 2) )
          v16 = *((_DWORD *)this + 2);
        *((_DWORD *)this + 8) = v16;
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_16:
      v17 = (struct CVisual *)*((_QWORD *)a3 + 7);
      if ( v11 )
      {
        v48 = v11;
        v7 = v11;
        if ( v11 == v17 )
          goto LABEL_18;
      }
      else
      {
        if ( v7 == v17 )
          goto LABEL_18;
        v44 = CPreComputeHelper::ResolveTransformParentOrphan((CPreComputeHelper *)this, a3, v13, &v48);
        v47 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x95u, 0LL);
          goto LABEL_24;
        }
        v7 = v48;
      }
    }
    v11 = 0LL;
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
LABEL_18:
  v18 = 1;
LABEL_19:
  v19 = *((_DWORD *)this + 2);
  v20 = 0LL;
  if ( v19 )
  {
    v47 = 0;
    v20 = (struct CVisual *)*((_QWORD *)this[3] + (unsigned int)(v19 - 1));
  }
  if ( v18 && v20 != v7 )
    CWatermarkStack<CVisual *,64,2,10>::Push(this + 1, &v48);
LABEL_24:
  if ( v47 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack((CPreComputeHelper *)this, a3);
  return (unsigned int)v47;
}
