/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C016A934
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C011DD10 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C0277944 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C0247250 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
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
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  struct DXGDEVICESYNCOBJECT *v14; // r15
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
  _DWORD *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  PVOID v32; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  struct DXGGLOBAL *v41; // rax
  unsigned int NtSharedObject; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v46[8]; // [rsp+58h] [rbp-28h] BYREF
  char v47; // [rsp+60h] [rbp-20h]
  _BYTE v48[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = a3;
  Object = 0LL;
  v9 = a2;
  v10 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v35 = WdLogNewEntry5_WdError(v12, v11);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    goto LABEL_31;
  }
  v14 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v12, v11);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v46, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v46, v16);
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48, (struct _KTHREAD **)Current);
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
        v36 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v36 + 24) = 316LL;
        WdLogEvent5_WdError(v36);
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
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
          goto LABEL_16;
        }
        _InterlockedIncrement(&dword_1C00B3394);
        v38 = WdLogNewEntry5_WdError(v20, v19);
        LODWORD(v24) = -1073741811;
        *(_QWORD *)(v38 + 24) = a4;
        *(_QWORD *)(v38 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v38);
LABEL_6:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
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
        v34 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v34 + 24) = 316LL;
        WdLogEvent5_WdError(v34);
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
      v39 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v39 + 24) = 402LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v40 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v40 + 24) = Current;
    *(_QWORD *)(v40 + 32) = v24;
    WdLogEvent5_WdWarning(v40);
  }
  else
  {
    v29 = Object;
    DXGSYNCOBJECT::AddReference((DXGSYNCOBJECT *)a4, v26, v28);
    *(_QWORD *)v29 = a4;
    v29[2] = 0;
    if ( *(_BYTE *)(a4 + 277) )
    {
      v41 = DXGGLOBAL::GetGlobal(v31, v30);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)v41 + 197),
                         Current,
                         v7,
                         (struct DXGSYNCOBJECT *)a4,
                         v14,
                         0LL);
      v29[2] = NtSharedObject;
      if ( !NtSharedObject )
      {
        v37 = WdLogNewEntry5_WdError(v44, v43);
        *(_QWORD *)(v37 + 24) = 428LL;
        WdLogEvent5_WdError(v37);
        LODWORD(v24) = -1073741823;
LABEL_34:
        if ( v47 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
        goto LABEL_31;
      }
    }
  }
  if ( v47 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
  if ( (int)v24 >= 0 )
  {
    v32 = Object;
    goto LABEL_22;
  }
LABEL_31:
  v32 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v32 = 0LL;
  }
LABEL_22:
  *a7 = v32;
  return (unsigned int)v24;
}
