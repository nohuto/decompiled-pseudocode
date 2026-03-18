/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F6EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0111F08 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  PERESOURCE *Global; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h]
  char v26; // [rsp+30h] [rbp-40h]
  _BYTE v27[8]; // [rsp+38h] [rbp-38h] BYREF
  DXGPUSHLOCK *v28; // [rsp+40h] [rbp-30h]
  int v29; // [rsp+48h] [rbp-28h]
  _BYTE v30[32]; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+90h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v28);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v29 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 3260LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_16;
  }
  v31 = 0;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v7 )
    goto LABEL_4;
  v8 = *((_QWORD *)a1 + 5);
  v26 = 0;
  v25 = *(_QWORD *)(v8 + 16);
  v9 = v25;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  if ( *(_DWORD *)(v9 + 200) == 1 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, *((struct _KTHREAD ***)a1 + 7));
    v10 = *(unsigned int *)(v7 + 24);
    v11 = *((_QWORD *)a1 + 7);
    v12 = (*(_DWORD *)(v7 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 256) )
    {
      v13 = *(_QWORD *)(v11 + 240);
      v10 = ((unsigned int)v10 >> 25) & 0x60;
      v11 = *(unsigned int *)(v13 + 16 * v12 + 8);
      if ( (_BYTE)v10 == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
      {
        v11 &= 0x1Fu;
        if ( (_BYTE)v11 == 13 )
        {
          v17 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
          if ( v17 && (*(_DWORD *)v17 == 11 || *(_DWORD *)v17 == 8) )
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( !v18 )
            {
              v19 = WdLogNewEntry5_WdAssertion(v11, v10);
              *(_QWORD *)(v19 + 24) = 3285LL;
              WdLogEvent5_WdAssertion(v19);
            }
            _InterlockedAdd((volatile signed __int32 *)(v18 + 24), 1u);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
            v21 = *(_QWORD *)(v7 + 32);
            v22 = *(_QWORD *)(v18 + 112);
            if ( v22 <= v21 )
              v22 = *(_QWORD *)(v7 + 32);
            *(_QWORD *)(v18 + 112) = v22;
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21, v20);
            DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v18, 0);
            goto LABEL_14;
          }
        }
        else
        {
          v14 = WdLogNewEntry5_WdError(v11, v10);
          *(_QWORD *)(v14 + 24) = 267LL;
          WdLogEvent5_WdError(v14);
        }
      }
    }
    v15 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(v7 + 24);
    WdLogEvent5_WdError(v15);
    v31 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  }
  else
  {
    v31 = -1073741130;
  }
LABEL_14:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v31, 4u);
  if ( v26 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  return v5;
}
