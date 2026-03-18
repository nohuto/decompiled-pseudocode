/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01657B4
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C011B710 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0277694 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C02473E0 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  int v9; // ebx
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  struct DXGDEVICESYNCOBJECT *v14; // r14
  PERESOURCE *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // r15
  PVOID v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct DXGGLOBAL *v39; // rax
  unsigned int NtSharedObject; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v44[8]; // [rsp+58h] [rbp-28h] BYREF
  char v45; // [rsp+60h] [rbp-20h]
  _BYTE v46[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = a3;
  Object = 0LL;
  v9 = a2;
  v10 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v33 = WdLogNewEntry5_WdError(v12, v11);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_31;
  }
  v14 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v12, v11);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v44, v16);
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, (struct _KTHREAD **)Current);
    v22 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v9 == 11 )
    {
      if ( (unsigned int)v22 >= *((_DWORD *)Current + 64) )
        goto LABEL_5;
      v21 = *((_QWORD *)Current + 30);
      v20 = ((unsigned int)v7 >> 25) & 0x60;
      v19 = *(unsigned int *)(v21 + 16 * v22 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v22 + 8) & 0x60)
        || (v19 & 0x2000) != 0
        || (v19 & 0x1F) == 0 )
      {
        goto LABEL_5;
      }
      v19 &= 0x1Fu;
      if ( (_BYTE)v19 != 11 )
      {
        v34 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v34 + 24) = 267LL;
        WdLogEvent5_WdError(v34);
        goto LABEL_5;
      }
      v14 = *(struct DXGDEVICESYNCOBJECT **)(v21 + 16LL * (unsigned int)v22);
      if ( !v14 )
      {
LABEL_5:
        v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        LODWORD(v24) = -1073741811;
        *(_QWORD *)(v23 + 24) = v7;
        *(_QWORD *)(v23 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v23);
        goto LABEL_6;
      }
      a4 = *((_QWORD *)v14 + 4);
LABEL_13:
      if ( a4 )
      {
        if ( (*(_DWORD *)(a4 + 196) & 2) != 0 )
        {
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
          goto LABEL_16;
        }
        _InterlockedIncrement(&dword_1C00B229C);
        v36 = WdLogNewEntry5_WdError(v20, v19);
        LODWORD(v24) = -1073741811;
        *(_QWORD *)(v36 + 24) = a4;
        *(_QWORD *)(v36 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v36);
LABEL_6:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
        goto LABEL_34;
      }
      goto LABEL_5;
    }
    if ( (unsigned int)v22 < *((_DWORD *)Current + 64) )
    {
      v21 = *((_QWORD *)Current + 30);
      v20 = ((unsigned int)v7 >> 25) & 0x60;
      v19 = *(unsigned int *)(v21 + 16 * v22 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v22 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0 )
      {
        v19 &= 0x1Fu;
        if ( v9 == (_DWORD)v19 )
        {
          a4 = *(_QWORD *)(v21 + 16LL * (unsigned int)v22);
          goto LABEL_13;
        }
        v32 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v32 + 24) = 267LL;
        WdLogEvent5_WdError(v32);
      }
    }
    a4 = 0LL;
    goto LABEL_13;
  }
LABEL_16:
  LOBYTE(v18) = a6;
  LOBYTE(v17) = v10;
  v25 = ObCreateObject(v17, g_pDxgkSharedSyncObjectType, a5, v18, 0LL, 16, 0, 0, &Object);
  v24 = v25;
  if ( v25 < 0 )
  {
    if ( Object )
    {
      v37 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v37 + 24) = 402LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v38 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v38 + 24) = Current;
    *(_QWORD *)(v38 + 32) = v24;
    WdLogEvent5_WdWarning(v38);
  }
  else
  {
    v29 = Object;
    _InterlockedIncrement((volatile signed __int32 *)(a4 + 24));
    *(_QWORD *)v29 = a4;
    v29[2] = 0;
    if ( *(_BYTE *)(a4 + 277) )
    {
      v39 = DXGGLOBAL::GetGlobal(v27, v26);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)v39 + 197),
                         Current,
                         v7,
                         (struct DXGSYNCOBJECT *)a4,
                         v14,
                         0LL);
      v29[2] = NtSharedObject;
      if ( !NtSharedObject )
      {
        v35 = WdLogNewEntry5_WdError(v42, v41);
        *(_QWORD *)(v35 + 24) = 428LL;
        WdLogEvent5_WdError(v35);
        LODWORD(v24) = -1073741823;
LABEL_34:
        if ( v45 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
        goto LABEL_31;
      }
    }
  }
  if ( v45 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
  if ( (int)v24 >= 0 )
  {
    v30 = Object;
    goto LABEL_22;
  }
LABEL_31:
  v30 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v30 = 0LL;
  }
LABEL_22:
  *a7 = v30;
  return (unsigned int)v24;
}
