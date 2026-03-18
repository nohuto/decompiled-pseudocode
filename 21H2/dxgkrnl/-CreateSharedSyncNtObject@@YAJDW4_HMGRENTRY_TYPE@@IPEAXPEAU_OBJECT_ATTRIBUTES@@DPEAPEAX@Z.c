/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01E03F8
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C01A5DA0 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C031C0B0 (DxgkCreateBundleObjectInternal.c)
 *     DxgkWslShareObjects @ 0x1C031E7F0 (DxgkWslShareObjects.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01E7E90 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C0375838 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  struct DXGDEVICESYNCOBJECT *v7; // r13
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  struct DXGPROCESS *Current; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // edx
  _DWORD *v18; // r14
  PVOID v19; // rdx
  __int64 result; // rax
  __int64 v21; // r9
  int v22; // edx
  struct DXGGLOBAL *v23; // rax
  unsigned int NtSharedObject; // eax
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-28h] BYREF
  char v27; // [rsp+60h] [rbp-20h]
  _BYTE v28[24]; // [rsp+68h] [rbp-18h] BYREF
  char v29; // [rsp+B0h] [rbp+30h]
  int v30; // [rsp+B8h] [rbp+38h]
  unsigned int v31; // [rsp+C0h] [rbp+40h]

  v31 = a3;
  v30 = a2;
  v29 = a1;
  v7 = 0LL;
  v8 = (unsigned int)a3;
  v9 = 0;
  Object = 0LL;
  v10 = a4;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( !Current )
  {
    v9 = -1073741811;
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
LABEL_45:
    v19 = Object;
    if ( Object )
    {
      if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
        DxgkSharedSyncObjectObDeleteProcedure(Object);
      else
        ObfDereferenceObject(Object);
      v19 = 0LL;
    }
    goto LABEL_21;
  }
  Global = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v26, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v26);
  if ( !v10 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, Current);
    v15 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v30 == 11 )
    {
      if ( (unsigned int)v15 < *((_DWORD *)Current + 74) )
      {
        v16 = *((_QWORD *)Current + 35);
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
        if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (v17 & 0x2000) == 0
          && (v17 & 0x1F) != 0 )
        {
          if ( (v17 & 0x1F) == 0xB )
          {
            v7 = *(struct DXGDEVICESYNCOBJECT **)(v16 + 16LL * (unsigned int)v15);
            if ( v7 )
            {
              v10 = *((_QWORD *)v7 + 4);
              goto LABEL_11;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v9 = -1073741811;
      WdLogSingleEntry2(3LL, v8, -1073741811LL);
      goto LABEL_23;
    }
    if ( (unsigned int)v15 < *((_DWORD *)Current + 74) )
    {
      v21 = *((_QWORD *)Current + 35);
      v22 = *(_DWORD *)(v21 + 16 * v15 + 8);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v15 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        if ( v30 == (*(_DWORD *)(v21 + 16 * v15 + 8) & 0x1F) )
        {
          v10 = *(_QWORD *)(v21 + 16LL * (unsigned int)v15);
          goto LABEL_11;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v10 = 0LL;
LABEL_11:
    if ( !v10 )
    {
      v9 = -1073741811;
      WdLogSingleEntry2(3LL, v8, -1073741811LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
      goto LABEL_43;
    }
    if ( (*(_DWORD *)(v10 + 204) & 2) != 0 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
      goto LABEL_14;
    }
    _InterlockedIncrement(&dword_1C0132124);
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, v10, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_23:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
    goto LABEL_43;
  }
LABEL_14:
  if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
  {
    Object = (PVOID)operator new[](0x10uLL, 0x4B677844u, 256LL, v14);
    v18 = Object;
    if ( Object )
      goto LABEL_17;
    WdLogSingleEntry1(6LL, 434LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGSHAREDSYNCOBJECT",
      434LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v9 = -1073741801;
LABEL_38:
    if ( Object )
    {
      WdLogSingleEntry1(1LL, 440LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 440LL, 0LL, 0LL, 0LL, 0LL);
    }
    WdLogSingleEntry2(3LL, Current, v9);
    goto LABEL_43;
  }
  LOBYTE(v14) = a6;
  LOBYTE(v13) = v29;
  v9 = ObCreateObject(v13, g_pDxgkSharedSyncObjectType, a5, v14, 0LL, 16, 0, 0, &Object);
  if ( v9 < 0 )
    goto LABEL_38;
  v18 = Object;
LABEL_17:
  _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
  v18[2] = 0;
  *(_QWORD *)v18 = v10;
  if ( (*(_DWORD *)(v10 + 284) & 2) != 0 )
  {
    v23 = DXGGLOBAL_GetGlobal();
    NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                       *((DXG_GUEST_GLOBAL_VMBUS **)v23 + 218),
                       Current,
                       v31,
                       (struct DXGSYNCOBJECT *)v10,
                       v7,
                       0LL);
    v18[2] = NtSharedObject;
    if ( !NtSharedObject )
    {
      WdLogSingleEntry1(2LL, 466LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateNtSharedObject failed",
        466LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741823;
LABEL_43:
      if ( v27 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v26);
      goto LABEL_45;
    }
  }
  if ( v27 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v26);
  v19 = Object;
LABEL_21:
  result = (unsigned int)v9;
  *a7 = v19;
  return result;
}
