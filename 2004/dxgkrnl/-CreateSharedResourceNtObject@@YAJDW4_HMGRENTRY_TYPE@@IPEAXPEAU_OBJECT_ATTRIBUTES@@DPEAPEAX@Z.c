/*
 * XREFs of ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C011B44C
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C011B710 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0277694 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0007098 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F7150 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0108424 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011B654 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0127C10 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C02473E0 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedResourceNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v8; // rsi
  char v9; // r15
  struct _KTHREAD **Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  struct _KTHREAD **v14; // r14
  __int64 v15; // rax
  struct _KTHREAD *v16; // r9
  int v17; // edx
  __int64 v18; // rdx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGRESOURCE *v25; // rbx
  __int64 v26; // rdi
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID v37; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  __int64 v45; // rax
  __int64 v46; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int NtSharedObject; // eax
  __int64 v49; // rcx
  struct DXGRESOURCE *v50; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v52; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v53[24]; // [rsp+68h] [rbp-18h] BYREF

  Object = 0LL;
  v8 = a3;
  v9 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v14 = Current;
  if ( !Current )
  {
    v39 = WdLogNewEntry5_WdError(v12, v11);
    LODWORD(v33) = -1073741811;
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    goto LABEL_25;
  }
  v50 = 0LL;
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v53, Current);
    v15 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)v14 + 64) )
    {
      v16 = v14[30];
      v17 = *((_DWORD *)v16 + 4 * v15 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v16 + 16 * v15 + 8) & 0x60)
        && (v17 & 0x2000) == 0
        && (v17 & 0x1F) != 0 )
      {
        v18 = v17 & 0x1F;
        if ( (_BYTE)v18 == 4 )
        {
          v19 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v16 + 2 * (unsigned int)v15);
LABEL_11:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v52, v19);
          DXGRESOURCEREFERENCE::MoveAssign(&v50, &v52);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v52, v21);
          v25 = v50;
          if ( v50 && (*((_DWORD *)v50 + 1) & 1) != 0 && (v26 = *((_QWORD *)v50 + 7)) != 0 )
          {
            if ( (*(_DWORD *)(v26 + 12) & 8) == 0 )
            {
              v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
              v40[3] = *((_QWORD *)v25 + 7);
              goto LABEL_31;
            }
            _m_prefetchw((const void *)(v26 + 68));
            v27 = *(_DWORD *)(v26 + 68);
            while ( v27 )
            {
              v23 = (unsigned int)(v27 + 1);
              v28 = v27;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 68), v23, v27);
              if ( v28 == v27 )
              {
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v53);
                goto LABEL_19;
              }
            }
            v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
            v40[5] = 105LL;
          }
          else
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
          }
          v40[3] = v8;
LABEL_31:
          LODWORD(v33) = -1073741811;
          v40[4] = -1073741811LL;
          WdLogEvent5_WdWarning(v40);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v53);
LABEL_32:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v50, v41);
          goto LABEL_25;
        }
        v20 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v18);
        *(_QWORD *)(v20 + 24) = 267LL;
        WdLogEvent5_WdError(v20);
      }
    }
    v19 = 0LL;
    goto LABEL_11;
  }
  v26 = *(_QWORD *)(a4 + 16);
  _m_prefetchw((const void *)(v26 + 68));
  v43 = *(_DWORD *)(v26 + 68);
  do
  {
    if ( !v43 )
      break;
    v12 = (unsigned int)(v43 + 1);
    v44 = v43;
    v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 68), v12, v43);
  }
  while ( v44 != v43 );
LABEL_19:
  LOBYTE(v13) = a6;
  LOBYTE(v12) = v9;
  v29 = ObCreateObject(v12, g_pDxgkSharedAllocationObjectType, a5, v13, 0LL, 48, 0, 0, &Object);
  v33 = v29;
  if ( v29 < 0 )
  {
    if ( Object )
    {
      v45 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v45 + 24) = 137LL;
      WdLogEvent5_WdAssertion(v45);
    }
    v46 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v46 + 24) = v14;
    *(_QWORD *)(v46 + 32) = v33;
    WdLogEvent5_WdWarning(v46);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 68), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v26, 0LL, 0);
  }
  else
  {
    v34 = Object;
    ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v26 + 80), (struct _LIST_ENTRY *)Object);
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 64));
    v34[3] = 0LL;
    v34[4] = 0LL;
    *((_DWORD *)v34 + 10) = 0;
    v34[2] = v26;
    v36 = *(_QWORD *)(*(_QWORD *)(v26 + 80) + 16LL);
    if ( *(_BYTE *)(v36 + 209) )
    {
      Global = DXGGLOBAL::GetGlobal(v36, v35);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)Global + 197),
                         (struct DXGPROCESS *)v14,
                         0,
                         0LL,
                         0LL,
                         v50);
      *((_DWORD *)v34 + 10) = NtSharedObject;
      if ( !NtSharedObject )
      {
        v42 = WdLogNewEntry5_WdError(v49, v35);
        *(_QWORD *)(v42 + 24) = 169LL;
        WdLogEvent5_WdError(v42);
        LODWORD(v33) = -1073741823;
        goto LABEL_32;
      }
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v50, v35);
  if ( (int)v33 >= 0 )
  {
    v37 = Object;
    goto LABEL_23;
  }
LABEL_25:
  v37 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v37 = 0LL;
  }
LABEL_23:
  *a7 = v37;
  return (unsigned int)v33;
}
