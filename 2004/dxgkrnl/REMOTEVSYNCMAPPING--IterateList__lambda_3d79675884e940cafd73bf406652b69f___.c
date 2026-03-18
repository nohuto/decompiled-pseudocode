/*
 * XREFs of REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___ @ 0x1C004E040
 * Callers:
 *     ?TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z @ 0x1C004E888 (-TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z.c)
 * Callees:
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C0040E10 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C004E930 (McTemplateK0xqpp_EtwWriteTransfer.c)
 */

void __fastcall REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___(_QWORD **a1, _DWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v2 = *a1;
  while ( v2 != a1 )
  {
    v5 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v5 + 4) == **a2 && *((_DWORD *)v5 + 5) == (*a2)[1] && *((_DWORD *)v5 + 6) == *a2[1] )
    {
      v10 = 0LL;
      v6 = v5[5];
      v9[0] = 0LL;
      v9[1] = v6;
      v9[0] = v5[4];
      *(_WORD *)((char *)&v10 + 1) = 257;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent((struct DXG_SIGNAL_GUEST_CPU_EVENT_CBLT *)v9);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0xqpp_EtwWriteTransfer(
          v7,
          (unsigned int)&RemoteVSyncTrigger,
          v8,
          v5[2],
          *((_DWORD *)v5 + 6),
          v5[5],
          v5[4]);
    }
  }
}
