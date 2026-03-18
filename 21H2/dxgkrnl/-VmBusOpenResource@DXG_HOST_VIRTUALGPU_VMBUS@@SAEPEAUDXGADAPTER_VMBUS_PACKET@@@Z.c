/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03710F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C694 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkOpenResource @ 0x1C0184E80 (DxgkOpenResource.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r15
  unsigned int v4; // edi
  void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  _DWORD *v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  void *v15; // r12
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r10
  int v21; // r8d
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  const wchar_t *v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  _QWORD v32[14]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v33[8]; // [rsp+C0h] [rbp-9h] BYREF
  DXGPUSHLOCK *v34; // [rsp+C8h] [rbp-1h]
  int v35; // [rsp+D0h] [rbp+7h]
  _BYTE v36[72]; // [rsp+D8h] [rbp+Fh] BYREF
  unsigned int v37; // [rsp+130h] [rbp+67h]
  void *v38; // [rsp+138h] [rbp+6Fh]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v34);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v35 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v38 = 0LL;
    v6 = 0LL;
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_3;
    v10 = *(_DWORD *)(v7 + 36);
    if ( v10 > 0x8000 )
      goto LABEL_3;
    v37 = 4 * v10 + 8;
    v12 = (_DWORD *)operator new[](v37, 0x4B677844u, 64LL, v8);
    if ( !v12 )
      goto LABEL_3;
    v13 = 80LL * *(unsigned int *)(v9 + 36);
    if ( !is_mul_ok(*(unsigned int *)(v9 + 36), 0x50uLL) )
      v13 = -1LL;
    v15 = (void *)operator new[](v13, 0x4B677844u, 256LL, v11);
    if ( !v15 )
      goto LABEL_11;
    v17 = *(_DWORD *)(v9 + 40);
    if ( v17 )
    {
      if ( v17 > 0x20000 )
      {
        LODWORD(v16) = -1073741811;
        goto LABEL_38;
      }
      v38 = (void *)operator new[](*(unsigned int *)(v9 + 40), 0x4B677844u, 256LL, v14);
      v6 = v38;
      if ( !v38 )
      {
LABEL_11:
        LODWORD(v16) = -1073741801;
LABEL_38:
        v12[1] = v16;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v12, v37);
        operator delete[](v12);
        operator delete[](v15);
        operator delete[](v38);
        goto LABEL_4;
      }
    }
    if ( *(_BYTE *)(v9 + 28) )
    {
      memset(v32, 0, 0x68uLL);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v36,
        *((struct DXGPROCESS **)a1 + 12));
      v18 = *((_QWORD *)a1 + 12);
      v19 = (*(_DWORD *)(v9 + 32) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 296)
        || (v20 = *(_QWORD *)(v18 + 280),
            v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
            ((*(_DWORD *)(v9 + 32) >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
        || (v21 & 0x2000) != 0
        || (v21 & 0x1F) == 0 )
      {
        v22 = *(_DWORD *)(v9 + 32);
        goto LABEL_32;
      }
      if ( (v21 & 0x1F) != 0xD )
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v22 = *(_DWORD *)(v9 + 32);
LABEL_32:
        WdLogSingleEntry1(2LL, v22);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid shared object handle: 0x%I64x",
          *(unsigned int *)(v9 + 32),
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v16) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
        goto LABEL_38;
      }
      v23 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
      v22 = *(_DWORD *)(v9 + 32);
      if ( !v23 || *(_DWORD *)v23 != 4 || !*(_QWORD *)(v23 + 16) )
        goto LABEL_32;
      v32[1] = *(_QWORD *)(v23 + 16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
      LODWORD(v32[0]) = *(_DWORD *)(v9 + 24);
      LODWORD(v32[2]) = *(_DWORD *)(v9 + 36);
      LODWORD(v32[8]) = *(_DWORD *)(v9 + 40);
      v32[3] = v15;
      v32[9] = v6;
      v25 = DxgkOpenResourceFromNtHandleInternal((ULONG64)v32, 0LL, v24);
      v16 = v25;
      if ( v25 >= 0 )
      {
        *v12 = v32[10];
        if ( *(_DWORD *)(v9 + 36) )
        {
          do
          {
            v27 = v4++;
            v12[v27 + 2] = *((_DWORD *)v15 + 20 * v27);
          }
          while ( v4 < *(_DWORD *)(v9 + 36) );
        }
        goto LABEL_38;
      }
      WdLogSingleEntry1(2LL, v25);
      v26 = L"DxgkOpenResourceFromNtHandle failed: 0x%I64x";
    }
    else
    {
      memset(v32, 0, 0x48uLL);
      LODWORD(v32[0]) = *(_DWORD *)(v9 + 24);
      HIDWORD(v32[0]) = *(_DWORD *)(v9 + 32);
      LODWORD(v32[1]) = *(_DWORD *)(v9 + 36);
      LODWORD(v32[8]) = *(_DWORD *)(v9 + 40);
      v32[2] = v15;
      v32[7] = v6;
      v30 = DxgkOpenResource((ULONG64)v32, v28, v29);
      v16 = v30;
      if ( v30 >= 0 )
      {
        *v12 = HIDWORD(v32[8]);
        if ( *(_DWORD *)(v9 + 36) )
        {
          do
          {
            v31 = v4++;
            v12[v31 + 2] = *((_DWORD *)v15 + 20 * v31);
          }
          while ( v4 < *(_DWORD *)(v9 + 36) );
        }
        goto LABEL_38;
      }
      WdLogSingleEntry1(2LL, v30);
      v26 = L"DxgkOpenResource failed: 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v26, v16, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_38;
  }
  WdLogSingleEntry1(2LL, 1788LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    1788LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_3:
  v3 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v3;
}
