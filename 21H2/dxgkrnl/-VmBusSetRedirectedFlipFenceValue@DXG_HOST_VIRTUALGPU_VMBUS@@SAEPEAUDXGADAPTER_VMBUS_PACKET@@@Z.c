/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380B10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0364C78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r8d
  __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  PERESOURCE *Global; // rax
  _BYTE v18[8]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v19; // [rsp+60h] [rbp-1h]
  char v20; // [rsp+68h] [rbp+7h]
  _BYTE v21[8]; // [rsp+70h] [rbp+Fh] BYREF
  DXGPUSHLOCK *v22; // [rsp+78h] [rbp+17h]
  int v23; // [rsp+80h] [rbp+1Fh]
  _BYTE v24[32]; // [rsp+88h] [rbp+27h] BYREF
  int v25; // [rsp+C8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v23 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 3621LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3621LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_18;
  }
  v25 = 0;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_4;
  v5 = *((_QWORD *)a1 + 10);
  v20 = 0;
  v19 = *(_QWORD *)(v5 + 16);
  v6 = v19;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  if ( *(_DWORD *)(v6 + 200) == 1 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v24,
      *((struct DXGPROCESS **)a1 + 12));
    v8 = *(unsigned int *)(v4 + 24);
    v9 = *((_QWORD *)a1 + 12);
    v10 = (*(_DWORD *)(v4 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v10 < *(_DWORD *)(v9 + 296) )
    {
      v11 = *(_QWORD *)(v9 + 280);
      v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60)
        && (v12 & 0x2000) == 0
        && (v12 & 0x1F) != 0 )
      {
        if ( (v12 & 0x1F) == 0xD )
        {
          v14 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
          if ( v14 && (*(_DWORD *)v14 == 11 || *(_DWORD *)v14 == 8) )
          {
            v15 = *(_QWORD *)(v14 + 8);
            if ( !v15 )
            {
              WdLogSingleEntry1(1LL, 3646LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject", 3646LL, 0LL, 0LL, 0LL, 0LL);
            }
            _InterlockedAdd((volatile signed __int32 *)(v15 + 24), 1u);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
            v16 = *(_QWORD *)(v15 + 120);
            if ( v16 <= *(_QWORD *)(v4 + 32) )
              v16 = *(_QWORD *)(v4 + 32);
            *(_QWORD *)(v15 + 120) = v16;
            Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
            DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v15, 0);
LABEL_14:
            v7 = v25;
            if ( v25 >= 0 )
              goto LABEL_16;
            goto LABEL_15;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          v8 = *(unsigned int *)(v4 + 24);
        }
      }
    }
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object handle: 0x%I64x",
      *(unsigned int *)(v4 + 24),
      0LL,
      0LL,
      0LL,
      0LL);
    v25 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
    goto LABEL_14;
  }
  v7 = -1073741130;
  v25 = -1073741130;
LABEL_15:
  HandleAsyncCommandError((__int64 *)a1, v7, 0, 3);
LABEL_16:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v25, 4u);
  if ( v20 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
LABEL_18:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v3;
}
