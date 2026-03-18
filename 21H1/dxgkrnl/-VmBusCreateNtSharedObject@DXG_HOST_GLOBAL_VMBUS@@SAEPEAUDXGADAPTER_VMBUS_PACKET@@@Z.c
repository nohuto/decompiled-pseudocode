/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023A410
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E87C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0104280 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShareObjectsInternal @ 0x1C01247E0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0124BF8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0236A1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2)
{
  struct _KTHREAD **Current; // r14
  DXGSHAREDVMOBJECT *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGSHAREDVMOBJECT *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  char *Src; // rsi
  __int64 v17; // r14
  __int64 v18; // rdx
  int v19; // r9d
  int EntryType; // eax
  int v21; // r15d
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  DXGAUTOPUSHLOCK *v36; // rcx
  _BYTE v38[24]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v39[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v40[4]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v41; // [rsp+A0h] [rbp+17h]
  int v42; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v43; // [rsp+100h] [rbp+77h] BYREF
  __int64 v44; // [rsp+108h] [rbp+7Fh] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v42 = 0;
  v4 = (DXGSHAREDVMOBJECT *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v9 = v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 0;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 6) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = 6145LL;
    WdLogEvent5_WdLowResource(v10);
    goto LABEL_44;
  }
  v12 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v13 = v12;
  if ( !v12 )
    return v12;
  v44 = 0LL;
  v14 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v38, Current);
  Src = (char *)(v13 + 24);
  v17 = (__int64)(Current + 30);
  v18 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 16) )
    goto LABEL_41;
  v15 = 2LL * (unsigned int)v18;
  v19 = *(_DWORD *)(*(_QWORD *)v17 + 16LL * (unsigned int)v18 + 8);
  if ( ((*(_DWORD *)Src >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v17 + 16LL * (unsigned int)v18 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_41;
  }
  EntryType = HMGRTABLE::GetEntryType(v17, v18);
  v21 = EntryType;
  if ( EntryType != 4 )
  {
    if ( EntryType != 8 )
    {
      if ( EntryType != 11 )
        goto LABEL_41;
      v18 = *(unsigned int *)Src;
      v15 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 >= *(_DWORD *)(v17 + 16) )
        goto LABEL_41;
      v22 = (unsigned int)v15;
      v18 = ((unsigned int)v18 >> 25) & 0x60;
      v15 = *(unsigned int *)(*(_QWORD *)v17 + 16LL * (unsigned int)v15 + 8);
      if ( (_BYTE)v18 != (v15 & 0x60) || (v15 & 0x2000) != 0 || (v15 & 0x1F) == 0 )
        goto LABEL_41;
      v23 = 2 * v22;
      v15 &= 0x1Fu;
      if ( (_BYTE)v15 != (_BYTE)EntryType )
      {
        v24 = WdLogNewEntry5_WdError(v15, v18);
        *(_QWORD *)(v24 + 24) = 267LL;
        WdLogEvent5_WdError(v24);
LABEL_41:
        v29 = WdLogNewEntry5_WdError(v15, v18);
        *(_QWORD *)(v29 + 24) = *(unsigned int *)Src;
        goto LABEL_42;
      }
      v25 = *(_QWORD *)(*(_QWORD *)v17 + 8 * v23);
      if ( !v25 || (*(_DWORD *)(v25 + 72) & 2) == 0 )
        goto LABEL_41;
      v14 = *(_QWORD *)(v25 + 32);
      goto LABEL_33;
    }
    v26 = *(unsigned int *)Src;
    v27 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *(_DWORD *)(v17 + 16) )
    {
      v26 = ((unsigned int)v26 >> 25) & 0x60;
      v15 = *(unsigned int *)(*(_QWORD *)v17 + 16 * v27 + 8);
      if ( (_BYTE)v26 == (*(_BYTE *)(*(_QWORD *)v17 + 16 * v27 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      {
        v15 &= 0x1Fu;
        if ( (_BYTE)v15 == 8 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)v17 + 16LL * (unsigned int)v27);
          if ( v14 && (*(_DWORD *)(v14 + 196) & 2) != 0 )
          {
LABEL_33:
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 24));
            goto LABEL_34;
          }
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(v15, v26);
          *(_QWORD *)(v28 + 24) = 267LL;
          WdLogEvent5_WdError(v28);
        }
      }
    }
    v29 = WdLogNewEntry5_WdError(v15, v26);
    *(_QWORD *)(v29 + 24) = *(unsigned int *)Src;
    *(_QWORD *)(v29 + 32) = 6168LL;
LABEL_42:
    WdLogEvent5_WdError(v29);
    v36 = (DXGAUTOPUSHLOCK *)v38;
    goto LABEL_43;
  }
LABEL_34:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  if ( v21 == 4 )
  {
    v40[0] = 48LL;
    v40[3] = 512LL;
    v40[1] = 0LL;
    v40[2] = 0LL;
    v41 = 0LL;
    v43 = 0LL;
    if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v40, 0x10000000u, (HANDLE *)&v44, (PVOID *)&v43) < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v32 + 24) = *(unsigned int *)Src;
      WdLogEvent5_WdError(v32);
      goto LABEL_44;
    }
    v14 = v43;
  }
  *(_DWORD *)v9 = v21;
  *((_QWORD *)v9 + 1) = v14;
  *((_QWORD *)v9 + 2) = v44;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v39,
    *((struct _KTHREAD ***)a1 + 7));
  v42 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)a1 + 7) + 240LL), (__int64)v9, 13, 0, 0);
  if ( !v42 )
  {
    v35 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v35 + 24) = 6231LL;
    WdLogEvent5_WdError(v35);
  }
  v36 = (DXGAUTOPUSHLOCK *)v39;
LABEL_43:
  DXGAUTOPUSHLOCK::Release(v36);
LABEL_44:
  if ( !v42 && v9 )
    DXGSHAREDVMOBJECT::ReleaseReference(v9, v11);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v42, 4u);
  LOBYTE(v12) = 1;
  return v12;
}
