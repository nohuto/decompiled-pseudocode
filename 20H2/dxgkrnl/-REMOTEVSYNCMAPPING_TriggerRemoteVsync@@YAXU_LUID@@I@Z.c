/*
 * XREFs of ?REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@I@Z @ 0x1C0014440
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C0040D10 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C004E870 (McTemplateK0xqpp_EtwWriteTransfer.c)
 */

void __fastcall REMOTEVSYNCMAPPING_TriggerRemoteVsync(struct _LUID a1, __int64 a2)
{
  int v2; // edi
  _QWORD **v4; // rbx
  char *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]
  char *v14; // [rsp+60h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-30h] BYREF
  char v16; // [rsp+80h] [rbp-18h]
  _BYTE v17[12]; // [rsp+A0h] [rbp+8h]

  v2 = a2;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2);
    *(_QWORD *)(v7 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *(struct _LUID *)v17 = a1;
  *(_DWORD *)&v17[8] = v2;
  v4 = (_QWORD **)((char *)DXGGLOBAL::m_pGlobal + 304672);
  v16 = 0;
  v5 = (char *)DXGGLOBAL::m_pGlobal + 304688;
  v14 = (char *)DXGGLOBAL::m_pGlobal + 304688;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DXGGLOBAL::m_pGlobal + 38086, &LockHandle);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v6 = *v4;
  v16 = 1;
  if ( v6 == v4 )
    goto LABEL_4;
  do
  {
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_DWORD *)v8 + 4) == *(_DWORD *)v17 && *(_QWORD *)((char *)v8 + 20) == *(_QWORD *)&v17[4] )
    {
      v13 = 0LL;
      v9 = v8[5];
      v12[0] = 0LL;
      v12[1] = v9;
      v12[0] = v8[4];
      *(_WORD *)((char *)&v13 + 1) = 257;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent((struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)v12);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0xqpp_EtwWriteTransfer(
          v10,
          (unsigned int)&RemoteVSyncTrigger,
          v11,
          v8[2],
          *((_DWORD *)v8 + 6),
          v8[5],
          v8[4]);
    }
  }
  while ( v6 != v4 );
  if ( v16 )
  {
LABEL_4:
    v16 = 0;
    *((_QWORD *)v14 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
