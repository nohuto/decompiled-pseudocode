/*
 * XREFs of ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01D9694
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C01A5DA0 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C031C0B0 (DxgkCreateBundleObjectInternal.c)
 *     DxgkWslShareObjects @ 0x1C031E7F0 (DxgkWslShareObjects.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001B28C (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C0375838 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedResourceNtObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  char v10; // r12
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DXGPROCESS *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdi
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  int v22; // eax
  struct _LIST_ENTRY *v23; // rsi
  PVOID v24; // rcx
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  struct DXGGLOBAL *Global; // rax
  unsigned int NtSharedObject; // eax
  struct DXGRESOURCE *v31; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v33; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v34[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = (unsigned int)a3;
  LODWORD(v8) = 0;
  Object = 0LL;
  v10 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v14 = Current;
  if ( !Current )
  {
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *a7 = 0LL;
    return (unsigned int)v8;
  }
  v31 = 0LL;
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, Current);
    v15 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)v14 + 74) )
    {
      v16 = *((_QWORD *)v14 + 35);
      v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
        && (v17 & 0x2000) == 0
        && (v17 & 0x1F) != 0 )
      {
        if ( (v17 & 0x1F) == 4 )
        {
          v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
LABEL_11:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33, v18);
          DXGRESOURCEREFERENCE::MoveAssign(&v31, &v33);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v33);
          if ( v31 && (*((_DWORD *)v31 + 1) & 1) != 0 && (v19 = *((_QWORD *)v31 + 7)) != 0 )
          {
            if ( (*(_DWORD *)(v19 + 12) & 8) != 0 )
            {
              _m_prefetchw((const void *)(v19 + 68));
              v20 = *(_DWORD *)(v19 + 68);
              while ( v20 )
              {
                v21 = v20;
                v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 68), v20 + 1, v20);
                if ( v21 == v20 )
                {
                  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
                  goto LABEL_19;
                }
              }
              LODWORD(v8) = -1073741811;
              WdLogSingleEntry3(3LL, v7, -1073741811LL, 107LL);
              goto LABEL_32;
            }
            v26 = *((_QWORD *)v31 + 7);
          }
          else
          {
            v26 = v7;
          }
          LODWORD(v8) = -1073741811;
          WdLogSingleEntry2(3LL, v26, -1073741811LL);
LABEL_32:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
LABEL_33:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v31);
LABEL_34:
          v24 = Object;
          if ( Object )
          {
            if ( (*((_DWORD *)v14 + 106) & 0x10) != 0 )
              operator delete(Object);
            else
              ObfDereferenceObject(Object);
            v24 = 0LL;
          }
          goto LABEL_25;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v18 = 0LL;
    goto LABEL_11;
  }
  v19 = *(_QWORD *)(a4 + 16);
  _m_prefetchw((const void *)(v19 + 68));
  v27 = *(_DWORD *)(v19 + 68);
  do
  {
    if ( !v27 )
      break;
    v12 = (unsigned int)(v27 + 1);
    v28 = v27;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 68), v12, v27);
  }
  while ( v28 != v27 );
LABEL_19:
  if ( (*((_DWORD *)v14 + 106) & 0x10) != 0 )
  {
    Object = (PVOID)operator new[](0x30uLL, 0x4B677844u, 256LL, v13);
    v23 = (struct _LIST_ENTRY *)Object;
    if ( !Object )
    {
      LODWORD(v8) = -1073741801;
      WdLogSingleEntry2(3LL, v14, -1073741801LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 68), 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v19, 0LL, 0);
      goto LABEL_33;
    }
  }
  else
  {
    LOBYTE(v13) = a6;
    LOBYTE(v12) = v10;
    v22 = ObCreateObject(v12, g_pDxgkSharedAllocationObjectType, a5, v13, 0LL, 48, 0, 0, &Object);
    v8 = v22;
    if ( v22 < 0 )
    {
      if ( Object )
      {
        WdLogSingleEntry1(1LL, 141LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 141LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(3LL, v14, v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 68), 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v19, 0LL, 0);
      goto LABEL_23;
    }
    v23 = (struct _LIST_ENTRY *)Object;
  }
  ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v19 + 80), v23);
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 64));
  v23[1].Flink = (struct _LIST_ENTRY *)v19;
  v23[1].Blink = 0LL;
  v23[2].Flink = 0LL;
  LODWORD(v23[2].Blink) = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 80) + 16LL) + 209LL) )
  {
    Global = DXGGLOBAL_GetGlobal();
    NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                       *((DXG_GUEST_GLOBAL_VMBUS **)Global + 218),
                       v14,
                       0,
                       0LL,
                       0LL,
                       v31);
    LODWORD(v23[2].Blink) = NtSharedObject;
    if ( !NtSharedObject )
    {
      WdLogSingleEntry1(2LL, 188LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateNtSharedObject failed",
        188LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v8) = -1073741823;
      goto LABEL_33;
    }
  }
LABEL_23:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v31);
  if ( (int)v8 < 0 )
    goto LABEL_34;
  v24 = Object;
LABEL_25:
  *a7 = v24;
  return (unsigned int)v8;
}
