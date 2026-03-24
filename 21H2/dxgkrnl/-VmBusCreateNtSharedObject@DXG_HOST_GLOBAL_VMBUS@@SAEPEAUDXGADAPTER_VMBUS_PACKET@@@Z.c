/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010C9A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C011DD10 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011E138 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023AA1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  char v4; // bl
  struct _KTHREAD **v5; // r15
  DXGSHAREDVMOBJECT *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGSHAREDVMOBJECT *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r14
  DXGSYNCOBJECT *v16; // rsi
  __int64 v17; // rcx
  char *Src; // r14
  __int64 v19; // r15
  __int64 v20; // rdx
  int v21; // r9d
  int EntryType; // eax
  int v23; // r12d
  __int64 v24; // r8
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _EX_RUNDOWN_REF *v44; // [rsp+50h] [rbp-19h] BYREF
  __int64 v45[4]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v46; // [rsp+78h] [rbp+Fh]
  int v47; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v48; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v49; // [rsp+E8h] [rbp+7Fh] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v4 = 0;
  v47 = 0;
  v5 = (struct _KTHREAD **)Current;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v44, 0LL);
  v6 = (DXGSHAREDVMOBJECT *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v11 = v6;
  if ( v6 )
  {
    *(_DWORD *)v6 = 0;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 6) = 1;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = 6319LL;
    WdLogEvent5_WdLowResource(v12);
    goto LABEL_52;
  }
  v15 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v15 )
    goto LABEL_56;
  v49 = 0LL;
  v16 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v45, v5);
  Src = (char *)(v15 + 24);
  v19 = (__int64)(v5 + 30);
  v20 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 16) )
    goto LABEL_49;
  v17 = 2LL * (unsigned int)v20;
  v21 = *(_DWORD *)(*(_QWORD *)v19 + 16LL * (unsigned int)v20 + 8);
  if ( ((*(_DWORD *)Src >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v19 + 16LL * (unsigned int)v20 + 8) & 0x60)
    || (v21 & 0x2000) != 0
    || (v21 & 0x1F) == 0 )
  {
    goto LABEL_49;
  }
  EntryType = HMGRTABLE::GetEntryType(v19, v20);
  v23 = EntryType;
  if ( EntryType != 4 )
  {
    if ( EntryType != 8 )
    {
      if ( EntryType != 11 )
        goto LABEL_49;
      v20 = *(unsigned int *)Src;
      v17 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 >= *(_DWORD *)(v19 + 16) )
        goto LABEL_49;
      v24 = *(_QWORD *)v19;
      v25 = (unsigned int)v17;
      v20 = ((unsigned int)v20 >> 25) & 0x60;
      v17 = *(unsigned int *)(*(_QWORD *)v19 + 16LL * (unsigned int)v17 + 8);
      if ( (_BYTE)v20 != (v17 & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
        goto LABEL_49;
      v26 = 2 * v25;
      v17 &= 0x1Fu;
      if ( (_BYTE)v17 != (_BYTE)EntryType )
      {
        v27 = WdLogNewEntry5_WdError(v17, v20);
        *(_QWORD *)(v27 + 24) = 316LL;
        WdLogEvent5_WdError(v27);
LABEL_49:
        v31 = WdLogNewEntry5_WdError(v17, v20);
        *(_QWORD *)(v31 + 24) = *(unsigned int *)Src;
        goto LABEL_50;
      }
      v28 = *(_QWORD *)(v24 + 8 * v26);
      if ( !v28 || (*(_DWORD *)(v28 + 72) & 2) == 0 )
        goto LABEL_49;
      v16 = *(DXGSYNCOBJECT **)(v28 + 32);
      goto LABEL_33;
    }
    v20 = *(unsigned int *)Src;
    v29 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v19 + 16) )
    {
      v24 = *(_QWORD *)v19;
      v20 = ((unsigned int)v20 >> 25) & 0x60;
      v17 = *(unsigned int *)(*(_QWORD *)v19 + 16 * v29 + 8);
      if ( (_BYTE)v20 == (*(_BYTE *)(*(_QWORD *)v19 + 16 * v29 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      {
        v17 &= 0x1Fu;
        if ( (_BYTE)v17 == 8 )
        {
          v16 = *(DXGSYNCOBJECT **)(v24 + 16LL * (unsigned int)v29);
          if ( v16 && (*((_DWORD *)v16 + 49) & 2) != 0 )
          {
LABEL_33:
            DXGSYNCOBJECT::AddReference(v16, v20, v24);
            goto LABEL_42;
          }
        }
        else
        {
          v30 = WdLogNewEntry5_WdError(v17, v20);
          *(_QWORD *)(v30 + 24) = 316LL;
          WdLogEvent5_WdError(v30);
        }
      }
    }
    v31 = WdLogNewEntry5_WdError(v17, v20);
    *(_QWORD *)(v31 + 24) = *(unsigned int *)Src;
    *(_QWORD *)(v31 + 32) = 6342LL;
LABEL_50:
    WdLogEvent5_WdError(v31);
    goto LABEL_51;
  }
  v32 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( (unsigned int)v32 < *(_DWORD *)(v19 + 16) )
  {
    v33 = *(_DWORD *)(*(_QWORD *)v19 + 16 * v32 + 8);
    if ( ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v19 + 16 * v32 + 8) & 0x60)
      && (v33 & 0x2000) == 0
      && (v33 & 0x1F) != 0 )
    {
      v34 = v33 & 0x1F;
      if ( (_BYTE)v34 == 4 )
      {
        v36 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v19 + 16LL * (unsigned int)v32);
        goto LABEL_41;
      }
      v35 = WdLogNewEntry5_WdError(v34, 2LL * (unsigned int)v32);
      *(_QWORD *)(v35 + 24) = 316LL;
      WdLogEvent5_WdError(v35);
    }
  }
  v36 = 0LL;
LABEL_41:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v48, v36);
  DXGRESOURCEREFERENCE::MoveAssign(&v44, (struct _EX_RUNDOWN_REF **)&v48);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v48, v37);
LABEL_42:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
  if ( v23 == 4 )
  {
    v45[0] = 48LL;
    v45[3] = 512LL;
    v45[1] = 0LL;
    v45[2] = 0LL;
    v46 = 0LL;
    v48 = 0LL;
    if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v45, 0x10000000u, &v49, (PVOID *)&v48) < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v39, v38);
      *(_QWORD *)(v40 + 24) = *(unsigned int *)Src;
      WdLogEvent5_WdError(v40);
      goto LABEL_52;
    }
    v16 = (DXGSYNCOBJECT *)v48;
  }
  *(_DWORD *)v11 = v23;
  *((_QWORD *)v11 + 1) = v16;
  *((_QWORD *)v11 + 2) = v49;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v45,
    *((struct _KTHREAD ***)a1 + 7));
  v47 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)a1 + 7) + 240LL), (__int64)v11, 13, 0, 0);
  if ( !v47 )
  {
    v31 = WdLogNewEntry5_WdError(v42, v41);
    *(_QWORD *)(v31 + 24) = 6407LL;
    goto LABEL_50;
  }
LABEL_51:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
LABEL_52:
  if ( !v47 && v11 )
    DXGSHAREDVMOBJECT::ReleaseReference(v11, v13);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v47, 4u);
  v4 = 1;
LABEL_56:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v44, v14);
  return v4;
}
