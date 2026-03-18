/*
 * XREFs of ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E180
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned __int16 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  _BYTE v20[8]; // [rsp+20h] [rbp-E0h] BYREF
  DXGPUSHLOCK *v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h]
  _OWORD v23[5]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[144]; // [rsp+90h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v22 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = *((_QWORD *)a1 + 10);
    memset(v23, 0, sizeof(v23));
    v8 = *(_QWORD *)(v4 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, (struct DXGADAPTER *const)v8, 0LL);
    HIDWORD(v23[4]) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
    if ( v23[4] >= 0 )
    {
      v10 = *(_DWORD *)(v7 + 24);
      v11 = (unsigned __int16)v10;
      v12 = HIWORD(v10);
      if ( *(int *)(v8 + 2328) < 0x2000 )
        v13 = 1;
      else
        v13 = *(_DWORD *)(v8 + 280);
      if ( (unsigned int)v12 < v13 )
      {
        v15 = (unsigned __int16 *)(*(_QWORD *)(v8 + 2584) + 360LL * (unsigned int)v12);
        if ( (unsigned int)v11 < *v15 )
        {
          v16 = *((_QWORD *)v15 + 4);
          v17 = 74 * v11;
          v23[0] = *(_OWORD *)(v17 + v16);
          v23[1] = *(_OWORD *)(v17 + v16 + 16);
          v23[2] = *(_OWORD *)(v17 + v16 + 32);
          v23[3] = *(_OWORD *)(v17 + v16 + 48);
          *(_QWORD *)&v23[4] = *(_QWORD *)(v17 + v16 + 64);
          WORD4(v23[4]) = *(_WORD *)(v17 + v16 + 72);
          goto LABEL_13;
        }
        v14 = WdLogNewEntry5_WdWarning(v15, v11, v9);
        *(_QWORD *)(v14 + 24) = 4178LL;
      }
      else
      {
        v14 = WdLogNewEntry5_WdWarning(v12, v11, v9);
        *(_QWORD *)(v14 + 24) = 4170LL;
      }
      WdLogEvent5_WdWarning(v14);
      HIDWORD(v23[4]) = -1073741811;
    }
LABEL_13:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v23, 0x50u);
    v5 = 1;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24, v18);
    goto LABEL_14;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4157LL;
  WdLogEvent5_WdError(v6);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v5;
}
