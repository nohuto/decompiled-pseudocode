/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004064C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
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
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int *v18; // rax
  DXGSYNCOBJECT *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  PERESOURCE *Global; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v26; // [rsp+28h] [rbp-48h]
  char v27; // [rsp+30h] [rbp-40h]
  _BYTE v28[8]; // [rsp+38h] [rbp-38h] BYREF
  DXGPUSHLOCK *v29; // [rsp+40h] [rbp-30h]
  int v30; // [rsp+48h] [rbp-28h]
  _BYTE v31[32]; // [rsp+50h] [rbp-20h] BYREF
  int v32; // [rsp+90h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v29);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v30 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 3277LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_16;
  }
  v32 = 0;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v7 )
    goto LABEL_4;
  v8 = *((_QWORD *)a1 + 5);
  v27 = 0;
  v26 = *(_QWORD *)(v8 + 16);
  v9 = v26;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  if ( *(_DWORD *)(v9 + 200) == 1 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, *((struct _KTHREAD ***)a1 + 7));
    v11 = *((_QWORD *)a1 + 7);
    v12 = (*(_DWORD *)(v7 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 256) )
    {
      v13 = *(_QWORD *)(v11 + 240);
      v10 = (unsigned int)v12;
      v14 = (*(_DWORD *)(v7 + 24) >> 25) & 0x60;
      v11 = *(unsigned int *)(v13 + 16 * v12 + 8);
      if ( ((*(_DWORD *)(v7 + 24) >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) != 0 )
      {
        v10 = 2LL * (unsigned int)v12;
        v11 &= 0x1Fu;
        if ( (_BYTE)v11 == 13 )
        {
          v18 = *(unsigned int **)(v13 + 16LL * (unsigned int)v12);
          if ( v18 )
          {
            v11 = *v18;
            if ( (_DWORD)v11 == 11 || (_DWORD)v11 == 8 )
            {
              v19 = (DXGSYNCOBJECT *)*((_QWORD *)v18 + 1);
              if ( !v19 )
              {
                v20 = WdLogNewEntry5_WdAssertion(v11, v10);
                *(_QWORD *)(v20 + 24) = 3302LL;
                WdLogEvent5_WdAssertion(v20);
              }
              DXGSYNCOBJECT::AddReference(v19, v10, v14);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
              v22 = *(_QWORD *)(v7 + 32);
              v23 = *((_QWORD *)v19 + 14);
              if ( v23 <= v22 )
                v23 = *(_QWORD *)(v7 + 32);
              *((_QWORD *)v19 + 14) = v23;
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v22, v21);
              DXGGLOBAL::DestroySyncObject(Global, v19, 0, 0);
              goto LABEL_14;
            }
          }
        }
        else
        {
          v15 = WdLogNewEntry5_WdError(v11, v10);
          *(_QWORD *)(v15 + 24) = 316LL;
          WdLogEvent5_WdError(v15);
        }
      }
    }
    v16 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v16 + 24) = *(unsigned int *)(v7 + 24);
    WdLogEvent5_WdError(v16);
    v32 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  }
  else
  {
    v32 = -1073741130;
  }
LABEL_14:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v32, 4u);
  if ( v27 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return v5;
}
